// from server: 100% by king_originala
// roc 2008-06 004638d0  unit: CScriptEditor  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004638d0
//
// 004638d0  837c240800           cmp dword ptr [esp + 8], 0
// 004638d5  0f95c0               setne al
// 004638d8  884141               mov byte ptr [ecx + 0x41], al
// 004638db  84c0                 test al, al
// 004638dd  7509                 jne 0x4638e8
// 004638df  384142               cmp byte ptr [ecx + 0x42], al
// 004638e2  7404                 je 0x4638e8
// 004638e4  33c0                 xor eax, eax
// 004638e6  eb05                 jmp 0x4638ed
// 004638e8  b801000000           mov eax, 1
// 004638ed  6a01                 push 1
// 004638ef  50                   push eax
// 004638f0  81c1ecfeffff         add ecx, 0xfffffeec
// 004638f6  e8d5daffff           call 0x4613d0
// 004638fb  8bc8                 mov ecx, eax
// 004638fd  e88ed3ffff           call 0x460c90
// 00463902  c20800               ret 8

struct Control {
    void setReadOnly(int value, int direct);
};

struct EditorBase {
    char padding[88];
    int value;
    int* control();
};

struct CScriptEditor {
    char padding[65];
    bool readOnly;
    bool editable;
    void f(int unused, int value);
};

void CScriptEditor::f(int unused, int value)
{
    readOnly = value != 0;
    int state = (readOnly || !editable) ? 1 : 0;
    reinterpret_cast<Control*>(
        reinterpret_cast<EditorBase*>(
            reinterpret_cast<char*>(this) - 276)->control()
    )->setReadOnly(state, 1);
}
