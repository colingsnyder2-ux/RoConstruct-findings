// roc 2011-06 00877860  unit: CXTPPropertyGridView  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00877860
//
// 00877860  83ec08               sub esp, 8
// 00877863  837c241001           cmp dword ptr [esp + 0x10], 1
// 00877868  56                   push esi
// 00877869  8bf1                 mov esi, ecx
// 0087786b  754b                 jne 0x8778b8
// 0087786d  8d442404             lea eax, [esp + 4]
// 00877871  50                   push eax
// 00877872  ff15c819a400         call dword ptr [0xa419c8]
// 00877878  8b5620               mov edx, dword ptr [esi + 0x20]
// 0087787b  8d4c2404             lea ecx, [esp + 4]
// 0087787f  51                   push ecx
// 00877880  52                   push edx
// 00877881  ff15f419a400         call dword ptr [0xa419f4]
// 00877887  8b442408             mov eax, dword ptr [esp + 8]
// 0087788b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0087788f  50                   push eax
// 00877890  51                   push ecx
// 00877891  8bce                 mov ecx, esi
// 00877893  e878ffffff           call 0x877810
// 00877898  3d00010000           cmp eax, 0x100
// 0087789d  7519                 jne 0x8778b8
// 0087789f  8b96d4000000         mov edx, dword ptr [esi + 0xd4]
// 008778a5  52                   push edx
// 008778a6  ff15f41ba400         call dword ptr [0xa41bf4]
// 008778ac  b801000000           mov eax, 1
// 008778b1  5e                   pop esi
// 008778b2  83c408               add esp, 8
// 008778b5  c20c00               ret 0xc
// 008778b8  8bce                 mov ecx, esi
// 008778ba  e86f2df9ff           call 0x80a62e
// 008778bf  5e                   pop esi
// 008778c0  83c408               add esp, 8
// 008778c3  c20c00               ret 0xc
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?OnSetCursor@CXTPPropertyGridView@@IAEHPAVCWnd@@II@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
