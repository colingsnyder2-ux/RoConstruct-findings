// from server: 61% by colin
struct Inner {
    char pad0[0x2c];
    int field2c;
};

struct Sub {
    char pad0[0xa8];
    Inner* p;
    char pad_ac[0x04];
    int fieldb0;
};

struct Outer {
    char pad0[0x1a0];
    int field1a0;
    int method1f80(int);
    int method6e28c0(int, int, int, int, int);
};

extern "C" int __stdcall sub_6fe860(Sub*, int, int);

int Outer::method6e28c0(int a, int b, int c, int d, int e)
{
    Sub* s = (Sub*)((char*)this + 0xa8);
    Inner* in = s->p;
    int r = in->field2c;
    (void)r;
    if (s->fieldb0 != 0) {
        int v = sub_6fe860(s, c, d);
        if (v != 0) {
            int x = method1f80(*(int*)(v + 0x2c));
            if (field1a0 != x) {
                int (Outer::*fn)(int, int, int);
                *(int*)&fn = *(int*)(*(int*)this + 0x13c);
                (this->*fn)(x, 0, 0);
            }
        }
    }
    return 0;
}
