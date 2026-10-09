// roc 2010-06 00471990  unit: CScriptEditor  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00471990
//
// 00471990  56                   push esi
// 00471991  e85acdffff           call 0x46e6f0
// 00471996  8bf0                 mov esi, eax
// 00471998  6a01                 push 1
// 0047199a  8bce                 mov ecx, esi
// 0047199c  e81fcaffff           call 0x46e3c0
// 004719a1  85c0                 test eax, eax
// 004719a3  7409                 je 0x4719ae
// 004719a5  6a01                 push 1
// 004719a7  8bce                 mov ecx, esi
// 004719a9  e8e2c9ffff           call 0x46e390
// 004719ae  5e                   pop esi
// 004719af  c20400               ret 4
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
