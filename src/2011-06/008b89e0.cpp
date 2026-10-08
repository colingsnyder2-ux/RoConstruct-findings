// roc 2011-06 008b89e0  unit: CXTRegistryManager  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b89e0
//
// 008b89e0  55                   push ebp
// 008b89e1  8b6c2408             mov ebp, dword ptr [esp + 8]
// 008b89e5  57                   push edi
// 008b89e6  8bf9                 mov edi, ecx
// 008b89e8  85ed                 test ebp, ebp
// 008b89ea  7507                 jne 0x8b89f3
// 008b89ec  5f                   pop edi
// 008b89ed  33c0                 xor eax, eax
// 008b89ef  5d                   pop ebp
// 008b89f0  c20800               ret 8
// 008b89f3  8b07                 mov eax, dword ptr [edi]
// 008b89f5  8b5004               mov edx, dword ptr [eax + 4]
// 008b89f8  53                   push ebx
// 008b89f9  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008b89fd  56                   push esi
// 008b89fe  53                   push ebx
// 008b89ff  c744241800000000     mov dword ptr [esp + 0x18], 0
// 008b8a07  ffd2                 call edx
// 008b8a09  8bf0                 mov esi, eax
// 008b8a0b  85f6                 test esi, esi
// 008b8a0d  7431                 je 0x8b8a40
// 008b8a0f  8d442418             lea eax, [esp + 0x18]
// 008b8a13  50                   push eax
// 008b8a14  8d4c2418             lea ecx, [esp + 0x18]
// 008b8a18  51                   push ecx
// 008b8a19  6a00                 push 0
// 008b8a1b  53                   push ebx
// 008b8a1c  6a00                 push 0
// 008b8a1e  6a00                 push 0
// 008b8a20  6a00                 push 0
// 008b8a22  55                   push ebp
// 008b8a23  56                   push esi
// 008b8a24  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 008b8a2c  ff153c00a400         call dword ptr [0xa4003c]
// 008b8a32  894710               mov dword ptr [edi + 0x10], eax
// 008b8a35  56                   push esi
// 008b8a36  85c0                 test eax, eax
// 008b8a38  740f                 je 0x8b8a49
// 008b8a3a  ff150400a400         call dword ptr [0xa40004]
// 008b8a40  5e                   pop esi
// 008b8a41  5b                   pop ebx
// 008b8a42  5f                   pop edi
// 008b8a43  33c0                 xor eax, eax
// 008b8a45  5d                   pop ebp
// 008b8a46  c20800               ret 8
// 008b8a49  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 008b8a4d  ff150400a400         call dword ptr [0xa40004]
// 008b8a53  5e                   pop esi
// 008b8a54  5b                   pop ebx
// 008b8a55  8bc7                 mov eax, edi
// 008b8a57  5f                   pop edi
// 008b8a58  5d                   pop ebp
// 008b8a59  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTRegistryManager.cpp (function ?GetSectionKey@CXTRegistryManager@@MAEPAUHKEY__@@PBDK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTRegistryManager.cpp
