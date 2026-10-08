// from server: 100% by colin
// roc 2007-08 004b8de0  unit: RakPeer  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b8de0
//
// 004b8de0  8a442404             mov al, byte ptr [esp + 4]
// 004b8de4  8881c4080000         mov byte ptr [ecx + 0x8c4], al
// 004b8dea  c20400               ret 4

struct RakPeer {
    char pad[0x8c4];
    bool flag;
    void setFlag(bool value);
};

void RakPeer::setFlag(bool value) {
    flag = value;
}
