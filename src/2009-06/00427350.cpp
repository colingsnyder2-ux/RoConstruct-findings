// roc 2009-06 00427350  unit: CMainFrame  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00427350
//
// 00427350  53                   push ebx
// 00427351  56                   push esi
// 00427352  57                   push edi
// 00427353  6a01                 push 1
// 00427355  83ec10               sub esp, 0x10
// 00427358  8bc4                 mov eax, esp
// 0042735a  33d2                 xor edx, edx
// 0042735c  8910                 mov dword ptr [eax], edx
// 0042735e  bffa000000           mov edi, 0xfa
// 00427363  33f6                 xor esi, esi
// 00427365  897004               mov dword ptr [eax + 4], esi
// 00427368  8d5f32               lea ebx, [edi + 0x32]
// 0042736b  897808               mov dword ptr [eax + 8], edi
// 0042736e  68c2000000           push 0xc2
// 00427373  89580c               mov dword ptr [eax + 0xc], ebx
// 00427376  e865ffffff           call 0x4272e0
// 0042737b  5f                   pop edi
// 0042737c  5e                   pop esi
// 0042737d  5b                   pop ebx
// 0042737e  c3                   ret 
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