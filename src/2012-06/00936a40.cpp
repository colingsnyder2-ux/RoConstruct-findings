// roc 2012-06 00936a40  unit: seg_00930000  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00936a40
//
// 00936a40  51                   push ecx
// 00936a41  57                   push edi
// 00936a42  85c0                 test eax, eax
// 00936a44  744f                 je 0x936a95
// 00936a46  8d7810               lea edi, [eax + 0x10]
// 00936a49  85ff                 test edi, edi
// 00936a4b  7448                 je 0x936a95
// 00936a4d  8b400c               mov eax, dword ptr [eax + 0xc]
// 00936a50  40                   inc eax
// 00936a51  837e1000             cmp dword ptr [esi + 0x10], 0
// 00936a55  89442404             mov dword ptr [esp + 4], eax
// 00936a59  7561                 jne 0x936abc
// 00936a5b  8b4608               mov eax, dword ptr [esi + 8]
// 00936a5e  8b16                 mov edx, dword ptr [esi]
// 00936a60  50                   push eax
// 00936a61  8b4604               mov eax, dword ptr [esi + 4]
// 00936a64  6a04                 push 4
// 00936a66  8d4c240c             lea ecx, [esp + 0xc]
// 00936a6a  51                   push ecx
// 00936a6b  52                   push edx
// 00936a6c  ffd0                 call eax
// 00936a6e  894610               mov dword ptr [esi + 0x10], eax
// 00936a71  8b442414             mov eax, dword ptr [esp + 0x14]
// 00936a75  83c410               add esp, 0x10
// 00936a78  837e1000             cmp dword ptr [esi + 0x10], 0
// 00936a7c  753e                 jne 0x936abc
// 00936a7e  8b4e08               mov ecx, dword ptr [esi + 8]
// 00936a81  8b16                 mov edx, dword ptr [esi]
// 00936a83  51                   push ecx
// 00936a84  50                   push eax
// 00936a85  8b4604               mov eax, dword ptr [esi + 4]
// 00936a88  57                   push edi
// 00936a89  52                   push edx
// 00936a8a  ffd0                 call eax
// 00936a8c  83c410               add esp, 0x10
// 00936a8f  894610               mov dword ptr [esi + 0x10], eax
// 00936a92  5f                   pop edi
// 00936a93  59                   pop ecx
// 00936a94  c3                   ret 
// 00936a95  837e1000             cmp dword ptr [esi + 0x10], 0
// 00936a99  c744240400000000     mov dword ptr [esp + 4], 0
// 00936aa1  7519                 jne 0x936abc
// 00936aa3  8b4e08               mov ecx, dword ptr [esi + 8]
// 00936aa6  8b06                 mov eax, dword ptr [esi]
// 00936aa8  51                   push ecx
// 00936aa9  8b4e04               mov ecx, dword ptr [esi + 4]
// 00936aac  6a04                 push 4
// 00936aae  8d54240c             lea edx, [esp + 0xc]
// 00936ab2  52                   push edx
// 00936ab3  50                   push eax
// 00936ab4  ffd1                 call ecx
// 00936ab6  894610               mov dword ptr [esi + 0x10], eax
// 00936ab9  83c410               add esp, 0x10
// 00936abc  5f                   pop edi
// 00936abd  59                   pop ecx
// 00936abe  c3                   ret 
// library lua-5.1.4/ldump.c (function _DumpString)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldump.c
