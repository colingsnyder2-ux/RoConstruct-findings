// from server: 100% by Intel
// roc 2008-06 005e7ae0  unit: RBX::Geometry  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e7ae0
//
// 005e7ae0  8b4138               mov eax, dword ptr [ecx + 0x38]
// 005e7ae3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005e7ae7  8b0488               mov eax, dword ptr [eax + ecx*4]
// 005e7aea  c20400               ret 4

struct Geometry {
    int getFaceIndex(int index);
};

int Geometry::getFaceIndex(int index) {
    return *(*(int**)((char*)this + 0x38) + index);
}
