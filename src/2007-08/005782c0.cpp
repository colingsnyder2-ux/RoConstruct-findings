// from server: 70% by colin
// roc 2007-08 005782c0  unit: RBX::VPartInstance::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005782c0
//
// 005782c0  8b442404             mov eax, dword ptr [esp + 4]
// 005782c4  56                   push esi
// 005782c5  8bf1                 mov esi, ecx
// 005782c7  8b8ed8010000         mov ecx, dword ptr [esi + 0x1d8]
// 005782cd  83796c00             cmp dword ptr [ecx + 0x6c], 0
// 005782d1  0f95c2               setne dl
// 005782d4  3ac2                 cmp al, dl
// 005782d6  7412                 je 0x5782ea
// 005782d8  50                   push eax
// 005782d9  e8d2cd0300           call 0x5b50b0
// 005782de  6810288c00           push 0x8c2810
// 005782e3  8bce                 mov ecx, esi
// 005782e5  e826c4ecff           call 0x444710
// 005782ea  5e                   pop esi
// 005782eb  c20400               ret 4

struct S {
    char pad[0x1d8];
    int* field_1d8;
    void method_5b50b0(unsigned char);
    void method_444710(const char*);
    void func(unsigned char);
};

void S::func(unsigned char arg)
{
    int* p = field_1d8;
    unsigned char flag = (p[0x6c / 4] != 0);
    if (arg != flag) {
        method_5b50b0(arg);
        method_444710((const char*)0x8c2810);
    }
}
