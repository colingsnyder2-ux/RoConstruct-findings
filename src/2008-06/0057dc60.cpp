// from server: 42% by tester
struct Inner {
    char pad[0x288];
    void* vtbl;
};

struct RayOut {
    char pad[0x24];
    float maxT;
};

extern "C" void __fastcall Ray_copy(void* self, void*, RayOut* out);

struct TiltSelectionVerb {
    char pad[0xc];
    Inner* inner;
    RayOut getRotationAxis();
};

RayOut TiltSelectionVerb::getRotationAxis() {
    Inner* p = this->inner;
    void** vt = (void**)p->vtbl;
    RayOut out;
    typedef void (__fastcall *Fn)(Inner*, void*, RayOut*);
    Fn fn = (Fn)vt[2];
    fn(p, 0, &out);
    Ray_copy(0, 0, &out);
    return out;
}
