// roc 2012-06 004a0a90  unit: CScriptEditor  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004a0a90
//
// 004a0a90  56                   push esi
// 004a0a91  e8fa310500           call 0x4f3c90
// 004a0a96  8bf0                 mov esi, eax
// 004a0a98  6a01                 push 1
// 004a0a9a  8bce                 mov ecx, esi
// 004a0a9c  e85fcfffff           call 0x49da00
// 004a0aa1  85c0                 test eax, eax
// 004a0aa3  7409                 je 0x4a0aae
// 004a0aa5  6a01                 push 1
// 004a0aa7  8bce                 mov ecx, esi
// 004a0aa9  e822cfffff           call 0x49d9d0
// 004a0aae  5e                   pop esi
// 004a0aaf  c20400               ret 4
// copied from an identical function in another client (function ?sub_460570@CScriptEditor@ns_ROCX000001@@QAEXH@Z)

namespace ns_ROCX000001 {
struct CScriptEditor {
    int sub_45CEF0(int);
    void sub_45CEC0(int);

    void sub_460570(int);
};

extern "C" void* __cdecl sub_45D230();

void CScriptEditor::sub_460570(int)
{
    CScriptEditor* p = (CScriptEditor*)sub_45D230();
    if (p->sub_45CEF0(1)) {
        p->sub_45CEC0(1);
    }
}
}
