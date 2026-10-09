// roc 2009-12 008e4ce0  unit: CXTCaptionButtonThemeOfficeXP  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e4ce0
//
// 008e4ce0  53                   push ebx
// 008e4ce1  8a5c2408             mov bl, byte ptr [esp + 8]
// 008e4ce5  57                   push edi
// 008e4ce6  8bf9                 mov edi, ecx
// 008e4ce8  f6c304               test bl, 4
// 008e4ceb  7413                 je 0x8e4d00
// 008e4ced  e8deacf4ff           call 0x82f9d0
// 008e4cf2  6a11                 push 0x11
// 008e4cf4  8bc8                 mov ecx, eax
// 008e4cf6  e805a4f4ff           call 0x82f100
// 008e4cfb  5f                   pop edi
// 008e4cfc  5b                   pop ebx
// 008e4cfd  c20800               ret 8
// 008e4d00  56                   push esi
// 008e4d01  8b742414             mov esi, dword ptr [esp + 0x14]
// 008e4d05  83bea000000000       cmp dword ptr [esi + 0xa0], 0
// 008e4d0c  7546                 jne 0x8e4d54
// 008e4d0e  ff1528cc9800         call dword ptr [0x98cc28]
// 008e4d14  3b4620               cmp eax, dword ptr [esi + 0x20]
// 008e4d17  743b                 je 0x8e4d54
// 008e4d19  f6c301               test bl, 1
// 008e4d1c  7536                 jne 0x8e4d54
// 008e4d1e  8bb6ac000000         mov esi, dword ptr [esi + 0xac]
// 008e4d24  85f6                 test esi, esi
// 008e4d26  7504                 jne 0x8e4d2c
// 008e4d28  33c0                 xor eax, eax
// 008e4d2a  eb03                 jmp 0x8e4d2f
// 008e4d2c  8b4620               mov eax, dword ptr [esi + 0x20]
// 008e4d2f  50                   push eax
// 008e4d30  ff1584cc9800         call dword ptr [0x98cc84]
// 008e4d36  85c0                 test eax, eax
// 008e4d38  7409                 je 0x8e4d43
// 008e4d3a  8b4678               mov eax, dword ptr [esi + 0x78]
// 008e4d3d  5e                   pop esi
// 008e4d3e  5f                   pop edi
// 008e4d3f  5b                   pop ebx
// 008e4d40  c20800               ret 8
// 008e4d43  8b4734               mov eax, dword ptr [edi + 0x34]
// 008e4d46  83f8ff               cmp eax, -1
// 008e4d49  751a                 jne 0x8e4d65
// 008e4d4b  8b4730               mov eax, dword ptr [edi + 0x30]
// 008e4d4e  5e                   pop esi
// 008e4d4f  5f                   pop edi
// 008e4d50  5b                   pop ebx
// 008e4d51  c20800               ret 8
// 008e4d54  8b87b8000000         mov eax, dword ptr [edi + 0xb8]
// 008e4d5a  83f8ff               cmp eax, -1
// 008e4d5d  7506                 jne 0x8e4d65
// 008e4d5f  8b87b4000000         mov eax, dword ptr [edi + 0xb4]
// 008e4d65  5e                   pop esi
// 008e4d66  5f                   pop edi
// 008e4d67  5b                   pop ebx
// 008e4d68  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTCaptionTheme.cpp (function ?GetTextColor@CXTCaptionButtonThemeOfficeXP@@MAEKIPAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTCaptionTheme.cpp
