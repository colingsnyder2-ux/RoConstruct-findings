// from server: 31% by colin
// roc 2007-08 004b01c0  unit: RBX::Network::VReplicator::?$SignalDesc  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b01c0

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

struct VReplicator {
    void constructSignalDesc(int arg);
};

extern "C" void* __cdecl operator_new(unsigned int size);
extern "C" void __cdecl SignalDesc_ctor(SignalDesc* self, int arg, void* parent);

void VReplicator::constructSignalDesc(int arg)
{
    SignalDesc* p = (SignalDesc*)operator_new(0x28);
    if (p != 0) {
        SignalDesc_ctor(p, arg, this);
    }
}
