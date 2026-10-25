// from server: 100% by king_originala
// roc 2008-06 00422650  unit: CSelectionTreeCtrl  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00422650
//
// 00422650  83ec10               sub esp, 0x10
// 00422653  56                   push esi
// 00422654  8bf1                 mov esi, ecx
// 00422656  f6465401             test byte ptr [esi + 0x54], 1
// 0042265a  743d                 je 0x422699
// 0042265c  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 00422662  85c0                 test eax, eax
// 00422664  742f                 je 0x422695
// 00422666  3d0000ffff           cmp eax, 0xffff0000
// 0042266b  7428                 je 0x422695
// 0042266d  6a00                 push 0
// 0042266f  8d4c2408             lea ecx, [esp + 8]
// 00422673  51                   push ecx
// 00422674  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 00422677  50                   push eax
// 00422678  e8b5e82700           call 0x6a0f32
// 0042267d  85c0                 test eax, eax
// 0042267f  7414                 je 0x422695
// 00422681  8b4658               mov eax, dword ptr [esi + 0x58]
// 00422684  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00422687  6a01                 push 1
// 00422689  8d542408             lea edx, [esp + 8]
// 0042268d  52                   push edx
// 0042268e  51                   push ecx
// 0042268f  ff15182e8000         call dword ptr [0x802e18]
// 00422695  806654fe             and byte ptr [esi + 0x54], 0xfe
// 00422699  5e                   pop esi
// 0042269a  83c410               add esp, 0x10
// 0042269d  c3                   ret 

struct Rect {
    long left, top, right, bottom;
};

extern "C" int (__stdcall *InvalidateRect)(void*, const Rect*, int);

struct Tree {
    char padding[0x20];
    void* window;
    int getRect(unsigned int item, Rect* rect, int textOnly);
};

struct Selection {
    char padding0[0x54];
    unsigned char flags;
    char padding1[3];
    Tree* tree;
    char padding2[0x24];
    unsigned int item;
    void f();
};

void Selection::f()
{
    if (flags & 1) {
        if (item != 0 && item != 0xffff0000U) {
            Rect rect;
            if (tree->getRect(item, &rect, 0))
                InvalidateRect(tree->window, &rect, 1);
        }
        flags &= 0xfe;
    }
}
