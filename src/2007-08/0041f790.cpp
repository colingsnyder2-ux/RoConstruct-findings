// from server: 72% by colin
// roc 2007-08 0041f790  unit: CSelectionTreeCtrl  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041f790
//
// 0041f790  83ec10               sub esp, 0x10
// 0041f793  56                   push esi
// 0041f794  8bf1                 mov esi, ecx
// 0041f796  f6462c01             test byte ptr [esi + 0x2c], 1
// 0041f79a  743a                 je 0x41f7d6
// 0041f79c  8b4644               mov eax, dword ptr [esi + 0x44]
// 0041f79f  85c0                 test eax, eax
// 0041f7a1  742f                 je 0x41f7d2
// 0041f7a3  3d0000ffff           cmp eax, 0xffff0000
// 0041f7a8  7428                 je 0x41f7d2
// 0041f7aa  6a00                 push 0
// 0041f7ac  8d4c2408             lea ecx, [esp + 8]
// 0041f7b0  51                   push ecx
// 0041f7b1  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 0041f7b4  50                   push eax
// 0041f7b5  e8c40c2100           call 0x63047e
// 0041f7ba  85c0                 test eax, eax
// 0041f7bc  7414                 je 0x41f7d2
// 0041f7be  8b4630               mov eax, dword ptr [esi + 0x30]
// 0041f7c1  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0041f7c4  6a01                 push 1
// 0041f7c6  8d542408             lea edx, [esp + 8]
// 0041f7ca  52                   push edx
// 0041f7cb  51                   push ecx
// 0041f7cc  ff15dcec7700         call dword ptr [0x77ecdc]
// 0041f7d2  80662cfe             and byte ptr [esi + 0x2c], 0xfe
// 0041f7d6  5e                   pop esi
// 0041f7d7  83c410               add esp, 0x10
// 0041f7da  c3                   ret 

struct CSelectionTreeCtrl
{
    char pad0[0x2c];
    unsigned char flags;
    char pad1[0x17];
    unsigned int item;
    char pad2[0x10];
    void* tree;
    void Invalidate();
};

extern "C" int __stdcall sub_63047e(unsigned int, void*, int);
extern "C" void* __stdcall InvalidateRect(void*, const void*, int);

void CSelectionTreeCtrl::Invalidate()
{
    if (flags & 1)
    {
        unsigned int it = item;
        if (it != 0 && it != 0xffff0000)
        {
            int local = 0;
            if (sub_63047e(it, &local, 0))
            {
                void* t = tree;
                void* h = *(void**)((char*)t + 0x20);
                InvalidateRect(h, &local, 1);
            }
        }
        flags &= 0xfe;
    }
}
