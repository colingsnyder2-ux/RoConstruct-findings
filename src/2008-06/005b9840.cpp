// from server: 84% by atomic.potato
struct SoundChannel {
    char pad0[0x134];
    void* field134;
    void* field13c;
    void release();
    void cleanup();
};

extern "C" void* __stdcall sub_69fbf4(void*, int);
extern "C" void __stdcall sub_5b87a0(void*);
extern "C" void __stdcall sub_456e80(void*);

void SoundChannel::release() {
    if (field13c) {
        sub_5b87a0(sub_69fbf4(field13c, 0));
        field13c = 0;
    }
    if (field134) {
        --*(int*)((char*)field134 + 8);
        sub_456e80(&field134);
    }
}
