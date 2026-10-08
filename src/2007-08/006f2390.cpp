// from server: 100% by colin
// roc 2007-08 006f2390  unit: CXTPImageEditorDlg  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f2390
//
// 006f2390  56                   push esi
// 006f2391  57                   push edi
// 006f2392  8bf9                 mov edi, ecx
// 006f2394  8b8f4c0a0000         mov ecx, dword ptr [edi + 0xa4c]
// 006f239a  85c9                 test ecx, ecx
// 006f239c  7407                 je 0x6f23a5
// 006f239e  6a00                 push 0
// 006f23a0  e8cbf7ffff           call 0x6f1b70
// 006f23a5  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006f23a9  85f6                 test esi, esi
// 006f23ab  7409                 je 0x6f23b6
// 006f23ad  6a01                 push 1
// 006f23af  8bce                 mov ecx, esi
// 006f23b1  e8baf7ffff           call 0x6f1b70
// 006f23b6  89b74c0a0000         mov dword ptr [edi + 0xa4c], esi
// 006f23bc  5f                   pop edi
// 006f23bd  5e                   pop esi
// 006f23be  c20400               ret 4

struct CXTPImageEditorDlg {
    char pad[0xa4c];
    void* field_a4c;
    void SetImage(void* p);
};

void CXTPImageEditorDlg::SetImage(void* p) {
    if (field_a4c) {
        ((CXTPImageEditorDlg*)field_a4c)->SetImage(0);
    }
    if (p) {
        ((CXTPImageEditorDlg*)p)->SetImage((void*)1);
    }
    field_a4c = p;
}
