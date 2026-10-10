// from server: 34% by colin
struct SignalDesc {
    void* field0;
    void* field4;
    void* field8;
    void* fieldC;
    void* field10;
    void* field14;
    void* field18;
    void* field1C;
    void* field20;
    void* field24;
};

struct VMarker {
    SignalDesc* construct(SignalDesc* desc);
};

extern "C" void* __cdecl operator_new(unsigned int size);
extern "C" void __cdecl SignalDesc_ctor(SignalDesc* self, void* a, void* b);

SignalDesc* VMarker::construct(SignalDesc* desc)
{
    SignalDesc* p = (SignalDesc*)operator_new(0x28);
    if (p) {
        SignalDesc_ctor(p, desc, this);
    }
    return p;
}
