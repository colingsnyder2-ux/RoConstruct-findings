// from server: 72% by colin
struct CopyVerb {
    unsigned short flags;
    unsigned short pad;
    int field4;
    int field8;
    CopyVerb* copy(CopyVerb* other);
};

extern "C" long __stdcall SafeArrayCopy(void*, void**);

extern "C" void __cdecl sub_401000(unsigned int);

extern "C" void __cdecl sub_4114F0(CopyVerb*, CopyVerb*);

CopyVerb* CopyVerb::copy(CopyVerb* other) {
    if (other == 0) {
        flags = 0;
        return this;
    }

    void* dest = 0;
    long hr = SafeArrayCopy(other, &dest);
    if (hr < 0 || dest == 0) {
        flags = 0xa;
        field8 = hr;
        sub_401000(0x8007000e);
        return this;
    }

    sub_4114F0(this, other);
    flags |= 0x2000;
    field8 = (int)dest;
    return this;
}
