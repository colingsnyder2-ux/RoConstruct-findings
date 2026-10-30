// roc 2009-06 00464cb0  unit: CScriptEditor  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00464cb0
//
// 00464cb0  56                   push esi
// 00464cb1  e88ad3ffff           call 0x462040
// 00464cb6  8bf0                 mov esi, eax
// 00464cb8  6a01                 push 1
// 00464cba  8bce                 mov ecx, esi
// 00464cbc  e8cfc0ffff           call 0x460d90
// 00464cc1  6a01                 push 1
// 00464cc3  50                   push eax
// 00464cc4  8bce                 mov ecx, esi
// 00464cc6  e8b5cbffff           call 0x461880
// 00464ccb  6a01                 push 1
// 00464ccd  6a01                 push 1
// 00464ccf  48                   dec eax
// 00464cd0  50                   push eax
// 00464cd1  8bce                 mov ecx, esi
// 00464cd3  e8c8c4ffff           call 0x4611a0
// 00464cd8  85c0                 test eax, eax
// 00464cda  7c0c                 jl 0x464ce8
// 00464cdc  6a01                 push 1
// 00464cde  50                   push eax
// 00464cdf  8bce                 mov ecx, esi
// 00464ce1  e81ac2ffff           call 0x460f00
// 00464ce6  5e                   pop esi
// 00464ce7  c3                   ret 
// 00464ce8  6a10                 push 0x10
// 00464cea  ff15a8ed8900         call dword ptr [0x89eda8]
// 00464cf0  5e                   pop esi
// 00464cf1  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000000@CScriptEditor@@QAEXXZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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