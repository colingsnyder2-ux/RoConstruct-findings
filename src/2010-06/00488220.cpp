// roc 2010-06 00488220  unit: G3D::Win32Window  size: 177 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00488220
//
// 00488220  53                   push ebx
// 00488221  56                   push esi
// 00488222  8bf1                 mov esi, ecx
// 00488224  8b4608               mov eax, dword ptr [esi + 8]
// 00488227  8b1e                 mov ebx, dword ptr [esi]
// 00488229  57                   push edi
// 0048822a  03c0                 add eax, eax
// 0048822c  03c0                 add eax, eax
// 0048822e  6a10                 push 0x10
// 00488230  50                   push eax
// 00488231  e86a560c00           call 0x54d8a0
// 00488236  8bc8                 mov ecx, eax
// 00488238  8b442418             mov eax, dword ptr [esp + 0x18]
// 0048823c  890e                 mov dword ptr [esi], ecx
// 0048823e  8b7608               mov esi, dword ptr [esi + 8]
// 00488241  83c408               add esp, 8
// 00488244  3bc6                 cmp eax, esi
// 00488246  7d02                 jge 0x48824a
// 00488248  8bf0                 mov esi, eax
// 0048824a  8d3cb1               lea edi, [ecx + esi*4]
// 0048824d  8bf3                 mov esi, ebx
// 0048824f  3bcf                 cmp ecx, edi
// 00488251  736f                 jae 0x4882c2
// 00488253  8bc7                 mov eax, edi
// 00488255  2bc1                 sub eax, ecx
// 00488257  83c003               add eax, 3
// 0048825a  99                   cdq 
// 0048825b  83e203               and edx, 3
// 0048825e  03c2                 add eax, edx
// 00488260  c1f802               sar eax, 2
// 00488263  83f804               cmp eax, 4
// 00488266  7c3d                 jl 0x4882a5
// 00488268  8d57f4               lea edx, [edi - 0xc]
// 0048826b  eb03                 jmp 0x488270
// 0048826d  8d4900               lea ecx, [ecx]
// 00488270  85c9                 test ecx, ecx
// 00488272  7404                 je 0x488278
// 00488274  d906                 fld dword ptr [esi]
// 00488276  d919                 fstp dword ptr [ecx]
// 00488278  8d4104               lea eax, [ecx + 4]
// 0048827b  85c0                 test eax, eax
// 0048827d  7405                 je 0x488284
// 0048827f  d94604               fld dword ptr [esi + 4]
// 00488282  d918                 fstp dword ptr [eax]
// 00488284  83f9f8               cmp ecx, -8
// 00488287  7406                 je 0x48828f
// 00488289  d94608               fld dword ptr [esi + 8]
// 0048828c  d95908               fstp dword ptr [ecx + 8]
// 0048828f  8d410c               lea eax, [ecx + 0xc]
// 00488292  85c0                 test eax, eax
// 00488294  7405                 je 0x48829b
// 00488296  d9460c               fld dword ptr [esi + 0xc]
// 00488299  d918                 fstp dword ptr [eax]
// 0048829b  83c110               add ecx, 0x10
// 0048829e  83c610               add esi, 0x10
// 004882a1  3bca                 cmp ecx, edx
// 004882a3  7ccb                 jl 0x488270
// 004882a5  3bcf                 cmp ecx, edi
// 004882a7  7319                 jae 0x4882c2
// 004882a9  8da42400000000       lea esp, [esp]
// 004882b0  85c9                 test ecx, ecx
// 004882b2  7404                 je 0x4882b8
// 004882b4  d906                 fld dword ptr [esi]
// 004882b6  d919                 fstp dword ptr [ecx]
// 004882b8  83c104               add ecx, 4
// 004882bb  83c604               add esi, 4
// 004882be  3bcf                 cmp ecx, edi
// 004882c0  72ee                 jb 0x4882b0
// 004882c2  53                   push ebx
// 004882c3  e8f8560c00           call 0x54d9c0
// 004882c8  83c404               add esp, 4
// 004882cb  5f                   pop edi
// 004882cc  5e                   pop esi
// 004882cd  5b                   pop ebx
// 004882ce  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?realloc@?$Array@M@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
