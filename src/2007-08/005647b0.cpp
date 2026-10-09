// from server: 61% by colin
// roc 2007-08 005647b0  unit: seg_00560000  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005647b0

struct ControllerCommand {
    char pad[0x14];
    int field14;
    char pad2[0x8];
    int field20;
    bool f();
};

extern "C" int __stdcall sub_562300(int, int);
extern "C" int __stdcall sub_5618E0(int);
extern "C" int __stdcall sub_55F610(int, int);

bool ControllerCommand::f()
{
    int v = sub_562300((int)(this->pad + 0x14), 1);
    int* p = *(int**)(v + 0x104);
    int count = p[1];
    if (count == 0)
        return false;
    if ((p[2] - count) >> 3 == 0)
        return false;
    int r;
    if (this->field20 != 0)
        r = sub_5618E0(this->field20);
    else
        r = 0;
    r = sub_55F610(r, 0x55e540);
    return r != 0;
}
