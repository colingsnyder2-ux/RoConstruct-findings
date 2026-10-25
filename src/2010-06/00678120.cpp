// from server: 100% by tester
// roc 2010-06 00678120  unit: RBX::Primitive  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00678120
//
// 00678120  8b81b4000000         mov eax, dword ptr [ecx + 0xb4]
// 00678126  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0067812a  8b0488               mov eax, dword ptr [eax + ecx*4]
// 0067812d  c20400               ret 4

struct RBX_Primitive {
    int get(int index);
    char pad[0xb4];
    int* data;
};

int RBX_Primitive::get(int index) {
    return data[index];
}