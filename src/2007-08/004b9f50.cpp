// from server: 37% by colin
struct RakPeer {
    void func(unsigned int* a, unsigned int* b);
};

extern "C" void __cdecl sub_4B9B60(void*, void*);
extern "C" void __cdecl sub_630B8C(void*, int, int, void*);

void RakPeer::func(unsigned int* a, unsigned int* b) {
    unsigned int buf[16];
    unsigned int i;
    for (i = 0; i < 16; ++i) {
        buf[i] = a[i];
    }
    sub_630B8C(buf, 0, 0x40, a);
    unsigned int acc = 0;
    unsigned int outer = 0;
    do {
        unsigned int v = b[outer];
        int shift = 0x20;
        if (v != 0) {
            while (1) {
                if (v & 1) {
                    if (acc != 0) {
                        sub_4B9B60(buf, (void*)acc);
                        acc = 0;
                    }
                    unsigned int* src = buf;
                    unsigned int cnt = 3;
                    unsigned int j = 0;
                    do {
                        unsigned int lo = src[0];
                        unsigned int hi = src[1];
                        unsigned int old = a[0];
                        unsigned int s = old + lo;
                        a[0] = s;
                        unsigned int carry = (s < old) ? 1 : 0;
                        old = a[1];
                        s = old + hi + carry;
                        a[1] = s;
                        carry = (s < old) ? 1 : 0;
                        old = a[2];
                        s = old + src[2] + carry;
                        a[2] = s;
                        carry = (s < old) ? 1 : 0;
                        old = a[3];
                        s = old + src[3] + carry;
                        a[3] = s;
                        src += 4;
                        a += 4;
                        ++j;
                    } while (j < cnt);
                }
                shift += 0xffff;
                v >>= 1;
                ++acc;
                if (v == 0) break;
            }
        }
        acc += (unsigned short)shift;
        ++outer;
    } while (outer < 8);
}
