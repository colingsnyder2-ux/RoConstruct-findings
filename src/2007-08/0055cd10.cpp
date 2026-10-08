// from server: 100% by colin
// roc 2007-08 0055cd10  unit: RBX::DataModel  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055cd10
//
// 0055cd10  8a442404             mov al, byte ptr [esp + 4]
// 0055cd14  884174               mov byte ptr [ecx + 0x74], al
// 0055cd17  c20400               ret 4

struct RBX_DataModel {
    char pad_0[0x74];
    bool field_74;
    void setFlag(bool value);
};

void RBX_DataModel::setFlag(bool value)
{
    field_74 = value;
}
