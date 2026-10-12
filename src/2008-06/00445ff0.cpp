// from server: 100% by king_originala
// roc 2008-06 00445ff0  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00445ff0
//
// 00445ff0  56                   push esi
// 00445ff1  8bf1                 mov esi, ecx
// 00445ff3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00445ff7  e814ffffff           call 0x445f10
// 00445ffc  d95c240c             fstp dword ptr [esp + 0xc]
// 00446000  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00446003  8b01                 mov eax, dword ptr [ecx]
// 00446005  8b400c               mov eax, dword ptr [eax + 0xc]
// 00446008  8d54240c             lea edx, [esp + 0xc]
// 0044600c  52                   push edx
// 0044600d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00446011  52                   push edx
// 00446012  ffd0                 call eax
// 00446014  5e                   pop esi
// 00446015  c20800               ret 8

struct Value {
    float convert();
};

struct Setter {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void set(void *, const float &);
};

struct S {
    char padding[24];
    Setter *setter;
    void f(void *, Value *);
};

void S::f(void *object, Value *value)
{
    float &converted = reinterpret_cast<float &>(value);
    converted = value->convert();
    setter->set(object, converted);
}
