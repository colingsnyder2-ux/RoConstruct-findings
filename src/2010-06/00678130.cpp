// from server: 100% by tester
// roc 2010-06 00678130  unit: RBX::Primitive  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00678130
//
// 00678130  8b8198000000         mov eax, dword ptr [ecx + 0x98]
// 00678136  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0067813a  8b0488               mov eax, dword ptr [eax + ecx*4]
// 0067813d  c20400               ret 4

struct RBX_Primitive {
    int get(int index);
    char pad[0x98];
    int* data;
};

int RBX_Primitive::get(int index) {
    return data[index];
}