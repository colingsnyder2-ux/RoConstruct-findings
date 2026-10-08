// from server: 100% by auto
// roc 2011-06 006a2800  unit: RBX::Assembly  size: 217 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006a2800
//
// 006a2800  83ec08               sub esp, 8
// 006a2803  53                   push ebx
// 006a2804  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006a2808  55                   push ebp
// 006a2809  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 006a280d  56                   push esi
// 006a280e  57                   push edi
// 006a280f  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 006a2813  8bc7                 mov eax, edi
// 006a2815  2bc3                 sub eax, ebx
// 006a2817  c1f802               sar eax, 2
// 006a281a  83f820               cmp eax, 0x20
// 006a281d  7e6d                 jle 0x6a288c
// 006a281f  8b742424             mov esi, dword ptr [esp + 0x24]
// 006a2823  85f6                 test esi, esi
// 006a2825  7e7f                 jle 0x6a28a6
// 006a2827  55                   push ebp
// 006a2828  57                   push edi
// 006a2829  8d442418             lea eax, [esp + 0x18]
// 006a282d  53                   push ebx
// 006a282e  50                   push eax
// 006a282f  e82cfaffff           call 0x6a2260
// 006a2834  8bc6                 mov eax, esi
// 006a2836  99                   cdq 
// 006a2837  2bc2                 sub eax, edx
// 006a2839  d1f8                 sar eax, 1
// 006a283b  8bf0                 mov esi, eax
// 006a283d  99                   cdq 
// 006a283e  2bc2                 sub eax, edx
// 006a2840  8b542420             mov edx, dword ptr [esp + 0x20]
// 006a2844  d1f8                 sar eax, 1
// 006a2846  03f0                 add esi, eax
// 006a2848  8b442424             mov eax, dword ptr [esp + 0x24]
// 006a284c  8bcf                 mov ecx, edi
// 006a284e  83c410               add esp, 0x10
// 006a2851  2bc8                 sub ecx, eax
// 006a2853  2bd3                 sub edx, ebx
// 006a2855  83e1fc               and ecx, 0xfffffffc
// 006a2858  83e2fc               and edx, 0xfffffffc
// 006a285b  3bd1                 cmp edx, ecx
// 006a285d  55                   push ebp
// 006a285e  56                   push esi
// 006a285f  7d11                 jge 0x6a2872
// 006a2861  8b442418             mov eax, dword ptr [esp + 0x18]
// 006a2865  50                   push eax
// 006a2866  53                   push ebx
// 006a2867  e894ffffff           call 0x6a2800
// 006a286c  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 006a2870  eb0b                 jmp 0x6a287d
// 006a2872  57                   push edi
// 006a2873  50                   push eax
// 006a2874  e887ffffff           call 0x6a2800
// 006a2879  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 006a287d  8bc7                 mov eax, edi
// 006a287f  2bc3                 sub eax, ebx
// 006a2881  c1f802               sar eax, 2
// 006a2884  83c410               add esp, 0x10
// 006a2887  83f820               cmp eax, 0x20
// 006a288a  7f97                 jg 0x6a2823
// 006a288c  83f801               cmp eax, 1
// 006a288f  7e0d                 jle 0x6a289e
// 006a2891  6a00                 push 0
// 006a2893  55                   push ebp
// 006a2894  57                   push edi
// 006a2895  53                   push ebx
// 006a2896  e825f7ffff           call 0x6a1fc0
// 006a289b  83c410               add esp, 0x10
// 006a289e  5f                   pop edi
// 006a289f  5e                   pop esi
// 006a28a0  5d                   pop ebp
// 006a28a1  5b                   pop ebx
// 006a28a2  83c408               add esp, 8
// 006a28a5  c3                   ret 
// 006a28a6  83f820               cmp eax, 0x20
// 006a28a9  7ee1                 jle 0x6a288c
// 006a28ab  8bcf                 mov ecx, edi
// 006a28ad  2bcb                 sub ecx, ebx
// 006a28af  83e1fc               and ecx, 0xfffffffc
// 006a28b2  83f904               cmp ecx, 4
// 006a28b5  7e0f                 jle 0x6a28c6
// 006a28b7  6a00                 push 0
// 006a28b9  6a00                 push 0
// 006a28bb  55                   push ebp
// 006a28bc  57                   push edi
// 006a28bd  53                   push ebx
// 006a28be  e8adf7ffff           call 0x6a2070
// 006a28c3  83c414               add esp, 0x14
// 006a28c6  55                   push ebp
// 006a28c7  57                   push edi
// 006a28c8  53                   push ebx
// 006a28c9  e862fdffff           call 0x6a2630
// 006a28ce  83c40c               add esp, 0xc
// 006a28d1  5f                   pop edi
// 006a28d2  5e                   pop esi
// 006a28d3  5d                   pop ebp
// 006a28d4  5b                   pop ebx
// 006a28d5  83c408               add esp, 8
// 006a28d8  c3                   ret 
// library g3d-6.09/GLG3Dcpp\PosedModel.cpp (function ??$_Sort@PAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@HP6A_NABV12@0@Z@std@@YAXPAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@0HP6A_NABV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PosedModel.cpp
