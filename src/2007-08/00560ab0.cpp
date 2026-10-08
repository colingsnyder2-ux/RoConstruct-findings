// from server: 60% by colin
// roc 2007-08 00560ab0  unit: RBX::VModelInstance::?$FilteredSelection  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00560ab0
//
// 00560ab0  8b442404             mov eax, dword ptr [esp + 4]
// 00560ab4  56                   push esi
// 00560ab5  50                   push eax
// 00560ab6  83ec1c               sub esp, 0x1c
// 00560ab9  8bf1                 mov esi, ecx
// 00560abb  8bcc                 mov ecx, esp
// 00560abd  89642428             mov dword ptr [esp + 0x28], esp
// 00560ac1  6810197900           push 0x791910
// 00560ac6  ff1598e67700         call dword ptr [0x77e698]
// 00560acc  8bce                 mov ecx, esi
// 00560ace  e8bdfaffff           call 0x560590
// 00560ad3  c70628957a00         mov dword ptr [esi], 0x7a9528
// 00560ad9  8bc6                 mov eax, esi
// 00560adb  5e                   pop esi
// 00560adc  c20400               ret 4

struct FilteredSelection {
    FilteredSelection(char*);
};

extern "C" void __stdcall G1_func_0077e698(void*, const char*);
extern void G2_func_00560590();

FilteredSelection::FilteredSelection(char* name)
{
    char buf[0x1c];
    G1_func_0077e698(buf, "Controller1");
    G2_func_00560590();
    *(int*)this = 0x7a9528;
}
