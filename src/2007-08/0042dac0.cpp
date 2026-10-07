// roc 2007-08 0042dac0  unit: boost::any::_N::?$holder  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042dac0
//
// 0042dac0  83ec08               sub esp, 8
// 0042dac3  8b542414             mov edx, dword ptr [esp + 0x14]
// 0042dac7  53                   push ebx
// 0042dac8  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0042dacc  56                   push esi
// 0042dacd  8b742418             mov esi, dword ptr [esp + 0x18]
// 0042dad1  57                   push edi
// 0042dad2  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0042dad6  32c0                 xor al, al
// 0042dad8  88442410             mov byte ptr [esp + 0x10], al
// 0042dadc  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0042dae0  8844240c             mov byte ptr [esp + 0xc], al
// 0042dae4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0042dae8  50                   push eax
// 0042dae9  51                   push ecx
// 0042daea  52                   push edx
// 0042daeb  57                   push edi
// 0042daec  56                   push esi
// 0042daed  53                   push ebx
// 0042daee  e84dfdffff           call 0x42d840
// 0042daf3  2bf3                 sub esi, ebx
// 0042daf5  c1fe03               sar esi, 3
// 0042daf8  03f6                 add esi, esi
// 0042dafa  83c418               add esp, 0x18
// 0042dafd  03f6                 add esi, esi
// 0042daff  03f6                 add esi, esi
// 0042db01  8bc7                 mov eax, edi
// 0042db03  5f                   pop edi
// 0042db04  2bc6                 sub eax, esi
// 0042db06  5e                   pop esi
// 0042db07  5b                   pop ebx
// 0042db08  83c408               add esp, 8
// 0042db0b  c3                   ret 
// library boost-1.34.1/libs\program_options\src\options_description.cpp (function ??$_Copy_backward_opt@PAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PAV12@@std@@YAPAV?$shared_ptr@Voption_description@program_options@boost@@@boost@@PAV12@00Urandom_access_iterator_tag@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/options_description.cpp
