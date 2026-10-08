// from server: 100% by colin
// roc 2007-08 005784b0  unit: RBX::VPartInstance::?$FactoryProduct  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005784b0
//
// 005784b0  8b442404             mov eax, dword ptr [esp + 4]
// 005784b4  56                   push esi
// 005784b5  8bf1                 mov esi, ecx
// 005784b7  3b8694010000         cmp eax, dword ptr [esi + 0x194]
// 005784bd  741c                 je 0x5784db
// 005784bf  68442a8c00           push 0x8c2a44
// 005784c4  898694010000         mov dword ptr [esi + 0x194], eax
// 005784ca  e841c2ecff           call 0x444710
// 005784cf  681c298c00           push 0x8c291c
// 005784d4  8bce                 mov ecx, esi
// 005784d6  e835c2ecff           call 0x444710
// 005784db  5e                   pop esi
// 005784dc  c20400               ret 4

struct S {
    char pad[0x194];
    int field_194;
    void sub_444710(const char*);
    void f(int);
};

void S::f(int a) {
    if (a != this->field_194) {
        this->field_194 = a;
        this->sub_444710((const char*)0x8c2a44);
        this->sub_444710((const char*)0x8c291c);
    }
}
