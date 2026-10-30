// roc 2007-03 00679cb0  unit: seg_00670000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00679cb0
//
// 00679cb0  56                   push esi
// 00679cb1  8bf1                 mov esi, ecx
// 00679cb3  837e1000             cmp dword ptr [esi + 0x10], 0
// 00679cb7  753a                 jne 0x679cf3
// 00679cb9  8b4618               mov eax, dword ptr [esi + 0x18]
// 00679cbc  6a10                 push 0x10
// 00679cbe  50                   push eax
// 00679cbf  8d4e14               lea ecx, [esi + 0x14]
// 00679cc2  51                   push ecx
// 00679cc3  e8300e0c00           call 0x73aaf8
// 00679cc8  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00679ccb  8bd1                 mov edx, ecx
// 00679ccd  83c004               add eax, 4
// 00679cd0  c1e204               shl edx, 4
// 00679cd3  83c1ff               add ecx, -1
// 00679cd6  8d4410f0             lea eax, [eax + edx - 0x10]
// 00679cda  7817                 js 0x679cf3
// 00679cdc  8d642400             lea esp, [esp]
// 00679ce0  8b5610               mov edx, dword ptr [esi + 0x10]
// 00679ce3  895008               mov dword ptr [eax + 8], edx
// 00679ce6  894610               mov dword ptr [esi + 0x10], eax
// 00679ce9  83e901               sub ecx, 1
// 00679cec  83e810               sub eax, 0x10
// 00679cef  85c9                 test ecx, ecx
// 00679cf1  7ded                 jge 0x679ce0
// 00679cf3  8b4610               mov eax, dword ptr [esi + 0x10]
// 00679cf6  85c0                 test eax, eax
// 00679cf8  7505                 jne 0x679cff
// 00679cfa  e8af46faff           call 0x61e3ae
// 00679cff  8b5008               mov edx, dword ptr [eax + 8]
// 00679d02  33c9                 xor ecx, ecx
// 00679d04  8908                 mov dword ptr [eax], ecx
// 00679d06  894804               mov dword ptr [eax + 4], ecx
// 00679d09  89480c               mov dword ptr [eax + 0xc], ecx
// 00679d0c  895008               mov dword ptr [eax + 8], edx
// 00679d0f  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00679d12  8b5108               mov edx, dword ptr [ecx + 8]
// 00679d15  83460c01             add dword ptr [esi + 0xc], 1
// 00679d19  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00679d1d  895610               mov dword ptr [esi + 0x10], edx
// 00679d20  8908                 mov dword ptr [eax], ecx
// 00679d22  5e                   pop esi
// 00679d23  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Calendar\XTPCalendarControl.cpp (function ?NewAssoc@?$CMap@KKP8CXTPCalendarControl@@AEXKIJ@ZP81@AEXKIJ@Z@@IAEPAVCAssoc@1@K@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Calendar/XTPCalendarControl.cpp
