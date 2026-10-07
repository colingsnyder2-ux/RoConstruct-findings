// roc 2007-08 007284f0  unit: boost::signals::detail::Vsignal_base_impl::?$sp_counted_impl_p  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007284f0
//
// 007284f0  83ec10               sub esp, 0x10
// 007284f3  56                   push esi
// 007284f4  8bf1                 mov esi, ecx
// 007284f6  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007284fa  8b4104               mov eax, dword ptr [ecx + 4]
// 007284fd  89442408             mov dword ptr [esp + 8], eax
// 00728501  8b4108               mov eax, dword ptr [ecx + 8]
// 00728504  85c0                 test eax, eax
// 00728506  57                   push edi
// 00728507  89442410             mov dword ptr [esp + 0x10], eax
// 0072850b  7410                 je 0x72851d
// 0072850d  83c004               add eax, 4
// 00728510  ba01000000           mov edx, 1
// 00728515  f00fc110             lock xadd dword ptr [eax], edx
// 00728519  8b442410             mov eax, dword ptr [esp + 0x10]
// 0072851d  8a490c               mov cl, byte ptr [ecx + 0xc]
// 00728520  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00728524  8b7e04               mov edi, dword ptr [esi + 4]
// 00728527  895604               mov dword ptr [esi + 4], edx
// 0072852a  8b5608               mov edx, dword ptr [esi + 8]
// 0072852d  894608               mov dword ptr [esi + 8], eax
// 00728530  8a460c               mov al, byte ptr [esi + 0xc]
// 00728533  884e0c               mov byte ptr [esi + 0xc], cl
// 00728536  8d4c2408             lea ecx, [esp + 8]
// 0072853a  897c240c             mov dword ptr [esp + 0xc], edi
// 0072853e  89542410             mov dword ptr [esp + 0x10], edx
// 00728542  88442414             mov byte ptr [esp + 0x14], al
// 00728546  e815ffffff           call 0x728460
// 0072854b  5f                   pop edi
// 0072854c  8bc6                 mov eax, esi
// 0072854e  5e                   pop esi
// 0072854f  83c410               add esp, 0x10
// 00728552  c20400               ret 4
// library boost-1.34.1/libs\signals\src\connection.cpp (function ??4connection@signals@boost@@QAEAAV012@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/connection.cpp
