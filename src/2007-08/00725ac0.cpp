// from server: 42% by colin
// roc 2007-08 00725ac0  unit: boost::thread_resource_error  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00725ac0
//
// 00725ac0  6aff                 push -1
// 00725ac2  6888b67600           push 0x76b688
// 00725ac7  64a100000000         mov eax, dword ptr fs:[0]
// 00725acd  50                   push eax
// 00725ace  51                   push ecx
// 00725acf  56                   push esi
// 00725ad0  a188518b00           mov eax, dword ptr [0x8b5188]
// 00725ad5  33c4                 xor eax, esp
// 00725ad7  50                   push eax
// 00725ad8  8d44240c             lea eax, [esp + 0xc]
// 00725adc  64a300000000         mov dword ptr fs:[0], eax
// 00725ae2  8bf1                 mov esi, ecx
// 00725ae4  e817fcffff           call 0x725700
// 00725ae9  33c0                 xor eax, eax
// 00725aeb  89460c               mov dword ptr [esi + 0xc], eax
// 00725aee  894610               mov dword ptr [esi + 0x10], eax
// 00725af1  894614               mov dword ptr [esi + 0x14], eax
// 00725af4  8bc6                 mov eax, esi
// 00725af6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00725afa  64890d00000000       mov dword ptr fs:[0], ecx
// 00725b01  59                   pop ecx
// 00725b02  5e                   pop esi
// 00725b03  83c410               add esp, 0x10
// 00725b06  c3                   ret 

struct boost_thread_resource_error {
    void* vfptr;
    int field_4;
    int field_8;
    int field_c;
    int field_10;
    int field_14;
    boost_thread_resource_error();
};

extern "C" void __stdcall sub_725700();

boost_thread_resource_error::boost_thread_resource_error()
{
    sub_725700();
    field_c = 0;
    field_10 = 0;
    field_14 = 0;
}
