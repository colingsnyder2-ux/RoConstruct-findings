// from server: 89% by colin
// roc 2007-08 0052dee0  unit: RBX::VRunService::?$Notifier  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052dee0
//
// 0052dee0  56                   push esi
// 0052dee1  8bf1                 mov esi, ecx
// 0052dee3  c7064c497a00         mov dword ptr [esi], 0x7a494c
// 0052dee9  8b4608               mov eax, dword ptr [esi + 8]
// 0052deec  85c0                 test eax, eax
// 0052deee  7409                 je 0x52def9
// 0052def0  50                   push eax
// 0052def1  e86c1d1000           call 0x62fc62
// 0052def6  83c404               add esp, 4
// 0052def9  f644240801           test byte ptr [esp + 8], 1
// 0052defe  c7460800000000       mov dword ptr [esi + 8], 0
// 0052df05  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0052df0c  c7461000000000       mov dword ptr [esi + 0x10], 0
// 0052df13  7409                 je 0x52df1e
// 0052df15  56                   push esi
// 0052df16  e8471d1000           call 0x62fc62
// 0052df1b  83c404               add esp, 4
// 0052df1e  8bc6                 mov eax, esi
// 0052df20  5e                   pop esi
// 0052df21  c20400               ret 4

struct VRunServiceNotifier
{
    int vtable;
    int field_4;
    void* field_8;
    int field_c;
    int field_10;
    VRunServiceNotifier* destroy(char flags);
};

extern "C" void __cdecl free_wrapper(void* p);

VRunServiceNotifier* VRunServiceNotifier::destroy(char flags)
{
    this->vtable = 0x7a494c;
    if (this->field_8)
    {
        free_wrapper(this->field_8);
    }
    this->field_8 = 0;
    this->field_c = 0;
    this->field_10 = 0;
    if (flags & 1)
    {
        free_wrapper(this);
    }
    return this;
}
