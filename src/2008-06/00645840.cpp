// from server: 63% by colin
// roc 2008-06 00645840  unit: RBX::Primitive  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00645840
//
// 00645840  8b4104               mov eax, dword ptr [ecx + 4]
// 00645843  8b5004               mov edx, dword ptr [eax + 4]
// 00645846  895104               mov dword ptr [ecx + 4], edx
// 00645849  c20400               ret 4

struct Primitive {
    int worldIndex;
    void setWorldIndex(int newIndex);
};

void Primitive::setWorldIndex(int newIndex) {
    int* worldIndexPtr = (int*)((char*)this + 4);
    *worldIndexPtr = newIndex;
}
