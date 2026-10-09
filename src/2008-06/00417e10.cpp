// roc 2008-06 00417e10  unit: VCLuaFunction::?$CComContainedObject  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00417e10
//
// 00417e10  8b4114               mov eax, dword ptr [ecx + 0x14]
// 00417e13  85c0                 test eax, eax
// 00417e15  7406                 je 0x417e1d
// 00417e17  50                   push eax
// 00417e18  e8eee13800           call 0x7a600b
// 00417e1d  c3                   ret 
// copied from an identical function in another client (function ?destroy@DHTMLWindow@ns_ROCX000007@@QAEXXZ)

namespace ns_ROCX000007 {
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
