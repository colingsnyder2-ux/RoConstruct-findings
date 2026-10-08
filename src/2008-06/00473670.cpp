// from server: 100% by auto
// roc 2008-06 00473670  unit: G3D::ReferenceCountedObject  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00473670
//
// 00473670  803d164c930000       cmp byte ptr [0x934c16], 0
// 00473677  7503                 jne 0x47367c
// 00473679  33c0                 xor eax, eax
// 0047367b  c3                   ret 
// 0047367c  8b4160               mov eax, dword ptr [ecx + 0x60]
// 0047367f  8b403c               mov eax, dword ptr [eax + 0x3c]
// 00473682  0faf416c             imul eax, dword ptr [ecx + 0x6c]
// 00473686  53                   push ebx
// 00473687  8b5968               mov ebx, dword ptr [ecx + 0x68]
// 0047368a  55                   push ebp
// 0047368b  56                   push esi
// 0047368c  57                   push edi
// 0047368d  8b7964               mov edi, dword ptr [ecx + 0x64]
// 00473690  0fafc7               imul eax, edi
// 00473693  0fafc3               imul eax, ebx
// 00473696  99                   cdq 
// 00473697  83e207               and edx, 7
// 0047369a  03c2                 add eax, edx
// 0047369c  8bf0                 mov esi, eax
// 0047369e  c1fe03               sar esi, 3
// 004736a1  33ed                 xor ebp, ebp
// 004736a3  83791803             cmp dword ptr [ecx + 0x18], 3
// 004736a7  7534                 jne 0x4736dd
// 004736a9  83ff02               cmp edi, 2
// 004736ac  7e31                 jle 0x4736df
// 004736ae  8bff                 mov edi, edi
// 004736b0  83fb02               cmp ebx, 2
// 004736b3  7e2a                 jle 0x4736df
// 004736b5  8bc6                 mov eax, esi
// 004736b7  99                   cdq 
// 004736b8  83e203               and edx, 3
// 004736bb  03c2                 add eax, edx
// 004736bd  c1f802               sar eax, 2
// 004736c0  03ee                 add ebp, esi
// 004736c2  8bf0                 mov esi, eax
// 004736c4  8bc7                 mov eax, edi
// 004736c6  99                   cdq 
// 004736c7  2bc2                 sub eax, edx
// 004736c9  d1f8                 sar eax, 1
// 004736cb  8bf8                 mov edi, eax
// 004736cd  8bc3                 mov eax, ebx
// 004736cf  99                   cdq 
// 004736d0  2bc2                 sub eax, edx
// 004736d2  d1f8                 sar eax, 1
// 004736d4  83ff02               cmp edi, 2
// 004736d7  8bd8                 mov ebx, eax
// 004736d9  7fd5                 jg 0x4736b0
// 004736db  eb02                 jmp 0x4736df
// 004736dd  8bee                 mov ebp, esi
// 004736df  83795805             cmp dword ptr [ecx + 0x58], 5
// 004736e3  7506                 jne 0x4736eb
// 004736e5  8d6c6d00             lea ebp, [ebp + ebp*2]
// 004736e9  03ed                 add ebp, ebp
// 004736eb  5f                   pop edi
// 004736ec  5e                   pop esi
// 004736ed  8bc5                 mov eax, ebp
// 004736ef  5d                   pop ebp
// 004736f0  5b                   pop ebx
// 004736f1  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?sizeInMemory@Texture@G3D@@QBEIXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
