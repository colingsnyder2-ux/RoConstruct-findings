// from server: 34% by colin
struct JointInstance {
    char pad0[8];
    int field8;
    char pad1[0x1c];
    char field28[0x30];
    char field58[0x30];
};

struct PartInstance {
    char pad0[0x64];
    int field64;
};

struct Joint {
    char pad0[0x84];
    char field84[0x40];
};

extern "C" void __stdcall sub_530100(int);
extern "C" void __stdcall sub_473200(void*, void*);
extern "C" void* __stdcall sub_4750b0(void*, void*);

struct WeldJoint : JointInstance {
    int computeWorld(PartInstance* a, PartInstance* b, void* out);
};

int WeldJoint::computeWorld(PartInstance* a, PartInstance* b, void* out) {
    char buf1[0x60];
    char buf2[0x30];
    char buf3[0x30];
    char* p1;
    char* p2;
    int v;

    if (a == (PartInstance*)field8) {
        p1 = field28;
    } else {
        p1 = field58;
    }

    if (b == (PartInstance*)field8) {
        p2 = field28;
    } else {
        p2 = field58;
    }

    v = b->field64;
    sub_530100(v);
    sub_473200((char*)v + 0x84, buf1);
    sub_4750b0(p1, buf2);
    sub_473200(buf2, buf3);
    sub_473200(buf3, buf1);
    *(void**)out = buf1;
    return (int)out;
}
