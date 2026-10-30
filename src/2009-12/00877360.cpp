// roc 2009-12 00877360  unit: CXTPControlGallery  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00877360
//
// 00877360  83ec10               sub esp, 0x10
// 00877363  56                   push esi
// 00877364  8bf1                 mov esi, ecx
// 00877366  83be0001000000       cmp dword ptr [esi + 0x100], 0
// 0087736d  743b                 je 0x8773aa
// 0087736f  e8dcffffff           call 0x877350
// 00877374  85c0                 test eax, eax
// 00877376  7432                 je 0x8773aa
// 00877378  8b06                 mov eax, dword ptr [esi]
// 0087737a  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 00877380  8d4c2404             lea ecx, [esp + 4]
// 00877384  51                   push ecx
// 00877385  8bce                 mov ecx, esi
// 00877387  ffd2                 call edx
// 00877389  8bce                 mov ecx, esi
// 0087738b  e8c0ffffff           call 0x877350
// 00877390  8b4024               mov eax, dword ptr [eax + 0x24]
// 00877393  03442410             add eax, dword ptr [esp + 0x10]
// 00877397  03442408             add eax, dword ptr [esp + 8]
// 0087739b  83f820               cmp eax, 0x20
// 0087739e  7f0c                 jg 0x8773ac
// 008773a0  b820000000           mov eax, 0x20
// 008773a5  5e                   pop esi
// 008773a6  83c410               add esp, 0x10
// 008773a9  c3                   ret 
// 008773aa  33c0                 xor eax, eax
// 008773ac  5e                   pop esi
// 008773ad  83c410               add esp, 0x10
// 008773b0  c3                   ret 
// copied from an identical function in another client (function ?GetCustomizeMinHeight@CXTPControlGallery@@MBEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlGallery.cpp