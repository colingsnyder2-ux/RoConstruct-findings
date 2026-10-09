// roc 2007-03 00416190  unit: seg_00410000  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00416190
//
// 00416190  8b4114               mov eax, dword ptr [ecx + 0x14]
// 00416193  85c0                 test eax, eax
// 00416195  7406                 je 0x41619d
// 00416197  50                   push eax
// 00416198  e8cd043100           call 0x72666a
// 0041619d  c3                   ret 
// copied from an identical function in another client (function ?destroy@DHTMLWindow@ns_ROCX000016@@QAEXXZ)

namespace ns_ROCX000016 {
struct DHTMLWindow {
    char pad[0x14];
    void* field_0x14;
    void destroy();
};

extern "C" void __stdcall sub_0072538A(void*);

void DHTMLWindow::destroy()
{
    if (field_0x14 != 0)
        sub_0072538A(field_0x14);
}
}
