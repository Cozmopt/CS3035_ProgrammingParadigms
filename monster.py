#Monster Classs with 2 variable, a name that is a string and a size that is a number
#
class Monster:
    def __init__(self, name, size):
        self.name = name
        self.size = size

    def attack(self, location):
        print(self.name + " attacks " + location)

    def __str__(self):
        return f"{self.name} weighs {self.size} pounds"
    
    def __eq__(self, other):
        if isinstance(other, Monster):
            if other.name == self.name and other.size == self.size:
                return True
        return False    

    def __add__(self, other):
        if isinstance(other, Monster):
            return Monster(self.name + other.name, self.size + other.size)

    def get_name(self):
        return self.name
    
    def set_name(self, name):
        self.name = name

    def get_size(self):
        return self.size
    
    def set_size(self, size):
        self.size = size


# Declaring 2 different monsters to test class functions 
dk = Monster("Donkey Kong", 200)
kk = Monster("King Kong", 4000)
kk2 = Monster("King Kong", 4000)
# Monster class function tests
kk.attack("New York")
print(dk)
print(dk == kk)
print(kk == kk2)
kk2 = dk + kk
print(kk2)
print(dk.get_name() + " " + str(dk.get_size()))
dk.set_name("Funky Kong")
dk.set_size(300)
print(dk)


        
        


#     Write a Python Monster class.  Monster should have the following:

# an  __init__ method that takes the name and the size of the monster and creates and sets instance
# variables with these values
# an attack method that takes the name of the location the monster attacks and prints out a message like
# Godzilla attacks Tokyo

# getters for the name and size of the monster
# a reasonable __str__ method
# an __eq__ method that overloadss the == operator so that two monsters are equal if and only if they 
# have the same name and the same size
# an __add__ method that returns a new Monster whose name is the names of the two original monsters 
# concatenated (for example, GodzillaKong) and size is the combined size of the two original monsters
# Write test code that demonstrates that all your methods work correctly.  Turn in your .py file and a 
# copy of the output from a sample run of your test code.