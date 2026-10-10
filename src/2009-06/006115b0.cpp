// from server: 80% by why2
// roc 2009-06 006115b0  unit: RBX::ModelInstance  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006115b0
//
// 006115b0  8b09                 mov ecx, dword ptr [ecx]
// 006115b2  8b4108               mov eax, dword ptr [ecx + 8]
// 006115b5  50                   push eax
// 006115b6  b9e010a000           mov ecx, 0xa010e0
// 006115bb  ff15a4e98900         call dword ptr [0x89e9a4]
// 006115c1  c3                   ret 

struct type_info {
    bool operator==(const type_info&) const;
};

struct ModelInstance {
    void* field0;
    int field4;
    type_info* field8;
    bool compareType();
};

bool ModelInstance::compareType() {
    ModelInstance* inner = *(ModelInstance**)this;
    type_info* t = inner->field8;
    return (*(type_info*)0xa010e0).operator==(*t);
}
