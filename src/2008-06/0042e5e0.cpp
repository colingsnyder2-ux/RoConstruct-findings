// from server: 100% by king_originala
// roc 2008-06 0042e5e0  unit: CMainFrame  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042e5e0
//
// 0042e5e0  53                   push ebx
// 0042e5e1  56                   push esi
// 0042e5e2  57                   push edi
// 0042e5e3  6a01                 push 1
// 0042e5e5  83ec10               sub esp, 0x10
// 0042e5e8  8bc4                 mov eax, esp
// 0042e5ea  33d2                 xor edx, edx
// 0042e5ec  8910                 mov dword ptr [eax], edx
// 0042e5ee  bffa000000           mov edi, 0xfa
// 0042e5f3  33f6                 xor esi, esi
// 0042e5f5  897004               mov dword ptr [eax + 4], esi
// 0042e5f8  8d5f32               lea ebx, [edi + 0x32]
// 0042e5fb  897808               mov dword ptr [eax + 8], edi
// 0042e5fe  68c2000000           push 0xc2
// 0042e603  89580c               mov dword ptr [eax + 0xc], ebx
// 0042e606  e865ffffff           call 0x42e570
// 0042e60b  5f                   pop edi
// 0042e60c  5e                   pop esi
// 0042e60d  5b                   pop ebx
// 0042e60e  c3                   ret 

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
