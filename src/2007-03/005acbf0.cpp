// from server: 100% by tester
// roc 2007-03 005acbf0  unit: seg_005a0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005acbf0
//
// 005acbf0  8b4130               mov eax, dword ptr [ecx + 0x30]
// 005acbf3  8b08                 mov ecx, dword ptr [eax]
// 005acbf5  8b810c000400         mov eax, dword ptr [ecx + 0x4000c]
// 005acbfb  c3                   ret 

struct RBX_Mechanism {
    char pad[0x30];
    int* field_b0;
    int get_78();
};

int RBX_Mechanism::get_78() {
    int* p = field_b0;
    int* q = (int*)*p;
    return *(int*)((char*)q + 0x4000c);
}