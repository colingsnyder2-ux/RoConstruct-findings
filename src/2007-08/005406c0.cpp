// from server: 63% by colin
// roc 2007-08 005406c0  unit: RBX::Reflection::PBVPropertyDescriptor::?$holder  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005406c0
//
// 005406c0  8b442408             mov eax, dword ptr [esp + 8]
// 005406c4  83f802               cmp eax, 2
// 005406c7  7519                 jne 0x5406e2
// 005406c9  56                   push esi
// 005406ca  8b742408             mov esi, dword ptr [esp + 8]
// 005406ce  56                   push esi
// 005406cf  b920ac8900           mov ecx, 0x89ac20
// 005406d4  ff1508e77700         call dword ptr [0x77e708]
// 005406da  f6d8                 neg al
// 005406dc  1bc0                 sbb eax, eax
// 005406de  23c6                 and eax, esi
// 005406e0  5e                   pop esi
// 005406e1  c3                   ret 
// 005406e2  8b542404             mov edx, dword ptr [esp + 4]
// 005406e6  c644240800           mov byte ptr [esp + 8], 0
// 005406eb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005406ef  51                   push ecx
// 005406f0  50                   push eax
// 005406f1  52                   push edx
// 005406f2  e8f9190b00           call 0x5f20f0
// 005406f7  83c40c               add esp, 0xc
// 005406fa  c3                   ret 

struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

extern "C" void* __stdcall sub_5F20F0(void*, int, int);

struct PBVPropertyDescriptor {
    void* holder(int, int);
};

void* PBVPropertyDescriptor::holder(int a, int b) {
    if (a == 2) {
        extern type_info type_info_89AC20;
        bool eq = type_info_89AC20 == *(type_info*)&type_info_89AC20;
        return eq ? (void*)b : 0;
    }
    return sub_5F20F0((void*)a, b, 0);
}
