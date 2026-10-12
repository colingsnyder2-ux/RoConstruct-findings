// from server: 42% by colin
struct CScriptEditor {
    void f(int unused, int type, int value);
};

extern "C" void __cdecl helper(int type, int value);

void CScriptEditor::f(int unused, int type, int value)
{
    if (type == 0x975770) {
        helper(type, value);
    } else if (type == 0x973d54) {
        helper(type, value);
    }
}
