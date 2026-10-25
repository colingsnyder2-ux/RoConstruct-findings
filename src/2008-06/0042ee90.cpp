// from server: 100% by king_originala
// roc 2008-06 0042ee90  unit: CWrapperView  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042ee90
//
// 0042ee90  53                   push ebx
// 0042ee91  56                   push esi
// 0042ee92  57                   push edi
// 0042ee93  33f6                 xor esi, esi
// 0042ee95  56                   push esi
// 0042ee96  83ec10               sub esp, 0x10
// 0042ee99  8bc4                 mov eax, esp
// 0042ee9b  33d2                 xor edx, edx
// 0042ee9d  8910                 mov dword ptr [eax], edx
// 0042ee9f  897004               mov dword ptr [eax + 4], esi
// 0042eea2  bf96000000           mov edi, 0x96
// 0042eea7  bb90010000           mov ebx, 0x190
// 0042eeac  897808               mov dword ptr [eax + 8], edi
// 0042eeaf  688c000000           push 0x8c
// 0042eeb4  89580c               mov dword ptr [eax + 0xc], ebx
// 0042eeb7  e8b4f6ffff           call 0x42e570
// 0042eebc  5f                   pop edi
// 0042eebd  5e                   pop esi
// 0042eebe  5b                   pop ebx
// 0042eebf  c3                   ret 

struct Rect
{
    int left, top, right, bottom;
};

struct Pane;

struct CWrapperView
{
    Pane* FindPane(int, Rect, int);
    Pane* method();
};

Pane* CWrapperView::method()
{
    Rect rect = { 0, 0, 150, 400 };
    return FindPane(140, rect, 0);
}
