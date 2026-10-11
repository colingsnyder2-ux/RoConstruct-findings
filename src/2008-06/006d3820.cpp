// from server: 31% by atomic.potato
struct Inner {
    void AddRef();
    void Release();
};

struct Row {
    char pad0[8];
    int field8;
    int Insert(int idx, void* p);
};

extern "C" void __stdcall InterlockedIncrement(long*);
extern "C" void __stdcall sub_6A0BE4(Inner*);
extern "C" void __stdcall sub_6D0630(Row*, int, void*);

struct Holder {
    void* vt;
    Inner* ptr;
    ~Holder();
};

int Row::Insert(int idx, void* p) {
    return 0;
}

int __stdcall sub_6D3820(Row* self, int a, Inner* p) {
    Holder h;
    h.vt = (void*)0x853b9c;
    h.ptr = p;
    if (a != 0 && p != 0) {
        InterlockedIncrement((long*)((char*)p + 4));
    }
    int r = self->field8;
    sub_6D0630(self, r, &h);
    if (p != 0) {
        sub_6A0BE4(p);
    }
    return r;
}
