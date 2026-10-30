// roc 2009-12 00877890  unit: CXTPControlGallery  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00877890
//
// 00877890  56                   push esi
// 00877891  8bf1                 mov esi, ecx
// 00877893  e828fbffff           call 0x8773c0
// 00877898  85c0                 test eax, eax
// 0087789a  7415                 je 0x8778b1
// 0087789c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008778a0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008778a4  50                   push eax
// 008778a5  51                   push ecx
// 008778a6  8bce                 mov ecx, esi
// 008778a8  e8b338fcff           call 0x83b160
// 008778ad  5e                   pop esi
// 008778ae  c20800               ret 8
// 008778b1  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 008778b7  8bb6c0000000         mov esi, dword ptr [esi + 0xc0]
// 008778bd  8b542408             mov edx, dword ptr [esp + 8]
// 008778c1  50                   push eax
// 008778c2  8d4eff               lea ecx, [esi - 1]
// 008778c5  51                   push ecx
// 008778c6  50                   push eax
// 008778c7  51                   push ecx
// 008778c8  52                   push edx
// 008778c9  ff1538ca9800         call dword ptr [0x98ca38]
// 008778cf  5e                   pop esi
// 008778d0  c20800               ret 8
// copied from an identical function in another client (function ?AdjustExcludeRect@CXTPControlGallery@@MAEXAAVCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlGallery.cpp