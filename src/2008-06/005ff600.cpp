// from server: 32% by tester
// roc 2008-06 005ff600  unit: RBX::Mouse  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ff600

struct MouseCommand;

struct Mouse {
    void __cdecl construct(MouseCommand* command, int a, int b);
};

extern "C" void* __cdecl malloc(unsigned int size);

void Mouse::construct(MouseCommand* command, int a, int b)
{
    MouseCommand* cmd = 0;
    void* mem = malloc(0x168);
    if (mem) {
        cmd = (MouseCommand*)mem;
        // call 0x5ff3b0 - constructor of MouseCommand
        extern void MouseCommand_ctor(MouseCommand*);
        MouseCommand_ctor(cmd);
    } else {
        cmd = 0;
    }
    // call 0x5fde10 with (this, cmd, a, b)
    extern void Mouse_setCommand(Mouse*, MouseCommand*, int, int);
    Mouse_setCommand(this, cmd, a, b);
}
