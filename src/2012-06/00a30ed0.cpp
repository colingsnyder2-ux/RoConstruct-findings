// roc 2012-06 00a30ed0  unit: CXTRegistryManager  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a30ed0
//
// 00a30ed0  55                   push ebp
// 00a30ed1  8b6c2408             mov ebp, dword ptr [esp + 8]
// 00a30ed5  57                   push edi
// 00a30ed6  8bf9                 mov edi, ecx
// 00a30ed8  85ed                 test ebp, ebp
// 00a30eda  7507                 jne 0xa30ee3
// 00a30edc  5f                   pop edi
// 00a30edd  33c0                 xor eax, eax
// 00a30edf  5d                   pop ebp
// 00a30ee0  c20800               ret 8
// 00a30ee3  8b07                 mov eax, dword ptr [edi]
// 00a30ee5  8b5004               mov edx, dword ptr [eax + 4]
// 00a30ee8  53                   push ebx
// 00a30ee9  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00a30eed  56                   push esi
// 00a30eee  53                   push ebx
// 00a30eef  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00a30ef7  ffd2                 call edx
// 00a30ef9  8bf0                 mov esi, eax
// 00a30efb  85f6                 test esi, esi
// 00a30efd  7431                 je 0xa30f30
// 00a30eff  8d442418             lea eax, [esp + 0x18]
// 00a30f03  50                   push eax
// 00a30f04  8d4c2418             lea ecx, [esp + 0x18]
// 00a30f08  51                   push ecx
// 00a30f09  6a00                 push 0
// 00a30f0b  53                   push ebx
// 00a30f0c  6a00                 push 0
// 00a30f0e  6a00                 push 0
// 00a30f10  6a00                 push 0
// 00a30f12  55                   push ebp
// 00a30f13  56                   push esi
// 00a30f14  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 00a30f1c  ff150820b200         call dword ptr [0xb22008]
// 00a30f22  894710               mov dword ptr [edi + 0x10], eax
// 00a30f25  56                   push esi
// 00a30f26  85c0                 test eax, eax
// 00a30f28  740f                 je 0xa30f39
// 00a30f2a  ff150420b200         call dword ptr [0xb22004]
// 00a30f30  5e                   pop esi
// 00a30f31  5b                   pop ebx
// 00a30f32  5f                   pop edi
// 00a30f33  33c0                 xor eax, eax
// 00a30f35  5d                   pop ebp
// 00a30f36  c20800               ret 8
// 00a30f39  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00a30f3d  ff150420b200         call dword ptr [0xb22004]
// 00a30f43  5e                   pop esi
// 00a30f44  5b                   pop ebx
// 00a30f45  8bc7                 mov eax, edi
// 00a30f47  5f                   pop edi
// 00a30f48  5d                   pop ebp
// 00a30f49  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTRegistryManager.cpp (function ?GetSectionKey@CXTRegistryManager@@MAEPAUHKEY__@@PBDK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTRegistryManager.cpp
