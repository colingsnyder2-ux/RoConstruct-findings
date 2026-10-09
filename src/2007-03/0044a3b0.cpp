// roc 2007-03 0044a3b0  unit: seg_00440000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0044a3b0
//
// 0044a3b0  8b819c000000         mov eax, dword ptr [ecx + 0x9c]
// 0044a3b6  83f8ff               cmp eax, -1
// 0044a3b9  750f                 jne 0x44a3ca
// 0044a3bb  8b8958010000         mov ecx, dword ptr [ecx + 0x158]
// 0044a3c1  85c9                 test ecx, ecx
// 0044a3c3  7405                 je 0x44a3ca
// 0044a3c5  e926571e00           jmp 0x62faf0
// 0044a3ca  c3                   ret 
// copied from an identical function in another client (function ?getValue@CRobloxControlColorSelector@ns_ROCX00001f@@QAEHXZ)

namespace ns_ROCX00001f {
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
}
