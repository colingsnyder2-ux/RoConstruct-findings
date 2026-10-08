// from server: 100% by auto
// roc 2010-06 00485700  unit: G3D::Texture  size: 217 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00485700
//
// 00485700  64a100000000         mov eax, dword ptr fs:[0]
// 00485706  6aff                 push -1
// 00485708  6891299a00           push 0x9a2991
// 0048570d  50                   push eax
// 0048570e  64892500000000       mov dword ptr fs:[0], esp
// 00485715  83ec08               sub esp, 8
// 00485718  55                   push ebp
// 00485719  56                   push esi
// 0048571a  57                   push edi
// 0048571b  8bf9                 mov edi, ecx
// 0048571d  8b4708               mov eax, dword ptr [edi + 8]
// 00485720  8b2f                 mov ebp, dword ptr [edi]
// 00485722  8d0440               lea eax, [eax + eax*2]
// 00485725  03c0                 add eax, eax
// 00485727  03c0                 add eax, eax
// 00485729  6a10                 push 0x10
// 0048572b  50                   push eax
// 0048572c  e86f810c00           call 0x54d8a0
// 00485731  8b4f08               mov ecx, dword ptr [edi + 8]
// 00485734  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00485738  83c408               add esp, 8
// 0048573b  3bd1                 cmp edx, ecx
// 0048573d  8907                 mov dword ptr [edi], eax
// 0048573f  7d02                 jge 0x485743
// 00485741  8bca                 mov ecx, edx
// 00485743  8d0c49               lea ecx, [ecx + ecx*2]
// 00485746  8bf0                 mov esi, eax
// 00485748  8d3c88               lea edi, [eax + ecx*4]
// 0048574b  53                   push ebx
// 0048574c  8bdd                 mov ebx, ebp
// 0048574e  89742410             mov dword ptr [esp + 0x10], esi
// 00485752  3bf7                 cmp esi, edi
// 00485754  733c                 jae 0x485792
// 00485756  eb08                 jmp 0x485760
// 00485758  8da42400000000       lea esp, [esp]
// 0048575f  90                   nop 
// 00485760  89742414             mov dword ptr [esp + 0x14], esi
// 00485764  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0048576c  85f6                 test esi, esi
// 0048576e  740c                 je 0x48577c
// 00485770  53                   push ebx
// 00485771  8bce                 mov ecx, esi
// 00485773  e828ffffff           call 0x4856a0
// 00485778  8b542428             mov edx, dword ptr [esp + 0x28]
// 0048577c  83c60c               add esi, 0xc
// 0048577f  83c30c               add ebx, 0xc
// 00485782  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0048578a  89742410             mov dword ptr [esp + 0x10], esi
// 0048578e  3bf7                 cmp esi, edi
// 00485790  72ce                 jb 0x485760
// 00485792  8d1452               lea edx, [edx + edx*2]
// 00485795  8d7c9500             lea edi, [ebp + edx*4]
// 00485799  8bf5                 mov esi, ebp
// 0048579b  5b                   pop ebx
// 0048579c  3bef                 cmp ebp, edi
// 0048579e  731c                 jae 0x4857bc
// 004857a0  8b06                 mov eax, dword ptr [esi]
// 004857a2  50                   push eax
// 004857a3  e818820c00           call 0x54d9c0
// 004857a8  33c0                 xor eax, eax
// 004857aa  8906                 mov dword ptr [esi], eax
// 004857ac  894604               mov dword ptr [esi + 4], eax
// 004857af  894608               mov dword ptr [esi + 8], eax
// 004857b2  83c60c               add esi, 0xc
// 004857b5  83c404               add esp, 4
// 004857b8  3bf7                 cmp esi, edi
// 004857ba  72e4                 jb 0x4857a0
// 004857bc  55                   push ebp
// 004857bd  e8fe810c00           call 0x54d9c0
// 004857c2  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004857c6  83c404               add esp, 4
// 004857c9  5f                   pop edi
// 004857ca  5e                   pop esi
// 004857cb  5d                   pop ebp
// 004857cc  64890d00000000       mov dword ptr fs:[0], ecx
// 004857d3  83c414               add esp, 0x14
// 004857d6  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?realloc@?$Array@V?$Array@PBX@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
