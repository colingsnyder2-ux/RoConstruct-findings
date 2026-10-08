// from server: 100% by colin
// roc 2007-08 006725c0  unit: CXTPControlColorSelector  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006725c0
//
// 006725c0  8b816c010000         mov eax, dword ptr [ecx + 0x16c]
// 006725c6  83f8ff               cmp eax, -1
// 006725c9  7410                 je 0x6725db
// 006725cb  8d0440               lea eax, [eax + eax*2]
// 006725ce  8b1485588d8c00       mov edx, dword ptr [eax*4 + 0x8c8d58]
// 006725d5  899170010000         mov dword ptr [ecx + 0x170], edx
// 006725db  e9309ffcff           jmp 0x63c510

struct CXTPControlColorSelector {
    char pad_0x000[0x16c];
    int field_0x16c;
    int field_0x170;
    void func_006725c0();
};

extern int g_array_008c8d58[];
extern void func_0063c510();

void CXTPControlColorSelector::func_006725c0()
{
    int idx = field_0x16c;
    if (idx != -1)
    {
        field_0x170 = g_array_008c8d58[idx * 3];
    }
    func_0063c510();
}
