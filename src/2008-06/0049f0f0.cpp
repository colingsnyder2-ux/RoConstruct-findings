// from server: 100% by king_originala
// roc 2008-06 0049f0f0  unit: RBX::Network::VClient::?$FactoryProduct  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049f0f0
//
// 0049f0f0  56                   push esi
// 0049f0f1  8bf1                 mov esi, ecx
// 0049f0f3  e8d8be0b00           call 0x55afd0
// 0049f0f8  8b964c010000         mov edx, dword ptr [esi + 0x14c]
// 0049f0fe  8b8e40010000         mov ecx, dword ptr [esi + 0x140]
// 0049f104  8b01                 mov eax, dword ptr [ecx]
// 0049f106  8b4064               mov eax, dword ptr [eax + 0x64]
// 0049f109  6a00                 push 0
// 0049f10b  6a01                 push 1
// 0049f10d  52                   push edx
// 0049f10e  8b9648010000         mov edx, dword ptr [esi + 0x148]
// 0049f114  52                   push edx
// 0049f115  ffd0                 call eax
// 0049f117  8b8e40010000         mov ecx, dword ptr [esi + 0x140]
// 0049f11d  8b11                 mov edx, dword ptr [ecx]
// 0049f11f  8b442408             mov eax, dword ptr [esp + 8]
// 0049f123  8b5228               mov edx, dword ptr [edx + 0x28]
// 0049f126  6a00                 push 0
// 0049f128  50                   push eax
// 0049f129  ffd2                 call edx
// 0049f12b  5e                   pop esi
// 0049f12c  c20400               ret 4

struct Interface {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual void slot7();
    virtual void slot8();
    virtual void slot9();
    virtual void finish(int, int);
    virtual void slot11();
    virtual void slot12();
    virtual void slot13();
    virtual void slot14();
    virtual void slot15();
    virtual void slot16();
    virtual void slot17();
    virtual void slot18();
    virtual void slot19();
    virtual void slot20();
    virtual void slot21();
    virtual void slot22();
    virtual void slot23();
    virtual void slot24();
    virtual void configure(int, int, int, int);
};

struct S {
    char padding[0x140];
    Interface* object;
    char padding144[4];
    int first;
    int second;

    void prepare();
    void f(int value);
};

void S::f(int value)
{
    prepare();
    object->configure(first, second, 1, 0);
    object->finish(value, 0);
}
