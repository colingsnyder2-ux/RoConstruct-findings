// roc 2007-08 00608da0  unit: RBX::SimJobStage  size: 209 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00608da0
//
// 00608da0  6aff                 push -1
// 00608da2  68fb4f7500           push 0x754ffb
// 00608da7  64a100000000         mov eax, dword ptr fs:[0]
// 00608dad  50                   push eax
// 00608dae  64892500000000       mov dword ptr fs:[0], esp
// 00608db5  83ec08               sub esp, 8
// 00608db8  55                   push ebp
// 00608db9  56                   push esi
// 00608dba  57                   push edi
// 00608dbb  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00608dbf  8bf1                 mov esi, ecx
// 00608dc1  56                   push esi
// 00608dc2  8bcf                 mov ecx, edi
// 00608dc4  89742414             mov dword ptr [esp + 0x14], esi
// 00608dc8  e863030000           call 0x609130
// 00608dcd  6a24                 push 0x24
// 00608dcf  e822710200           call 0x62fef6
// 00608dd4  83c404               add esp, 4
// 00608dd7  8944240c             mov dword ptr [esp + 0xc], eax
// 00608ddb  33ed                 xor ebp, ebp
// 00608ddd  3bc5                 cmp eax, ebp
// 00608ddf  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00608de3  7409                 je 0x608dee
// 00608de5  8bc8                 mov ecx, eax
// 00608de7  e8f4feffff           call 0x608ce0
// 00608dec  8be8                 mov ebp, eax
// 00608dee  53                   push ebx
// 00608def  57                   push edi
// 00608df0  8bcd                 mov ecx, ebp
// 00608df2  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 00608dfa  e8a138faff           call 0x5ac6a0
// 00608dff  8b7e14               mov edi, dword ptr [esi + 0x14]
// 00608e02  8b4f04               mov ecx, dword ptr [edi + 4]
// 00608e05  83c610               add esi, 0x10
// 00608e08  8d442410             lea eax, [esp + 0x10]
// 00608e0c  50                   push eax
// 00608e0d  51                   push ecx
// 00608e0e  57                   push edi
// 00608e0f  8bce                 mov ecx, esi
// 00608e11  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00608e15  e8060ffeff           call 0x5e9d20
// 00608e1a  6a01                 push 1
// 00608e1c  8bce                 mov ecx, esi
// 00608e1e  8bd8                 mov ebx, eax
// 00608e20  e83b0ffeff           call 0x5e9d60
// 00608e25  895f04               mov dword ptr [edi + 4], ebx
// 00608e28  8b5304               mov edx, dword ptr [ebx + 4]
// 00608e2b  891a                 mov dword ptr [edx], ebx
// 00608e2d  8b4604               mov eax, dword ptr [esi + 4]
// 00608e30  8b7804               mov edi, dword ptr [eax + 4]
// 00608e33  3bf8                 cmp edi, eax
// 00608e35  5b                   pop ebx
// 00608e36  7506                 jne 0x608e3e
// 00608e38  ff15d8e67700         call dword ptr [0x77e6d8]
// 00608e3e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00608e42  89751c               mov dword ptr [ebp + 0x1c], esi
// 00608e45  897d20               mov dword ptr [ebp + 0x20], edi
// 00608e48  8b01                 mov eax, dword ptr [ecx]
// 00608e4a  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00608e4e  8b500c               mov edx, dword ptr [eax + 0xc]
// 00608e51  8b37                 mov esi, dword ptr [edi]
// 00608e53  ffd2                 call edx
// 00608e55  50                   push eax
// 00608e56  8b4604               mov eax, dword ptr [esi + 4]
// 00608e59  8bcf                 mov ecx, edi
// 00608e5b  ffd0                 call eax
// 00608e5d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00608e61  5f                   pop edi
// 00608e62  5e                   pop esi
// 00608e63  5d                   pop ebp
// 00608e64  64890d00000000       mov dword ptr fs:[0], ecx
// 00608e6b  83c414               add esp, 0x14
// 00608e6e  c20400               ret 4
// library openrbx-client/App\v8world\SimJobStage.cpp (function ?onAssemblyAdded@SimJobStage@RBX@@QAEXPAVAssembly@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/SimJobStage.cpp
