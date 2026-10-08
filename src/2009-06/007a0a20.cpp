// roc 2009-06 007a0a20  unit: CXTPControlGallery  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007a0a20
//
// 007a0a20  56                   push esi
// 007a0a21  57                   push edi
// 007a0a22  8bf9                 mov edi, ecx
// 007a0a24  8d44240c             lea eax, [esp + 0xc]
// 007a0a28  50                   push eax
// 007a0a29  8db7c0000000         lea esi, [edi + 0xc0]
// 007a0a2f  56                   push esi
// 007a0a30  ff15acee8900         call dword ptr [0x89eeac]
// 007a0a36  85c0                 test eax, eax
// 007a0a38  7522                 jne 0x7a0a5c
// 007a0a3a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007a0a3e  8b542410             mov edx, dword ptr [esp + 0x10]
// 007a0a42  8b442414             mov eax, dword ptr [esp + 0x14]
// 007a0a46  890e                 mov dword ptr [esi], ecx
// 007a0a48  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007a0a4c  895604               mov dword ptr [esi + 4], edx
// 007a0a4f  894608               mov dword ptr [esi + 8], eax
// 007a0a52  894e0c               mov dword ptr [esi + 0xc], ecx
// 007a0a55  8bcf                 mov ecx, edi
// 007a0a57  e864eaffff           call 0x79f4c0
// 007a0a5c  5f                   pop edi
// 007a0a5d  5e                   pop esi
// 007a0a5e  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?SetRect@CXTPControlGallery@@MAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
