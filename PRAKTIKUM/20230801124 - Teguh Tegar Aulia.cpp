class FamilyMember:
    def __init__(self, name):
        self.name = name
        self.children = []

    def add_child(self, child):
        self.children.append(child)

    def print_tree(self, level=0):
        print(" " * level * 2 + self.name)
        for child in self.children:
            child.print_tree(level + 1)

# Membuat anggota keluarga
grandfather = FamilyMember("Grandfather")
grandmother = FamilyMember("Grandmother")
father = FamilyMember("Father")
mother = FamilyMember("Mother")
uncle = FamilyMember("Uncle")
aunt = FamilyMember("Aunt")
me = FamilyMember("Me")
brother = FamilyMember("Brother")
sister = FamilyMember("Sister")
cousin1 = FamilyMember("Cousin1")
cousin2 = FamilyMember("Cousin2")
cousin3 = FamilyMember("Cousin3")

# Menyusun silsilah keluarga
grandfather.add_child(father)
grandfather.add_child(uncle)

father.add_child(me)
father.add_child(brother)
father.add_child(sister)

uncle.add_child(cousin1)
uncle.add_child(cousin2)
uncle.add_child(cousin3)

# Menampilkan silsilah keluarga
print("Family Tree:")
grandfather.print_tree()

