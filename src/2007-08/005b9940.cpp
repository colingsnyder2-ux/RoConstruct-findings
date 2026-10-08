// from server: 80% by colin
// roc 2007-08 005b9940  unit: RBX::VFaceInstance::?$EnumPropDescriptor  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b9940
//
// 005b9940  8b442404             mov eax, dword ptr [esp + 4]
// 005b9944  c3                   ret 

struct RBX_VFaceInstance_EnumPropDescriptor {
    int f(int);
};

int RBX_VFaceInstance_EnumPropDescriptor_f(int this_ptr, int arg) {
    return arg;
}
