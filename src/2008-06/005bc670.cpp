// from server: 77% by colin




struct SoundService {
    char pad0[0x134];
    int field134;
    char pad1[0x4];
    int field13c;
    void sub_5bc5b0();
    void cleanup();
};

extern "C" int __stdcall sub_69fbf4(int, int);
extern "C" void __stdcall sub_5b87a0(int);
extern "C" void __stdcall sub_456e80(void*);

void SoundService::cleanup()
{
    if (field13c) {
        sub_5b87a0(sub_69fbf4(field13c, 0));
        field13c = 0;
    }
    if (field134) {
        field134--;
        sub_456e80(&field134);
    }
    sub_5bc5b0();
}
