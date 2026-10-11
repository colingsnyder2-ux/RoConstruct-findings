// from server: 14% by tester
extern "C" void* __cdecl malloc(unsigned int size);

struct Item {
    void construct(void*);
};

struct TypedStatsItem {
    void* func;
    void init(void* f);
};

void TypedStatsItem::init(void* f) {
    func = f;
}

void __fastcall sub_45EEF0(void* self, void* arg);

void __fastcall sub_45C300(void* self, void* a, void* b);

void* __fastcall createTypedStatsItem(void* self, void* arg) {
    void* mem = malloc(0x178);
    void* obj = 0;
    if (mem) {
        sub_45EEF0(mem, arg);
        obj = mem;
    }
    sub_45C300(self, obj, 0);
    return self;
}
