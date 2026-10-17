// from server: 60% by colin
struct RBX_RunCommand {
    char pad[0xc];
    int field_c;
    int field_10;
    void doIt();
};

extern "C" void __fastcall sub_57D250(int);
extern "C" int __fastcall sub_581C00(int*, int);
extern "C" void __fastcall sub_554DA0(int, int);

void RBX_RunCommand::doIt() {
    int v = field_c;
    sub_57D250(v);
    int r = sub_581C00(&field_10, 1);
    sub_554DA0(r, 1);
}
