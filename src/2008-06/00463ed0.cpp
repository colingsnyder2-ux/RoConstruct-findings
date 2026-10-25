// from server: 100% by king_originala
// roc 2008-06 00463ed0  unit: CScriptEditor  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00463ed0
//
// 00463ed0  56                   push esi
// 00463ed1  8bf1                 mov esi, ecx
// 00463ed3  e890cd2300           call 0x6a0c68
// 00463ed8  8bce                 mov ecx, esi
// 00463eda  e8f1d4ffff           call 0x4613d0
// 00463edf  837c240800           cmp dword ptr [esp + 8], 0
// 00463ee4  8bf0                 mov esi, eax
// 00463ee6  7516                 jne 0x463efe
// 00463ee8  6a01                 push 1
// 00463eea  8bce                 mov ecx, esi
// 00463eec  e8bfd1ffff           call 0x4610b0
// 00463ef1  85c0                 test eax, eax
// 00463ef3  7409                 je 0x463efe
// 00463ef5  6a01                 push 1
// 00463ef7  8bce                 mov ecx, esi
// 00463ef9  e882d1ffff           call 0x461080
// 00463efe  5e                   pop esi
// 00463eff  c20c00               ret 0xc

struct Control {
    int func_004610b0(int);
    int func_00461080(int);
};

struct CScriptEditor {
    void func_006a0c68();
    int* func_004613d0();
    void func_00463ed0(unsigned int, unsigned int, unsigned int);
};

void CScriptEditor::func_00463ed0(unsigned int key, unsigned int, unsigned int)
{
    func_006a0c68();
    Control* control = reinterpret_cast<Control*>(func_004613d0());
    if (key == 0 && control->func_004610b0(1))
        control->func_00461080(1);
}
