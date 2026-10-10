// from server: 50% by colin
struct S {
    char pad0[0x14];
    int* field14;
    char pad18[0xC];
    int* field24;
    char pad28[0xC];
    int* field34;
    char pad38[0xC];
    char field44[4];
    char pad48[0xC];
    unsigned int field54;
    int put(int);
};

extern "C" int __stdcall sub_54B740(void*, void*, int, int);

int S::put(int arg)
{
    if ((field54 >> 3) & 1) {
        if (*field24 == 0) {
            void** vt = *(void***)this;
            int (*fn)(S*) = (int (*)(S*))vt[0x58 / 4];
            fn(this);
        }
    }

    if (arg == -1) {
        return 0;
    }

    if ((field54 >> 3) & 1) {
        int* p34 = field34;
        int* p24 = field24;
        int a = *p24;
        int b = *p34;
        int end = a + b;
        if (a == end) {
            int* p14 = field14;
            int c = *p14;
            int d = *p24;
            int diff = d - c;
            if (diff > 0) {
                sub_54B740((char*)this + 0x40, field44, c, diff);
            }
            int e = *field24;
            int f = e + b;
            if (e == f) {
                return -1;
            }
        }
        *(char*)*field24 = (char)arg;
        *field34 -= 1;
        *field24 += 1;
        return arg;
    } else {
        sub_54B740((char*)this + 0x40, field44, (int)&arg, 1);
        return 0;
    }
}
