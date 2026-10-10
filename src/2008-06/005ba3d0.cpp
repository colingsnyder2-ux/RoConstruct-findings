// from server: 33% by colin
struct SoundChannel {
    char pad[0xc];
    void* field_c;
    void update();
};

struct Other {
    void method(void* arg);
};

extern "C" int __cdecl sub_69fbdc(void* a, char* b);

void SoundChannel::update() {
    char local;
    if (field_c) {
        int r = sub_69fbdc(field_c, &local);
        if (r != 0x24 && local == 0) {
            ((Other*)((char*)this - 0x130))->method(field_c);
        }
    }
}
