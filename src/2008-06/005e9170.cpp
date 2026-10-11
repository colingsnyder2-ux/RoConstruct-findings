// from server: 100% by tester
// roc 2008-06 005e9170  unit: RBX::PhysicsService  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e9170
//
// 005e9170  8b8184000000         mov eax, dword ptr [ecx + 0x84]
// 005e9176  8b08                 mov ecx, dword ptr [eax]
// 005e9178  8b4178               mov eax, dword ptr [ecx + 0x78]
// 005e917b  c3                   ret 

struct RBX_Mechanism {
    char pad[0x84];
    int* field_b0;
    int get_78();
};

int RBX_Mechanism::get_78() {
    int* p = field_b0;
    int* q = (int*)*p;
    return *(int*)((char*)q + 0x78);
}