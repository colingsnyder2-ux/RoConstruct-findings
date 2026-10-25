// from server: 100% by king_originala
// roc 2008-06 00463ff0  unit: CScriptEditor  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00463ff0
//
// 00463ff0  56                   push esi
// 00463ff1  e8dad3ffff           call 0x4613d0
// 00463ff6  8bf0                 mov esi, eax
// 00463ff8  6a01                 push 1
// 00463ffa  8bce                 mov ecx, esi
// 00463ffc  e81fc1ffff           call 0x460120
// 00464001  6a01                 push 1
// 00464003  50                   push eax
// 00464004  8bce                 mov ecx, esi
// 00464006  e805ccffff           call 0x460c10
// 0046400b  6a01                 push 1
// 0046400d  6a01                 push 1
// 0046400f  40                   inc eax
// 00464010  50                   push eax
// 00464011  8bce                 mov ecx, esi
// 00464013  e8c8c4ffff           call 0x4604e0
// 00464018  85c0                 test eax, eax
// 0046401a  7c0c                 jl 0x464028
// 0046401c  6a01                 push 1
// 0046401e  50                   push eax
// 0046401f  8bce                 mov ecx, esi
// 00464021  e86ac2ffff           call 0x460290
// 00464026  5e                   pop esi
// 00464027  c3                   ret 
// 00464028  6a10                 push 0x10
// 0046402a  ff15142d8000         call dword ptr [0x802d14]
// 00464030  5e                   pop esi
// 00464031  c3                   ret 

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
