// roc 2010-06 00428420  unit: CMainFrame  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00428420
//
// 00428420  53                   push ebx
// 00428421  56                   push esi
// 00428422  57                   push edi
// 00428423  6a01                 push 1
// 00428425  83ec10               sub esp, 0x10
// 00428428  8bc4                 mov eax, esp
// 0042842a  33d2                 xor edx, edx
// 0042842c  8910                 mov dword ptr [eax], edx
// 0042842e  bffa000000           mov edi, 0xfa
// 00428433  33f6                 xor esi, esi
// 00428435  897004               mov dword ptr [eax + 4], esi
// 00428438  8d5f32               lea ebx, [edi + 0x32]
// 0042843b  897808               mov dword ptr [eax + 8], edi
// 0042843e  68c2000000           push 0xc2
// 00428443  89580c               mov dword ptr [eax + 0xc], ebx
// 00428446  e865ffffff           call 0x4283b0
// 0042844b  5f                   pop edi
// 0042844c  5e                   pop esi
// 0042844d  5b                   pop ebx
// 0042844e  c3                   ret 
// copied from an identical function in another client (function ?f@CMainFrame@@QAEXXZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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