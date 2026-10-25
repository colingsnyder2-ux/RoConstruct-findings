// from server: 100% by king_originala
// roc 2008-06 0042fbb0  unit: CMainFrame  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042fbb0
//
// 0042fbb0  53                   push ebx
// 0042fbb1  56                   push esi
// 0042fbb2  57                   push edi
// 0042fbb3  6a03                 push 3
// 0042fbb5  83ec10               sub esp, 0x10
// 0042fbb8  8bc4                 mov eax, esp
// 0042fbba  33d2                 xor edx, edx
// 0042fbbc  8910                 mov dword ptr [eax], edx
// 0042fbbe  33f6                 xor esi, esi
// 0042fbc0  897004               mov dword ptr [eax + 4], esi
// 0042fbc3  bf80020000           mov edi, 0x280
// 0042fbc8  bbc8000000           mov ebx, 0xc8
// 0042fbcd  897808               mov dword ptr [eax + 8], edi
// 0042fbd0  68c0000000           push 0xc0
// 0042fbd5  89580c               mov dword ptr [eax + 0xc], ebx
// 0042fbd8  e893e9ffff           call 0x42e570
// 0042fbdd  5f                   pop edi
// 0042fbde  5e                   pop esi
// 0042fbdf  5b                   pop ebx
// 0042fbe0  c3                   ret 

struct Rect {
    int left, top, right, bottom;

    Rect(int l, int t, int r, int b)
        : left(l), top(t), right(r), bottom(b) {}
};

struct CMainFrame {
    void f();
    void set(unsigned int, Rect, int);
};

void CMainFrame::f()
{
    set(0xc0, Rect(0, 0, 0x280, 0xc8), 3);
}
