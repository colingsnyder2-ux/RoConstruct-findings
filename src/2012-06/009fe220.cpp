// roc 2012-06 009fe220  unit: CXTPControlGallery  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009fe220
//
// 009fe220  56                   push esi
// 009fe221  57                   push edi
// 009fe222  8bf9                 mov edi, ecx
// 009fe224  8d44240c             lea eax, [esp + 0xc]
// 009fe228  50                   push eax
// 009fe229  8db7c0000000         lea esi, [edi + 0xc0]
// 009fe22f  56                   push esi
// 009fe230  ff15e03cb200         call dword ptr [0xb23ce0]
// 009fe236  85c0                 test eax, eax
// 009fe238  7522                 jne 0x9fe25c
// 009fe23a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 009fe23e  8b542410             mov edx, dword ptr [esp + 0x10]
// 009fe242  8b442414             mov eax, dword ptr [esp + 0x14]
// 009fe246  890e                 mov dword ptr [esi], ecx
// 009fe248  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 009fe24c  895604               mov dword ptr [esi + 4], edx
// 009fe24f  894608               mov dword ptr [esi + 8], eax
// 009fe252  894e0c               mov dword ptr [esi + 0xc], ecx
// 009fe255  8bcf                 mov ecx, edi
// 009fe257  e864eaffff           call 0x9fccc0
// 009fe25c  5f                   pop edi
// 009fe25d  5e                   pop esi
// 009fe25e  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?SetRect@CXTPControlGallery@@MAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
