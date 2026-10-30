// roc 2009-12 0087b960  unit: CXTPControlGallery  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0087b960
//
// 0087b960  56                   push esi
// 0087b961  57                   push edi
// 0087b962  8bf9                 mov edi, ecx
// 0087b964  8d44240c             lea eax, [esp + 0xc]
// 0087b968  50                   push eax
// 0087b969  8db7c0000000         lea esi, [edi + 0xc0]
// 0087b96f  56                   push esi
// 0087b970  ff15bcca9800         call dword ptr [0x98cabc]
// 0087b976  85c0                 test eax, eax
// 0087b978  7522                 jne 0x87b99c
// 0087b97a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0087b97e  8b542410             mov edx, dword ptr [esp + 0x10]
// 0087b982  8b442414             mov eax, dword ptr [esp + 0x14]
// 0087b986  890e                 mov dword ptr [esi], ecx
// 0087b988  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0087b98c  895604               mov dword ptr [esi + 4], edx
// 0087b98f  894608               mov dword ptr [esi + 8], eax
// 0087b992  894e0c               mov dword ptr [esi + 0xc], ecx
// 0087b995  8bcf                 mov ecx, edi
// 0087b997  e864eaffff           call 0x87a400
// 0087b99c  5f                   pop edi
// 0087b99d  5e                   pop esi
// 0087b99e  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?SetRect@CXTPControlGallery@@MAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
