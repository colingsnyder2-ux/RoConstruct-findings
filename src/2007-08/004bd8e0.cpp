// from server: 39% by tester
struct RakPeer;

struct Addr {
    unsigned int a;
    unsigned int b;
    unsigned int c;
    unsigned int d;
    unsigned int e;
    unsigned int f;
    unsigned int g;
    unsigned int h;
};

extern "C" bool __cdecl sub_4B9A80(RakPeer* peer, Addr* addr);
extern "C" void __cdecl sub_4BB9C0(RakPeer* peer, Addr* addr, unsigned char* out);
extern "C" int __cdecl memcmp(const void* a, const void* b, unsigned int n);

struct RakPeer {
    bool f(RakPeer* other, Addr* out);
};

bool RakPeer::f(RakPeer* other, Addr* out) {
    unsigned char buf[0x20];
    unsigned char tmp[0x20];
    Addr local;
    unsigned int i;
    unsigned int j;

    out->a = 0xffff;
    out->b = 0;
    out->c = 0;
    out->d = 0;
    out->e = 0;
    out->f = 0;
    out->g = 0;
    out->h = 0;

    local.a = 0;
    local.b = 0;
    local.c = 0;
    local.d = 0;
    local.e = 0;
    local.f = 0;
    local.g = 0;
    local.h = 0;

    i = 1;
    local.c = 2;

    if (sub_4B9A80(other, out)) {
        out->a = 3;
        out->b = 0;
        out->c = 0;
        out->d = 0;
        out->e = 0;
        out->f = 0;
        out->g = 0;
        out->h = 0;
    }

    for (;;) {
        unsigned int* src = (unsigned int*)&local;
        unsigned int* dst = (unsigned int*)out;
        unsigned int carry = 0;
        unsigned int k;

        dst[0] += src[0];
        carry = (dst[0] < src[0]) ? 1 : 0;
        dst[1] += src[1] + carry;
        carry = (dst[1] < src[1] + carry) ? 1 : 0;
        dst[2] += src[2] + carry;
        carry = (dst[2] < src[2] + carry) ? 1 : 0;
        dst[3] += src[3] + carry;
        carry = (dst[3] < src[3] + carry) ? 1 : 0;

        for (k = 0; k < i; k++) {
            dst[2 + k * 2] += src[2 + k * 2] + carry;
            carry = (dst[2 + k * 2] < src[2 + k * 2] + carry) ? 1 : 0;
            dst[3 + k * 2] += src[3 + k * 2] + carry;
            carry = (dst[3 + k * 2] < src[3 + k * 2] + carry) ? 1 : 0;
            dst[4 + k * 2] += src[4 + k * 2] + carry;
            carry = (dst[4 + k * 2] < src[4 + k * 2] + carry) ? 1 : 0;
            dst[5 + k * 2] += src[5 + k * 2] + carry;
            carry = (dst[5 + k * 2] < src[5 + k * 2] + carry) ? 1 : 0;
        }

        sub_4BB9C0(other, out, tmp);

        if (memcmp(tmp, &i, 0x20) == 0) {
            break;
        }
    }

    return true;
}
