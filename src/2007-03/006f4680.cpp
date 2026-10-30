// roc 2007-03 006f4680  unit: seg_006f0000  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006f4680
//
// 006f4680  56                   push esi
// 006f4681  8bf1                 mov esi, ecx
// 006f4683  837e1000             cmp dword ptr [esi + 0x10], 0
// 006f4687  7539                 jne 0x6f46c2
// 006f4689  8b4618               mov eax, dword ptr [esi + 0x18]
// 006f468c  6a18                 push 0x18
// 006f468e  50                   push eax
// 006f468f  8d4e14               lea ecx, [esi + 0x14]
// 006f4692  51                   push ecx
// 006f4693  e860640400           call 0x73aaf8
// 006f4698  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 006f469b  83c004               add eax, 4
// 006f469e  8d1449               lea edx, [ecx + ecx*2]
// 006f46a1  83c1ff               add ecx, -1
// 006f46a4  8d44d0e8             lea eax, [eax + edx*8 - 0x18]
// 006f46a8  7818                 js 0x6f46c2
// 006f46aa  8d9b00000000         lea ebx, [ebx]
// 006f46b0  8b5610               mov edx, dword ptr [esi + 0x10]
// 006f46b3  8910                 mov dword ptr [eax], edx
// 006f46b5  894610               mov dword ptr [esi + 0x10], eax
// 006f46b8  83e901               sub ecx, 1
// 006f46bb  83e818               sub eax, 0x18
// 006f46be  85c9                 test ecx, ecx
// 006f46c0  7dee                 jge 0x6f46b0
// 006f46c2  8b4610               mov eax, dword ptr [esi + 0x10]
// 006f46c5  85c0                 test eax, eax
// 006f46c7  7505                 jne 0x6f46ce
// 006f46c9  e8e09cf2ff           call 0x61e3ae
// 006f46ce  8b08                 mov ecx, dword ptr [eax]
// 006f46d0  8b542408             mov edx, dword ptr [esp + 8]
// 006f46d4  894e10               mov dword ptr [esi + 0x10], ecx
// 006f46d7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006f46db  895004               mov dword ptr [eax + 4], edx
// 006f46de  8908                 mov dword ptr [eax], ecx
// 006f46e0  83460c01             add dword ptr [esi + 0xc], 1
// 006f46e4  5e                   pop esi
// 006f46e5  c20800               ret 8
// library xtp-11.2.2-vc8/Source\SkinFramework\XTPSkinObject.cpp (function ?NewNode@?$CList@UDEFWINDOW_DESCRIPTIOR@CXTPSkinObject@@AAU12@@@IAEPAUCNode@1@PAU21@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/SkinFramework/XTPSkinObject.cpp
