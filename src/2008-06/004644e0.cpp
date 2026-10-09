// roc 2008-06 004644e0  unit: CScriptEditor  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004644e0
//
// 004644e0  56                   push esi
// 004644e1  e8eaceffff           call 0x4613d0
// 004644e6  8bf0                 mov esi, eax
// 004644e8  6a01                 push 1
// 004644ea  8bce                 mov ecx, esi
// 004644ec  e8bfcbffff           call 0x4610b0
// 004644f1  85c0                 test eax, eax
// 004644f3  7409                 je 0x4644fe
// 004644f5  6a01                 push 1
// 004644f7  8bce                 mov ecx, esi
// 004644f9  e882cbffff           call 0x461080
// 004644fe  5e                   pop esi
// 004644ff  c20400               ret 4
// copied from an identical function in another client (function ?sub_460570@CScriptEditor@ns_ROCX000000@@QAEXH@Z)

namespace ns_ROCX000000 {
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
