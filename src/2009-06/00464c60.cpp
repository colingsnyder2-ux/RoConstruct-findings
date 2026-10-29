// roc 2009-06 00464c60  unit: CScriptEditor  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00464c60
//
// 00464c60  56                   push esi
// 00464c61  e8dad3ffff           call 0x462040
// 00464c66  8bf0                 mov esi, eax
// 00464c68  6a01                 push 1
// 00464c6a  8bce                 mov ecx, esi
// 00464c6c  e81fc1ffff           call 0x460d90
// 00464c71  6a01                 push 1
// 00464c73  50                   push eax
// 00464c74  8bce                 mov ecx, esi
// 00464c76  e805ccffff           call 0x461880
// 00464c7b  6a01                 push 1
// 00464c7d  6a01                 push 1
// 00464c7f  40                   inc eax
// 00464c80  50                   push eax
// 00464c81  8bce                 mov ecx, esi
// 00464c83  e8c8c4ffff           call 0x461150
// 00464c88  85c0                 test eax, eax
// 00464c8a  7c0c                 jl 0x464c98
// 00464c8c  6a01                 push 1
// 00464c8e  50                   push eax
// 00464c8f  8bce                 mov ecx, esi
// 00464c91  e86ac2ffff           call 0x460f00
// 00464c96  5e                   pop esi
// 00464c97  c3                   ret 
// 00464c98  6a10                 push 0x10
// 00464c9a  ff15a8ed8900         call dword ptr [0x89eda8]
// 00464ca0  5e                   pop esi
// 00464ca1  c3                   ret 
// copied from an identical function in another client (function ?MoveToNextLine@CScriptEditor@@QAEXXZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
extern "C" int (__stdcall *MessageBeep)(unsigned int);

struct EditorControl {
    int GetCurrentPos(int direct);
    int LineFromPosition(int position, int direct);
    int FindColumn(int line, int column, int direct);
    void GotoPos(int position, int direct);
};

struct CScriptEditor {
    EditorControl* GetControl();
    void MoveToNextLine();
};

void CScriptEditor::MoveToNextLine()
{
    EditorControl* control = GetControl();
    int position = control->GetCurrentPos(1);
    int line = control->LineFromPosition(position, 1);
    position = control->FindColumn(line + 1, 1, 1);
    if (position >= 0)
        control->GotoPos(position, 1);
    else
        MessageBeep(0x10);
}