// roc 2009-12 00427fb0  unit: CMainFrame  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00427fb0
//
// 00427fb0  53                   push ebx
// 00427fb1  56                   push esi
// 00427fb2  57                   push edi
// 00427fb3  6a01                 push 1
// 00427fb5  83ec10               sub esp, 0x10
// 00427fb8  8bc4                 mov eax, esp
// 00427fba  33d2                 xor edx, edx
// 00427fbc  8910                 mov dword ptr [eax], edx
// 00427fbe  bffa000000           mov edi, 0xfa
// 00427fc3  33f6                 xor esi, esi
// 00427fc5  897004               mov dword ptr [eax + 4], esi
// 00427fc8  8d5f32               lea ebx, [edi + 0x32]
// 00427fcb  897808               mov dword ptr [eax + 8], edi
// 00427fce  68c2000000           push 0xc2
// 00427fd3  89580c               mov dword ptr [eax + 0xc], ebx
// 00427fd6  e865ffffff           call 0x427f40
// 00427fdb  5f                   pop edi
// 00427fdc  5e                   pop esi
// 00427fdd  5b                   pop ebx
// 00427fde  c3                   ret 
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