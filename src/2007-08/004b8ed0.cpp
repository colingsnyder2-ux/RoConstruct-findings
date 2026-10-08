// from server: 100% by colin
// roc 2007-08 004b8ed0  unit: RakPeer  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b8ed0
//
// 004b8ed0  8a442404             mov al, byte ptr [esp + 4]
// 004b8ed4  88810c070000         mov byte ptr [ecx + 0x70c], al
// 004b8eda  c20400               ret 4

struct RakPeer {
    char pad[0x70c];
    bool flag;
    void setFlag(bool value);
};

void RakPeer::setFlag(bool value) {
    flag = value;
}
