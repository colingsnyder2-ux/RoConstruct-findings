// from server: 87% by colin
// roc 2007-08 00422320  unit: CRobloxTreeCtrlNode  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00422320
//
// 00422320  56                   push esi
// 00422321  8bf1                 mov esi, ecx
// 00422323  807e2d00             cmp byte ptr [esi + 0x2d], 0
// 00422327  7408                 je 0x422331
// 00422329  80662cfd             and byte ptr [esi + 0x2c], 0xfd
// 0042232d  5e                   pop esi
// 0042232e  c20400               ret 4
// 00422331  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 00422334  8b01                 mov eax, dword ptr [ecx]
// 00422336  8b5644               mov edx, dword ptr [esi + 0x44]
// 00422339  8b803c010000         mov eax, dword ptr [eax + 0x13c]
// 0042233f  6a08                 push 8
// 00422341  52                   push edx
// 00422342  ffd0                 call eax
// 00422344  83c820               or eax, 0x20
// 00422347  7433                 je 0x42237c
// 00422349  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 0042234c  804e2c02             or byte ptr [esi + 0x2c], 2
// 00422350  8b11                 mov edx, dword ptr [ecx]
// 00422352  8b4644               mov eax, dword ptr [esi + 0x44]
// 00422355  8b923c010000         mov edx, dword ptr [edx + 0x13c]
// 0042235b  6a08                 push 8
// 0042235d  50                   push eax
// 0042235e  ffd2                 call edx
// 00422360  0d80000000           or eax, 0x80
// 00422365  7415                 je 0x42237c
// 00422367  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 0042236a  8b01                 mov eax, dword ptr [ecx]
// 0042236c  8b5644               mov edx, dword ptr [esi + 0x44]
// 0042236f  8b8044010000         mov eax, dword ptr [eax + 0x144]
// 00422375  6a08                 push 8
// 00422377  6a20                 push 0x20
// 00422379  52                   push edx
// 0042237a  ffd0                 call eax
// 0042237c  5e                   pop esi
// 0042237d  c20400               ret 4

struct CRobloxTreeCtrlNode {
    char pad[0x2c];
    unsigned char flags2c;
    unsigned char flags2d;
    char pad2[0x30 - 0x2e];
    void* ptr30;
    char pad3[0x44 - 0x34];
    int val44;
    void SetState(int);
};

void CRobloxTreeCtrlNode::SetState(int state)
{
    if (flags2d != 0)
    {
        flags2c &= 0xfd;
        return;
    }

    void** vtbl = *(void***)ptr30;
    int (__stdcall *fn1)(int, int) = (int (__stdcall *)(int, int))vtbl[0x13c / 4];
    int r1 = fn1(val44, 8);
    if ((r1 | 0x20) != 0)
    {
        flags2c |= 2;
        void** vtbl2 = *(void***)ptr30;
        int (__stdcall *fn2)(int, int) = (int (__stdcall *)(int, int))vtbl2[0x13c / 4];
        int r2 = fn2(val44, 8);
        if ((r2 | 0x80) != 0)
        {
            void** vtbl3 = *(void***)ptr30;
            int (__stdcall *fn3)(int, int, int) = (int (__stdcall *)(int, int, int))vtbl3[0x144 / 4];
            fn3(val44, 0x20, 8);
        }
    }
}
