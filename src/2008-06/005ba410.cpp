// from server: 37% by colin
struct SoundChannel {
    void* field0;
    char pad[8];
    void* fieldC;
    void destroy();
};

extern "C" void* __stdcall sub_69FC12(void*);
extern "C" void __stdcall sub_5B87A0(void*);
extern "C" void __stdcall sub_802468(void*);

void SoundChannel::destroy() {
    void* p = field0;
    if (p) {
        sub_5B87A0(sub_69FC12(p));
        field0 = 0;
    }
    sub_802468(&fieldC);
}
