// roc 2009-12 0080da40  unit: IIHH::?$CMap  size: 204 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080da40
//
// 0080da40  6aff                 push -1
// 0080da42  683a9c9500           push 0x959c3a
// 0080da47  64a100000000         mov eax, dword ptr fs:[0]
// 0080da4d  50                   push eax
// 0080da4e  83ec08               sub esp, 8
// 0080da51  53                   push ebx
// 0080da52  56                   push esi
// 0080da53  57                   push edi
// 0080da54  a10052b600           mov eax, dword ptr [0xb65200]
// 0080da59  33c4                 xor eax, esp
// 0080da5b  50                   push eax
// 0080da5c  8d442418             lea eax, [esp + 0x18]
// 0080da60  64a300000000         mov dword ptr fs:[0], eax
// 0080da66  8bf1                 mov esi, ecx
// 0080da68  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0080da6c  8d442410             lea eax, [esp + 0x10]
// 0080da70  50                   push eax
// 0080da71  8d5e10               lea ebx, [esi + 0x10]
// 0080da74  57                   push edi
// 0080da75  8bcb                 mov ecx, ebx
// 0080da77  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0080da7f  e8fceeffff           call 0x80c980
// 0080da84  85c0                 test eax, eax
// 0080da86  7419                 je 0x80daa1
// 0080da88  8b442410             mov eax, dword ptr [esp + 0x10]
// 0080da8c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0080da90  64890d00000000       mov dword ptr fs:[0], ecx
// 0080da97  59                   pop ecx
// 0080da98  5f                   pop edi
// 0080da99  5e                   pop esi
// 0080da9a  5b                   pop ebx
// 0080da9b  83c414               add esp, 0x14
// 0080da9e  c20400               ret 4
// 0080daa1  8d4c2410             lea ecx, [esp + 0x10]
// 0080daa5  51                   push ecx
// 0080daa6  8bce                 mov ecx, esi
// 0080daa8  e883c8ffff           call 0x80a330
// 0080daad  6858010000           push 0x158
// 0080dab2  e8a95dfeff           call 0x7f3860
// 0080dab7  83c404               add esp, 4
// 0080daba  89442428             mov dword ptr [esp + 0x28], eax
// 0080dabe  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0080dac6  85c0                 test eax, eax
// 0080dac8  7417                 je 0x80dae1
// 0080daca  8b542414             mov edx, dword ptr [esp + 0x14]
// 0080dace  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0080dad2  56                   push esi
// 0080dad3  52                   push edx
// 0080dad4  51                   push ecx
// 0080dad5  57                   push edi
// 0080dad6  8bc8                 mov ecx, eax
// 0080dad8  e8c3f6ffff           call 0x80d1a0
// 0080dadd  8bf0                 mov esi, eax
// 0080dadf  eb02                 jmp 0x80dae3
// 0080dae1  33f6                 xor esi, esi
// 0080dae3  57                   push edi
// 0080dae4  8bcb                 mov ecx, ebx
// 0080dae6  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0080daee  e88d660800           call 0x894180
// 0080daf3  8930                 mov dword ptr [eax], esi
// 0080daf5  8bc6                 mov eax, esi
// 0080daf7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0080dafb  64890d00000000       mov dword ptr fs:[0], ecx
// 0080db02  59                   pop ecx
// 0080db03  5f                   pop edi
// 0080db04  5e                   pop esi
// 0080db05  5b                   pop ebx
// 0080db06  83c414               add esp, 0x14
// 0080db09  c20400               ret 4
// copied from an identical function in another client (function ?GetIcon@CXTPImageManagerImageList@@QAEPAVCXTPImageManagerIcon@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp