// roc 2007-03 0071eaf0  unit: seg_00710000  size: 216 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0071eaf0
//
// 0071eaf0  83ec2c               sub esp, 0x2c
// 0071eaf3  53                   push ebx
// 0071eaf4  55                   push ebp
// 0071eaf5  56                   push esi
// 0071eaf6  57                   push edi
// 0071eaf7  8bf9                 mov edi, ecx
// 0071eaf9  8b7720               mov esi, dword ptr [edi + 0x20]
// 0071eafc  56                   push esi
// 0071eafd  8d4c2420             lea ecx, [esp + 0x20]
// 0071eb01  e89accf4ff           call 0x66b7a0
// 0071eb06  8bcf                 mov ecx, edi
// 0071eb08  e8b354fdff           call 0x6f3fc0
// 0071eb0d  8ba83c010000         mov ebp, dword ptr [eax + 0x13c]
// 0071eb13  8bcf                 mov ecx, edi
// 0071eb15  e8a654fdff           call 0x6f3fc0
// 0071eb1a  85f6                 test esi, esi
// 0071eb1c  8b8040010000         mov eax, dword ptr [eax + 0x140]
// 0071eb22  89442410             mov dword ptr [esp + 0x10], eax
// 0071eb26  743e                 je 0x71eb66
// 0071eb28  8b3d04ed7700         mov edi, dword ptr [0x77ed04]
// 0071eb2e  8b1dc8ec7700         mov ebx, dword ptr [0x77ecc8]
// 0071eb34  6af0                 push -0x10
// 0071eb36  56                   push esi
// 0071eb37  ffd7                 call edi
// 0071eb39  a900000400           test eax, 0x40000
// 0071eb3e  6af0                 push -0x10
// 0071eb40  56                   push esi
// 0071eb41  752d                 jne 0x71eb70
// 0071eb43  ffd7                 call edi
// 0071eb45  a900000040           test eax, 0x40000000
// 0071eb4a  741a                 je 0x71eb66
// 0071eb4c  6af0                 push -0x10
// 0071eb4e  56                   push esi
// 0071eb4f  ffd7                 call edi
// 0071eb51  250000c000           and eax, 0xc00000
// 0071eb56  3d0000c000           cmp eax, 0xc00000
// 0071eb5b  7409                 je 0x71eb66
// 0071eb5d  56                   push esi
// 0071eb5e  ffd3                 call ebx
// 0071eb60  8bf0                 mov esi, eax
// 0071eb62  85f6                 test esi, esi
// 0071eb64  75ce                 jne 0x71eb34
// 0071eb66  5f                   pop edi
// 0071eb67  5e                   pop esi
// 0071eb68  5d                   pop ebp
// 0071eb69  33c0                 xor eax, eax
// 0071eb6b  5b                   pop ebx
// 0071eb6c  83c42c               add esp, 0x2c
// 0071eb6f  c3                   ret 
// 0071eb70  ffd7                 call edi
// 0071eb72  a900000001           test eax, 0x1000000
// 0071eb77  75ed                 jne 0x71eb66
// 0071eb79  56                   push esi
// 0071eb7a  8d4c2430             lea ecx, [esp + 0x30]
// 0071eb7e  e8adccf4ff           call 0x66b830
// 0071eb83  8b4808               mov ecx, dword ptr [eax + 8]
// 0071eb86  894c2414             mov dword ptr [esp + 0x14], ecx
// 0071eb8a  8b500c               mov edx, dword ptr [eax + 0xc]
// 0071eb8d  8d442414             lea eax, [esp + 0x14]
// 0071eb91  50                   push eax
// 0071eb92  56                   push esi
// 0071eb93  89542420             mov dword ptr [esp + 0x20], edx
// 0071eb97  ff1540ed7700         call dword ptr [0x77ed40]
// 0071eb9d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0071eba1  03cd                 add ecx, ebp
// 0071eba3  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 0071eba7  7cbd                 jl 0x71eb66
// 0071eba9  8b542428             mov edx, dword ptr [esp + 0x28]
// 0071ebad  8b442410             mov eax, dword ptr [esp + 0x10]
// 0071ebb1  03d0                 add edx, eax
// 0071ebb3  3b542418             cmp edx, dword ptr [esp + 0x18]
// 0071ebb7  7cad                 jl 0x71eb66
// 0071ebb9  5f                   pop edi
// 0071ebba  33c0                 xor eax, eax
// 0071ebbc  85f6                 test esi, esi
// 0071ebbe  5e                   pop esi
// 0071ebbf  5d                   pop ebp
// 0071ebc0  0f95c0               setne al
// 0071ebc3  5b                   pop ebx
// 0071ebc4  83c42c               add esp, 0x2c
// 0071ebc7  c3                   ret 
// library xtp-11.2.2-vc8/Source\SkinFramework\XTPSkinObjectFrame.cpp (function ?IsSizeBox@CXTPSkinObjectFrame@@IAEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/SkinFramework/XTPSkinObjectFrame.cpp
