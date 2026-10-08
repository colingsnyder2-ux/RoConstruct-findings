// roc 2012-06 00a74e00  unit: CXTPRibbonGroupPopupToolBar  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a74e00
//
// 00a74e00  56                   push esi
// 00a74e01  57                   push edi
// 00a74e02  8bf1                 mov esi, ecx
// 00a74e04  e8e7def1ff           call 0x992cf0
// 00a74e09  8bc8                 mov ecx, eax
// 00a74e0b  e8b0eef2ff           call 0x9a3cc0
// 00a74e10  8bf8                 mov edi, eax
// 00a74e12  837f0400             cmp dword ptr [edi + 4], 0
// 00a74e16  7f41                 jg 0xa74e59
// 00a74e18  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a74e1b  50                   push eax
// 00a74e1c  e80f3cf8ff           call 0x9f8a30
// 00a74e21  83c404               add esp, 4
// 00a74e24  85c0                 test eax, eax
// 00a74e26  7431                 je 0xa74e59
// 00a74e28  56                   push esi
// 00a74e29  8bcf                 mov ecx, edi
// 00a74e2b  e8c03df8ff           call 0x9f8bf0
// 00a74e30  85c0                 test eax, eax
// 00a74e32  7525                 jne 0xa74e59
// 00a74e34  83bed0000000ff       cmp dword ptr [esi + 0xd0], -1
// 00a74e3b  751c                 jne 0xa74e59
// 00a74e3d  8b8e78020000         mov ecx, dword ptr [esi + 0x278]
// 00a74e43  e8a895faff           call 0xa1e3f0
// 00a74e48  83b84c06000000       cmp dword ptr [eax + 0x64c], 0
// 00a74e4f  7408                 je 0xa74e59
// 00a74e51  8b8674020000         mov eax, dword ptr [esi + 0x274]
// 00a74e57  eb02                 jmp 0xa74e5b
// 00a74e59  33c0                 xor eax, eax
// 00a74e5b  3b8670020000         cmp eax, dword ptr [esi + 0x270]
// 00a74e61  7420                 je 0xa74e83
// 00a74e63  50                   push eax
// 00a74e64  8d8e5c020000         lea ecx, [esi + 0x25c]
// 00a74e6a  e8a1f9ffff           call 0xa74810
// 00a74e6f  83be7002000000       cmp dword ptr [esi + 0x270], 0
// 00a74e76  740b                 je 0xa74e83
// 00a74e78  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a74e7b  50                   push eax
// 00a74e7c  8bcf                 mov ecx, edi
// 00a74e7e  e81d3df8ff           call 0x9f8ba0
// 00a74e83  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a74e87  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a74e8b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00a74e8f  51                   push ecx
// 00a74e90  52                   push edx
// 00a74e91  50                   push eax
// 00a74e92  8bce                 mov ecx, esi
// 00a74e94  e8b78ef5ff           call 0x9cdd50
// 00a74e99  5f                   pop edi
// 00a74e9a  5e                   pop esi
// 00a74e9b  c20c00               ret 0xc
// library xtp-11.2.2/Source\Ribbon\XTPRibbonPopups.cpp (function ?OnMouseMove@CXTPRibbonGroupPopupToolBar@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonPopups.cpp
