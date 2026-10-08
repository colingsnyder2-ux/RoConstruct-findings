// from server: 84% by colin
// roc 2007-08 0064f050  unit: CXTPToolBar  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0064f050
//
// 0064f050  56                   push esi
// 0064f051  8bf1                 mov esi, ecx
// 0064f053  8b06                 mov eax, dword ptr [esi]
// 0064f055  8b9078010000         mov edx, dword ptr [eax + 0x178]
// 0064f05b  ffd2                 call edx
// 0064f05d  85c0                 test eax, eax
// 0064f05f  7504                 jne 0x64f065
// 0064f061  33c0                 xor eax, eax
// 0064f063  5e                   pop esi
// 0064f064  c3                   ret 
// 0064f065  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 0064f06b  83793c00             cmp dword ptr [ecx + 0x3c], 0
// 0064f06f  7409                 je 0x64f07a
// 0064f071  e8facd0200           call 0x67be70
// 0064f076  85c0                 test eax, eax
// 0064f078  74e7                 je 0x64f061
// 0064f07a  b801000000           mov eax, 1
// 0064f07f  5e                   pop esi
// 0064f080  c3                   ret 

struct CXTPToolBar {
    int field_0;
    char pad[0xf8 - 4];
    void* field_f8;
    int IsVisible();
};

extern "C" int __stdcall sub_67BE70(void*);

int CXTPToolBar::IsVisible()
{
    int (*fn)(void);
    fn = *(int (**)(void))(*(int*)this + 0x178);
    if (fn() == 0)
        return 0;
    void* p = *(void**)((char*)this + 0xf8);
    if (*(int*)((char*)p + 0x3c) != 0)
    {
        if (sub_67BE70(p) == 0)
            return 0;
    }
    return 1;
}
