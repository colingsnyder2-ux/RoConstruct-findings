// roc 2007-08 004e4980  unit: RBX::View::BrickMesh  size: 379 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004e4980
//
// 004e4980  6aff                 push -1
// 004e4982  682bcf7400           push 0x74cf2b
// 004e4987  64a100000000         mov eax, dword ptr fs:[0]
// 004e498d  50                   push eax
// 004e498e  64892500000000       mov dword ptr fs:[0], esp
// 004e4995  83ec3c               sub esp, 0x3c
// 004e4998  53                   push ebx
// 004e4999  56                   push esi
// 004e499a  8bf1                 mov esi, ecx
// 004e499c  57                   push edi
// 004e499d  89742414             mov dword ptr [esp + 0x14], esi
// 004e49a1  e8da170100           call 0x4f6180
// 004e49a6  33ff                 xor edi, edi
// 004e49a8  6a1c                 push 0x1c
// 004e49aa  897c2454             mov dword ptr [esp + 0x54], edi
// 004e49ae  c706c8f37900         mov dword ptr [esi], 0x79f3c8
// 004e49b4  e83db51400           call 0x62fef6
// 004e49b9  83c404               add esp, 4
// 004e49bc  3bc7                 cmp eax, edi
// 004e49be  7424                 je 0x4e49e4
// 004e49c0  c70084797900         mov dword ptr [eax], 0x797984
// 004e49c6  897804               mov dword ptr [eax + 4], edi
// 004e49c9  897808               mov dword ptr [eax + 8], edi
// 004e49cc  c70004f37900         mov dword ptr [eax], 0x79f304
// 004e49d2  897810               mov dword ptr [eax + 0x10], edi
// 004e49d5  897814               mov dword ptr [eax + 0x14], edi
// 004e49d8  89780c               mov dword ptr [eax + 0xc], edi
// 004e49db  c7401805000000       mov dword ptr [eax + 0x18], 5
// 004e49e2  eb02                 jmp 0x4e49e6
// 004e49e4  33c0                 xor eax, eax
// 004e49e6  3bc7                 cmp eax, edi
// 004e49e8  897c2410             mov dword ptr [esp + 0x10], edi
// 004e49ec  740e                 je 0x4e49fc
// 004e49ee  89442410             mov dword ptr [esp + 0x10], eax
// 004e49f2  83c004               add eax, 4
// 004e49f5  50                   push eax
// 004e49f6  ff15ecd27700         call dword ptr [0x77d2ec]
// 004e49fc  8d442410             lea eax, [esp + 0x10]
// 004e4a00  b303                 mov bl, 3
// 004e4a02  50                   push eax
// 004e4a03  8d4e0c               lea ecx, [esi + 0xc]
// 004e4a06  885c2454             mov byte ptr [esp + 0x54], bl
// 004e4a0a  e84188ffff           call 0x4dd250
// 004e4a0f  8b442458             mov eax, dword ptr [esp + 0x58]
// 004e4a13  d900                 fld dword ptr [eax]
// 004e4a15  8d4c2410             lea ecx, [esp + 0x10]
// 004e4a19  d95c2418             fstp dword ptr [esp + 0x18]
// 004e4a1d  d94004               fld dword ptr [eax + 4]
// 004e4a20  d95c241c             fstp dword ptr [esp + 0x1c]
// 004e4a24  d94008               fld dword ptr [eax + 8]
// 004e4a27  33c0                 xor eax, eax
// 004e4a29  50                   push eax
// 004e4a2a  d95c2424             fstp dword ptr [esp + 0x24]
// 004e4a2e  d944241c             fld dword ptr [esp + 0x1c]
// 004e4a32  83ec0c               sub esp, 0xc
// 004e4a35  8bc4                 mov eax, esp
// 004e4a37  d918                 fstp dword ptr [eax]
// 004e4a39  89642468             mov dword ptr [esp + 0x68], esp
// 004e4a3d  d944242c             fld dword ptr [esp + 0x2c]
// 004e4a41  51                   push ecx
// 004e4a42  d95804               fstp dword ptr [eax + 4]
// 004e4a45  8d4c2438             lea ecx, [esp + 0x38]
// 004e4a49  d9442434             fld dword ptr [esp + 0x34]
// 004e4a4d  d95808               fstp dword ptr [eax + 8]
// 004e4a50  e8aba20000           call 0x4eed00
// 004e4a55  d90560f37900         fld dword ptr [0x79f360]
// 004e4a5b  c744242488f37900     mov dword ptr [esp + 0x24], 0x79f388
// 004e4a63  d95c2444             fstp dword ptr [esp + 0x44]
// 004e4a67  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 004e4a6b  6a01                 push 1
// 004e4a6d  52                   push edx
// 004e4a6e  8d4c242c             lea ecx, [esp + 0x2c]
// 004e4a72  c644245804           mov byte ptr [esp + 0x58], 4
// 004e4a77  e8a4a10000           call 0x4eec20
// 004e4a7c  8b442438             mov eax, dword ptr [esp + 0x38]
// 004e4a80  3bc7                 cmp eax, edi
// 004e4a82  885c2450             mov byte ptr [esp + 0x50], bl
// 004e4a86  8b1de8d27700         mov ebx, dword ptr [0x77d2e8]
// 004e4a8c  7427                 je 0x4e4ab5
// 004e4a8e  83c004               add eax, 4
// 004e4a91  50                   push eax
// 004e4a92  ffd3                 call ebx
// 004e4a94  85c0                 test eax, eax
// 004e4a96  7519                 jne 0x4e4ab1
// 004e4a98  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 004e4a9c  e82f33f7ff           call 0x457dd0
// 004e4aa1  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 004e4aa5  3bcf                 cmp ecx, edi
// 004e4aa7  7408                 je 0x4e4ab1
// 004e4aa9  8b01                 mov eax, dword ptr [ecx]
// 004e4aab  8b10                 mov edx, dword ptr [eax]
// 004e4aad  6a01                 push 1
// 004e4aaf  ffd2                 call edx
// 004e4ab1  897c2438             mov dword ptr [esp + 0x38], edi
// 004e4ab5  8b442410             mov eax, dword ptr [esp + 0x10]
// 004e4ab9  3bc7                 cmp eax, edi
// 004e4abb  c644245000           mov byte ptr [esp + 0x50], 0
// 004e4ac0  7423                 je 0x4e4ae5
// 004e4ac2  83c004               add eax, 4
// 004e4ac5  50                   push eax
// 004e4ac6  ffd3                 call ebx
// 004e4ac8  85c0                 test eax, eax
// 004e4aca  7519                 jne 0x4e4ae5
// 004e4acc  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004e4ad0  e8fb32f7ff           call 0x457dd0
// 004e4ad5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004e4ad9  3bcf                 cmp ecx, edi
// 004e4adb  7408                 je 0x4e4ae5
// 004e4add  8b01                 mov eax, dword ptr [ecx]
// 004e4adf  8b10                 mov edx, dword ptr [eax]
// 004e4ae1  6a01                 push 1
// 004e4ae3  ffd2                 call edx
// 004e4ae5  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 004e4ae9  5f                   pop edi
// 004e4aea  8bc6                 mov eax, esi
// 004e4aec  5e                   pop esi
// 004e4aed  64890d00000000       mov dword ptr fs:[0], ecx
// 004e4af4  5b                   pop ebx
// 004e4af5  83c448               add esp, 0x48
// 004e4af8  c20800               ret 8
// library rbxgs-view/WedgeMesh.cpp (function ??0WedgeMesh@View@RBX@@AAE@ABVVector3@G3D@@W4NormalId@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view WedgeMesh.cpp
