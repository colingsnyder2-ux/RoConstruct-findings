// from server: 76% by why2
struct LDrawCommand {
    void construct();
};

extern "C" void __stdcall sub_89E4C4();

void LDrawCommand::construct() {
    *(int*)this = 0x8bdad4;
    sub_89E4C4();
}
