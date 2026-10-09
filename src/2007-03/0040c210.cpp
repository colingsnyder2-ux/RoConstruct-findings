// roc 2007-03 0040c210  unit: seg_00400000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0040c210
//
// 0040c210  8b442404             mov eax, dword ptr [esp + 4]
// 0040c214  398144010000         cmp dword ptr [ecx + 0x144], eax
// 0040c21a  740b                 je 0x40c227
// 0040c21c  898144010000         mov dword ptr [ecx + 0x144], eax
// 0040c222  e8c9302200           call 0x62f2f0
// 0040c227  c20400               ret 4
// copied from an identical function in another client (function ?method@S@ns_ROCX00000a@@QAEXH@Z)

namespace ns_ROCX00000a {
struct S {
    unsigned char pad[0x144];
    int m_val;
    void method(int arg);
    void helper();
};

void S::method(int arg)
{
    if (m_val != arg) {
        m_val = arg;
        helper();
    }
}
}
