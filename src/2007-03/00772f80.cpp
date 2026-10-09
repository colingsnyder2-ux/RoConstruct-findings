// roc 2007-03 00772f80  unit: seg_00770000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00772f80
//
// 00772f80  53                   push ebx
// 00772f81  55                   push ebp
// 00772f82  56                   push esi
// 00772f83  57                   push edi
// 00772f84  6a05                 push 5
// 00772f86  83ec0c               sub esp, 0xc
// 00772f89  8bc4                 mov eax, esp
// 00772f8b  b9706a5700           mov ecx, 0x576a70
// 00772f90  8908                 mov dword ptr [eax], ecx
// 00772f92  33d2                 xor edx, edx
// 00772f94  895004               mov dword ptr [eax + 4], edx
// 00772f97  83ec0c               sub esp, 0xc
// 00772f9a  33f6                 xor esi, esi
// 00772f9c  897008               mov dword ptr [eax + 8], esi
// 00772f9f  8bc4                 mov eax, esp
// 00772fa1  bf902a5700           mov edi, 0x572a90
// 00772fa6  8938                 mov dword ptr [eax], edi
// 00772fa8  6864657a00           push 0x7a6564
// 00772fad  33db                 xor ebx, ebx
// 00772faf  33ed                 xor ebp, ebp
// 00772fb1  895804               mov dword ptr [eax + 4], ebx
// 00772fb4  68308d7a00           push 0x7a8d30
// 00772fb9  b9e0ca8b00           mov ecx, 0x8bcae0
// 00772fbe  896808               mov dword ptr [eax + 8], ebp
// 00772fc1  e83a2fe0ff           call 0x575f00
// 00772fc6  68a0a07700           push 0x77a0a0
// 00772fcb  e8e3c1eaff           call 0x61f1b3
// 00772fd0  83c404               add esp, 4
// 00772fd3  5f                   pop edi
// 00772fd4  5e                   pop esi
// 00772fd5  5d                   pop ebp
// 00772fd6  5b                   pop ebx
// 00772fd7  c3                   ret 
// library openrbx-client/App\v8datamodel\PartInstance.cpp (function ??__E?prop_Anchored@PartInstance@RBX@@2V?$PropDescriptor@VPartInstance@RBX@@_N@Reflection@2@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/PartInstance.cpp
