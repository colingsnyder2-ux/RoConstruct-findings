// roc 2012-06 00434fc0  unit: CMainFrame  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00434fc0
//
// 00434fc0  53                   push ebx
// 00434fc1  56                   push esi
// 00434fc2  57                   push edi
// 00434fc3  6a01                 push 1
// 00434fc5  83ec10               sub esp, 0x10
// 00434fc8  8bc4                 mov eax, esp
// 00434fca  33d2                 xor edx, edx
// 00434fcc  8910                 mov dword ptr [eax], edx
// 00434fce  bffa000000           mov edi, 0xfa
// 00434fd3  33f6                 xor esi, esi
// 00434fd5  897004               mov dword ptr [eax + 4], esi
// 00434fd8  8d5f32               lea ebx, [edi + 0x32]
// 00434fdb  897808               mov dword ptr [eax + 8], edi
// 00434fde  68c2000000           push 0xc2
// 00434fe3  89580c               mov dword ptr [eax + 0xc], ebx
// 00434fe6  e865ffffff           call 0x434f50
// 00434feb  5f                   pop edi
// 00434fec  5e                   pop esi
// 00434fed  5b                   pop ebx
// 00434fee  c3                   ret 
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