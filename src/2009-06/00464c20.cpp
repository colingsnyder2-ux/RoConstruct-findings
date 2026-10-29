// roc 2009-06 00464c20  unit: CScriptEditor  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00464c20
//
// 00464c20  56                   push esi
// 00464c21  e81ad4ffff           call 0x462040
// 00464c26  8bf0                 mov esi, eax
// 00464c28  6a01                 push 1
// 00464c2a  8bce                 mov ecx, esi
// 00464c2c  e85fc1ffff           call 0x460d90
// 00464c31  6a01                 push 1
// 00464c33  50                   push eax
// 00464c34  8bce                 mov ecx, esi
// 00464c36  e845ccffff           call 0x461880
// 00464c3b  6a01                 push 1
// 00464c3d  50                   push eax
// 00464c3e  8bce                 mov ecx, esi
// 00464c40  e8cbc4ffff           call 0x461110
// 00464c45  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00464c49  8b11                 mov edx, dword ptr [ecx]
// 00464c4b  83e001               and eax, 1
// 00464c4e  5e                   pop esi
// 00464c4f  89442404             mov dword ptr [esp + 4], eax
// 00464c53  8b02                 mov eax, dword ptr [edx]
// 00464c55  ffe0                 jmp eax
// copied from an identical function in another client (function ?update@CScriptEditor@@QAEXPAUCommand@@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct Command {
    virtual void set(int value);
};

struct Control {
    int current(int direct);
    int line(int position, int direct);
    int state(int line, int direct);
};

struct CScriptEditor {
    int* f();
    void update(Command* command);
};

void CScriptEditor::update(Command* command)
{
    Control* control = reinterpret_cast<Control*>(f());
    int position = control->current(1);
    int line = control->line(position, 1);
    int state = control->state(line, 1);
    command->set(state & 1);
}