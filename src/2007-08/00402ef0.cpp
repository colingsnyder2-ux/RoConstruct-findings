// from server: 88% by colin
// roc 2007-08 00402ef0  unit: VCWorkspace::?$CComContainedObject  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00402ef0
//
// 00402ef0  8b442404             mov eax, dword ptr [esp + 4]
// 00402ef4  8b4030               mov eax, dword ptr [eax + 0x30]
// 00402ef7  8b08                 mov ecx, dword ptr [eax]
// 00402ef9  89442404             mov dword ptr [esp + 4], eax
// 00402efd  8b01                 mov eax, dword ptr [ecx]
// 00402eff  ffe0                 jmp eax

struct Inner {
    virtual int f();
};

struct Outer {
    char pad[0x30];
    Inner* inner;
};

int g(Outer* p)
{
    Inner* q = p->inner;
    int (**vtbl)(Inner*) = *(int (***)(Inner*))q;
    return vtbl[0](q);
}
