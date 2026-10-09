// roc 2008-06 004bbe20  unit: ProfiledRakPeer  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004bbe20
//
// 004bbe20  8b812c070000         mov eax, dword ptr [ecx + 0x72c]
// 004bbe26  3b442404             cmp eax, dword ptr [esp + 4]
// 004bbe2a  750a                 jne 0x4bbe36
// 004bbe2c  c7812c07000000000000 mov dword ptr [ecx + 0x72c], 0
// 004bbe36  c20400               ret 4
// copied from an identical function in another client (function ?clearIfEqual@RakPeer@ns_ROCX000003@@QAEXPAX@Z)

namespace ns_ROCX000003 {
struct RakPeer {
    void clearIfEqual(void* p);
    char pad[0x72c];
    void* field_0x72c;
};

void RakPeer::clearIfEqual(void* p) {
    if (field_0x72c == p) {
        field_0x72c = 0;
    }
}
}
