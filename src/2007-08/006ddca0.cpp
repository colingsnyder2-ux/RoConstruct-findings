// from server: 89% by colin
// roc 2007-08 006ddca0  unit: CXTPDockingPaneWindowSelect  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ddca0
//
// 006ddca0  56                   push esi
// 006ddca1  8bf1                 mov esi, ecx
// 006ddca3  6a0a                 push 0xa
// 006ddca5  8d4e08               lea ecx, [esi + 8]
// 006ddca8  c70604967d00         mov dword ptr [esi], 0x7d9604
// 006ddcae  e83deaffff           call 0x6dc6f0
// 006ddcb3  33c0                 xor eax, eax
// 006ddcb5  894628               mov dword ptr [esi + 0x28], eax
// 006ddcb8  894604               mov dword ptr [esi + 4], eax
// 006ddcbb  894624               mov dword ptr [esi + 0x24], eax
// 006ddcbe  8bc6                 mov eax, esi
// 006ddcc0  5e                   pop esi
// 006ddcc1  c3                   ret 

struct CXTPDockingPaneWindowSelect
{
    void* vtable;
    int field_4;
    char pad_8[0x1c];
    int field_24;
    int field_28;
    CXTPDockingPaneWindowSelect* construct();
};

extern "C" void __stdcall sub_006dc6f0(void* p, int n);

CXTPDockingPaneWindowSelect* CXTPDockingPaneWindowSelect::construct()
{
    vtable = (void*)0x7d9604;
    sub_006dc6f0(&pad_8[0], 0xa);
    field_28 = 0;
    field_4 = 0;
    field_24 = 0;
    return this;
}
