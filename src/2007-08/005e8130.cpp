// from server: 43% by colin
// roc 2007-08 005e8130  unit: RBX::VInstance  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e8130

struct VInstance {
    void* field0;
    void* field4;
    void construct(void* arg);
};

extern "C" void* __cdecl operator_new(unsigned int size);
extern "C" void __cdecl VInstance_ctor(void* mem, void* arg);

void VInstance::construct(void* arg)
{
    void* mem = operator_new(0x10);
    if (mem) {
        VInstance_ctor(mem, &field4);
    }
}
