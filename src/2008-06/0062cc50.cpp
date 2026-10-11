// from server: 2% by colin
struct FlagStand {
    char pad[0x3e8];
    int field_3e8;
    void sub_5954b0();
    void sub_62b970();
    ~FlagStand();
};

void FlagStand::sub_5954b0() {}

void FlagStand::sub_62b970() {}

FlagStand::~FlagStand() {
    sub_5954b0();
    sub_62b970();
}
