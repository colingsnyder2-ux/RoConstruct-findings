// roc 2011-06 00430210  unit: CMainFrame  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00430210
//
// 00430210  53                   push ebx
// 00430211  56                   push esi
// 00430212  57                   push edi
// 00430213  6a01                 push 1
// 00430215  83ec10               sub esp, 0x10
// 00430218  8bc4                 mov eax, esp
// 0043021a  33d2                 xor edx, edx
// 0043021c  8910                 mov dword ptr [eax], edx
// 0043021e  bffa000000           mov edi, 0xfa
// 00430223  33f6                 xor esi, esi
// 00430225  897004               mov dword ptr [eax + 4], esi
// 00430228  8d5f32               lea ebx, [edi + 0x32]
// 0043022b  897808               mov dword ptr [eax + 8], edi
// 0043022e  68c2000000           push 0xc2
// 00430233  89580c               mov dword ptr [eax + 0xc], ebx
// 00430236  e865ffffff           call 0x4301a0
// 0043023b  5f                   pop edi
// 0043023c  5e                   pop esi
// 0043023d  5b                   pop ebx
// 0043023e  c3                   ret 
// copied from an identical function in another client (function ?f@CMainFrame@ns_ROCX000014@@QAEXXZ)

namespace ns_ROCX000014 {
struct Rect
{
    int left, top, right, bottom;
};

struct Pane;

struct CMainFrame
{
    Pane* FindPane(int id, Rect bounds, int flag);
    void f();
};

void CMainFrame::f()
{
    Rect bounds;
    bounds.left = 0;
    bounds.top = 0;
    bounds.right = 250;
    bounds.bottom = 300;
    FindPane(194, bounds, 1);
}
}
