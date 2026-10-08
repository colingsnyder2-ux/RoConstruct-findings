// from server: 58% by colin
// roc 2007-08 00581b90  unit: RBX::Accoutrement  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00581b90
//
// 00581b90  8b442408             mov eax, dword ptr [esp + 8]
// 00581b94  83f802               cmp eax, 2
// 00581b97  7519                 jne 0x581bb2
// 00581b99  56                   push esi
// 00581b9a  8b742408             mov esi, dword ptr [esp + 8]
// 00581b9e  56                   push esi
// 00581b9f  b958258a00           mov ecx, 0x8a2558
// 00581ba4  ff1508e77700         call dword ptr [0x77e708]
// 00581baa  f6d8                 neg al
// 00581bac  1bc0                 sbb eax, eax
// 00581bae  23c6                 and eax, esi
// 00581bb0  5e                   pop esi
// 00581bb1  c3                   ret 
// 00581bb2  8b542404             mov edx, dword ptr [esp + 4]
// 00581bb6  c644240800           mov byte ptr [esp + 8], 0
// 00581bbb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00581bbf  51                   push ecx
// 00581bc0  50                   push eax
// 00581bc1  52                   push edx
// 00581bc2  e8390a0500           call 0x5d2600
// 00581bc7  83c40c               add esp, 0xc
// 00581bca  c3                   ret 

struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

struct S {
    int f(int, int);
};

extern "C" int __cdecl func_005d2600(int, int, int);

int S::f(int a, int b)
{
    if (b == 2) {
        type_info* ti = (type_info*)0x8a2558;
        if (*ti == *(type_info*)0x8a2558) {
            return a;
        }
        return 0;
    }
    return func_005d2600(a, b, 0);
}
