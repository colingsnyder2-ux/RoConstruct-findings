// from server: 41% by colin
struct S {
    int field0;
    int field4;
};

extern "C" int __cdecl sub_5ca0c0(int a, int b);
extern "C" int __cdecl sub_5ca1e0(const char* a, int b, int c);
extern "C" int __cdecl sub_5ca5a0(S* a, int b, int c);

int __cdecl sub_5ca2f0(S* a, int b, const char* c, int d) {
    int i = b;
    int count = 0;
    while (i < a->field4) {
        unsigned char ch = (unsigned char)c[0];
        unsigned char cur = (unsigned char)((char*)&a->field0)[i];
        int match;
        if (ch != '%') {
            int next = (unsigned char)c[1];
            match = sub_5ca0c0(next, cur);
        } else if (ch == '.') {
            match = 1;
        } else if (ch == '[') {
            match = sub_5ca1e0(c, cur, d - 1);
        } else {
            match = (ch == cur);
        }
        if (!match) break;
        i++;
        count++;
    }
    if (count < 0) {
        return 0;
    }
    while (1) {
        int r = sub_5ca5a0(a, b + count, d + 1);
        if (r != 0) return r;
        count--;
        if (count < 0) return 0;
    }
}
