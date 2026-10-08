// from server: 100% by colin
// roc 2007-08 004b90a0  unit: RakPeer  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b90a0
//
// 004b90a0  8b812c070000         mov eax, dword ptr [ecx + 0x72c]
// 004b90a6  3b442404             cmp eax, dword ptr [esp + 4]
// 004b90aa  750a                 jne 0x4b90b6
// 004b90ac  c7812c07000000000000 mov dword ptr [ecx + 0x72c], 0
// 004b90b6  c20400               ret 4

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
