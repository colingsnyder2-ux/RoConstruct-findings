// from server: 100% by tester
// roc 2007-03 004e9c40  unit: seg_004e0000  size: 291 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e9c40
//
// 004e9c40  6aff                 push -1
// 004e9c42  6811ec7400           push 0x74ec11
// 004e9c47  64a100000000         mov eax, dword ptr fs:[0]
// 004e9c4d  50                   push eax
// 004e9c4e  83ec0c               sub esp, 0xc
// 004e9c51  53                   push ebx
// 004e9c52  55                   push ebp
// 004e9c53  56                   push esi
// 004e9c54  57                   push edi
// 004e9c55  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004e9c5a  33c4                 xor eax, esp
// 004e9c5c  50                   push eax
// 004e9c5d  8d442420             lea eax, [esp + 0x20]
// 004e9c61  64a300000000         mov dword ptr fs:[0], eax
// 004e9c67  8bf9                 mov edi, ecx
// 004e9c69  8b4708               mov eax, dword ptr [edi + 8]
// 004e9c6c  8b37                 mov esi, dword ptr [edi]
// 004e9c6e  8d0440               lea eax, [eax + eax*2]
// 004e9c71  03c0                 add eax, eax
// 004e9c73  03c0                 add eax, eax
// 004e9c75  03c0                 add eax, eax
// 004e9c77  6a10                 push 0x10
// 004e9c79  50                   push eax
// 004e9c7a  89742420             mov dword ptr [esp + 0x20], esi
// 004e9c7e  e84d9f0000           call 0x4f3bd0
// 004e9c83  8b542438             mov edx, dword ptr [esp + 0x38]
// 004e9c87  8907                 mov dword ptr [edi], eax
// 004e9c89  8b7f08               mov edi, dword ptr [edi + 8]
// 004e9c8c  83c408               add esp, 8
// 004e9c8f  3bd7                 cmp edx, edi
// 004e9c91  8bcf                 mov ecx, edi
// 004e9c93  7d02                 jge 0x4e9c97
// 004e9c95  8bca                 mov ecx, edx
// 004e9c97  8d0c49               lea ecx, [ecx + ecx*2]
// 004e9c9a  8bfe                 mov edi, esi
// 004e9c9c  8bf0                 mov esi, eax
// 004e9c9e  8d2cc8               lea ebp, [eax + ecx*8]
// 004e9ca1  33db                 xor ebx, ebx
// 004e9ca3  3bf5                 cmp esi, ebp
// 004e9ca5  89742414             mov dword ptr [esp + 0x14], esi
// 004e9ca9  7344                 jae 0x4e9cef
// 004e9cab  eb03                 jmp 0x4e9cb0
// 004e9cad  8d4900               lea ecx, [ecx]
// 004e9cb0  8974241c             mov dword ptr [esp + 0x1c], esi
// 004e9cb4  3bf3                 cmp esi, ebx
// 004e9cb6  895c2428             mov dword ptr [esp + 0x28], ebx
// 004e9cba  741d                 je 0x4e9cd9
// 004e9cbc  57                   push edi
// 004e9cbd  8bce                 mov ecx, esi
// 004e9cbf  e81cebffff           call 0x4e87e0
// 004e9cc4  8d570c               lea edx, [edi + 0xc]
// 004e9cc7  8d4e0c               lea ecx, [esi + 0xc]
// 004e9cca  52                   push edx
// 004e9ccb  c644242c01           mov byte ptr [esp + 0x2c], 1
// 004e9cd0  e80bebffff           call 0x4e87e0
// 004e9cd5  8b542430             mov edx, dword ptr [esp + 0x30]
// 004e9cd9  83c618               add esi, 0x18
// 004e9cdc  83c718               add edi, 0x18
// 004e9cdf  3bf5                 cmp esi, ebp
// 004e9ce1  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 004e9ce9  89742414             mov dword ptr [esp + 0x14], esi
// 004e9ced  72c1                 jb 0x4e9cb0
// 004e9cef  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 004e9cf3  8d0452               lea eax, [edx + edx*2]
// 004e9cf6  8d7cc500             lea edi, [ebp + eax*8]
// 004e9cfa  3bef                 cmp ebp, edi
// 004e9cfc  8bf5                 mov esi, ebp
// 004e9cfe  89742430             mov dword ptr [esp + 0x30], esi
// 004e9d02  7340                 jae 0x4e9d44
// 004e9d04  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004e9d07  51                   push ecx
// 004e9d08  c744242c02000000     mov dword ptr [esp + 0x2c], 2
// 004e9d10  e86b960000           call 0x4f3380
// 004e9d15  895e0c               mov dword ptr [esi + 0xc], ebx
// 004e9d18  895e10               mov dword ptr [esi + 0x10], ebx
// 004e9d1b  895e14               mov dword ptr [esi + 0x14], ebx
// 004e9d1e  8b16                 mov edx, dword ptr [esi]
// 004e9d20  52                   push edx
// 004e9d21  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 004e9d29  e852960000           call 0x4f3380
// 004e9d2e  891e                 mov dword ptr [esi], ebx
// 004e9d30  895e04               mov dword ptr [esi + 4], ebx
// 004e9d33  895e08               mov dword ptr [esi + 8], ebx
// 004e9d36  83c618               add esi, 0x18
// 004e9d39  83c408               add esp, 8
// 004e9d3c  3bf7                 cmp esi, edi
// 004e9d3e  89742430             mov dword ptr [esp + 0x30], esi
// 004e9d42  72c0                 jb 0x4e9d04
// 004e9d44  55                   push ebp
// 004e9d45  e836960000           call 0x4f3380
// 004e9d4a  83c404               add esp, 4
// 004e9d4d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004e9d51  64890d00000000       mov dword ptr fs:[0], ecx
// 004e9d58  59                   pop ecx
// 004e9d59  5f                   pop edi
// 004e9d5a  5e                   pop esi
// 004e9d5b  5d                   pop ebp
// 004e9d5c  5b                   pop ebx
// 004e9d5d  83c418               add esp, 0x18
// 004e9d60  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlg.cpp (function ?realloc@?$Array@VVertex@MeshAlg@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlg.cpp
