// from server: 100% by colin
// roc 2007-08 00460570  unit: CScriptEditor  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00460570
//
// 00460570  56                   push esi
// 00460571  e8baccffff           call 0x45d230
// 00460576  8bf0                 mov esi, eax
// 00460578  6a01                 push 1
// 0046057a  8bce                 mov ecx, esi
// 0046057c  e86fc9ffff           call 0x45cef0
// 00460581  85c0                 test eax, eax
// 00460583  7409                 je 0x46058e
// 00460585  6a01                 push 1
// 00460587  8bce                 mov ecx, esi
// 00460589  e832c9ffff           call 0x45cec0
// 0046058e  5e                   pop esi
// 0046058f  c20400               ret 4

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
