// roc 2011-06 008fcaf0  unit: CXTPRibbonGroupPopupToolBar  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008fcaf0
//
// 008fcaf0  56                   push esi
// 008fcaf1  57                   push edi
// 008fcaf2  8bf1                 mov esi, ecx
// 008fcaf4  e897dff1ff           call 0x81aa90
// 008fcaf9  8bc8                 mov ecx, eax
// 008fcafb  e8f0ebf2ff           call 0x82b6f0
// 008fcb00  8bf8                 mov edi, eax
// 008fcb02  837f0400             cmp dword ptr [edi + 4], 0
// 008fcb06  7f41                 jg 0x8fcb49
// 008fcb08  8b4620               mov eax, dword ptr [esi + 0x20]
// 008fcb0b  50                   push eax
// 008fcb0c  e86f39f8ff           call 0x880480
// 008fcb11  83c404               add esp, 4
// 008fcb14  85c0                 test eax, eax
// 008fcb16  7431                 je 0x8fcb49
// 008fcb18  56                   push esi
// 008fcb19  8bcf                 mov ecx, edi
// 008fcb1b  e8e03af8ff           call 0x880600
// 008fcb20  85c0                 test eax, eax
// 008fcb22  7525                 jne 0x8fcb49
// 008fcb24  83bed0000000ff       cmp dword ptr [esi + 0xd0], -1
// 008fcb2b  751c                 jne 0x8fcb49
// 008fcb2d  8b8e78020000         mov ecx, dword ptr [esi + 0x278]
// 008fcb33  e80894faff           call 0x8a5f40
// 008fcb38  83b84c06000000       cmp dword ptr [eax + 0x64c], 0
// 008fcb3f  7408                 je 0x8fcb49
// 008fcb41  8b8674020000         mov eax, dword ptr [esi + 0x274]
// 008fcb47  eb02                 jmp 0x8fcb4b
// 008fcb49  33c0                 xor eax, eax
// 008fcb4b  3b8670020000         cmp eax, dword ptr [esi + 0x270]
// 008fcb51  7420                 je 0x8fcb73
// 008fcb53  50                   push eax
// 008fcb54  8d8e5c020000         lea ecx, [esi + 0x25c]
// 008fcb5a  e881f9ffff           call 0x8fc4e0
// 008fcb5f  83be7002000000       cmp dword ptr [esi + 0x270], 0
// 008fcb66  740b                 je 0x8fcb73
// 008fcb68  8b4620               mov eax, dword ptr [esi + 0x20]
// 008fcb6b  50                   push eax
// 008fcb6c  8bcf                 mov ecx, edi
// 008fcb6e  e83d3af8ff           call 0x8805b0
// 008fcb73  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008fcb77  8b542410             mov edx, dword ptr [esp + 0x10]
// 008fcb7b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008fcb7f  51                   push ecx
// 008fcb80  52                   push edx
// 008fcb81  50                   push eax
// 008fcb82  8bce                 mov ecx, esi
// 008fcb84  e8d78cf5ff           call 0x855860
// 008fcb89  5f                   pop edi
// 008fcb8a  5e                   pop esi
// 008fcb8b  c20c00               ret 0xc
// library xtp-11.2.2/Source\Ribbon\XTPRibbonPopups.cpp (function ?OnMouseMove@CXTPRibbonGroupPopupToolBar@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonPopups.cpp
