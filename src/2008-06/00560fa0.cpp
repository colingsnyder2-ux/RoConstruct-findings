// from server: 28% by tester
// roc 2008-06 00560fa0  unit: RBX::VContentProvider::?$DescribedNonCreatable  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00560fa0

extern "C" void __stdcall sub_802460();
extern "C" void* __cdecl sub_6a0920(unsigned int);
extern "C" void* __cdecl sub_554270();

struct S {
    char pad0[0x1c];
    void* field1c;
    char pad20[0x20];
    void* field40;
    char pad44[0xc];
    void* field50;
    void* field54;
    void* field58;
    S* ctor();
};

S* S::ctor()
{
    sub_802460();
    this->field1c = sub_554270();
    void* p = sub_6a0920(4);
    if (p == 0) {
        *(void**)p = &this->field40;
    } else {
        p = 0;
    }
    this->field40 = p;
    this->field50 = 0;
    this->field54 = 0;
    this->field58 = 0;
    return this;
}
