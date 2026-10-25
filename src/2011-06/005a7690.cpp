// from server: 100% by tester
// roc 2011-06 005a7690  unit: RBX::VTeam::?$FactoryProduct  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005a7690
//
// 005a7690  8a442404             mov al, byte ptr [esp + 4]
// 005a7694  88815c010000         mov byte ptr [ecx + 0x15c], al
// 005a769a  c20400               ret 4

struct RakPeer {
    char pad[0x15c];
    bool flag;
    void setFlag(bool value);
};

void RakPeer::setFlag(bool value) {
    flag = value;
}