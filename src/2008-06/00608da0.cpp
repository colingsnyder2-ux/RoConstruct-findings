// roc 2008-06 00608da0  unit: RBX::VModelInstance::?$FactoryProduct  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00608da0
//
// 00608da0  53                   push ebx
// 00608da1  55                   push ebp
// 00608da2  56                   push esi
// 00608da3  57                   push edi
// 00608da4  8bd9                 mov ebx, ecx
// 00608da6  33f6                 xor esi, esi
// 00608da8  e87320e8ff           call 0x48ae20
// 00608dad  85c0                 test eax, eax
// 00608daf  765e                 jbe 0x608e0f
// 00608db1  8b2d90288000         mov ebp, dword ptr [0x802890]
// 00608db7  eb07                 jmp 0x608dc0
// 00608db9  8da42400000000       lea esp, [esp]
// 00608dc0  8bbb08010000         mov edi, dword ptr [ebx + 0x108]
// 00608dc6  8b4710               mov eax, dword ptr [edi + 0x10]
// 00608dc9  2b470c               sub eax, dword ptr [edi + 0xc]
// 00608dcc  c1f803               sar eax, 3
// 00608dcf  3bf0                 cmp esi, eax
// 00608dd1  7202                 jb 0x608dd5
// 00608dd3  ffd5                 call ebp
// 00608dd5  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 00608dd8  8b04f1               mov eax, dword ptr [ecx + esi*8]
// 00608ddb  6a00                 push 0
// 00608ddd  68a8829400           push 0x9482a8
// 00608de2  687c909200           push 0x92907c
// 00608de7  6a00                 push 0
// 00608de9  50                   push eax
// 00608dea  e8d7890900           call 0x6a17c6
// 00608def  83c414               add esp, 0x14
// 00608df2  85c0                 test eax, eax
// 00608df4  740d                 je 0x608e03
// 00608df6  8b10                 mov edx, dword ptr [eax]
// 00608df8  8bc8                 mov ecx, eax
// 00608dfa  8b4204               mov eax, dword ptr [edx + 4]
// 00608dfd  ffd0                 call eax
// 00608dff  84c0                 test al, al
// 00608e01  7513                 jne 0x608e16
// 00608e03  8bcb                 mov ecx, ebx
// 00608e05  46                   inc esi
// 00608e06  e81520e8ff           call 0x48ae20
// 00608e0b  3bf0                 cmp esi, eax
// 00608e0d  72b1                 jb 0x608dc0
// 00608e0f  5f                   pop edi
// 00608e10  5e                   pop esi
// 00608e11  5d                   pop ebp
// 00608e12  32c0                 xor al, al
// 00608e14  5b                   pop ebx
// 00608e15  c3                   ret 
// 00608e16  5f                   pop edi
// 00608e17  5e                   pop esi
// 00608e18  5d                   pop ebp
// 00608e19  b001                 mov al, 1
// 00608e1b  5b                   pop ebx
// 00608e1c  c3                   ret 
// library openrbx-client/App\v8datamodel\PVInstance.cpp (function ?computeIsControllable@PVInstance@RBX@@ABE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/PVInstance.cpp
