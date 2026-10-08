// from server: 60% by colin
// roc 2007-08 005a6f30  unit: RBX::Humanoid  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a6f30
//
// 005a6f30  8b442408             mov eax, dword ptr [esp + 8]
// 005a6f34  83f802               cmp eax, 2
// 005a6f37  7519                 jne 0x5a6f52
// 005a6f39  56                   push esi
// 005a6f3a  8b742408             mov esi, dword ptr [esp + 8]
// 005a6f3e  56                   push esi
// 005a6f3f  b9908b8a00           mov ecx, 0x8a8b90
// 005a6f44  ff1508e77700         call dword ptr [0x77e708]
// 005a6f4a  f6d8                 neg al
// 005a6f4c  1bc0                 sbb eax, eax
// 005a6f4e  23c6                 and eax, esi
// 005a6f50  5e                   pop esi
// 005a6f51  c3                   ret 
// 005a6f52  8b542404             mov edx, dword ptr [esp + 4]
// 005a6f56  c644240800           mov byte ptr [esp + 8], 0
// 005a6f5b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005a6f5f  51                   push ecx
// 005a6f60  50                   push eax
// 005a6f61  52                   push edx
// 005a6f62  e889b10400           call 0x5f20f0
// 005a6f67  83c40c               add esp, 0xc
// 005a6f6a  c3                   ret 

struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

extern "C" int __cdecl sub_5F20F0(int, int, char);

struct S {
    int f(int, int);
};

int S::f(int a, int b)
{
    if (b == 2) {
        type_info* t = (type_info*)0x8a8b90;
        bool r = t->operator==(*(type_info*)0x8a8b90);
        return r ? a : 0;
    }
    return sub_5F20F0(a, b, 0);
}
