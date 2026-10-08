// from server: 100% by auto
// roc 2008-06 0047f640  unit: G3D::Win32Window  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047f640
//
// 0047f640  53                   push ebx
// 0047f641  56                   push esi
// 0047f642  8bf1                 mov esi, ecx
// 0047f644  8b4608               mov eax, dword ptr [esi + 8]
// 0047f647  8b1e                 mov ebx, dword ptr [esi]
// 0047f649  57                   push edi
// 0047f64a  03c0                 add eax, eax
// 0047f64c  03c0                 add eax, eax
// 0047f64e  6a10                 push 0x10
// 0047f650  50                   push eax
// 0047f651  e82a8f0800           call 0x508580
// 0047f656  8bc8                 mov ecx, eax
// 0047f658  8b442418             mov eax, dword ptr [esp + 0x18]
// 0047f65c  890e                 mov dword ptr [esi], ecx
// 0047f65e  8b7608               mov esi, dword ptr [esi + 8]
// 0047f661  83c408               add esp, 8
// 0047f664  3bc6                 cmp eax, esi
// 0047f666  7d02                 jge 0x47f66a
// 0047f668  8bf0                 mov esi, eax
// 0047f66a  8d3cb1               lea edi, [ecx + esi*4]
// 0047f66d  8bc7                 mov eax, edi
// 0047f66f  2bc1                 sub eax, ecx
// 0047f671  83c003               add eax, 3
// 0047f674  99                   cdq 
// 0047f675  83e203               and edx, 3
// 0047f678  03c2                 add eax, edx
// 0047f67a  c1f802               sar eax, 2
// 0047f67d  83f804               cmp eax, 4
// 0047f680  8bf3                 mov esi, ebx
// 0047f682  7c38                 jl 0x47f6bc
// 0047f684  8d57f4               lea edx, [edi - 0xc]
// 0047f687  85c9                 test ecx, ecx
// 0047f689  7404                 je 0x47f68f
// 0047f68b  d906                 fld dword ptr [esi]
// 0047f68d  d919                 fstp dword ptr [ecx]
// 0047f68f  8d4104               lea eax, [ecx + 4]
// 0047f692  85c0                 test eax, eax
// 0047f694  7405                 je 0x47f69b
// 0047f696  d94604               fld dword ptr [esi + 4]
// 0047f699  d918                 fstp dword ptr [eax]
// 0047f69b  83f9f8               cmp ecx, -8
// 0047f69e  7406                 je 0x47f6a6
// 0047f6a0  d94608               fld dword ptr [esi + 8]
// 0047f6a3  d95908               fstp dword ptr [ecx + 8]
// 0047f6a6  8d410c               lea eax, [ecx + 0xc]
// 0047f6a9  85c0                 test eax, eax
// 0047f6ab  7405                 je 0x47f6b2
// 0047f6ad  d9460c               fld dword ptr [esi + 0xc]
// 0047f6b0  d918                 fstp dword ptr [eax]
// 0047f6b2  83c110               add ecx, 0x10
// 0047f6b5  83c610               add esi, 0x10
// 0047f6b8  3bca                 cmp ecx, edx
// 0047f6ba  7ccb                 jl 0x47f687
// 0047f6bc  3bcf                 cmp ecx, edi
// 0047f6be  7312                 jae 0x47f6d2
// 0047f6c0  85c9                 test ecx, ecx
// 0047f6c2  7404                 je 0x47f6c8
// 0047f6c4  d906                 fld dword ptr [esi]
// 0047f6c6  d919                 fstp dword ptr [ecx]
// 0047f6c8  83c104               add ecx, 4
// 0047f6cb  83c604               add esi, 4
// 0047f6ce  3bcf                 cmp ecx, edi
// 0047f6d0  72ee                 jb 0x47f6c0
// 0047f6d2  53                   push ebx
// 0047f6d3  e848860800           call 0x507d20
// 0047f6d8  83c404               add esp, 4
// 0047f6db  5f                   pop edi
// 0047f6dc  5e                   pop esi
// 0047f6dd  5b                   pop ebx
// 0047f6de  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?realloc@?$Array@M@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
