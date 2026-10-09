// roc 2007-03 0067a560  unit: seg_00670000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0067a560
//
// 0067a560  8b442404             mov eax, dword ptr [esp + 4]
// 0067a564  a802                 test al, 2
// 0067a566  898108010000         mov dword ptr [ecx + 0x108], eax
// 0067a56c  740d                 je 0x67a57b
// 0067a56e  c781fc00000000000000 mov dword ptr [ecx + 0xfc], 0
// 0067a578  c20400               ret 4
// 0067a57b  6a00                 push 0
// 0067a57d  81c1fc000000         add ecx, 0xfc
// 0067a583  51                   push ecx
// 0067a584  6a00                 push 0
// 0067a586  6a26                 push 0x26
// 0067a588  ff150cef7700         call dword ptr [0x77ef0c]
// 0067a58e  c20400               ret 4
// copied from an identical function in another client (function ?SetSomething@CXTSplitterWnd@ns_ROCX000036@@QAEXH@Z)

namespace ns_ROCX000036 {
extern "C" int (__stdcall *SystemParametersInfoA)(unsigned int, unsigned int, void*, unsigned int);

struct CXTSplitterWnd {
    char pad[0xfc];
    int field_fc;
    char pad2[8];
    int field_108;
    void SetSomething(int);
};

void CXTSplitterWnd::SetSomething(int value) {
    field_108 = value;
    if (value & 2) {
        field_fc = 0;
    } else {
        SystemParametersInfoA(0x26, 0, &field_fc, 0);
    }
}
}
