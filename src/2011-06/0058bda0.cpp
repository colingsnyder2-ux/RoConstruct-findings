// from server: 100% by tester
// roc 2011-06 0058bda0  unit: std::Vlength_error::U?$error_info_injector::?$clone_impl  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0058bda0
//
// 0058bda0  8a442404             mov al, byte ptr [esp + 4]
// 0058bda4  8881a9000000         mov byte ptr [ecx + 0xa9], al
// 0058bdaa  c20400               ret 4

struct RakPeer {
    char pad[0xa9];
    bool flag;
    void setFlag(bool value);
};

void RakPeer::setFlag(bool value) {
    flag = value;
}