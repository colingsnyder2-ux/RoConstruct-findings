// from server: 100% by tester
// roc 2008-06 0076f610  unit: CXTPImageEditorDlg  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0076f610
//
// 0076f610  56                   push esi
// 0076f611  57                   push edi
// 0076f612  8bf9                 mov edi, ecx
// 0076f614  8b8f540a0000         mov ecx, dword ptr [edi + 0xa54]
// 0076f61a  85c9                 test ecx, ecx
// 0076f61c  7407                 je 0x76f625
// 0076f61e  6a00                 push 0
// 0076f620  e85bf7ffff           call 0x76ed80
// 0076f625  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0076f629  85f6                 test esi, esi
// 0076f62b  7409                 je 0x76f636
// 0076f62d  6a01                 push 1
// 0076f62f  8bce                 mov ecx, esi
// 0076f631  e84af7ffff           call 0x76ed80
// 0076f636  89b7540a0000         mov dword ptr [edi + 0xa54], esi
// 0076f63c  5f                   pop edi
// 0076f63d  5e                   pop esi
// 0076f63e  c20400               ret 4

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
