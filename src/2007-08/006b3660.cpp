// from server: 100% by colin
// roc 2007-08 006b3660  unit: CXTPControlGallery  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b3660
//
// 006b3660  81c188feffff         add ecx, 0xfffffe88
// 006b3666  e89569f8ff           call 0x63a000
// 006b366b  8b80d0000000         mov eax, dword ptr [eax + 0xd0]
// 006b3671  c3                   ret 

struct Inner {
    char pad[0xd0];
    int value;
};

struct Outer {
    char pad[0x178];
    Inner inner;
};

extern "C" Inner* __fastcall get_inner(Outer* self);

struct CXTPControlGallery {
    int getValue();
};

int CXTPControlGallery::getValue() {
    Outer* o = (Outer*)((char*)this - 0x178);
    Inner* in = get_inner(o);
    return in->value;
}
