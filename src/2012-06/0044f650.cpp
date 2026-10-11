// from server: 79% by atomic.potato
struct S {
    char pad0[0x10];
    void** arr;
    unsigned int cap;
    unsigned int size;
    unsigned int pos;
    void insert(void*);
    void grow(int);
};

extern "C" void* __cdecl sub_98211A(unsigned int);

void S::insert(void* val) {
    unsigned int total = size + pos;
    if ((total & 3) == 0) {
        unsigned int idx = (pos + 4) >> 2;
        if (cap <= idx) {
            grow(1);
        }
    }
    unsigned int c = cap;
    unsigned int t = size + pos;
    unsigned int i = t >> 2;
    if (c <= i) {
        i -= c;
    }
    if (arr[i] == 0) {
        arr[i] = sub_98211A(0x10);
    }
    void** slot = (void**)((char*)arr[i] + (t & 3) * 4);
    if (slot) {
        void* v = *(void**)val;
        *slot = v;
        if (v) {
            (*(void(__thiscall**)(void*, int))v)(v, 1);
        }
    }
    pos++;
}
