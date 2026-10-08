// from server: 61% by colin
// roc 2007-08 00570da0  unit: RBX::Reflection::ClassDescriptor  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00570da0
//
// 00570da0  8b442404             mov eax, dword ptr [esp + 4]
// 00570da4  8b4008               mov eax, dword ptr [eax + 8]
// 00570da7  89442404             mov dword ptr [esp + 4], eax
// 00570dab  e950ffffff           jmp 0x570d00

struct Descriptor {
    int field0;
    int field4;
    int field8;
};

struct ClassDescriptor {
    Descriptor* getBase(Descriptor* d) const;
};

Descriptor* ClassDescriptor::getBase(Descriptor* d) const {
    return *(Descriptor**)((char*)d + 8);
}
