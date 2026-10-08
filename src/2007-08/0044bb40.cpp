// from server: 100% by colin
// roc 2007-08 0044bb40  unit: CRobloxControlColorSelector  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0044bb40
//
// 0044bb40  8b819c000000         mov eax, dword ptr [ecx + 0x9c]
// 0044bb46  83f8ff               cmp eax, -1
// 0044bb49  750f                 jne 0x44bb5a
// 0044bb4b  8b8958010000         mov ecx, dword ptr [ecx + 0x158]
// 0044bb51  85c9                 test ecx, ecx
// 0044bb53  7405                 je 0x44bb5a
// 0044bb55  e926ea1e00           jmp 0x63a580
// 0044bb5a  c3                   ret 

struct CRobloxControlColorSelector {
    char pad[0x9c];
    int field_9c;
    char pad2[0x158 - 0x9c - 4];
    void* field_158;
    int getValue();
};

extern "C" int __fastcall sub_63A580(void* p);

int CRobloxControlColorSelector::getValue()
{
    int result = field_9c;
    if (result == -1) {
        void* p = field_158;
        if (p != 0) {
            return sub_63A580(p);
        }
    }
    return result;
}
