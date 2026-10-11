// from server: 75% by atomic.potato
struct Clump;

struct ClumpVtbl {
    void* pad0[4];
    int (__thiscall* fn10)(Clump*);
    int (__thiscall* fn14)(Clump*);
};

struct Clump {
    char pad0[0xc];
    Clump** items;
    int count;
    char pad14[8];
    void* field1c;
    void recurse(Clump* other);
};

struct Inner {
    char pad0[0x2c];
    void* field2c;
};

struct Vec {
    char pad0[4];
    int end;
    int cap;
    char padc[4];
    void push_back(Clump** p);
};

void Clump::recurse(Clump* other) {
    void* p = field1c;
    Inner* inner;
    if (p) {
        inner = (Inner*)((char*)p - 8);
    } else {
        inner = 0;
    }
    Clump* target;
    if (inner) {
        void* q = inner->field2c;
        if (q) {
            target = (Clump*)((char*)q - 0x20);
        } else {
            target = 0;
        }
    } else {
        target = 0;
    }
    ClumpVtbl* vt = *(ClumpVtbl**)target;
    int r = vt->fn10(target);
    if (r == 0) {
        int r2 = vt->fn14(target);
        if (r2 == 3) {
            Vec* v = (Vec*)other;
            v->push_back(&target);
        }
    }
    int i = 0;
    if (count > 0) {
        do {
            items[i]->recurse(other);
            i++;
        } while (i < count);
    }
}
