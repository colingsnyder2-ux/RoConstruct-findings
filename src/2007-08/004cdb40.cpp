// from server: 94% by colin
// roc 2007-08 004cdb40  unit: seg_004c0000  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004cdb40

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl operator_delete(void*);

struct type_info {
    bool operator==(const type_info&) const;
};

void* __cdecl func(void* arg, int op);

void* __cdecl func(void* arg, int op) {
    if (op == 2) {
        void* p = arg;
        if (*(const type_info*)0x896920 == *(const type_info*)p)
            return p;
        return 0;
    }
    if (op == 0) {
        void* p = operator_new(0xc);
        if (p) {
            *(int*)p = *(int*)arg;
            *(int*)((char*)p + 4) = *(int*)((char*)arg + 4);
            *(int*)((char*)p + 8) = *(int*)((char*)arg + 8);
        }
        return p;
    }
    operator_delete(arg);
    return 0;
}
