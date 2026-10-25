// from server: 100% by tester
// roc 2011-06 005ff640  unit: RBX::DataModel  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005ff640
//
// 005ff640  8a442404             mov al, byte ptr [esp + 4]
// 005ff644  8881600a0000         mov byte ptr [ecx + 0xa60], al
// 005ff64a  c20400               ret 4

struct RakPeer {
    char pad[0xa60];
    bool flag;
    void setFlag(bool value);
};

void RakPeer::setFlag(bool value) {
    flag = value;
}