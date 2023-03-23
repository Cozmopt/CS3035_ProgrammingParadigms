class Entry:
    # __init__ uses parameters to set values for the instance variables self._priority and self._value
    def __init__(self, priority, value):
        self._priority = priority
        self._value = value
    
    # set_priority uses a parameter to set the priority for the entry
    def set_priority(self, priority):
        self._priority = priority
   
    # get_priority returns the priority for the entry
    def get_priority(self):
        return self._priority
   
    # get_value returns the value for the entry
    def get_value(self):
        return self._value
   
    # __str__ returns a string like this: Priority: 4; Value: Eat
    def __str__(self):
        return "Priority: {}; Value: {}" .format(self._priority, self._value)
    
class PQ:
    # __init__ creates an empty list that will hold the entries
    def __init__(self):
        self.pqlist = []

    # add uses two parameters called priority and value to create an Entry and add it to the list
    def add(self, priority, value):
        ent = Entry(priority, value)
        self.pqlist.append(ent)

    #size returns the length of the list    
    def size(self):
        return len(self.pqlist)
    
    # remove_min finds the entry with the lowest priority (or, if there is more than one entry with the
    #  lowest priority, one of them), removes it from the list, and returns a reference to it
    def remove_min(self):
        if (self.size() < 1):
            return None
        min_index = self.pqlist[0]
        for ent in self.pqlist[1:]:
            if (ent.get_priority() < min_index.get_priority()):
                min_index = ent
        self.pqlist.remove(min_index)
        return min_index
    
    # set_priority takes parameters for the value and a new priority and, if there are any entries with
    #  the specified value, sets the priority for all of them to the new priority.  Make sure that 
    # removeMin works correctly for entries whose priorities you have changed.
    def set_priority(self, value, new_priority):
        for ent in self.pqlist:
            if (ent.get_value() == value):
                ent.set_priority(new_priority)

    # function to test that list is working
    def printList(self):
        for ent in self.pqlist:
            print(ent)

pq = PQ()
pq.add(2, "Eat")
pq.add(0, "Study for CS 3035")
pq.add(3, "Sleep")
pq.add(1, "Maintain Personal Relationships")
pq.add(4, "Practice Good Personal Hygiene")
pq.set_priority("Practice Good Personal Hygiene", 2)
pq.set_priority("Eat", 4)
while pq.size() > 0:
    print(pq.remove_min())     



        
