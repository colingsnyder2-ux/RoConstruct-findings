// roc 2007-08 006901a0  unit: CXTPDockingPane  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006901a0
//
// 006901a0  56                   push esi
// 006901a1  8bf1                 mov esi, ecx
// 006901a3  837e1000             cmp dword ptr [esi + 0x10], 0
// 006901a7  753a                 jne 0x6901e3
// 006901a9  8b4618               mov eax, dword ptr [esi + 0x18]
// 006901ac  6a10                 push 0x10
// 006901ae  50                   push eax
// 006901af  8d4e14               lea ecx, [esi + 0x14]
// 006901b2  51                   push ecx
// 006901b3  e8e804faff           call 0x6306a0
// 006901b8  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 006901bb  8bd1                 mov edx, ecx
// 006901bd  83c004               add eax, 4
// 006901c0  c1e204               shl edx, 4
// 006901c3  83c1ff               add ecx, -1
// 006901c6  8d4410f0             lea eax, [eax + edx - 0x10]
// 006901ca  7817                 js 0x6901e3
// 006901cc  8d642400             lea esp, [esp]
// 006901d0  8b5610               mov edx, dword ptr [esi + 0x10]
// 006901d3  895008               mov dword ptr [eax + 8], edx
// 006901d6  894610               mov dword ptr [esi + 0x10], eax
// 006901d9  83e901               sub ecx, 1
// 006901dc  83e810               sub eax, 0x10
// 006901df  85c9                 test ecx, ecx
// 006901e1  7ded                 jge 0x6901d0
// 006901e3  8b4610               mov eax, dword ptr [esi + 0x10]
// 006901e6  85c0                 test eax, eax
// 006901e8  7505                 jne 0x6901ef
// 006901ea  e831fdf9ff           call 0x62ff20
// 006901ef  8b5008               mov edx, dword ptr [eax + 8]
// 006901f2  33c9                 xor ecx, ecx
// 006901f4  8908                 mov dword ptr [eax], ecx
// 006901f6  894804               mov dword ptr [eax + 4], ecx
// 006901f9  89480c               mov dword ptr [eax + 0xc], ecx
// 006901fc  895008               mov dword ptr [eax + 8], edx
// 006901ff  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00690202  8b5108               mov edx, dword ptr [ecx + 8]
// 00690205  83460c01             add dword ptr [esi + 0xc], 1
// 00690209  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0069020d  895610               mov dword ptr [esi + 0x10], edx
// 00690210  8908                 mov dword ptr [eax], ecx
// 00690212  5e                   pop esi
// 00690213  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Calendar\XTPCalendarControl.cpp (function ?NewAssoc@?$CMap@KKP8CXTPCalendarControl@@AEXKIJ@ZP81@AEXKIJ@Z@@IAEPAVCAssoc@1@K@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Calendar/XTPCalendarControl.cpp
