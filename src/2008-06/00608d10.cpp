// roc 2008-06 00608d10  unit: RBX::VModelInstance::?$FactoryProduct  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00608d10
//
// 00608d10  55                   push ebp
// 00608d11  8be9                 mov ebp, ecx
// 00608d13  c6857401000001       mov byte ptr [ebp + 0x174], 1
// 00608d1a  56                   push esi
// 00608d1b  c6854101000001       mov byte ptr [ebp + 0x141], 1
// 00608d22  c6855901000001       mov byte ptr [ebp + 0x159], 1
// 00608d29  33f6                 xor esi, esi
// 00608d2b  e8f020e8ff           call 0x48ae20
// 00608d30  85c0                 test eax, eax
// 00608d32  765c                 jbe 0x608d90
// 00608d34  57                   push edi
// 00608d35  eb09                 jmp 0x608d40
// 00608d37  8da42400000000       lea esp, [esp]
// 00608d3e  8bff                 mov edi, edi
// 00608d40  8bbd08010000         mov edi, dword ptr [ebp + 0x108]
// 00608d46  8b4710               mov eax, dword ptr [edi + 0x10]
// 00608d49  2b470c               sub eax, dword ptr [edi + 0xc]
// 00608d4c  c1f803               sar eax, 3
// 00608d4f  3bf0                 cmp esi, eax
// 00608d51  7206                 jb 0x608d59
// 00608d53  ff1590288000         call dword ptr [0x802890]
// 00608d59  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 00608d5c  8b04f1               mov eax, dword ptr [ecx + esi*8]
// 00608d5f  6a00                 push 0
// 00608d61  681c7f9400           push 0x947f1c
// 00608d66  687c909200           push 0x92907c
// 00608d6b  6a00                 push 0
// 00608d6d  50                   push eax
// 00608d6e  e8538a0900           call 0x6a17c6
// 00608d73  83c414               add esp, 0x14
// 00608d76  85c0                 test eax, eax
// 00608d78  7409                 je 0x608d83
// 00608d7a  8b10                 mov edx, dword ptr [eax]
// 00608d7c  8bc8                 mov ecx, eax
// 00608d7e  8b424c               mov eax, dword ptr [edx + 0x4c]
// 00608d81  ffd0                 call eax
// 00608d83  8bcd                 mov ecx, ebp
// 00608d85  46                   inc esi
// 00608d86  e89520e8ff           call 0x48ae20
// 00608d8b  3bf0                 cmp esi, eax
// 00608d8d  72b1                 jb 0x608d40
// 00608d8f  5f                   pop edi
// 00608d90  5e                   pop esi
// 00608d91  5d                   pop ebp
// 00608d92  c3                   ret 
// library openrbx-client/App\v8datamodel\PVInstance.cpp (function ?onParentControllerChanged@PVInstance@RBX@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/PVInstance.cpp
