// from server: 100% by colin
// roc 2007-08 00639d80  unit: CRobloxControlColorSelector  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00639d80
//
// 00639d80  8b8148010000         mov eax, dword ptr [ecx + 0x148]
// 00639d86  83f8ff               cmp eax, -1
// 00639d89  7524                 jne 0x639daf
// 00639d8b  8b8144010000         mov eax, dword ptr [ecx + 0x144]
// 00639d91  85c0                 test eax, eax
// 00639d93  751a                 jne 0x639daf
// 00639d95  8b814c010000         mov eax, dword ptr [ecx + 0x14c]
// 00639d9b  85c0                 test eax, eax
// 00639d9d  7510                 jne 0x639daf
// 00639d9f  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 00639da5  85c9                 test ecx, ecx
// 00639da7  7406                 je 0x639daf
// 00639da9  8b8170010000         mov eax, dword ptr [ecx + 0x170]
// 00639daf  c3                   ret 

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
