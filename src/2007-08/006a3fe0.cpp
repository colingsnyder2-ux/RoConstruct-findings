// from server: 92% by colin
// roc 2007-08 006a3fe0  unit: PAUHWND__::?$CArray  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a3fe0
//
// 006a3fe0  56                   push esi
// 006a3fe1  8bf1                 mov esi, ecx
// 006a3fe3  57                   push edi
// 006a3fe4  8d7e08               lea edi, [esi + 8]
// 006a3fe7  8bcf                 mov ecx, edi
// 006a3fe9  c706a0357d00         mov dword ptr [esi], 0x7d35a0
// 006a3fef  e88cedf8ff           call 0x632d80
// 006a3ff4  c70770357d00         mov dword ptr [edi], 0x7d3570
// 006a3ffa  8d7e2c               lea edi, [esi + 0x2c]
// 006a3ffd  8bcf                 mov ecx, edi
// 006a3fff  e87cf9ffff           call 0x6a3980
// 006a4004  33c0                 xor eax, eax
// 006a4006  c70788357d00         mov dword ptr [edi], 0x7d3588
// 006a400c  6a01                 push 1
// 006a400e  8bce                 mov ecx, esi
// 006a4010  89461c               mov dword ptr [esi + 0x1c], eax
// 006a4013  894604               mov dword ptr [esi + 4], eax
// 006a4016  894624               mov dword ptr [esi + 0x24], eax
// 006a4019  894628               mov dword ptr [esi + 0x28], eax
// 006a401c  894620               mov dword ptr [esi + 0x20], eax
// 006a401f  894640               mov dword ptr [esi + 0x40], eax
// 006a4022  894644               mov dword ptr [esi + 0x44], eax
// 006a4025  e8f6feffff           call 0x6a3f20
// 006a402a  5f                   pop edi
// 006a402b  8bc6                 mov eax, esi
// 006a402d  5e                   pop esi
// 006a402e  c3                   ret 

struct Sub1 {
    void sub_632d80();
};

struct Sub2 {
    void sub_6a3980();
};

struct C {
    void* vtable0;
    int field4;
    char pad8[0x14];
    int field1c;
    int field20;
    int field24;
    int field28;
    char pad2c[0x14];
    int field40;
    int field44;
    void sub_6a3f20(int);
    C* construct();
};

C* C::construct() {
    this->vtable0 = (void*)0x7d35a0;
    Sub1* s1 = (Sub1*)((char*)this + 8);
    s1->sub_632d80();
    *(void**)((char*)this + 8) = (void*)0x7d3570;
    Sub2* s2 = (Sub2*)((char*)this + 0x2c);
    s2->sub_6a3980();
    *(void**)((char*)this + 0x2c) = (void*)0x7d3588;
    this->field1c = 0;
    this->field4 = 0;
    this->field24 = 0;
    this->field28 = 0;
    this->field20 = 0;
    this->field40 = 0;
    this->field44 = 0;
    this->sub_6a3f20(1);
    return this;
}
