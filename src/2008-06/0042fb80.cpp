// from server: 100% by king_originala
// roc 2008-06 0042fb80  unit: CMainFrame  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042fb80
//
// 0042fb80  53                   push ebx
// 0042fb81  56                   push esi
// 0042fb82  57                   push edi
// 0042fb83  33f6                 xor esi, esi
// 0042fb85  56                   push esi
// 0042fb86  83ec10               sub esp, 0x10
// 0042fb89  8bc4                 mov eax, esp
// 0042fb8b  33d2                 xor edx, edx
// 0042fb8d  8910                 mov dword ptr [eax], edx
// 0042fb8f  bf18010000           mov edi, 0x118
// 0042fb94  897004               mov dword ptr [eax + 4], esi
// 0042fb97  8d5f78               lea ebx, [edi + 0x78]
// 0042fb9a  897808               mov dword ptr [eax + 8], edi
// 0042fb9d  68bf000000           push 0xbf
// 0042fba2  89580c               mov dword ptr [eax + 0xc], ebx
// 0042fba5  e8c6e9ffff           call 0x42e570
// 0042fbaa  5f                   pop edi
// 0042fbab  5e                   pop esi
// 0042fbac  5b                   pop ebx
// 0042fbad  c3                   ret 

struct Rect
{
    int left, top, right, bottom;
    Rect(int l, int t, int r, int b);
};

__forceinline Rect::Rect(int l, int t, int r, int b)
    : left(l), top(t), right(r), bottom(b)
{
}

struct Pane;

struct CMainFrame
{
    Pane* FindPane(unsigned int id, Rect bounds, int flags);
    void f();
};

void CMainFrame::f()
{
    FindPane(191, Rect(0, 0, 280, 400), 0);
}
