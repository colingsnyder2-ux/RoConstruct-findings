// from server: 40% by colin
struct MouseCommand {
    char pad[0x204];
    void* p;
};

struct TToolVerb {
    char pad[0xc];
    MouseCommand* cmd;
    void* construct();
};

extern "C" void* __cdecl operator_new(unsigned int);

struct VerbBase {
    void init(void*);
};

void* TToolVerb::construct()
{
    void* mem = operator_new(0x38);
    if (mem) {
        ((VerbBase*)mem)->init(cmd->p);
    }
    return mem;
}
