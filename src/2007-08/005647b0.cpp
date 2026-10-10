// from server: 73% by colin
struct ControllerCommand {
    char pad[0x14];
    int field14;
    char pad2[0x8];
    int field20;
    bool method();
};

extern "C" int __fastcall sub_562300(int, int);
extern "C" int __fastcall sub_5618e0(int);
extern "C" int __fastcall sub_55f610(int, int);

bool ControllerCommand::method() {
    int p = sub_562300((int)this + 0x14, 1);
    int q = *(int*)(p + 0x104);
    int begin = *(int*)(q + 4);
    if (begin != 0) {
        int end = *(int*)(q + 8);
        if ((end - begin) >> 3 != 0) {
            int r;
            if (this->field20 != 0) {
                r = sub_5618e0(this->field20);
            } else {
                r = 0;
            }
            int result = sub_55f610(r, 0x55e540);
            return result != 0;
        }
    }
    return false;
}
