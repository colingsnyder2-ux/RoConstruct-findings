// roc 2009-12 008c27e0  unit: CXTPImageEditorDlg  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c27e0
//
// 008c27e0  56                   push esi
// 008c27e1  57                   push edi
// 008c27e2  8bf9                 mov edi, ecx
// 008c27e4  8b8f540a0000         mov ecx, dword ptr [edi + 0xa54]
// 008c27ea  85c9                 test ecx, ecx
// 008c27ec  7407                 je 0x8c27f5
// 008c27ee  6a00                 push 0
// 008c27f0  e85bf7ffff           call 0x8c1f50
// 008c27f5  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008c27f9  85f6                 test esi, esi
// 008c27fb  7409                 je 0x8c2806
// 008c27fd  6a01                 push 1
// 008c27ff  8bce                 mov ecx, esi
// 008c2801  e84af7ffff           call 0x8c1f50
// 008c2806  89b7540a0000         mov dword ptr [edi + 0xa54], esi
// 008c280c  5f                   pop edi
// 008c280d  5e                   pop esi
// 008c280e  c20400               ret 4
// copied from an identical function in another client (function ?SetImage@CXTPImageEditorDlg@ns_ROCX000000@@QAEXPAX@Z)

namespace ns_ROCX000000 {
// from server: 100% by tester
struct CXTPImageEditorDlg {
    char pad[0xa54];
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
