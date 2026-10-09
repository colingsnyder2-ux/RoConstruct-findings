// from server: 84% by colin
// roc 2007-08 0054f930  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054f930

extern "C" int __stdcall sputn_helper(void*, const char*, int);

struct S {
    char pad0[0xc];
    char* buf;
    char pad1[0x1c - 0x10];
    int len;
    int cap;
    char pad2[0x40 - 0x24];
    int pos;
    int flags;
    int f(int, int, int);
};

int S::f(int a, int b, int c) {
    if (!(flags & 1)) {
        int n = len - pos;
        char* p;
        if (cap < 0x10)
            p = (char*)this + 0xc;
        else
            p = buf;
        p += pos;
        int r = sputn_helper((void*)a, p, n);
        pos += r;
        if (pos == len) {
            flags |= 1;
        } else {
            return 0;
        }
    }
    return ((int (__thiscall*)(S*, int, int, int))0x54f6b0)(this, a, b, c);
}
