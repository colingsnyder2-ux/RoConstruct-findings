// roc 2007-03 006eb0f0  unit: seg_006e0000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006eb0f0
//
// 006eb0f0  56                   push esi
// 006eb0f1  8bf1                 mov esi, ecx
// 006eb0f3  8b8670010000         mov eax, dword ptr [esi + 0x170]
// 006eb0f9  85c0                 test eax, eax
// 006eb0fb  7416                 je 0x6eb113
// 006eb0fd  50                   push eax
// 006eb0fe  ff158ced7700         call dword ptr [0x77ed8c]
// 006eb104  85c0                 test eax, eax
// 006eb106  740b                 je 0x6eb113
// 006eb108  8bce                 mov ecx, esi
// 006eb10a  e8a143f4ff           call 0x62f4b0
// 006eb10f  85c0                 test eax, eax
// 006eb111  7416                 je 0x6eb129
// 006eb113  8b442410             mov eax, dword ptr [esp + 0x10]
// 006eb117  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006eb11b  8b542408             mov edx, dword ptr [esp + 8]
// 006eb11f  50                   push eax
// 006eb120  51                   push ecx
// 006eb121  52                   push edx
// 006eb122  8bce                 mov ecx, esi
// 006eb124  e8b79efcff           call 0x6b4fe0
// 006eb129  5e                   pop esi
// 006eb12a  c20c00               ret 0xc
// copied from an identical function in another client (function ?m@CXTPControlCustom@ns_ROCX00005b@@QAEXHHH@Z)

namespace ns_ROCX00005b {
struct CXTPControlCustom {
    char pad[0x170];
    void* field_170;
    void m(int, int, int);
    int sub_639f70();
    void sub_6ca5f0(int, int, int);
};

extern "C" int (__stdcall *IsWindowVisible)(void*);

void CXTPControlCustom::m(int a, int b, int c)
{
    if (field_170 != 0) {
        if (IsWindowVisible(field_170) != 0) {
            if (sub_639f70() == 0) {
                return;
            }
        }
    }
    sub_6ca5f0(a, b, c);
}
}
