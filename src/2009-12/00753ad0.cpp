// roc 2009-12 00753ad0  unit: RBX::VehicleSeat  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00753ad0
//
// 00753ad0  8b81d0feffff         mov eax, dword ptr [ecx - 0x130]
// 00753ad6  8b88f4000000         mov ecx, dword ptr [eax + 0xf4]
// 00753adc  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 00753adf  c3                   ret 
// copied from an identical function in another client (function ?get@S@ns_ROCX000005@@QAEHXZ)

namespace ns_ROCX000005 {
// from server: 100% by tester
struct S {
    char pad[0x2c];
    int field_2c;

    int get();
};

struct Inner {
    char pad[0x2c];
    int field_2c;
};

struct Outer {
    char pad[0xf4];
    Inner* inner;
};

int S::get() {
    Outer* o = *(Outer**)((char*)this - 0x130);
    return o->inner->field_2c;
}
}
