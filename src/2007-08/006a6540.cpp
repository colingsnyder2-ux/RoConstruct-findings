// from server: 58% by colin
// roc 2007-08 006a6540  unit: CXTPMenuBar::CControlMDISysMenuPopup  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a6540
//
// 006a6540  83ec10               sub esp, 0x10
// 006a6543  56                   push esi
// 006a6544  8bb17c010000         mov esi, dword ptr [ecx + 0x17c]
// 006a654a  85f6                 test esi, esi
// 006a654c  743f                 je 0x6a658d
// 006a654e  8b91c4000000         mov edx, dword ptr [ecx + 0xc4]
// 006a6554  8b81c0000000         mov eax, dword ptr [ecx + 0xc0]
// 006a655a  57                   push edi
// 006a655b  8bb9c8000000         mov edi, dword ptr [ecx + 0xc8]
// 006a6561  8b89cc000000         mov ecx, dword ptr [ecx + 0xcc]
// 006a6567  6a03                 push 3
// 006a6569  6a10                 push 0x10
// 006a656b  6a10                 push 0x10
// 006a656d  52                   push edx
// 006a656e  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 006a6572  50                   push eax
// 006a6573  8b4204               mov eax, dword ptr [edx + 4]
// 006a6576  6a00                 push 0
// 006a6578  56                   push esi
// 006a6579  6a00                 push 0
// 006a657b  6a00                 push 0
// 006a657d  50                   push eax
// 006a657e  897c2438             mov dword ptr [esp + 0x38], edi
// 006a6582  894c243c             mov dword ptr [esp + 0x3c], ecx
// 006a6586  ff1578ee7700         call dword ptr [0x77ee78]
// 006a658c  5f                   pop edi
// 006a658d  5e                   pop esi
// 006a658e  83c410               add esp, 0x10
// 006a6591  c20400               ret 4

extern "C" int __stdcall DrawStateA(int, int, int, int, int, int, int, int, int, int);

struct CXTPMenuBarCControlMDISysMenuPopup {
    int Draw(int);
};

int CXTPMenuBarCControlMDISysMenuPopup::Draw(int a) {
    int local[4];
    int *p = (int *)((char *)this + 0x17c);
    if (*p != 0) {
        int v0 = *(int *)((char *)this + 0xc0);
        int v1 = *(int *)((char *)this + 0xc4);
        int v2 = *(int *)((char *)this + 0xc8);
        int v3 = *(int *)((char *)this + 0xcc);
        int arg = *(int *)(a + 4);
        local[0] = v2;
        local[1] = v3;
        DrawStateA(0, 0, arg, *p, 0, v0, v1, 0x10, 0x10, 3);
    }
    return 0;
}
