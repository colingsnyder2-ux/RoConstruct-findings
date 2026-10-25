// from server: 100% by king_originala
// roc 2008-06 007ad760  unit: RBX::RenderNew::Material  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007ad760
//
// 007ad760  8b4110               mov eax, dword ptr [ecx + 0x10]
// 007ad763  56                   push esi
// 007ad764  8d710c               lea esi, [ecx + 0xc]
// 007ad767  6a00                 push 0
// 007ad769  40                   inc eax
// 007ad76a  50                   push eax
// 007ad76b  8bce                 mov ecx, esi
// 007ad76d  e83efdffff           call 0x7ad4b0
// 007ad772  8b4604               mov eax, dword ptr [esi + 4]
// 007ad775  8b16                 mov edx, dword ptr [esi]
// 007ad777  8d0cc500000000       lea ecx, [eax*8]
// 007ad77e  2bc8                 sub ecx, eax
// 007ad780  8d44cac8             lea eax, [edx + ecx*8 - 0x38]
// 007ad784  5e                   pop esi
// 007ad785  c3                   ret 

struct Element {
    char bytes[56];
};

struct Storage {
    Element* data;
    unsigned count;
    void resize(unsigned newCount, const Element* value);
};

struct Material {
    char padding[12];
    Storage storage;
    Element* append();
};

Element* Material::append()
{
    Storage* s = &storage;
    s->resize(s->count + 1, 0);
    return s->data + s->count - 1;
}
