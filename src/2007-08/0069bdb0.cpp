// from server: 100% by colin
// roc 2007-08 0069bdb0  unit: CXTPPropertyGridView  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069bdb0
//
// 0069bdb0  53                   push ebx
// 0069bdb1  55                   push ebp
// 0069bdb2  56                   push esi
// 0069bdb3  57                   push edi
// 0069bdb4  8bf9                 mov edi, ecx
// 0069bdb6  e88344f9ff           call 0x63023e
// 0069bdbb  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0069bdbf  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0069bdc3  53                   push ebx
// 0069bdc4  55                   push ebp
// 0069bdc5  8bcf                 mov ecx, edi
// 0069bdc7  e8d4feffff           call 0x69bca0
// 0069bdcc  8bf0                 mov esi, eax
// 0069bdce  85f6                 test esi, esi
// 0069bdd0  742a                 je 0x69bdfc
// 0069bdd2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0069bdd6  8b06                 mov eax, dword ptr [esi]
// 0069bdd8  8b90b8000000         mov edx, dword ptr [eax + 0xb8]
// 0069bdde  53                   push ebx
// 0069bddf  55                   push ebp
// 0069bde0  51                   push ecx
// 0069bde1  8bce                 mov ecx, esi
// 0069bde3  ffd2                 call edx
// 0069bde5  53                   push ebx
// 0069bde6  55                   push ebp
// 0069bde7  8bcf                 mov ecx, edi
// 0069bde9  e8b2feffff           call 0x69bca0
// 0069bdee  3bf0                 cmp esi, eax
// 0069bdf0  750a                 jne 0x69bdfc
// 0069bdf2  56                   push esi
// 0069bdf3  6a08                 push 8
// 0069bdf5  8bcf                 mov ecx, edi
// 0069bdf7  e8f4ecffff           call 0x69aaf0
// 0069bdfc  5f                   pop edi
// 0069bdfd  5e                   pop esi
// 0069bdfe  5d                   pop ebp
// 0069bdff  5b                   pop ebx
// 0069be00  c20c00               ret 0xc

struct CXTPPropertyGridView {
    void sub_63023E();
    void* sub_69BCA0(int, int);
    void sub_69AAF0(int, void*);
    void InsertItem(int, int, int);
};

void CXTPPropertyGridView::InsertItem(int a, int b, int c) {
    sub_63023E();
    void* p = sub_69BCA0(b, c);
    if (p) {
        void** vt = *(void***)p;
        void (__thiscall *fn)(void*, int, int, int) = (void (__thiscall *)(void*, int, int, int))vt[0x2e];
        fn(p, a, b, c);
        if (p == sub_69BCA0(b, c)) {
            sub_69AAF0(8, p);
        }
    }
}
