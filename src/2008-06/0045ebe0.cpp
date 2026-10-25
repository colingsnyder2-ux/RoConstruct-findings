// from server: 100% by king_originala
// roc 2008-06 0045ebe0  unit: RBX::VInstance::?$NonFactoryProduct  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045ebe0
//
// 0045ebe0  6aff                 push -1
// 0045ebe2  68c8d37b00           push 0x7bd3c8
// 0045ebe7  64a100000000         mov eax, dword ptr fs:[0]
// 0045ebed  50                   push eax
// 0045ebee  64892500000000       mov dword ptr fs:[0], esp
// 0045ebf5  51                   push ecx
// 0045ebf6  56                   push esi
// 0045ebf7  8bf1                 mov esi, ecx
// 0045ebf9  89742404             mov dword ptr [esp + 4], esi
// 0045ebfd  e82effffff           call 0x45eb30
// 0045ec02  d9ee                 fldz 
// 0045ec04  8d8e38010000         lea ecx, [esi + 0x138]
// 0045ec0a  dd9e30010000         fstp qword ptr [esi + 0x130]
// 0045ec10  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0045ec18  c706c49f8100         mov dword ptr [esi], 0x819fc4
// 0045ec1e  c74610b89f8100       mov dword ptr [esi + 0x10], 0x819fb8
// 0045ec25  c74614b09f8100       mov dword ptr [esi + 0x14], 0x819fb0
// 0045ec2c  c74620a89f8100       mov dword ptr [esi + 0x20], 0x819fa8
// 0045ec33  c74624989f8100       mov dword ptr [esi + 0x24], 0x819f98
// 0045ec3a  c74644889f8100       mov dword ptr [esi + 0x44], 0x819f88
// 0045ec41  c74664789f8100       mov dword ptr [esi + 0x64], 0x819f78
// 0045ec48  c78684000000689f8100 mov dword ptr [esi + 0x84], 0x819f68
// 0045ec52  c786a4000000589f8100 mov dword ptr [esi + 0xa4], 0x819f58
// 0045ec5c  c786c4000000489f8100 mov dword ptr [esi + 0xc4], 0x819f48
// 0045ec66  ff1560248000         call dword ptr [0x802460]
// 0045ec6c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0045ec70  8bc6                 mov eax, esi
// 0045ec72  5e                   pop esi
// 0045ec73  64890d00000000       mov dword ptr fs:[0], ecx
// 0045ec7a  83c410               add esp, 0x10
// 0045ec7d  c3                   ret 

struct Base {
    unsigned char storage[0x130];
    Base();
    ~Base();
};

extern void (__thiscall *string_construct)(void *);

struct S : Base {
    double value;
    unsigned char text[28];
    S();
};

S::S() : value(0.0)
{
    unsigned long *p = reinterpret_cast<unsigned long *>(this);
    p[0x00 / 4] = 0x00819fc4;
    p[0x10 / 4] = 0x00819fb8;
    p[0x14 / 4] = 0x00819fb0;
    p[0x20 / 4] = 0x00819fa8;
    p[0x24 / 4] = 0x00819f98;
    p[0x44 / 4] = 0x00819f88;
    p[0x64 / 4] = 0x00819f78;
    p[0x84 / 4] = 0x00819f68;
    p[0xa4 / 4] = 0x00819f58;
    p[0xc4 / 4] = 0x00819f48;
    string_construct(text);
}
