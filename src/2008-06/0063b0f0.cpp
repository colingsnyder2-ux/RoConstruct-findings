// from server: 77% by atomic.potato
struct Inner {
    char pad[0x10];
    void sub_6395d0(void*);
};

struct Outer {
    char pad0[0x14];
    char field14;
    char pad1[0x130 - 0x15];
    int field130;
    void sub_63b0f0(int);
};

extern "C" void* __stdcall sub_56b620(int, void*);

void Outer::sub_63b0f0(int arg) {
    void* p;
    if (this) {
        p = &field14;
    } else {
        p = 0;
    }
    int v = field130;
    void* r = sub_56b620(0x97d2ec, p);
    if (r) {
        Inner* inner = (Inner*)((char*)r + 0x10);
        inner->sub_6395d0(&v);
    }
}
