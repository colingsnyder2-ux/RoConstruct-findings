// from server: 100% by colin
// roc 2007-08 00456820  unit: CRobloxView  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00456820
//
// 00456820  56                   push esi
// 00456821  6a01                 push 1
// 00456823  6a01                 push 1
// 00456825  8bf1                 mov esi, ecx
// 00456827  e894feffff           call 0x4566c0
// 0045682c  8b8e98010000         mov ecx, dword ptr [esi + 0x198]
// 00456832  6a09                 push 9
// 00456834  e8a7fe0000           call 0x4666e0
// 00456839  5e                   pop esi
// 0045683a  c3                   ret 

struct CRobloxView {
    char pad[0x198];
    void* field_198;
    void sub_004566C0(int, int);
    void sub_004666E0(int);
    void func_00456820();
};

void CRobloxView::func_00456820()
{
    sub_004566C0(1, 1);
    ((CRobloxView*)field_198)->sub_004666E0(9);
}
