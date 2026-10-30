// roc 2010-06 008a39c0  unit: CXTPRibbonTabPopupToolBar  size: 179 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a39c0
//
// 008a39c0  56                   push esi
// 008a39c1  57                   push edi
// 008a39c2  8bf1                 mov esi, ecx
// 008a39c4  e8074cf1ff           call 0x7b85d0
// 008a39c9  8bc8                 mov ecx, eax
// 008a39cb  e87062f2ff           call 0x7c9c40
// 008a39d0  8bf8                 mov edi, eax
// 008a39d2  837f0400             cmp dword ptr [edi + 4], 0
// 008a39d6  7f56                 jg 0x8a3a2e
// 008a39d8  8b4620               mov eax, dword ptr [esi + 0x20]
// 008a39db  50                   push eax
// 008a39dc  e80ff4f7ff           call 0x822df0
// 008a39e1  83c404               add esp, 4
// 008a39e4  85c0                 test eax, eax
// 008a39e6  7446                 je 0x8a3a2e
// 008a39e8  56                   push esi
// 008a39e9  8bcf                 mov ecx, edi
// 008a39eb  e8c0f5f7ff           call 0x822fb0
// 008a39f0  85c0                 test eax, eax
// 008a39f2  753a                 jne 0x8a3a2e
// 008a39f4  83bed0000000ff       cmp dword ptr [esi + 0xd0], -1
// 008a39fb  7531                 jne 0x8a3a2e
// 008a39fd  8b8e78020000         mov ecx, dword ptr [esi + 0x278]
// 008a3a03  e8f853faff           call 0x848e00
// 008a3a08  83b84c06000000       cmp dword ptr [eax + 0x64c], 0
// 008a3a0f  741d                 je 0x8a3a2e
// 008a3a11  8b442414             mov eax, dword ptr [esp + 0x14]
// 008a3a15  8b965c020000         mov edx, dword ptr [esi + 0x25c]
// 008a3a1b  8b5208               mov edx, dword ptr [edx + 8]
// 008a3a1e  8d8e5c020000         lea ecx, [esi + 0x25c]
// 008a3a24  50                   push eax
// 008a3a25  8b442414             mov eax, dword ptr [esp + 0x14]
// 008a3a29  50                   push eax
// 008a3a2a  ffd2                 call edx
// 008a3a2c  eb02                 jmp 0x8a3a30
// 008a3a2e  33c0                 xor eax, eax
// 008a3a30  3b8670020000         cmp eax, dword ptr [esi + 0x270]
// 008a3a36  7420                 je 0x8a3a58
// 008a3a38  50                   push eax
// 008a3a39  8d8e5c020000         lea ecx, [esi + 0x25c]
// 008a3a3f  e8ecfeffff           call 0x8a3930
// 008a3a44  83be7002000000       cmp dword ptr [esi + 0x270], 0
// 008a3a4b  740b                 je 0x8a3a58
// 008a3a4d  8b4620               mov eax, dword ptr [esi + 0x20]
// 008a3a50  50                   push eax
// 008a3a51  8bcf                 mov ecx, edi
// 008a3a53  e808f5f7ff           call 0x822f60
// 008a3a58  8b442414             mov eax, dword ptr [esp + 0x14]
// 008a3a5c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008a3a60  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008a3a64  50                   push eax
// 008a3a65  51                   push ecx
// 008a3a66  52                   push edx
// 008a3a67  8bce                 mov ecx, esi
// 008a3a69  e85245f5ff           call 0x7f7fc0
// 008a3a6e  5f                   pop edi
// 008a3a6f  5e                   pop esi
// 008a3a70  c20c00               ret 0xc
// library xtp-11.2.2/Source\Ribbon\XTPRibbonPopups.cpp (function ?OnMouseMove@CXTPRibbonTabPopupToolBar@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonPopups.cpp
