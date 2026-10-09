// roc 2007-03 006e14b0  unit: seg_006e0000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006e14b0
//
// 006e14b0  56                   push esi
// 006e14b1  57                   push edi
// 006e14b2  8bf9                 mov edi, ecx
// 006e14b4  8b8f4c0a0000         mov ecx, dword ptr [edi + 0xa4c]
// 006e14ba  85c9                 test ecx, ecx
// 006e14bc  7407                 je 0x6e14c5
// 006e14be  6a00                 push 0
// 006e14c0  e8cbf7ffff           call 0x6e0c90
// 006e14c5  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006e14c9  85f6                 test esi, esi
// 006e14cb  7409                 je 0x6e14d6
// 006e14cd  6a01                 push 1
// 006e14cf  8bce                 mov ecx, esi
// 006e14d1  e8baf7ffff           call 0x6e0c90
// 006e14d6  89b74c0a0000         mov dword ptr [edi + 0xa4c], esi
// 006e14dc  5f                   pop edi
// 006e14dd  5e                   pop esi
// 006e14de  c20400               ret 4
// copied from an identical function in another client (function ?SetImage@CXTPImageEditorDlg@ns_ROCX000042@@QAEXPAX@Z)

namespace ns_ROCX000042 {
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
}
