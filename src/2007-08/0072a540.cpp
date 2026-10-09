// from server: 35% by colin
// roc 2007-08 0072a540  unit: boost::signals::detail::Ubasic_connection::?$sp_counted_impl_p  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0072a540
//
// 0072a540  6aff                 push -1
// 0072a542  6818bd7600           push 0x76bd18
// 0072a547  64a100000000         mov eax, dword ptr fs:[0]
// 0072a54d  50                   push eax
// 0072a54e  51                   push ecx
// 0072a54f  56                   push esi
// 0072a550  a188518b00           mov eax, dword ptr [0x8b5188]
// 0072a555  33c4                 xor eax, esp
// 0072a557  50                   push eax
// 0072a558  8d44240c             lea eax, [esp + 0xc]
// 0072a55c  64a300000000         mov dword ptr fs:[0], eax
// 0072a562  8bf1                 mov esi, ecx
// 0072a564  89742408             mov dword ptr [esp + 8], esi
// 0072a568  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0072a56c  8d44241c             lea eax, [esp + 0x1c]
// 0072a570  50                   push eax
// 0072a571  51                   push ecx
// 0072a572  8bce                 mov ecx, esi
// 0072a574  e8e7efffff           call 0x729560
// 0072a579  33c0                 xor eax, eax
// 0072a57b  8bce                 mov ecx, esi
// 0072a57d  89442414             mov dword ptr [esp + 0x14], eax
// 0072a581  894620               mov dword ptr [esi + 0x20], eax
// 0072a584  894624               mov dword ptr [esi + 0x24], eax
// 0072a587  e894feffff           call 0x72a420
// 0072a58c  8bc6                 mov eax, esi
// 0072a58e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0072a592  64890d00000000       mov dword ptr fs:[0], ecx
// 0072a599  59                   pop ecx
// 0072a59a  5e                   pop esi
// 0072a59b  83c410               add esp, 0x10
// 0072a59e  c20400               ret 4

struct Ubasic_connection {
    char pad[0x20];
    int field_20;
    int field_24;
    void sub_729560(int*);
    void sub_72a420();
    Ubasic_connection* construct(int*);
};

extern "C" void __stdcall sub_729560_helper();

Ubasic_connection* Ubasic_connection::construct(int* arg)
{
    Ubasic_connection* self = this;
    sub_729560(arg);
    self->field_20 = 0;
    self->field_24 = 0;
    sub_72a420();
    return self;
}
