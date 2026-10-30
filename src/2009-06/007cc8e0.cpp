// roc 2009-06 007cc8e0  unit: CXTRegistryManager  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007cc8e0
//
// 007cc8e0  55                   push ebp
// 007cc8e1  8b6c2408             mov ebp, dword ptr [esp + 8]
// 007cc8e5  57                   push edi
// 007cc8e6  8bf9                 mov edi, ecx
// 007cc8e8  85ed                 test ebp, ebp
// 007cc8ea  7507                 jne 0x7cc8f3
// 007cc8ec  5f                   pop edi
// 007cc8ed  33c0                 xor eax, eax
// 007cc8ef  5d                   pop ebp
// 007cc8f0  c20800               ret 8
// 007cc8f3  8b07                 mov eax, dword ptr [edi]
// 007cc8f5  8b5004               mov edx, dword ptr [eax + 4]
// 007cc8f8  53                   push ebx
// 007cc8f9  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 007cc8fd  56                   push esi
// 007cc8fe  53                   push ebx
// 007cc8ff  c744241800000000     mov dword ptr [esp + 0x18], 0
// 007cc907  ffd2                 call edx
// 007cc909  8bf0                 mov esi, eax
// 007cc90b  85f6                 test esi, esi
// 007cc90d  7431                 je 0x7cc940
// 007cc90f  8d442418             lea eax, [esp + 0x18]
// 007cc913  50                   push eax
// 007cc914  8d4c2418             lea ecx, [esp + 0x18]
// 007cc918  51                   push ecx
// 007cc919  6a00                 push 0
// 007cc91b  53                   push ebx
// 007cc91c  6a00                 push 0
// 007cc91e  6a00                 push 0
// 007cc920  6a00                 push 0
// 007cc922  55                   push ebp
// 007cc923  56                   push esi
// 007cc924  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 007cc92c  ff150ce08900         call dword ptr [0x89e00c]
// 007cc932  894710               mov dword ptr [edi + 0x10], eax
// 007cc935  56                   push esi
// 007cc936  85c0                 test eax, eax
// 007cc938  740f                 je 0x7cc949
// 007cc93a  ff1508e08900         call dword ptr [0x89e008]
// 007cc940  5e                   pop esi
// 007cc941  5b                   pop ebx
// 007cc942  5f                   pop edi
// 007cc943  33c0                 xor eax, eax
// 007cc945  5d                   pop ebp
// 007cc946  c20800               ret 8
// 007cc949  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 007cc94d  ff1508e08900         call dword ptr [0x89e008]
// 007cc953  5e                   pop esi
// 007cc954  5b                   pop ebx
// 007cc955  8bc7                 mov eax, edi
// 007cc957  5f                   pop edi
// 007cc958  5d                   pop ebp
// 007cc959  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTRegistryManager.cpp (function ?GetSectionKey@CXTRegistryManager@@MAEPAUHKEY__@@PBDK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTRegistryManager.cpp
