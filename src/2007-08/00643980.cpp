// from server: 58% by colin
// roc 2007-08 00643980  unit: CXTPCommandBar  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00643980
//
// 00643980  83b90001000000       cmp dword ptr [ecx + 0x100], 0
// 00643987  7511                 jne 0x64399a
// 00643989  8b01                 mov eax, dword ptr [ecx]
// 0064398b  8b9084010000         mov edx, dword ptr [eax + 0x184]
// 00643991  ffd2                 call edx
// 00643993  8bc8                 mov ecx, eax
// 00643995  85c9                 test ecx, ecx
// 00643997  75e7                 jne 0x643980
// 00643999  c3                   ret 
// 0064399a  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 006439a0  c3                   ret 

struct CXTPCommandBar
{
    int GetSomething();
    int field_0x100;
};

int CXTPCommandBar::GetSomething()
{
    CXTPCommandBar* p = this;
    while (p->field_0x100 == 0)
    {
        p = (CXTPCommandBar*)(*(int (__thiscall**)(CXTPCommandBar*))(*(int*)p + 0x184))(p);
        if (p == 0)
            break;
    }
    return p->field_0x100;
}
