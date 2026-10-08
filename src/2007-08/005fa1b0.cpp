// from server: 51% by colin
// roc 2007-08 005fa1b0  unit: RBX::VSeat::?$FactoryProduct  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005fa1b0
//
// 005fa1b0  8b442404             mov eax, dword ptr [esp + 4]
// 005fa1b4  8b542408             mov edx, dword ptr [esp + 8]
// 005fa1b8  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005fa1bc  83ec10               sub esp, 0x10
// 005fa1bf  56                   push esi
// 005fa1c0  8b742420             mov esi, dword ptr [esp + 0x20]
// 005fa1c4  57                   push edi
// 005fa1c5  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005fa1c9  8910                 mov dword ptr [eax], edx
// 005fa1cb  8b542414             mov edx, dword ptr [esp + 0x14]
// 005fa1cf  897004               mov dword ptr [eax + 4], esi
// 005fa1d2  897808               mov dword ptr [eax + 8], edi
// 005fa1d5  894810               mov dword ptr [eax + 0x10], ecx
// 005fa1d8  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005fa1dc  5f                   pop edi
// 005fa1dd  89500c               mov dword ptr [eax + 0xc], edx
// 005fa1e0  894814               mov dword ptr [eax + 0x14], ecx
// 005fa1e3  5e                   pop esi
// 005fa1e4  83c410               add esp, 0x10
// 005fa1e7  c3                   ret 

struct FactoryProduct {
    void f(int a, int b, int c, int d, int e, int f);
};

void FactoryProduct::f(int a, int b, int c, int d, int e, int f)
{
    int* p = (int*)a;
    p[0] = b;
    p[1] = d;
    p[2] = e;
    p[3] = c;
    p[4] = f;
    p[5] = 0;
}
