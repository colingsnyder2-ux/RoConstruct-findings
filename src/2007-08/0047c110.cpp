// roc 2007-08 0047c110  unit: G3D::Win32Window  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047c110
//
// 0047c110  51                   push ecx
// 0047c111  53                   push ebx
// 0047c112  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0047c116  55                   push ebp
// 0047c117  56                   push esi
// 0047c118  57                   push edi
// 0047c119  8bf1                 mov esi, ecx
// 0047c11b  8b4608               mov eax, dword ptr [esi + 8]
// 0047c11e  8d3c9d00000000       lea edi, [ebx*4]
// 0047c125  6a10                 push 0x10
// 0047c127  57                   push edi
// 0047c128  89442418             mov dword ptr [esp + 0x18], eax
// 0047c12c  e82f3f0800           call 0x500060
// 0047c131  57                   push edi
// 0047c132  6a00                 push 0
// 0047c134  50                   push eax
// 0047c135  894608               mov dword ptr [esi + 8], eax
// 0047c138  e843440800           call 0x500580
// 0047c13d  33ed                 xor ebp, ebp
// 0047c13f  83c414               add esp, 0x14
// 0047c142  396e0c               cmp dword ptr [esi + 0xc], ebp
// 0047c145  7e31                 jle 0x47c178
// 0047c147  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0047c14b  8b0ca9               mov ecx, dword ptr [ecx + ebp*4]
// 0047c14e  85c9                 test ecx, ecx
// 0047c150  741e                 je 0x47c170
// 0047c152  8b01                 mov eax, dword ptr [ecx]
// 0047c154  33d2                 xor edx, edx
// 0047c156  f7f3                 div ebx
// 0047c158  8b4608               mov eax, dword ptr [esi + 8]
// 0047c15b  8b790c               mov edi, dword ptr [ecx + 0xc]
// 0047c15e  85ff                 test edi, edi
// 0047c160  8b0490               mov eax, dword ptr [eax + edx*4]
// 0047c163  89410c               mov dword ptr [ecx + 0xc], eax
// 0047c166  8b4608               mov eax, dword ptr [esi + 8]
// 0047c169  890c90               mov dword ptr [eax + edx*4], ecx
// 0047c16c  8bcf                 mov ecx, edi
// 0047c16e  75e2                 jne 0x47c152
// 0047c170  83c501               add ebp, 1
// 0047c173  3b6e0c               cmp ebp, dword ptr [esi + 0xc]
// 0047c176  7ccf                 jl 0x47c147
// 0047c178  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0047c17c  51                   push ecx
// 0047c17d  e88e360800           call 0x4ff810
// 0047c182  83c404               add esp, 4
// 0047c185  5f                   pop edi
// 0047c186  895e0c               mov dword ptr [esi + 0xc], ebx
// 0047c189  5e                   pop esi
// 0047c18a  5d                   pop ebp
// 0047c18b  5b                   pop ebx
// 0047c18c  59                   pop ecx
// 0047c18d  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ?resize@?$Table@PAV?$Array@H@G3D@@_N@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
