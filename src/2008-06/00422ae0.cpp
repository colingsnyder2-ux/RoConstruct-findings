// from server: 100% by king_originala
// roc 2008-06 00422ae0  unit: CXTTreeCtrl  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00422ae0
//
// 00422ae0  8b8104010000         mov eax, dword ptr [ecx + 0x104]
// 00422ae6  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00422aea  3bc8                 cmp ecx, eax
// 00422aec  7410                 je 0x422afe
// 00422aee  8bff                 mov edi, edi
// 00422af0  85c0                 test eax, eax
// 00422af2  740f                 je 0x422b03
// 00422af4  8b8004010000         mov eax, dword ptr [eax + 0x104]
// 00422afa  3bc8                 cmp ecx, eax
// 00422afc  75f2                 jne 0x422af0
// 00422afe  b001                 mov al, 1
// 00422b00  c20400               ret 4
// 00422b03  32c0                 xor al, al
// 00422b05  c20400               ret 4

struct S {
    char padding[0x104];
    S* parent;
    bool f(S* node);
};

bool S::f(S* node)
{
    S* p = parent;
    while (node != p) {
        if (!p)
            return false;
        p = p->parent;
    }
    return true;
}
