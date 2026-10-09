// roc 2007-03 0045de70  unit: seg_00450000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045de70
//
// 0045de70  56                   push esi
// 0045de71  e83acbffff           call 0x45a9b0
// 0045de76  8bf0                 mov esi, eax
// 0045de78  6a01                 push 1
// 0045de7a  8bce                 mov ecx, esi
// 0045de7c  e8ffc7ffff           call 0x45a680
// 0045de81  85c0                 test eax, eax
// 0045de83  7409                 je 0x45de8e
// 0045de85  6a01                 push 1
// 0045de87  8bce                 mov ecx, esi
// 0045de89  e8c2c7ffff           call 0x45a650
// 0045de8e  5e                   pop esi
// 0045de8f  c20400               ret 4
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
