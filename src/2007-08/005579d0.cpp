// from server: 100% by colin
// roc 2007-08 005579d0  unit: RBX::DataModel  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005579d0
//
// 005579d0  8b81e0010000         mov eax, dword ptr [ecx + 0x1e0]
// 005579d6  d980b0000000         fld dword ptr [eax + 0xb0]
// 005579dc  c3                   ret 

struct DataModelInner {
    char pad0[0xb0];
    float value;
};

struct DataModel {
    char pad0[0x1e0];
    DataModelInner* inner;
    float getValue();
};

float DataModel::getValue()
{
    return inner->value;
}
