// from server: 100% by tester
// roc 2008-06 005757e0  unit: RBX::DataModel  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005757e0
//
// 005757e0  8b810c020000         mov eax, dword ptr [ecx + 0x20c]
// 005757e6  dd8028020000         fld qword ptr [eax + 0x228]
// 005757ec  c3                   ret 

struct RBX_DataModel {
    char pad[0x20c];
    void* field_214;
    double get() const;
};

double RBX_DataModel::get() const {
    char* p = (char*)field_214;
    return *(double*)(p + 0x228);
}