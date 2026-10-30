// roc 2010-06 008a3f20  unit: CXTPRibbonGroupPopupToolBar  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a3f20
//
// 008a3f20  56                   push esi
// 008a3f21  57                   push edi
// 008a3f22  8bf1                 mov esi, ecx
// 008a3f24  e8a746f1ff           call 0x7b85d0
// 008a3f29  8bc8                 mov ecx, eax
// 008a3f2b  e8105df2ff           call 0x7c9c40
// 008a3f30  8bf8                 mov edi, eax
// 008a3f32  837f0400             cmp dword ptr [edi + 4], 0
// 008a3f36  7f41                 jg 0x8a3f79
// 008a3f38  8b4620               mov eax, dword ptr [esi + 0x20]
// 008a3f3b  50                   push eax
// 008a3f3c  e8afeef7ff           call 0x822df0
// 008a3f41  83c404               add esp, 4
// 008a3f44  85c0                 test eax, eax
// 008a3f46  7431                 je 0x8a3f79
// 008a3f48  56                   push esi
// 008a3f49  8bcf                 mov ecx, edi
// 008a3f4b  e860f0f7ff           call 0x822fb0
// 008a3f50  85c0                 test eax, eax
// 008a3f52  7525                 jne 0x8a3f79
// 008a3f54  83bed0000000ff       cmp dword ptr [esi + 0xd0], -1
// 008a3f5b  751c                 jne 0x8a3f79
// 008a3f5d  8b8e78020000         mov ecx, dword ptr [esi + 0x278]
// 008a3f63  e8984efaff           call 0x848e00
// 008a3f68  83b84c06000000       cmp dword ptr [eax + 0x64c], 0
// 008a3f6f  7408                 je 0x8a3f79
// 008a3f71  8b8674020000         mov eax, dword ptr [esi + 0x274]
// 008a3f77  eb02                 jmp 0x8a3f7b
// 008a3f79  33c0                 xor eax, eax
// 008a3f7b  3b8670020000         cmp eax, dword ptr [esi + 0x270]
// 008a3f81  7420                 je 0x8a3fa3
// 008a3f83  50                   push eax
// 008a3f84  8d8e5c020000         lea ecx, [esi + 0x25c]
// 008a3f8a  e8a1f9ffff           call 0x8a3930
// 008a3f8f  83be7002000000       cmp dword ptr [esi + 0x270], 0
// 008a3f96  740b                 je 0x8a3fa3
// 008a3f98  8b4620               mov eax, dword ptr [esi + 0x20]
// 008a3f9b  50                   push eax
// 008a3f9c  8bcf                 mov ecx, edi
// 008a3f9e  e8bdeff7ff           call 0x822f60
// 008a3fa3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008a3fa7  8b542410             mov edx, dword ptr [esp + 0x10]
// 008a3fab  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008a3faf  51                   push ecx
// 008a3fb0  52                   push edx
// 008a3fb1  50                   push eax
// 008a3fb2  8bce                 mov ecx, esi
// 008a3fb4  e80740f5ff           call 0x7f7fc0
// 008a3fb9  5f                   pop edi
// 008a3fba  5e                   pop esi
// 008a3fbb  c20c00               ret 0xc
// library xtp-11.2.2/Source\Ribbon\XTPRibbonPopups.cpp (function ?OnMouseMove@CXTPRibbonGroupPopupToolBar@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonPopups.cpp
