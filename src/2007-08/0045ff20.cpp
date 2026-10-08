// from server: 54% by colin
// roc 2007-08 0045ff20  unit: CScriptEditor  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045ff20
//
// 0045ff20  56                   push esi
// 0045ff21  8bf1                 mov esi, ecx
// 0045ff23  e816031d00           call 0x63023e
// 0045ff28  8bce                 mov ecx, esi
// 0045ff2a  e801d3ffff           call 0x45d230
// 0045ff2f  837c240800           cmp dword ptr [esp + 8], 0
// 0045ff34  8bf0                 mov esi, eax
// 0045ff36  7516                 jne 0x45ff4e
// 0045ff38  6a01                 push 1
// 0045ff3a  8bce                 mov ecx, esi
// 0045ff3c  e8afcfffff           call 0x45cef0
// 0045ff41  85c0                 test eax, eax
// 0045ff43  7409                 je 0x45ff4e
// 0045ff45  6a01                 push 1
// 0045ff47  8bce                 mov ecx, esi
// 0045ff49  e872cfffff           call 0x45cec0
// 0045ff4e  5e                   pop esi
// 0045ff4f  c20c00               ret 0xc

struct CScriptEditor {
    void sub_45FF20(int, int, int);
};

extern "C" void __stdcall sub_63023E();
extern "C" int __stdcall sub_45D230();
extern "C" int __stdcall sub_45CEF0(int);
extern "C" int __stdcall sub_45CEC0(int);

void CScriptEditor::sub_45FF20(int a, int b, int c) {
    sub_63023E();
    int p = sub_45D230();
    if (b == 0) {
        if (sub_45CEF0(1)) {
            sub_45CEC0(1);
        }
    }
}
