// from server: 100% by king_originala
// roc 2008-06 00463fb0  unit: CScriptEditor  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00463fb0
//
// 00463fb0  56                   push esi
// 00463fb1  e81ad4ffff           call 0x4613d0
// 00463fb6  8bf0                 mov esi, eax
// 00463fb8  6a01                 push 1
// 00463fba  8bce                 mov ecx, esi
// 00463fbc  e85fc1ffff           call 0x460120
// 00463fc1  6a01                 push 1
// 00463fc3  50                   push eax
// 00463fc4  8bce                 mov ecx, esi
// 00463fc6  e845ccffff           call 0x460c10
// 00463fcb  6a01                 push 1
// 00463fcd  50                   push eax
// 00463fce  8bce                 mov ecx, esi
// 00463fd0  e8cbc4ffff           call 0x4604a0
// 00463fd5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00463fd9  8b11                 mov edx, dword ptr [ecx]
// 00463fdb  83e001               and eax, 1
// 00463fde  5e                   pop esi
// 00463fdf  89442404             mov dword ptr [esp + 4], eax
// 00463fe3  8b02                 mov eax, dword ptr [edx]
// 00463fe5  ffe0                 jmp eax

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
