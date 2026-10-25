// from server: 100% by tester
// roc 2008-06 00459810  unit: CRobloxView  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00459810
//
// 00459810  56                   push esi
// 00459811  6a01                 push 1
// 00459813  6a01                 push 1
// 00459815  8bf1                 mov esi, ecx
// 00459817  e884feffff           call 0x4596a0
// 0045981c  8b8ed8010000         mov ecx, dword ptr [esi + 0x1d8]
// 00459822  6a09                 push 9
// 00459824  e8670d0100           call 0x46a590
// 00459829  5e                   pop esi
// 0045982a  c3                   ret 

struct CRobloxView {
    char pad[0x1d8];
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
