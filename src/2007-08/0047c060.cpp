// from server: 100% by auto
// roc 2007-08 0047c060  unit: G3D::Win32Window  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047c060
//
// 0047c060  53                   push ebx
// 0047c061  56                   push esi
// 0047c062  8bf1                 mov esi, ecx
// 0047c064  8b4608               mov eax, dword ptr [esi + 8]
// 0047c067  8b1e                 mov ebx, dword ptr [esi]
// 0047c069  57                   push edi
// 0047c06a  03c0                 add eax, eax
// 0047c06c  03c0                 add eax, eax
// 0047c06e  6a10                 push 0x10
// 0047c070  50                   push eax
// 0047c071  e8ea3f0800           call 0x500060
// 0047c076  8bc8                 mov ecx, eax
// 0047c078  8b442418             mov eax, dword ptr [esp + 0x18]
// 0047c07c  890e                 mov dword ptr [esi], ecx
// 0047c07e  8b7608               mov esi, dword ptr [esi + 8]
// 0047c081  83c408               add esp, 8
// 0047c084  3bc6                 cmp eax, esi
// 0047c086  7d02                 jge 0x47c08a
// 0047c088  8bf0                 mov esi, eax
// 0047c08a  8d3cb1               lea edi, [ecx + esi*4]
// 0047c08d  8bc7                 mov eax, edi
// 0047c08f  2bc1                 sub eax, ecx
// 0047c091  83c003               add eax, 3
// 0047c094  99                   cdq 
// 0047c095  83e203               and edx, 3
// 0047c098  03c2                 add eax, edx
// 0047c09a  c1f802               sar eax, 2
// 0047c09d  83f804               cmp eax, 4
// 0047c0a0  8bf3                 mov esi, ebx
// 0047c0a2  7c38                 jl 0x47c0dc
// 0047c0a4  8d57f4               lea edx, [edi - 0xc]
// 0047c0a7  85c9                 test ecx, ecx
// 0047c0a9  7404                 je 0x47c0af
// 0047c0ab  d906                 fld dword ptr [esi]
// 0047c0ad  d919                 fstp dword ptr [ecx]
// 0047c0af  8d4104               lea eax, [ecx + 4]
// 0047c0b2  85c0                 test eax, eax
// 0047c0b4  7405                 je 0x47c0bb
// 0047c0b6  d94604               fld dword ptr [esi + 4]
// 0047c0b9  d918                 fstp dword ptr [eax]
// 0047c0bb  83f9f8               cmp ecx, -8
// 0047c0be  7406                 je 0x47c0c6
// 0047c0c0  d94608               fld dword ptr [esi + 8]
// 0047c0c3  d95908               fstp dword ptr [ecx + 8]
// 0047c0c6  8d410c               lea eax, [ecx + 0xc]
// 0047c0c9  85c0                 test eax, eax
// 0047c0cb  7405                 je 0x47c0d2
// 0047c0cd  d9460c               fld dword ptr [esi + 0xc]
// 0047c0d0  d918                 fstp dword ptr [eax]
// 0047c0d2  83c110               add ecx, 0x10
// 0047c0d5  83c610               add esi, 0x10
// 0047c0d8  3bca                 cmp ecx, edx
// 0047c0da  7ccb                 jl 0x47c0a7
// 0047c0dc  3bcf                 cmp ecx, edi
// 0047c0de  7312                 jae 0x47c0f2
// 0047c0e0  85c9                 test ecx, ecx
// 0047c0e2  7404                 je 0x47c0e8
// 0047c0e4  d906                 fld dword ptr [esi]
// 0047c0e6  d919                 fstp dword ptr [ecx]
// 0047c0e8  83c104               add ecx, 4
// 0047c0eb  83c604               add esi, 4
// 0047c0ee  3bcf                 cmp ecx, edi
// 0047c0f0  72ee                 jb 0x47c0e0
// 0047c0f2  53                   push ebx
// 0047c0f3  e818370800           call 0x4ff810
// 0047c0f8  83c404               add esp, 4
// 0047c0fb  5f                   pop edi
// 0047c0fc  5e                   pop esi
// 0047c0fd  5b                   pop ebx
// 0047c0fe  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?realloc@?$Array@M@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
