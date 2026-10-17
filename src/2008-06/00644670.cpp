// from server: 79% by colin
struct HumanoidState;

struct Climbing {
    char pad0[8];
    HumanoidState* humanoid;
    float field_c;
    unsigned char field_11;
    char pad3[0x20 - 0x11 - 1];
    unsigned char field_20;
    char pad4[0x24 - 0x20 - 1];
    int field_24;
    bool method_6444f0();
    bool method_643a30();
    bool method_643a50();
    void* method_643eb0();
    bool dispatch(int index);
};

struct HumanoidState {
    char pad0[0x1e8];
    unsigned char flags;
};

bool Climbing::dispatch(int index) {
    switch (index) {
    case 0:
        return (humanoid->flags >> 1) & 1;
    case 1:
        return humanoid->flags & 1;
    case 2:
        return (humanoid->flags >> 3) & 1;
    case 3:
        return (~(humanoid->flags >> 3)) & 1;
    case 4:
        return method_643a30();
    case 5:
        return method_643a50();
    case 6:
        return field_20 != 0;
    case 7:
        return field_20 == 0;
    case 8:
        return (humanoid->flags >> 4) & 1;
    case 9:
        return (~(humanoid->flags >> 4)) & 1;
    case 10:
        return field_24 != 0;
    case 11:
        return field_24 == 0;
    case 12:
        return method_6444f0();
    case 13:
        return !method_6444f0();
    case 14:
        return !(0.0f > field_c);
    case 15:
        return field_11 != 0;
    case 16:
        method_643eb0();
        return false;
    default:
        return false;
    }
}
