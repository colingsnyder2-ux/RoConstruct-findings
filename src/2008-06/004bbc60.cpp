// from server: 100% by Cezant64gamejr
// roc 2008-06 004bbc60  unit: ProfiledRakPeer  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004bbc60
//
// 004bbc60  8a442404             mov al, byte ptr [esp + 4]
// 004bbc64  88810c070000         mov byte ptr [ecx + 0x70c], al
// 004bbc6a  c20400               ret 4

struct ProfiledRakPeer {
    void setByteAtOffset70C(char value);
};

void ProfiledRakPeer::setByteAtOffset70C(char value) {
    ((char*)((char*)this + 0x70c))[0] = value;
}
