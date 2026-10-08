// roc 2009-12 004d6300  unit: G3D::Win32Window  size: 177 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d6300
//
// 004d6300  53                   push ebx
// 004d6301  56                   push esi
// 004d6302  8bf1                 mov esi, ecx
// 004d6304  8b4608               mov eax, dword ptr [esi + 8]
// 004d6307  8b1e                 mov ebx, dword ptr [esi]
// 004d6309  57                   push edi
// 004d630a  03c0                 add eax, eax
// 004d630c  03c0                 add eax, eax
// 004d630e  6a10                 push 0x10
// 004d6310  50                   push eax
// 004d6311  e8aa3f1100           call 0x5ea2c0
// 004d6316  8bc8                 mov ecx, eax
// 004d6318  8b442418             mov eax, dword ptr [esp + 0x18]
// 004d631c  890e                 mov dword ptr [esi], ecx
// 004d631e  8b7608               mov esi, dword ptr [esi + 8]
// 004d6321  83c408               add esp, 8
// 004d6324  3bc6                 cmp eax, esi
// 004d6326  7d02                 jge 0x4d632a
// 004d6328  8bf0                 mov esi, eax
// 004d632a  8d3cb1               lea edi, [ecx + esi*4]
// 004d632d  8bf3                 mov esi, ebx
// 004d632f  3bcf                 cmp ecx, edi
// 004d6331  736f                 jae 0x4d63a2
// 004d6333  8bc7                 mov eax, edi
// 004d6335  2bc1                 sub eax, ecx
// 004d6337  83c003               add eax, 3
// 004d633a  99                   cdq 
// 004d633b  83e203               and edx, 3
// 004d633e  03c2                 add eax, edx
// 004d6340  c1f802               sar eax, 2
// 004d6343  83f804               cmp eax, 4
// 004d6346  7c3d                 jl 0x4d6385
// 004d6348  8d57f4               lea edx, [edi - 0xc]
// 004d634b  eb03                 jmp 0x4d6350
// 004d634d  8d4900               lea ecx, [ecx]
// 004d6350  85c9                 test ecx, ecx
// 004d6352  7404                 je 0x4d6358
// 004d6354  d906                 fld dword ptr [esi]
// 004d6356  d919                 fstp dword ptr [ecx]
// 004d6358  8d4104               lea eax, [ecx + 4]
// 004d635b  85c0                 test eax, eax
// 004d635d  7405                 je 0x4d6364
// 004d635f  d94604               fld dword ptr [esi + 4]
// 004d6362  d918                 fstp dword ptr [eax]
// 004d6364  83f9f8               cmp ecx, -8
// 004d6367  7406                 je 0x4d636f
// 004d6369  d94608               fld dword ptr [esi + 8]
// 004d636c  d95908               fstp dword ptr [ecx + 8]
// 004d636f  8d410c               lea eax, [ecx + 0xc]
// 004d6372  85c0                 test eax, eax
// 004d6374  7405                 je 0x4d637b
// 004d6376  d9460c               fld dword ptr [esi + 0xc]
// 004d6379  d918                 fstp dword ptr [eax]
// 004d637b  83c110               add ecx, 0x10
// 004d637e  83c610               add esi, 0x10
// 004d6381  3bca                 cmp ecx, edx
// 004d6383  7ccb                 jl 0x4d6350
// 004d6385  3bcf                 cmp ecx, edi
// 004d6387  7319                 jae 0x4d63a2
// 004d6389  8da42400000000       lea esp, [esp]
// 004d6390  85c9                 test ecx, ecx
// 004d6392  7404                 je 0x4d6398
// 004d6394  d906                 fld dword ptr [esi]
// 004d6396  d919                 fstp dword ptr [ecx]
// 004d6398  83c104               add ecx, 4
// 004d639b  83c604               add esi, 4
// 004d639e  3bcf                 cmp ecx, edi
// 004d63a0  72ee                 jb 0x4d6390
// 004d63a2  53                   push ebx
// 004d63a3  e838401100           call 0x5ea3e0
// 004d63a8  83c404               add esp, 4
// 004d63ab  5f                   pop edi
// 004d63ac  5e                   pop esi
// 004d63ad  5b                   pop ebx
// 004d63ae  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?realloc@?$Array@M@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
