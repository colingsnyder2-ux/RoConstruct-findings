// from server: 100% by tester
// roc 2011-06 005e79c0  unit: RBX::DataModel  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005e79c0
//
// 005e79c0  8b81d40a0000         mov eax, dword ptr [ecx + 0xad4]
// 005e79c6  dd80a8000000         fld qword ptr [eax + 0xa8]
// 005e79cc  c3                   ret 

struct RBX_DataModel {
    char pad[0xad4];
    void* field_214;
    double get() const;
};

double RBX_DataModel::get() const {
    char* p = (char*)field_214;
    return *(double*)(p + 0xa8);
}