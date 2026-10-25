// from server: 100% by tester
// roc 2011-06 006a36a0  unit: RBX::Block  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006a36a0
//
// 006a36a0  8b81c0000000         mov eax, dword ptr [ecx + 0xc0]
// 006a36a6  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006a36aa  8b0488               mov eax, dword ptr [eax + ecx*4]
// 006a36ad  c20400               ret 4

struct RBX_Primitive {
    int get(int index);
    char pad[0xc0];
    int* data;
};

int RBX_Primitive::get(int index) {
    return data[index];
}