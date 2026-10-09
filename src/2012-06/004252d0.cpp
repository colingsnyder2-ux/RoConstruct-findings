// roc 2012-06 004252d0  unit: RBX::FunctionMarshaller  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004252d0
//
// 004252d0  8b4114               mov eax, dword ptr [ecx + 0x14]
// 004252d3  85c0                 test eax, eax
// 004252d5  7406                 je 0x4252dd
// 004252d7  50                   push eax
// 004252d8  e85a686500           call 0xa7bb37
// 004252dd  c3                   ret 
// copied from an identical function in another client (function ?destroy@DHTMLWindow@ns_ROCX000023@@QAEXXZ)

namespace ns_ROCX000023 {
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
