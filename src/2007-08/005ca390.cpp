// from server: 42% by colin
// roc 2007-08 005ca390  unit: seg_005c0000  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ca390

extern "C" int __cdecl sub_5ca5a0(int, int, int);
extern "C" int __cdecl sub_5ca1e0(int, int, int);
extern "C" int __cdecl sub_5ca0c0(int);

struct S {
    int field0;
    int field4;
    int f(int a, int b, int c);
};

int S::f(int a, int b, int c) {
    int result;
    int i;
    unsigned char ch;
    int idx;

    result = sub_5ca5a0((int)this, a, b + 1);
    if (result != 0)
        return result;

    i = a;
    while ((unsigned int)i < (unsigned int)this->field4) {
        ch = *(unsigned char*)c;
        idx = *(unsigned char*)i;
        if (ch != 0x25) {
            int t = *(unsigned char*)(c + 1);
            result = sub_5ca0c0(t);
        } else if (ch != 0x2e) {
            goto advance;
        } else if (ch == 0x5b) {
            result = sub_5ca1e0(c, idx, b - 1);
        } else {
            result = (ch == (unsigned char)idx) ? 1 : 0;
        }
        if (result == 0)
            return 0;
    advance:
        i++;
        result = sub_5ca5a0((int)this, i, b + 1);
        if (result != 0)
            return result;
    }
    return 0;
}
