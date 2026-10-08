// from server: 100% by colin
// roc 2007-08 005b9120  unit: RBX::VFaceInstance::?$EnumPropDescriptor  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b9120
//
// 005b9120  8b4104               mov eax, dword ptr [ecx + 4]
// 005b9123  8b09                 mov ecx, dword ptr [ecx]
// 005b9125  8b91d8010000         mov edx, dword ptr [ecx + 0x1d8]
// 005b912b  8b44827c             mov eax, dword ptr [edx + eax*4 + 0x7c]
// 005b912f  c3                   ret 

struct EnumPropDescriptor {
    int getValue() const;
};

int EnumPropDescriptor::getValue() const {
    int idx = *(int*)((char*)this + 4);
    int obj = *(int*)this;
    int vtbl = *(int*)(obj + 0x1d8);
    return *(int*)(vtbl + idx * 4 + 0x7c);
}
