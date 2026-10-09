// from server: 22% by colin
// roc 2007-08 007263e0  unit: boost::thread_resource_error  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007263e0
//
// 007263e0  6aff                 push -1
// 007263e2  6888b67600           push 0x76b688
// 007263e7  64a100000000         mov eax, dword ptr fs:[0]
// 007263ed  50                   push eax
// 007263ee  51                   push ecx
// 007263ef  56                   push esi
// 007263f0  a188518b00           mov eax, dword ptr [0x8b5188]
// 007263f5  33c4                 xor eax, esp
// 007263f7  50                   push eax
// 007263f8  8d44240c             lea eax, [esp + 0xc]
// 007263fc  64a300000000         mov dword ptr fs:[0], eax
// 00726402  8bf1                 mov esi, ecx
// 00726404  89742408             mov dword ptr [esp + 8], esi
// 00726408  8d4e08               lea ecx, [esi + 8]
// 0072640b  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00726413  e878040000           call 0x726890
// 00726418  8bce                 mov ecx, esi
// 0072641a  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00726422  e8f9f2ffff           call 0x725720
// 00726427  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0072642b  64890d00000000       mov dword ptr fs:[0], ecx
// 00726432  59                   pop ecx
// 00726433  5e                   pop esi
// 00726434  83c410               add esp, 0x10
// 00726437  c3                   ret 

struct boost_thread_resource_error
{
    char pad_0000[0x08];
    char field_08;

    void func_007263e0();
};

extern "C" void __fastcall sub_00726890(char*);
extern "C" void __fastcall sub_00725720(void*);

void boost_thread_resource_error::func_007263e0()
{
    sub_00726890(&field_08);
    sub_00725720(this);
}
