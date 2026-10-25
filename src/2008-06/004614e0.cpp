// from server: 100% by king_originala
// roc 2008-06 004614e0  unit: Scintilla::CScintillaView  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004614e0
//
// 004614e0  6a01                 push 1
// 004614e2  83c158               add ecx, 0x58
// 004614e5  e806ecffff           call 0x4600f0
// 004614ea  85c0                 test eax, eax
// 004614ec  7416                 je 0x461504
// 004614ee  b9b82f9300           mov ecx, 0x932fb8
// 004614f3  ff15d82f8000         call dword ptr [0x802fd8]
// 004614f9  84c0                 test al, al
// 004614fb  7507                 jne 0x461504
// 004614fd  b801000000           mov eax, 1
// 00461502  eb02                 jmp 0x461506
// 00461504  33c0                 xor eax, eax
// 00461506  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0046150a  8b11                 mov edx, dword ptr [ecx]
// 0046150c  89442404             mov dword ptr [esp + 4], eax
// 00461510  8b02                 mov eax, dword ptr [edx]
// 00461512  ffe0                 jmp eax

struct Control {
    int query(int direct);
};

struct Command {
    virtual void enable(int enabled);
};

typedef bool (__thiscall *Predicate)(void *);
extern Predicate predicate;

struct View {
    char padding[0x58];
    Control control;
    void update(Command *command);
};

void View::update(Command *command)
{
    command->enable(control.query(1) && !predicate((void *)0x00932fb8));
}
