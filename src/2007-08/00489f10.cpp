// from server: 81% by colin
// roc 2007-08 00489f10  unit: RBX::Network::VPlayer::?$Notifier  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00489f10
//
// 00489f10  51                   push ecx
// 00489f11  56                   push esi
// 00489f12  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00489f16  8d410c               lea eax, [ecx + 0xc]
// 00489f19  50                   push eax
// 00489f1a  56                   push esi
// 00489f1b  83c134               add ecx, 0x34
// 00489f1e  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00489f26  e805fdffff           call 0x489c30
// 00489f2b  8bc6                 mov eax, esi
// 00489f2d  5e                   pop esi
// 00489f2e  59                   pop ecx
// 00489f2f  c20400               ret 4

struct Notifier {
    char pad[0x34];
    void* field_0x34;
    void sub_489C30(void* a, void* b);
    void* func(void* arg);
};

void* Notifier::func(void* arg)
{
    void* local = 0;
    sub_489C30(arg, &local);
    return arg;
}
