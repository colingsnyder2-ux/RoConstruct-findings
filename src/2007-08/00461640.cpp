// from server: 100% by colin
// roc 2007-08 00461640  unit: CScriptEditor  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00461640
//
// 00461640  8b442408             mov eax, dword ptr [esp + 8]
// 00461644  3d74128c00           cmp eax, 0x8c1274
// 00461649  750e                 jne 0x461659
// 0046164b  81c110ffffff         add ecx, 0xffffff10
// 00461651  e81afcffff           call 0x461270
// 00461656  c20c00               ret 0xc
// 00461659  3dbc148c00           cmp eax, 0x8c14bc
// 0046165e  750b                 jne 0x46166b
// 00461660  81c110ffffff         add ecx, 0xffffff10
// 00461666  e8e5efffff           call 0x460650
// 0046166b  c20c00               ret 0xc

struct CScriptEditor {
    char pad[0x100];
    void sub_461270();
    void sub_460650();
    void func_00461640(int, int, int);
};

void CScriptEditor::func_00461640(int a, int b, int c)
{
    int id = b;
    if (id == 0x8c1274) {
        ((CScriptEditor*)((char*)this - 0xf0))->sub_461270();
    } else if (id == 0x8c14bc) {
        ((CScriptEditor*)((char*)this - 0xf0))->sub_460650();
    }
}
