// roc 2011-06 00885c40  unit: CXTPControlGallery  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00885c40
//
// 00885c40  56                   push esi
// 00885c41  57                   push edi
// 00885c42  8bf9                 mov edi, ecx
// 00885c44  8d44240c             lea eax, [esp + 0xc]
// 00885c48  50                   push eax
// 00885c49  8db7c0000000         lea esi, [edi + 0xc0]
// 00885c4f  56                   push esi
// 00885c50  ff15001ca400         call dword ptr [0xa41c00]
// 00885c56  85c0                 test eax, eax
// 00885c58  7522                 jne 0x885c7c
// 00885c5a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00885c5e  8b542410             mov edx, dword ptr [esp + 0x10]
// 00885c62  8b442414             mov eax, dword ptr [esp + 0x14]
// 00885c66  890e                 mov dword ptr [esi], ecx
// 00885c68  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00885c6c  895604               mov dword ptr [esi + 4], edx
// 00885c6f  894608               mov dword ptr [esi + 8], eax
// 00885c72  894e0c               mov dword ptr [esi + 0xc], ecx
// 00885c75  8bcf                 mov ecx, edi
// 00885c77  e864eaffff           call 0x8846e0
// 00885c7c  5f                   pop edi
// 00885c7d  5e                   pop esi
// 00885c7e  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?SetRect@CXTPControlGallery@@MAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
