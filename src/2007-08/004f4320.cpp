// from server: 46% by colin
struct S {
    int field0;
    int field4;
    int field8;
    void sub_4f3ef0(int);
    void sub_50f6d0();
    void func(int, int);
};

extern "C" int __cdecl sub_630d60(float);
extern "C" float g_797b38;
extern "C" float g_797b34;
extern "C" float g_797988;
extern "C" int g_8bfbb0;
extern "C" int g_8bfbb4;

void S::func(int a, int b)
{
    int old4 = this->field4;
    this->field4 = a;

    int edi;
    if ((g_8bfbb4 & 1) == 0) {
        g_8bfbb4 |= 1;
        edi = 10;
        g_8bfbb0 = edi;
    } else {
        edi = g_8bfbb0;
    }

    int ebp = this->field4;
    int ecx = this->field8;

    if (ebp > ecx) {
        if (ecx == 0) {
            this->field8 = a;
            this->sub_4f3ef0(old4);
        } else if (ebp < edi) {
            this->field8 = edi;
            this->sub_4f3ef0(old4);
        } else {
            float f = g_797b38;
            int eax = ecx << 4;
            if (eax > 0x61a80) {
                f = g_797b34;
            } else if (eax > 0xfa00) {
                f = g_797988;
            }
            int tmp = ecx;
            float prod = (float)tmp * f;
            int r = sub_630d60(prod);
            r = r - tmp + ebp;
            this->field8 = r;
            int c = g_8bfbb0;
            if (r < c) {
                this->field8 = c;
            }
            this->sub_4f3ef0(old4);
        }
    } else {
        int eax = (int)(((long long)ecx * 0x55555556) >> 32);
        eax = (eax >> 31) + eax;
        if (ebp > eax) {
            // skip
        } else if (*(char*)&b == 0) {
            // skip
        } else if (ebp <= edi) {
            // skip
        } else {
            if (ebp >= old4) {
                ebp = old4;
            }
            this->sub_4f3ef0(ebp);
        }
    }

    if (old4 < this->field4) {
        int i = old4;
        int neg = -1;
        while (i < this->field4) {
            int p = (i << 4) + this->field0;
            if (p != 0) {
                this->sub_50f6d0();
            }
            i++;
        }
    }
}
