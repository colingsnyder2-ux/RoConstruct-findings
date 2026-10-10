// from server: 75% by colin
struct ExitCommand {
    char pad0[4];
    int field4;
    char pad8[4];
    int fieldC;
    int field10;
    bool execute(int arg);
};

extern "C" void __stdcall invalid_parameter_noinfo();
extern "C" void __stdcall string_assign();

bool ExitCommand::execute(int arg)
{
    int count = 0;
    if (fieldC != 0) {
        count = (field10 - fieldC) / 36;
    }
    int idx = field4 + 1;
    if (idx < count) {
        if (fieldC == 0 || idx >= (field10 - fieldC) / 36) {
            invalid_parameter_noinfo();
        }
        string_assign();
        return true;
    }
    return false;
}
