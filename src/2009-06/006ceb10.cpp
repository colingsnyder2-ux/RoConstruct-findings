// from server: 94% by why2
// roc 2009-06 006ceb10  unit: RBX::RevoluteLink  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ceb10

struct RevoluteLink {
    char pad0[4];
    void* field4;
    void* getSomething();
};

extern "C" void* __fastcall sub_6d4230(void*);

void* RevoluteLink::getSomething()
{
    void* p = field4;
    if (p != 0)
        return sub_6d4230(*(void**)((char*)p + 0x2c));
    return 0;
}
