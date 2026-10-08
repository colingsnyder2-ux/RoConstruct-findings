// from server: 100% by auto
// roc 2007-08 00470390  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00470390
//
// 00470390  803da6c1880000       cmp byte ptr [0x88c1a6], 0
// 00470397  7503                 jne 0x47039c
// 00470399  33c0                 xor eax, eax
// 0047039b  c3                   ret 
// 0047039c  8b4160               mov eax, dword ptr [ecx + 0x60]
// 0047039f  8b403c               mov eax, dword ptr [eax + 0x3c]
// 004703a2  0faf416c             imul eax, dword ptr [ecx + 0x6c]
// 004703a6  53                   push ebx
// 004703a7  8b5968               mov ebx, dword ptr [ecx + 0x68]
// 004703aa  55                   push ebp
// 004703ab  56                   push esi
// 004703ac  57                   push edi
// 004703ad  8b7964               mov edi, dword ptr [ecx + 0x64]
// 004703b0  0fafc7               imul eax, edi
// 004703b3  0fafc3               imul eax, ebx
// 004703b6  99                   cdq 
// 004703b7  83e207               and edx, 7
// 004703ba  03c2                 add eax, edx
// 004703bc  8bf0                 mov esi, eax
// 004703be  c1fe03               sar esi, 3
// 004703c1  33ed                 xor ebp, ebp
// 004703c3  83791803             cmp dword ptr [ecx + 0x18], 3
// 004703c7  7534                 jne 0x4703fd
// 004703c9  83ff02               cmp edi, 2
// 004703cc  7e31                 jle 0x4703ff
// 004703ce  8bff                 mov edi, edi
// 004703d0  83fb02               cmp ebx, 2
// 004703d3  7e2a                 jle 0x4703ff
// 004703d5  8bc6                 mov eax, esi
// 004703d7  99                   cdq 
// 004703d8  83e203               and edx, 3
// 004703db  03c2                 add eax, edx
// 004703dd  c1f802               sar eax, 2
// 004703e0  03ee                 add ebp, esi
// 004703e2  8bf0                 mov esi, eax
// 004703e4  8bc7                 mov eax, edi
// 004703e6  99                   cdq 
// 004703e7  2bc2                 sub eax, edx
// 004703e9  d1f8                 sar eax, 1
// 004703eb  8bf8                 mov edi, eax
// 004703ed  8bc3                 mov eax, ebx
// 004703ef  99                   cdq 
// 004703f0  2bc2                 sub eax, edx
// 004703f2  d1f8                 sar eax, 1
// 004703f4  83ff02               cmp edi, 2
// 004703f7  8bd8                 mov ebx, eax
// 004703f9  7fd5                 jg 0x4703d0
// 004703fb  eb02                 jmp 0x4703ff
// 004703fd  8bee                 mov ebp, esi
// 004703ff  83795805             cmp dword ptr [ecx + 0x58], 5
// 00470403  7506                 jne 0x47040b
// 00470405  8d6c6d00             lea ebp, [ebp + ebp*2]
// 00470409  03ed                 add ebp, ebp
// 0047040b  5f                   pop edi
// 0047040c  5e                   pop esi
// 0047040d  8bc5                 mov eax, ebp
// 0047040f  5d                   pop ebp
// 00470410  5b                   pop ebx
// 00470411  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?sizeInMemory@Texture@G3D@@QBEIXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
