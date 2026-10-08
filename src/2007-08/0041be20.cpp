// from server: 47% by colin
// roc 2007-08 0041be20  unit: VDHTMLWindow::?$SignalDesc  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041be20
//
// 0041be20  8b442404             mov eax, dword ptr [esp + 4]
// 0041be24  8b542408             mov edx, dword ptr [esp + 8]
// 0041be28  56                   push esi
// 0041be29  50                   push eax
// 0041be2a  83ec1c               sub esp, 0x1c
// 0041be2d  8bf1                 mov esi, ecx
// 0041be2f  8bcc                 mov ecx, esp
// 0041be31  89642428             mov dword ptr [esp + 0x28], esp
// 0041be35  52                   push edx
// 0041be36  ff1598e67700         call dword ptr [0x77e698]
// 0041be3c  8bce                 mov ecx, esi
// 0041be3e  e8fd3d1400           call 0x55fc40
// 0041be43  c7064c7a7800         mov dword ptr [esi], 0x787a4c
// 0041be49  8bc6                 mov eax, esi
// 0041be4b  5e                   pop esi
// 0041be4c  c20800               ret 8

struct VDHTMLWindow_SignalDesc {
    void construct(const char* name, int flags);
};

extern "C" void __stdcall sub_77E698(void*, const char*);
extern "C" void __fastcall sub_55FC40(void*);

void VDHTMLWindow_SignalDesc::construct(const char* name, int flags) {
    char buf[0x1c];
    sub_77E698(buf, name);
    sub_55FC40(this);
    *(int*)this = 0x787a4c;
}
