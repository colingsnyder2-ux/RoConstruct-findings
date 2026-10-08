// from server: 48% by colin
// roc 2007-08 0071d9d0  unit: CXTPScrollBase  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071d9d0
//
// 0071d9d0  8b4164               mov eax, dword ptr [ecx + 0x64]
// 0071d9d3  85c0                 test eax, eax
// 0071d9d5  7530                 jne 0x71da07
// 0071d9d7  8b01                 mov eax, dword ptr [ecx]
// 0071d9d9  8b5020               mov edx, dword ptr [eax + 0x20]
// 0071d9dc  ffd2                 call edx
// 0071d9de  8b4828               mov ecx, dword ptr [eax + 0x28]
// 0071d9e1  8b01                 mov eax, dword ptr [ecx]
// 0071d9e3  8b90d4000000         mov edx, dword ptr [eax + 0xd4]
// 0071d9e9  ffd2                 call edx
// 0071d9eb  85c0                 test eax, eax
// 0071d9ed  7413                 je 0x71da02
// 0071d9ef  83c0fb               add eax, -5
// 0071d9f2  b901000000           mov ecx, 1
// 0071d9f7  3bc8                 cmp ecx, eax
// 0071d9f9  1bc0                 sbb eax, eax
// 0071d9fb  83e0fe               and eax, 0xfffffffe
// 0071d9fe  83c005               add eax, 5
// 0071da01  c3                   ret 
// 0071da02  b802000000           mov eax, 2
// 0071da07  c3                   ret 

struct CXTPScrollBase {
    int field_0x64;
    int GetScrollBarState();
};

int CXTPScrollBase::GetScrollBarState()
{
    if (this->field_0x64 != 0)
        return 2;

    int* p = (int*)(*(int (__thiscall**)(void))(*(int*)this + 0x20))();
    int* q = (int*)p[0x28 / 4];
    int result = (*(int (__thiscall**)(int*))(*(int*)q + 0xd4))(q);

    if (result == 0)
        return 2;

    result -= 5;
    int one = 1;
    int cmp = one - result;
    int mask = -(cmp < 0);
    result = (mask & 0xfffffffe) + 5;
    return result;
}
