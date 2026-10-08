// from server: 85% by colin
// roc 2007-08 00631da0  unit: CXTPCommandBars  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00631da0
//
// 00631da0  8b442408             mov eax, dword ptr [esp + 8]
// 00631da4  83f804               cmp eax, 4
// 00631da7  7d17                 jge 0x631dc0
// 00631da9  8b848190000000       mov eax, dword ptr [ecx + eax*4 + 0x90]
// 00631db0  50                   push eax
// 00631db1  8b442408             mov eax, dword ptr [esp + 8]
// 00631db5  6a00                 push 0
// 00631db7  50                   push eax
// 00631db8  e893ffffff           call 0x631d50
// 00631dbd  c20800               ret 8
// 00631dc0  33c0                 xor eax, eax
// 00631dc2  50                   push eax
// 00631dc3  50                   push eax
// 00631dc4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00631dc8  50                   push eax
// 00631dc9  e882ffffff           call 0x631d50
// 00631dce  c20800               ret 8

struct CXTPCommandBars
{
    int sub_631D50(int, int, int);
    int func(int, int);
};

int CXTPCommandBars::func(int a, int b)
{
    if (b < 4)
    {
        int v = *(int*)((char*)this + 0x90 + b * 4);
        return sub_631D50(a, 0, v);
    }
    return sub_631D50(a, 0, 0);
}
