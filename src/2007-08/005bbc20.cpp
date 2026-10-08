// from server: 80% by colin
// roc 2007-08 005bbc20  unit: RBX::Controller::W4ControllerType::?$EnumDesc  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bbc20
//
// 005bbc20  8a442404             mov al, byte ptr [esp + 4]
// 005bbc24  388150010000         cmp byte ptr [ecx + 0x150], al
// 005bbc2a  7413                 je 0x5bbc3f
// 005bbc2c  888150010000         mov byte ptr [ecx + 0x150], al
// 005bbc32  c7442404dc678c00     mov dword ptr [esp + 4], 0x8c67dc
// 005bbc3a  e9d18ae8ff           jmp 0x444710
// 005bbc3f  c20400               ret 4

struct W4ControllerType
{
    char pad[0x150];
    unsigned char value;
    void setValue(unsigned char v);
};

void W4ControllerType::setValue(unsigned char v)
{
    if (this->value != v)
    {
        this->value = v;
        extern void notifyChange();
        notifyChange();
    }
}
