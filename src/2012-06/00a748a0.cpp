// roc 2012-06 00a748a0  unit: CXTPRibbonTabPopupToolBar  size: 179 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a748a0
//
// 00a748a0  56                   push esi
// 00a748a1  57                   push edi
// 00a748a2  8bf1                 mov esi, ecx
// 00a748a4  e847e4f1ff           call 0x992cf0
// 00a748a9  8bc8                 mov ecx, eax
// 00a748ab  e810f4f2ff           call 0x9a3cc0
// 00a748b0  8bf8                 mov edi, eax
// 00a748b2  837f0400             cmp dword ptr [edi + 4], 0
// 00a748b6  7f56                 jg 0xa7490e
// 00a748b8  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a748bb  50                   push eax
// 00a748bc  e86f41f8ff           call 0x9f8a30
// 00a748c1  83c404               add esp, 4
// 00a748c4  85c0                 test eax, eax
// 00a748c6  7446                 je 0xa7490e
// 00a748c8  56                   push esi
// 00a748c9  8bcf                 mov ecx, edi
// 00a748cb  e82043f8ff           call 0x9f8bf0
// 00a748d0  85c0                 test eax, eax
// 00a748d2  753a                 jne 0xa7490e
// 00a748d4  83bed0000000ff       cmp dword ptr [esi + 0xd0], -1
// 00a748db  7531                 jne 0xa7490e
// 00a748dd  8b8e78020000         mov ecx, dword ptr [esi + 0x278]
// 00a748e3  e8089bfaff           call 0xa1e3f0
// 00a748e8  83b84c06000000       cmp dword ptr [eax + 0x64c], 0
// 00a748ef  741d                 je 0xa7490e
// 00a748f1  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a748f5  8b965c020000         mov edx, dword ptr [esi + 0x25c]
// 00a748fb  8b5208               mov edx, dword ptr [edx + 8]
// 00a748fe  8d8e5c020000         lea ecx, [esi + 0x25c]
// 00a74904  50                   push eax
// 00a74905  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a74909  50                   push eax
// 00a7490a  ffd2                 call edx
// 00a7490c  eb02                 jmp 0xa74910
// 00a7490e  33c0                 xor eax, eax
// 00a74910  3b8670020000         cmp eax, dword ptr [esi + 0x270]
// 00a74916  7420                 je 0xa74938
// 00a74918  50                   push eax
// 00a74919  8d8e5c020000         lea ecx, [esi + 0x25c]
// 00a7491f  e8ecfeffff           call 0xa74810
// 00a74924  83be7002000000       cmp dword ptr [esi + 0x270], 0
// 00a7492b  740b                 je 0xa74938
// 00a7492d  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a74930  50                   push eax
// 00a74931  8bcf                 mov ecx, edi
// 00a74933  e86842f8ff           call 0x9f8ba0
// 00a74938  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a7493c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a74940  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00a74944  50                   push eax
// 00a74945  51                   push ecx
// 00a74946  52                   push edx
// 00a74947  8bce                 mov ecx, esi
// 00a74949  e80294f5ff           call 0x9cdd50
// 00a7494e  5f                   pop edi
// 00a7494f  5e                   pop esi
// 00a74950  c20c00               ret 0xc
// library xtp-11.2.2/Source\Ribbon\XTPRibbonPopups.cpp (function ?OnMouseMove@CXTPRibbonTabPopupToolBar@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonPopups.cpp
