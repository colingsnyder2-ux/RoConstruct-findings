// from server: 47% by colin
struct CXTPAccessible {
    void* vtable;
    int field4;
    int field8;
    int fieldC;
    int field10;
    int field14;
    int field18;
    int field1C;
    int field20;
    void construct(int);
    CXTPAccessible* init(int);
};

extern "C" void __stdcall sub_77DDAC(int);
extern "C" void __cdecl sub_671F80(CXTPAccessible*, int);

CXTPAccessible* CXTPAccessible::init(int a1)
{
    this->vtable = (void*)0x7cb670;
    sub_77DDAC((int)(this + 1));
    this->field8 = 0;
    this->fieldC = 0;
    this->field10 = 0;
    this->field14 = 0;
    this->field18 = 0;
    this->field1C = 0;
    this->field20 = 0;
    sub_671F80(this, a1);
    return this;
}
