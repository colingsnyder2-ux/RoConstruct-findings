// from server: 60% by colin
struct WeldSelectionVerb {
    char pad[0x14];
    int field14;
    char pad2[0x8];
    int field20;
    bool method();
};

struct Inner {
    char pad[0xc];
    int field0c;
    int field10;
};

struct Outer {
    char pad[0x154];
    Inner* field154;
};

extern "C" Outer* __cdecl sub_581CC0(int* p);
extern "C" Outer* __cdecl sub_4153B0(int p);

bool WeldSelectionVerb::method() {
    Outer* o = sub_581CC0(&field14);
    Inner* in = o->field154;
    int count = (in->field10 - in->field0c) >> 3;
    if (count <= 0) {
        return false;
    }
    Outer* o2;
    if (field20 != 0) {
        o2 = sub_4153B0(field20);
    } else {
        o2 = 0;
    }
    Inner* in2 = o2->field154;
    int count2 = (in2->field10 - in2->field0c) >> 3;
    int eax = 0;
    unsigned int cmp = (unsigned int)eax - (unsigned int)count2;
    eax = (int)((cmp >> 31) ? 0xFFFFFFFF : 0);
    eax = -eax;
    return eax != 0;
}
