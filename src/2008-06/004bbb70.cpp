// from server: 100% by Intel
// roc 2008-06 004bbb70  unit: ProfiledRakPeer  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004bbb70
//
// 004bbb70  8a442404             mov al, byte ptr [esp + 4]
// 004bbb74  8881cc080000         mov byte ptr [ecx + 0x8cc], al
// 004bbb7a  c20400               ret 4

struct ProfiledRakPeer {
    void setByteAtOffset70C(char value);
};

void ProfiledRakPeer::setByteAtOffset70C(char value) {
    ((char*)((char*)this + 0x8cc))[0] = value;
}