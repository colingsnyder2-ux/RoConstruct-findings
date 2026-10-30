// roc 2009-12 00851c70  unit: CXTPPropExchangeArchive  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00851c70
//
// 00851c70  6aff                 push -1
// 00851c72  6808da9500           push 0x95da08
// 00851c77  64a100000000         mov eax, dword ptr fs:[0]
// 00851c7d  50                   push eax
// 00851c7e  56                   push esi
// 00851c7f  a10052b600           mov eax, dword ptr [0xb65200]
// 00851c84  33c4                 xor eax, esp
// 00851c86  50                   push eax
// 00851c87  8d442408             lea eax, [esp + 8]
// 00851c8b  64a300000000         mov dword ptr fs:[0], eax
// 00851c91  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00851c95  8d442424             lea eax, [esp + 0x24]
// 00851c99  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00851ca1  50                   push eax
// 00851ca2  85c9                 test ecx, ecx
// 00851ca4  7519                 jne 0x851cbf
// 00851ca6  ff1534ba9800         call dword ptr [0x98ba34]
// 00851cac  33c0                 xor eax, eax
// 00851cae  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00851cb2  64890d00000000       mov dword ptr fs:[0], ecx
// 00851cb9  59                   pop ecx
// 00851cba  5e                   pop esi
// 00851cbb  83c40c               add esp, 0xc
// 00851cbe  c3                   ret 
// 00851cbf  8b442424             mov eax, dword ptr [esp + 0x24]
// 00851cc3  8b11                 mov edx, dword ptr [ecx]
// 00851cc5  8b5258               mov edx, dword ptr [edx + 0x58]
// 00851cc8  50                   push eax
// 00851cc9  8b442424             mov eax, dword ptr [esp + 0x24]
// 00851ccd  6a0c                 push 0xc
// 00851ccf  50                   push eax
// 00851cd0  ffd2                 call edx
// 00851cd2  8bf0                 mov esi, eax
// 00851cd4  8d442424             lea eax, [esp + 0x24]
// 00851cd8  50                   push eax
// 00851cd9  ff1534ba9800         call dword ptr [0x98ba34]
// 00851cdf  8bc6                 mov eax, esi
// 00851ce1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00851ce5  64890d00000000       mov dword ptr fs:[0], ecx
// 00851cec  59                   pop ecx
// 00851ced  5e                   pop esi
// 00851cee  83c40c               add esp, 0xc
// 00851cf1  c3                   ret 
// copied from an identical function in another client (function ?PX_Variant@@YAHPAVCXTPPropExchange@@PBDAAVCOleVariant@@V2@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPPropExchange.cpp