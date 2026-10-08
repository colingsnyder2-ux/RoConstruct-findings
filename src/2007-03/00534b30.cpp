// roc 2007-03 00534b30  unit: seg_00530000  size: 187 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00534b30
//
// 00534b30  6aff                 push -1
// 00534b32  6878d27400           push 0x74d278
// 00534b37  64a100000000         mov eax, dword ptr fs:[0]
// 00534b3d  50                   push eax
// 00534b3e  64892500000000       mov dword ptr fs:[0], esp
// 00534b45  51                   push ecx
// 00534b46  53                   push ebx
// 00534b47  56                   push esi
// 00534b48  33db                 xor ebx, ebx
// 00534b4a  8bf1                 mov esi, ecx
// 00534b4c  895c2408             mov dword ptr [esp + 8], ebx
// 00534b50  385e04               cmp byte ptr [esi + 4], bl
// 00534b53  57                   push edi
// 00534b54  746f                 je 0x534bc5
// 00534b56  8b4608               mov eax, dword ptr [esi + 8]
// 00534b59  8b90f4000000         mov edx, dword ptr [eax + 0xf4]
// 00534b5f  8d4c240c             lea ecx, [esp + 0xc]
// 00534b63  51                   push ecx
// 00534b64  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00534b67  8b140a               mov edx, dword ptr [edx + ecx]
// 00534b6a  035614               add edx, dword ptr [esi + 0x14]
// 00534b6d  8d8c02f4000000       lea ecx, [edx + eax + 0xf4]
// 00534b74  8b4610               mov eax, dword ptr [esi + 0x10]
// 00534b77  ffd0                 call eax
// 00534b79  8b08                 mov ecx, dword ptr [eax]
// 00534b7b  51                   push ecx
// 00534b7c  8bce                 mov ecx, esi
// 00534b7e  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00534b82  e80905f4ff           call 0x475090
// 00534b87  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00534b8b  3bc3                 cmp eax, ebx
// 00534b8d  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00534b95  742b                 je 0x534bc2
// 00534b97  83c004               add eax, 4
// 00534b9a  50                   push eax
// 00534b9b  ff15a8d27700         call dword ptr [0x77d2a8]
// 00534ba1  85c0                 test eax, eax
// 00534ba3  7519                 jne 0x534bbe
// 00534ba5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00534ba9  e812e8f2ff           call 0x4633c0
// 00534bae  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00534bb2  3bcb                 cmp ecx, ebx
// 00534bb4  7408                 je 0x534bbe
// 00534bb6  8b11                 mov edx, dword ptr [ecx]
// 00534bb8  8b02                 mov eax, dword ptr [edx]
// 00534bba  6a01                 push 1
// 00534bbc  ffd0                 call eax
// 00534bbe  895c240c             mov dword ptr [esp + 0xc], ebx
// 00534bc2  885e04               mov byte ptr [esi + 4], bl
// 00534bc5  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00534bc9  891f                 mov dword ptr [edi], ebx
// 00534bcb  8b0e                 mov ecx, dword ptr [esi]
// 00534bcd  51                   push ecx
// 00534bce  8bcf                 mov ecx, edi
// 00534bd0  e8bb04f4ff           call 0x475090
// 00534bd5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00534bd9  8bc7                 mov eax, edi
// 00534bdb  5f                   pop edi
// 00534bdc  5e                   pop esi
// 00534bdd  5b                   pop ebx
// 00534bde  64890d00000000       mov dword ptr fs:[0], ecx
// 00534be5  83c410               add esp, 0x10
// 00534be8  c20400               ret 4
// library rbxgs/humanoid\Humanoid.cpp (function ?getValue@?$ComputeProp@V?$ReferenceCountedPointer@VController@RBX@@@G3D@@VPVInstance@RBX@@@RBX@@QBE?AV?$ReferenceCountedPointer@VController@RBX@@@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
