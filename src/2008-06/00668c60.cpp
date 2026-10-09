// roc 2008-06 00668c60  unit: RBX::JointStage  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00668c60
//
// 00668c60  53                   push ebx
// 00668c61  55                   push ebp
// 00668c62  56                   push esi
// 00668c63  8b742410             mov esi, dword ptr [esp + 0x10]
// 00668c67  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00668c6a  57                   push edi
// 00668c6b  e8d0e7f7ff           call 0x5e7440
// 00668c70  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00668c74  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 00668c77  8bd8                 mov ebx, eax
// 00668c79  e8c2e7f7ff           call 0x5e7440
// 00668c7e  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00668c81  8be8                 mov ebp, eax
// 00668c83  85c9                 test ecx, ecx
// 00668c85  7409                 je 0x668c90
// 00668c87  e8b4e7f7ff           call 0x5e7440
// 00668c8c  8bf0                 mov esi, eax
// 00668c8e  eb02                 jmp 0x668c92
// 00668c90  33f6                 xor esi, esi
// 00668c92  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 00668c95  85c9                 test ecx, ecx
// 00668c97  7416                 je 0x668caf
// 00668c99  e8a2e7f7ff           call 0x5e7440
// 00668c9e  50                   push eax
// 00668c9f  55                   push ebp
// 00668ca0  56                   push esi
// 00668ca1  53                   push ebx
// 00668ca2  e809f7f3ff           call 0x5a83b0
// 00668ca7  83c410               add esp, 0x10
// 00668caa  5f                   pop edi
// 00668cab  5e                   pop esi
// 00668cac  5d                   pop ebp
// 00668cad  5b                   pop ebx
// 00668cae  c3                   ret 
// 00668caf  33c0                 xor eax, eax
// 00668cb1  50                   push eax
// 00668cb2  55                   push ebp
// 00668cb3  56                   push esi
// 00668cb4  53                   push ebx
// 00668cb5  e8f6f6f3ff           call 0x5a83b0
// 00668cba  83c410               add esp, 0x10
// 00668cbd  5f                   pop edi
// 00668cbe  5e                   pop esi
// 00668cbf  5d                   pop ebp
// 00668cc0  5b                   pop ebx
// 00668cc1  c3                   ret 
// library openrbx-client/App\v8world\ClumpStage2.cpp (function ?biggerJointGuid@RBX@@YAHPBVJoint@1@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ClumpStage2.cpp
