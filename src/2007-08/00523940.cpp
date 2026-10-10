// from server: 44% by tester
// roc 2007-08 00523940  unit: seg_00520000  size: 475 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00523940

extern "C" {
    int __cdecl sub_514BA0(int, int, int, int);
    int __cdecl sub_515380(int, int);
    int __cdecl sub_51E9F0(int, int);
    int __cdecl sub_51EC80(int, int);
    int __cdecl sub_51ECD0(int, int);
    int __cdecl sub_5206A0(int, int, int);
    int __cdecl sub_520AD0(int, int);
    int __cdecl sub_521750(int, int);
    void __cdecl sub_630A1E();
}

struct S {
    char pad0[0x68];
    unsigned int flags68;
    unsigned int flags6c;
    char pad70[0x11c - 0x70];
    char buf11c[0x100];
    int field21c;
    int __cdecl method(int a, int b);
};

int S::method(int a, int b)
{
    unsigned int f68 = this->flags68;
    int result = 0;
    if (f68 & 4) {
        const char* p = (const char*)0x7a1584;
        const char* q = this->buf11c;
        int cmp = 0;
        int i = 4;
        while (i >= 4) {
            if (*(const int*)q != *(const int*)p) {
                break;
            }
            i -= 4;
            p += 4;
            q += 4;
            if (i < 4) {
                if (i == 0) {
                    cmp = 0;
                    goto done_cmp;
                }
                break;
            }
        }
        {
            int n = i;
            while (n != 0) {
                int d = (unsigned char)*q - (unsigned char)*p;
                if (d != 0) {
                    cmp = d;
                    goto done_cmp;
                }
                n--;
                p++;
                q++;
            }
            cmp = 0;
        }
    done_cmp:
        if (cmp != 0) {
            this->flags68 = f68 | 8;
        }
    }
    char* esi = this->buf11c;
    sub_520AD0((int)this, (int)esi);
    if (!(esi[0] & 0x20)) {
        int r = sub_515380((int)this, (int)esi);
        if (r != 3 && this->field21c == 0) {
            sub_51E9F0((int)this, 0x7a4408);
        }
    }
    if (this->flags6c & 0x8000) {
        char local[0x14];
        char* d = local;
        char* s = esi;
        char c;
        do {
            c = *s;
            *d = c;
            s++;
            d++;
        } while (c != 0);
        int r = sub_51EC80((int)this, b);
        int saved = r;
        sub_5206A0((int)this, r, b);
        int cb = this->field21c;
        if (cb != 0) {
            int r2 = ((int (__cdecl*)(int, char*))cb)((int)this, local);
            if (r2 > 0) {
                sub_51ECD0((int)this, b);
                return saved;
            }
            if (!(esi[0] & 0x20)) {
                int r3 = sub_515380((int)this, (int)esi);
                if (r3 != 3) {
                    sub_51ECD0((int)this, a);
                    sub_51E9F0((int)this, 0x7a4408);
                }
            }
            sub_514BA0((int)this, (int)local, 1, a);
        } else {
            sub_514BA0((int)this, (int)local, 1, a);
        }
        sub_51ECD0((int)this, b);
        result = saved;
    } else {
        result = b;
    }
    sub_521750((int)this, result);
    return result;
}
