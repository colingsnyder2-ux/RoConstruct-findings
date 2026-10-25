// from server: 100% by Intel
// roc 2008-06 005e7af0  unit: RBX::Geometry  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e7af0
//
// 005e7af0  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 005e7af3  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005e7af7  8b0488               mov eax, dword ptr [eax + ecx*4]
// 005e7afa  c20400               ret 4

struct Geometry {
    int getFaceId(int index);
};

int Geometry::getFaceId(int index) {
    return *(*(int**)((char*)this + 0x1c) + index);
}
