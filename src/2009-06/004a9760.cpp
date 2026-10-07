// roc 2009-06 004a9760  unit: G3D::Win32Window  size: 177 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a9760
//
// 004a9760  53                   push ebx
// 004a9761  56                   push esi
// 004a9762  8bf1                 mov esi, ecx
// 004a9764  8b4608               mov eax, dword ptr [esi + 8]
// 004a9767  8b1e                 mov ebx, dword ptr [esi]
// 004a9769  57                   push edi
// 004a976a  03c0                 add eax, eax
// 004a976c  03c0                 add eax, eax
// 004a976e  6a10                 push 0x10
// 004a9770  50                   push eax
// 004a9771  e8fa190c00           call 0x56b170
// 004a9776  8bc8                 mov ecx, eax
// 004a9778  8b442418             mov eax, dword ptr [esp + 0x18]
// 004a977c  890e                 mov dword ptr [esi], ecx
// 004a977e  8b7608               mov esi, dword ptr [esi + 8]
// 004a9781  83c408               add esp, 8
// 004a9784  3bc6                 cmp eax, esi
// 004a9786  7d02                 jge 0x4a978a
// 004a9788  8bf0                 mov esi, eax
// 004a978a  8d3cb1               lea edi, [ecx + esi*4]
// 004a978d  8bf3                 mov esi, ebx
// 004a978f  3bcf                 cmp ecx, edi
// 004a9791  736f                 jae 0x4a9802
// 004a9793  8bc7                 mov eax, edi
// 004a9795  2bc1                 sub eax, ecx
// 004a9797  83c003               add eax, 3
// 004a979a  99                   cdq 
// 004a979b  83e203               and edx, 3
// 004a979e  03c2                 add eax, edx
// 004a97a0  c1f802               sar eax, 2
// 004a97a3  83f804               cmp eax, 4
// 004a97a6  7c3d                 jl 0x4a97e5
// 004a97a8  8d57f4               lea edx, [edi - 0xc]
// 004a97ab  eb03                 jmp 0x4a97b0
// 004a97ad  8d4900               lea ecx, [ecx]
// 004a97b0  85c9                 test ecx, ecx
// 004a97b2  7404                 je 0x4a97b8
// 004a97b4  d906                 fld dword ptr [esi]
// 004a97b6  d919                 fstp dword ptr [ecx]
// 004a97b8  8d4104               lea eax, [ecx + 4]
// 004a97bb  85c0                 test eax, eax
// 004a97bd  7405                 je 0x4a97c4
// 004a97bf  d94604               fld dword ptr [esi + 4]
// 004a97c2  d918                 fstp dword ptr [eax]
// 004a97c4  83f9f8               cmp ecx, -8
// 004a97c7  7406                 je 0x4a97cf
// 004a97c9  d94608               fld dword ptr [esi + 8]
// 004a97cc  d95908               fstp dword ptr [ecx + 8]
// 004a97cf  8d410c               lea eax, [ecx + 0xc]
// 004a97d2  85c0                 test eax, eax
// 004a97d4  7405                 je 0x4a97db
// 004a97d6  d9460c               fld dword ptr [esi + 0xc]
// 004a97d9  d918                 fstp dword ptr [eax]
// 004a97db  83c110               add ecx, 0x10
// 004a97de  83c610               add esi, 0x10
// 004a97e1  3bca                 cmp ecx, edx
// 004a97e3  7ccb                 jl 0x4a97b0
// 004a97e5  3bcf                 cmp ecx, edi
// 004a97e7  7319                 jae 0x4a9802
// 004a97e9  8da42400000000       lea esp, [esp]
// 004a97f0  85c9                 test ecx, ecx
// 004a97f2  7404                 je 0x4a97f8
// 004a97f4  d906                 fld dword ptr [esi]
// 004a97f6  d919                 fstp dword ptr [ecx]
// 004a97f8  83c104               add ecx, 4
// 004a97fb  83c604               add esi, 4
// 004a97fe  3bcf                 cmp ecx, edi
// 004a9800  72ee                 jb 0x4a97f0
// 004a9802  53                   push ebx
// 004a9803  e8881a0c00           call 0x56b290
// 004a9808  83c404               add esp, 4
// 004a980b  5f                   pop edi
// 004a980c  5e                   pop esi
// 004a980d  5b                   pop ebx
// 004a980e  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?realloc@?$Array@M@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
