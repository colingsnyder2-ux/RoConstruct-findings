// from server: 67% by colin
struct Vector3 {
    float x, y, z;
};

struct Frame {
    unsigned char padding[0x24];
    Vector3 position;
};

struct Body {
    unsigned char padding[0xc4];
    Vector3 value;
    void updatePV();
};

extern "C" int __cdecl sub_69fbdc(int, unsigned char *);

struct SoundChannel {
    unsigned char padding[0xc];
    int field_c;

    void sub_5ba3d0(int, int, int);
};

void SoundChannel::sub_5ba3d0(int, int, int)
{
    unsigned char local = 0;
    int v = field_c;
    Body *body = (Body *)((unsigned char *)this - 0x130);
    if (v != 0) {
        if (sub_69fbdc(v, &local) == 0x24)
            return;
        if (local != 0)
            return;
        body->updatePV();
    }
}
