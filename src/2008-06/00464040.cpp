// from server: 100% by king_originala
// roc 2008-06 00464040  unit: CScriptEditor  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00464040
//
// 00464040  56                   push esi
// 00464041  e88ad3ffff           call 0x4613d0
// 00464046  8bf0                 mov esi, eax
// 00464048  6a01                 push 1
// 0046404a  8bce                 mov ecx, esi
// 0046404c  e8cfc0ffff           call 0x460120
// 00464051  6a01                 push 1
// 00464053  50                   push eax
// 00464054  8bce                 mov ecx, esi
// 00464056  e8b5cbffff           call 0x460c10
// 0046405b  6a01                 push 1
// 0046405d  6a01                 push 1
// 0046405f  48                   dec eax
// 00464060  50                   push eax
// 00464061  8bce                 mov ecx, esi
// 00464063  e8c8c4ffff           call 0x460530
// 00464068  85c0                 test eax, eax
// 0046406a  7c0c                 jl 0x464078
// 0046406c  6a01                 push 1
// 0046406e  50                   push eax
// 0046406f  8bce                 mov ecx, esi
// 00464071  e81ac2ffff           call 0x460290
// 00464076  5e                   pop esi
// 00464077  c3                   ret 
// 00464078  6a10                 push 0x10
// 0046407a  ff15142d8000         call dword ptr [0x802d14]
// 00464080  5e                   pop esi
// 00464081  c3                   ret 

extern "C" int (__stdcall* MessageBeep)(unsigned int);

struct EditorControl
{
    int currentPosition(int direct);
    int lineFromPosition(int position, int direct);
    int previousMarker(int line, int mask, int direct);
    void goToLine(int line, int direct);
};

struct CScriptEditor
{
    EditorControl* control();
    void func_00464040();
};

void CScriptEditor::func_00464040()
{
    EditorControl* editor = control();
    int position = editor->currentPosition(1);
    int line = editor->lineFromPosition(position, 1);
    int marker = editor->previousMarker(line - 1, 1, 1);
    if (marker >= 0)
        editor->goToLine(marker, 1);
    else
        MessageBeep(16);
}
