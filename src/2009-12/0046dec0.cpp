// roc 2009-12 0046dec0  unit: CScriptEditor  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0046dec0
//
// 0046dec0  56                   push esi
// 0046dec1  e81acdffff           call 0x46abe0
// 0046dec6  8bf0                 mov esi, eax
// 0046dec8  6a01                 push 1
// 0046deca  8bce                 mov ecx, esi
// 0046decc  e8efc9ffff           call 0x46a8c0
// 0046ded1  85c0                 test eax, eax
// 0046ded3  7409                 je 0x46dede
// 0046ded5  6a01                 push 1
// 0046ded7  8bce                 mov ecx, esi
// 0046ded9  e8b2c9ffff           call 0x46a890
// 0046dede  5e                   pop esi
// 0046dedf  c20400               ret 4
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
