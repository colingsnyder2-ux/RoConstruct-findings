// roc 2007-03 0047a9d0  unit: seg_00470000  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047a9d0
//
// 0047a9d0  53                   push ebx
// 0047a9d1  56                   push esi
// 0047a9d2  8bf1                 mov esi, ecx
// 0047a9d4  8b4608               mov eax, dword ptr [esi + 8]
// 0047a9d7  8b1e                 mov ebx, dword ptr [esi]
// 0047a9d9  57                   push edi
// 0047a9da  03c0                 add eax, eax
// 0047a9dc  03c0                 add eax, eax
// 0047a9de  6a10                 push 0x10
// 0047a9e0  50                   push eax
// 0047a9e1  e8ea910700           call 0x4f3bd0
// 0047a9e6  8bc8                 mov ecx, eax
// 0047a9e8  8b442418             mov eax, dword ptr [esp + 0x18]
// 0047a9ec  890e                 mov dword ptr [esi], ecx
// 0047a9ee  8b7608               mov esi, dword ptr [esi + 8]
// 0047a9f1  83c408               add esp, 8
// 0047a9f4  3bc6                 cmp eax, esi
// 0047a9f6  7d02                 jge 0x47a9fa
// 0047a9f8  8bf0                 mov esi, eax
// 0047a9fa  8d3cb1               lea edi, [ecx + esi*4]
// 0047a9fd  8bc7                 mov eax, edi
// 0047a9ff  2bc1                 sub eax, ecx
// 0047aa01  83c003               add eax, 3
// 0047aa04  99                   cdq 
// 0047aa05  83e203               and edx, 3
// 0047aa08  03c2                 add eax, edx
// 0047aa0a  c1f802               sar eax, 2
// 0047aa0d  83f804               cmp eax, 4
// 0047aa10  8bf3                 mov esi, ebx
// 0047aa12  7c38                 jl 0x47aa4c
// 0047aa14  8d57f4               lea edx, [edi - 0xc]
// 0047aa17  85c9                 test ecx, ecx
// 0047aa19  7404                 je 0x47aa1f
// 0047aa1b  d906                 fld dword ptr [esi]
// 0047aa1d  d919                 fstp dword ptr [ecx]
// 0047aa1f  8d4104               lea eax, [ecx + 4]
// 0047aa22  85c0                 test eax, eax
// 0047aa24  7405                 je 0x47aa2b
// 0047aa26  d94604               fld dword ptr [esi + 4]
// 0047aa29  d918                 fstp dword ptr [eax]
// 0047aa2b  83f9f8               cmp ecx, -8
// 0047aa2e  7406                 je 0x47aa36
// 0047aa30  d94608               fld dword ptr [esi + 8]
// 0047aa33  d95908               fstp dword ptr [ecx + 8]
// 0047aa36  8d410c               lea eax, [ecx + 0xc]
// 0047aa39  85c0                 test eax, eax
// 0047aa3b  7405                 je 0x47aa42
// 0047aa3d  d9460c               fld dword ptr [esi + 0xc]
// 0047aa40  d918                 fstp dword ptr [eax]
// 0047aa42  83c110               add ecx, 0x10
// 0047aa45  83c610               add esi, 0x10
// 0047aa48  3bca                 cmp ecx, edx
// 0047aa4a  7ccb                 jl 0x47aa17
// 0047aa4c  3bcf                 cmp ecx, edi
// 0047aa4e  7312                 jae 0x47aa62
// 0047aa50  85c9                 test ecx, ecx
// 0047aa52  7404                 je 0x47aa58
// 0047aa54  d906                 fld dword ptr [esi]
// 0047aa56  d919                 fstp dword ptr [ecx]
// 0047aa58  83c104               add ecx, 4
// 0047aa5b  83c604               add esi, 4
// 0047aa5e  3bcf                 cmp ecx, edi
// 0047aa60  72ee                 jb 0x47aa50
// 0047aa62  53                   push ebx
// 0047aa63  e818890700           call 0x4f3380
// 0047aa68  83c404               add esp, 4
// 0047aa6b  5f                   pop edi
// 0047aa6c  5e                   pop esi
// 0047aa6d  5b                   pop ebx
// 0047aa6e  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\BinaryInput.cpp (function ?realloc@?$Array@M@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/BinaryInput.cpp
