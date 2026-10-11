// from server: 27% by colin
struct InterpolatingPhysicsReceiver {
    char pad0[0x10];
    char flag10;
    char pad11[7];
    int field18;
    void sub_4c9a10();
    void sub_4a51a0();
    void destroy();
};

void InterpolatingPhysicsReceiver::destroy() {
    if (flag10 != 0) {
        sub_4c9a10();
    }
    sub_4a51a0();
}
