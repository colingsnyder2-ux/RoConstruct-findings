// from server: 20% by colin
// roc 2007-08 005f27f0  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f27f0

extern "C" void* __cdecl sub_62fef6(unsigned int size);
extern "C" void __fastcall sub_5f2770(void* self, void* arg);

struct BrickColorHolder {
    void construct(void* arg);
};

void BrickColorHolder::construct(void* arg)
{
    void* mem = sub_62fef6(0x10);
    if (mem) {
        sub_5f2770(mem, (char*)this + 4);
    }
}
