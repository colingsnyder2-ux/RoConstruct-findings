// from server: 100% by king_originala
// roc 2008-06 004659f0  unit: CScriptEditor  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004659f0
//
// 004659f0  8b442408             mov eax, dword ptr [esp + 8]
// 004659f4  3d70579700           cmp eax, 0x975770
// 004659f9  750e                 jne 0x465a09
// 004659fb  81c110ffffff         add ecx, 0xffffff10
// 00465a01  e84afbffff           call 0x465550
// 00465a06  c20c00               ret 0xc
// 00465a09  3d543d9700           cmp eax, 0x973d54
// 00465a0e  750b                 jne 0x465a1b
// 00465a10  81c110ffffff         add ecx, 0xffffff10
// 00465a16  e825ebffff           call 0x464540
// 00465a1b  c20c00               ret 0xc

extern const char event_00975770[];
extern const char event_00973d54[];

struct CScriptEditor {
    void func_00465550();
    void func_00464540();
    void func_004659f0(int, const void*, int);
};

void CScriptEditor::func_004659f0(int, const void* event, int)
{
    if (event == event_00975770) {
        reinterpret_cast<CScriptEditor*>(
            reinterpret_cast<char*>(this) - 0xF0)->func_00465550();
        return;
    }

    if (event == event_00973d54) {
        reinterpret_cast<CScriptEditor*>(
            reinterpret_cast<char*>(this) - 0xF0)->func_00464540();
    }
}
