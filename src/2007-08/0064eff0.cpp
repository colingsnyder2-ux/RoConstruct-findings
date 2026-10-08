// from server: 82% by colin
// roc 2007-08 0064eff0  unit: CXTPToolBar  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0064eff0
//
// 0064eff0  8b8118010000         mov eax, dword ptr [ecx + 0x118]
// 0064eff6  83f802               cmp eax, 2
// 0064eff9  7512                 jne 0x64f00d
// 0064effb  e88049ffff           call 0x643980
// 0064f000  85c0                 test eax, eax
// 0064f002  7407                 je 0x64f00b
// 0064f004  8b4074               mov eax, dword ptr [eax + 0x74]
// 0064f007  8b4040               mov eax, dword ptr [eax + 0x40]
// 0064f00a  c3                   ret 
// 0064f00b  33c0                 xor eax, eax
// 0064f00d  c3                   ret 

struct CXTPToolBar
{
    char pad[0x118];
    int field_0x118;
    int GetValue();
};

extern void* __fastcall sub_00643980();

int CXTPToolBar::GetValue()
{
    if (field_0x118 == 2)
    {
        void* p = sub_00643980();
        if (p != 0)
        {
            return *(int*)(*(int*)((char*)p + 0x74) + 0x40);
        }
        return 0;
    }
    return 0;
}
