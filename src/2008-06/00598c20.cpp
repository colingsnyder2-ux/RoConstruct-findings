// from server: 100% by king_originala
// roc 2008-06 00598c20  unit: RBX::PartInstance  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00598c20
//
// 00598c20  56                   push esi
// 00598c21  57                   push edi
// 00598c22  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00598c26  57                   push edi
// 00598c27  8bf1                 mov esi, ecx
// 00598c29  e86223fcff           call 0x55af90
// 00598c2e  681c2a8300           push 0x832a1c
// 00598c33  57                   push edi
// 00598c34  ff156c238000         call dword ptr [0x80236c]
// 00598c3a  83c408               add esp, 8
// 00598c3d  8d8e28020000         lea ecx, [esi + 0x228]
// 00598c43  84c0                 test al, al
// 00598c45  740c                 je 0x598c53
// 00598c47  6a05                 push 5
// 00598c49  e8d2e70400           call 0x5e7420
// 00598c4e  5f                   pop edi
// 00598c4f  5e                   pop esi
// 00598c50  c20400               ret 4
// 00598c53  6a01                 push 1
// 00598c55  e8c6e70400           call 0x5e7420
// 00598c5a  5f                   pop edi
// 00598c5b  5e                   pop esi
// 00598c5c  c20400               ret 4

struct String {
    char storage[28];
};

extern bool (__cdecl *stringEqual)(const String&, const char*);

struct Primitive {
    void setSizeMultiplier(unsigned int value);
};

struct S {
    char padding[0x228];
    Primitive primitive;

    void setValue(const String&);
    void setName(const String&);
};

void S::setName(const String& name)
{
    setValue(name);
    if (stringEqual(name, "Torso"))
        primitive.setSizeMultiplier(5);
    else
        primitive.setSizeMultiplier(1);
}
