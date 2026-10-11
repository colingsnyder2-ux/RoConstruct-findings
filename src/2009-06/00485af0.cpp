// from server: 97% by atomic.potato
struct QuadVolumeBuilder {
    char pad0[0x34];
    void* field34;
    void* field38;
    QuadVolumeBuilder* method(void* arg);
};

extern "C" void* __cdecl sub_52fff0(void*);
extern "C" void* __cdecl sub_52c3a0(void*);

QuadVolumeBuilder* QuadVolumeBuilder::method(void* arg) {
    sub_52fff0(arg);
    field34 = sub_52c3a0(field34);
    field38 = sub_52c3a0(field38);
    return this;
}
