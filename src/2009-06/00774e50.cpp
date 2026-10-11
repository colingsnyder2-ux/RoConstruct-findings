// from server: 74% by atomic.potato
struct Inner {
    char pad_000[0x148];
    int field_148;
    char pad_14c[0xe4];
    void* field_e4;
};

struct CXTPPropertyGrid {
    char pad_000[0x138];
    void* field_138;

    void sub_774e50();
    Inner* sub_772d50();
};

extern "C" void __stdcall sub_774c80(void*);

extern "C" void __stdcall sub_78d4f0(void*);
extern "C" void __stdcall sub_78b3c0(void*);

void CXTPPropertyGrid::sub_774e50() {
    sub_774c80(this->field_138);
    Inner* p = sub_772d50();
    sub_78d4f0(p);
    Inner* q = sub_772d50();
    q->field_148++;
    Inner* r = sub_772d50();
    sub_78b3c0(r->field_e4);
    Inner* s = sub_772d50();
    s->field_148--;
}
