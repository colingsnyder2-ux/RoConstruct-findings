// from server: 47% by colin
// roc 2007-08 004b0c40  unit: RBX::Network::VReplicator::?$SignalDesc  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b0c40

extern "C" void* __cdecl sub_579890();
extern "C" void __cdecl sub_630BDC(void*, int, int, void*, void*);

extern void* dword_77E6A4;
extern void* dword_77E6AC;

struct SignalDesc {
    void* field0;
    void* field4;
    int field8;
    char pad[0xE00];
    int fieldE0C;

    SignalDesc();
};

SignalDesc::SignalDesc()
{
    void* p = sub_579890();
    field4 = p;
    *((char*)p + 0x2D) = 1;
    void* q = field4;
    *((void**)((char*)q + 4)) = q;
    void* r = field4;
    *((void**)r) = r;
    void* s = field4;
    *((void**)((char*)s + 8)) = s;
    field8 = 0;
    sub_630BDC(&field8, 0x1C, 0x80, dword_77E6A4, dword_77E6AC);
    fieldE0C = 0;
}
