// from server: 41% by tester




struct RakPeer;

struct Addr {
    unsigned int a[8];
};

struct Blk {
    unsigned int v[8];
};

extern "C" void __cdecl sub_630B8C(void*);
extern "C" void __cdecl sub_4BB150(void*, void*, void*);
extern "C" void __cdecl sub_4BB7A0(void*);
extern "C" void __cdecl sub_4BB8C0(void*, void*, void*);

void __cdecl f(RakPeer* self, Addr* a, Addr* b, Addr* c, Blk* out)
{
    Addr la;
    Addr lb;
    Addr lc;
    Blk tmp;
    Blk acc;
    int i;
    int bit;
    unsigned int v;
    int j;

    la = *a;
    lb = *b;
    lc = *c;

    for (i = 0; i < 8; ++i) {
        tmp.v[i] = 0;
        acc.v[i] = 0;
    }

    sub_630B8C(&tmp);

    sub_4BB150(&la, &lc, &la);

    bit = 0;
    for (j = 0; j < 8; ++j) {
        v = acc.v[j];
        if (v != 0) {
            int k = 32;
            while (v != 0) {
                if (v & 1) {
                    int n = bit;
                    while (n != 0) {
                        sub_4BB7A0(&la);
                        sub_4BB150(&la, &lc, &la);
                        --n;
                    }
                    sub_4BB8C0(&tmp, &la, &tmp);
                    sub_4BB150(&lb, &la, &lb);
                }
                v >>= 1;
                ++bit;
                --k;
                if (v == 0)
                    break;
            }
            bit += k;
        } else {
            bit += 32;
        }
    }

    *out = tmp;
}
