// roc 2008-06 0060d8e0  unit: RBX::BlockBlockContact  size: 278 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060d8e0
//
// 0060d8e0  6aff                 push -1
// 0060d8e2  68a88d7d00           push 0x7d8da8
// 0060d8e7  64a100000000         mov eax, dword ptr fs:[0]
// 0060d8ed  50                   push eax
// 0060d8ee  64892500000000       mov dword ptr fs:[0], esp
// 0060d8f5  83ec10               sub esp, 0x10
// 0060d8f8  53                   push ebx
// 0060d8f9  55                   push ebp
// 0060d8fa  33ed                 xor ebp, ebp
// 0060d8fc  56                   push esi
// 0060d8fd  8bd9                 mov ebx, ecx
// 0060d8ff  896c2414             mov dword ptr [esp + 0x14], ebp
// 0060d903  896c2418             mov dword ptr [esp + 0x18], ebp
// 0060d907  896c2410             mov dword ptr [esp + 0x10], ebp
// 0060d90b  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0060d90f  896c2424             mov dword ptr [esp + 0x24], ebp
// 0060d913  e8b8a2fdff           call 0x5e7bd0
// 0060d918  8bf0                 mov esi, eax
// 0060d91a  3bf5                 cmp esi, ebp
// 0060d91c  0f848c000000         je 0x60d9ae
// 0060d922  57                   push edi
// 0060d923  8b4610               mov eax, dword ptr [esi + 0x10]
// 0060d926  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0060d929  50                   push eax
// 0060d92a  51                   push ecx
// 0060d92b  8bcb                 mov ecx, ebx
// 0060d92d  e83efeffff           call 0x60d770
// 0060d932  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0060d936  8bf8                 mov edi, eax
// 0060d938  8b442418             mov eax, dword ptr [esp + 0x18]
// 0060d93c  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 0060d940  7d14                 jge 0x60d956
// 0060d942  8d0c81               lea ecx, [ecx + eax*4]
// 0060d945  3bcd                 cmp ecx, ebp
// 0060d947  7406                 je 0x60d94f
// 0060d949  8939                 mov dword ptr [ecx], edi
// 0060d94b  8b442418             mov eax, dword ptr [esp + 0x18]
// 0060d94f  40                   inc eax
// 0060d950  89442418             mov dword ptr [esp + 0x18], eax
// 0060d954  eb3b                 jmp 0x60d991
// 0060d956  8d542410             lea edx, [esp + 0x10]
// 0060d95a  3bd1                 cmp edx, ecx
// 0060d95c  721b                 jb 0x60d979
// 0060d95e  8d0c81               lea ecx, [ecx + eax*4]
// 0060d961  3bd1                 cmp edx, ecx
// 0060d963  7314                 jae 0x60d979
// 0060d965  8d442410             lea eax, [esp + 0x10]
// 0060d969  50                   push eax
// 0060d96a  8d4c2418             lea ecx, [esp + 0x18]
// 0060d96e  897c2414             mov dword ptr [esp + 0x14], edi
// 0060d972  e859f7ffff           call 0x60d0d0
// 0060d977  eb18                 jmp 0x60d991
// 0060d979  55                   push ebp
// 0060d97a  40                   inc eax
// 0060d97b  50                   push eax
// 0060d97c  8d4c241c             lea ecx, [esp + 0x1c]
// 0060d980  e84bf6ffff           call 0x60cfd0
// 0060d985  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0060d989  8b542414             mov edx, dword ptr [esp + 0x14]
// 0060d98d  897c8afc             mov dword ptr [edx + ecx*4 - 4], edi
// 0060d991  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0060d994  56                   push esi
// 0060d995  e8e6b8fdff           call 0x5e9280
// 0060d99a  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0060d99e  e82da2fdff           call 0x5e7bd0
// 0060d9a3  8bf0                 mov esi, eax
// 0060d9a5  3bf5                 cmp esi, ebp
// 0060d9a7  0f8576ffffff         jne 0x60d923
// 0060d9ad  5f                   pop edi
// 0060d9ae  33f6                 xor esi, esi
// 0060d9b0  396c2414             cmp dword ptr [esp + 0x14], ebp
// 0060d9b4  7e17                 jle 0x60d9cd
// 0060d9b6  8b442410             mov eax, dword ptr [esp + 0x10]
// 0060d9ba  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0060d9bd  51                   push ecx
// 0060d9be  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0060d9c1  e89ab8fdff           call 0x5e9260
// 0060d9c6  46                   inc esi
// 0060d9c7  3b742414             cmp esi, dword ptr [esp + 0x14]
// 0060d9cb  7ce9                 jl 0x60d9b6
// 0060d9cd  8b542410             mov edx, dword ptr [esp + 0x10]
// 0060d9d1  52                   push edx
// 0060d9d2  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0060d9da  e841a3efff           call 0x507d20
// 0060d9df  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0060d9e3  83c404               add esp, 4
// 0060d9e6  5e                   pop esi
// 0060d9e7  5d                   pop ebp
// 0060d9e8  5b                   pop ebx
// 0060d9e9  64890d00000000       mov dword ptr fs:[0], ecx
// 0060d9f0  83c41c               add esp, 0x1c
// 0060d9f3  c20400               ret 4
// library rbxgs/v8world\ContactManager.cpp (function ?onPrimitiveGeometryTypeChanged@ContactManager@RBX@@QAEXPAVPrimitive@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/ContactManager.cpp
