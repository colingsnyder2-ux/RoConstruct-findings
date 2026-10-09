// roc 2008-06 004bbc60  unit: ProfiledRakPeer  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004bbc60
//
// 004bbc60  8a442404             mov al, byte ptr [esp + 4]
// 004bbc64  88810c070000         mov byte ptr [ecx + 0x70c], al
// 004bbc6a  c20400               ret 4
// copied from an identical function in another client (function ?setFlag@RakPeer@ns_ROCX000003@@QAEX_N@Z)

namespace ns_ROCX000003 {
struct RakPeer {
    char pad[0x70c];
    bool flag;
    void setFlag(bool value);
};

void RakPeer::setFlag(bool value) {
    flag = value;
}
}
