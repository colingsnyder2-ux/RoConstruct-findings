// roc 2011-06 0048dd90  unit: CScriptEditor  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0048dd90
//
// 0048dd90  56                   push esi
// 0048dd91  e85ad2ffff           call 0x48aff0
// 0048dd96  8bf0                 mov esi, eax
// 0048dd98  6a01                 push 1
// 0048dd9a  8bce                 mov ecx, esi
// 0048dd9c  e82fcfffff           call 0x48acd0
// 0048dda1  85c0                 test eax, eax
// 0048dda3  7409                 je 0x48ddae
// 0048dda5  6a01                 push 1
// 0048dda7  8bce                 mov ecx, esi
// 0048dda9  e8f2ceffff           call 0x48aca0
// 0048ddae  5e                   pop esi
// 0048ddaf  c20400               ret 4
// copied from an identical function in another client (function ?sub_460570@CScriptEditor@ns_ROCX000002@@QAEXH@Z)

namespace ns_ROCX000002 {
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
