// from server: 79% by atomic.potato
// roc 2007-03 006d7d10  unit: seg_006d0000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006d7d10

struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

extern "C" void* __cdecl __RTDynamicCast(void*, long, void*, void*, int);
extern "C" void* __cdecl __RTCastToVoid(void*);

struct S {
};

void* __cdecl f(void* p) {
    if (p == 0) {
        return 0;
    }
    void* obj = *(void**)p;
    void* ti;
    if (obj != 0) {
        ti = (void*)(*(void***)obj)[1];
        ti = ((void* (__thiscall*)(void*))ti)(obj);
    } else {
        ti = (void*)0xc07a44;
    }
    if (((bool (__thiscall*)(void*, void*))0xa40a50)(ti, (void*)0xc3ec20)) {
        return (char*)p + 4;
    }
    return 0;
}
