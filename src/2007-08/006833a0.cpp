// from server: 100% by colin
// roc 2007-08 006833a0  unit: CXTPPropertyGrid  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006833a0
//
// 006833a0  56                   push esi
// 006833a1  8bf1                 mov esi, ecx
// 006833a3  83c8ff               or eax, 0xffffffff
// 006833a6  398640010000         cmp dword ptr [esi + 0x140], eax
// 006833ac  7414                 je 0x6833c2
// 006833ae  6a00                 push 0
// 006833b0  898640010000         mov dword ptr [esi + 0x140], eax
// 006833b6  8b4620               mov eax, dword ptr [esi + 0x20]
// 006833b9  6a00                 push 0
// 006833bb  50                   push eax
// 006833bc  ff15dcec7700         call dword ptr [0x77ecdc]
// 006833c2  8bce                 mov ecx, esi
// 006833c4  e875cefaff           call 0x63023e
// 006833c9  5e                   pop esi
// 006833ca  c20400               ret 4

extern "C" __declspec(dllimport) int __stdcall InvalidateRect(void*, const void*, int);

struct CXTPPropertyGrid
{
    char pad[0x20];
    void* field20;
    char pad2[0x140 - 0x24];
    int field140;
    void sub_63023e();
    void func(int);
};

void CXTPPropertyGrid::func(int a)
{
    if (field140 != -1)
    {
        field140 = -1;
        InvalidateRect(field20, 0, 0);
    }
    sub_63023e();
}
