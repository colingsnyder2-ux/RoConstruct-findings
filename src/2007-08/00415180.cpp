// from server: 100% by colin
// roc 2007-08 00415180  unit: DHTMLWindow  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00415180
//
// 00415180  8b4114               mov eax, dword ptr [ecx + 0x14]
// 00415183  85c0                 test eax, eax
// 00415185  7406                 je 0x41518d
// 00415187  50                   push eax
// 00415188  e8fd013100           call 0x72538a
// 0041518d  c3                   ret 

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
