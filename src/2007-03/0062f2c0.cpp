// roc 2007-03 0062f2c0  unit: seg_00620000  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0062f2c0
//
// 0062f2c0  8b8148010000         mov eax, dword ptr [ecx + 0x148]
// 0062f2c6  83f8ff               cmp eax, -1
// 0062f2c9  7524                 jne 0x62f2ef
// 0062f2cb  8b8144010000         mov eax, dword ptr [ecx + 0x144]
// 0062f2d1  85c0                 test eax, eax
// 0062f2d3  751a                 jne 0x62f2ef
// 0062f2d5  8b814c010000         mov eax, dword ptr [ecx + 0x14c]
// 0062f2db  85c0                 test eax, eax
// 0062f2dd  7510                 jne 0x62f2ef
// 0062f2df  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 0062f2e5  85c9                 test ecx, ecx
// 0062f2e7  7406                 je 0x62f2ef
// 0062f2e9  8b8170010000         mov eax, dword ptr [ecx + 0x170]
// 0062f2ef  c3                   ret 
// copied from an identical function in another client (function ?get@CRobloxControlColorSelector@ns_ROCX00003d@@QAEHXZ)

namespace ns_ROCX00003d {
struct CRobloxControlColorSelector {
    char pad[0xfc];
    void* field_fc;
    char pad2[0x144 - 0xfc - 4];
    int field_144;
    int field_148;
    int field_14c;
    char pad3[0x170 - 0x14c - 4];
    int field_170;
    int get();
};

int CRobloxControlColorSelector::get() {
    int result = field_148;
    if (result == -1) {
        result = field_144;
        if (result == 0) {
            result = field_14c;
            if (result == 0) {
                void* p = field_fc;
                if (p != 0) {
                    result = *(int*)((char*)p + 0x170);
                }
            }
        }
    }
    return result;
}
}
