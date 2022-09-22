
class giz:
    def __init__(self, color, len):
        
        self.color = color
        self.len = len


    def change_color(self, new_color):
        
        self.color = self.new_color
        
    def cut_giz(self, len_to_cut):
        
        if(len_to_cut < self.len):
            self.len -= len_to_cut
    
    def __repr__(self):
        return f'giz: {self.color}, {self.len}'
    
    def get_giz(self):
        print(f"Giz, cor:{self.color}, tamanho: {self.len}")
        

giz_1 = giz("Azul", 10)
giz_2 = giz("Verde", 16)
giz_3 = giz("Rosa", 8)

giz_2.cut_giz(4)

giz_2.get_giz()

    