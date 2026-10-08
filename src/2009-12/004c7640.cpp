// roc 2009-12 004c7640  unit: G3D::ReferenceCountedObject  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004c7640
//
// 004c7640  803d4a24b10000       cmp byte ptr [0xb1244a], 0
// 004c7647  7503                 jne 0x4c764c
// 004c7649  33c0                 xor eax, eax
// 004c764b  c3                   ret 
// 004c764c  8b4160               mov eax, dword ptr [ecx + 0x60]
// 004c764f  8b403c               mov eax, dword ptr [eax + 0x3c]
// 004c7652  0faf416c             imul eax, dword ptr [ecx + 0x6c]
// 004c7656  53                   push ebx
// 004c7657  8b5968               mov ebx, dword ptr [ecx + 0x68]
// 004c765a  55                   push ebp
// 004c765b  56                   push esi
// 004c765c  57                   push edi
// 004c765d  8b7964               mov edi, dword ptr [ecx + 0x64]
// 004c7660  0fafc7               imul eax, edi
// 004c7663  0fafc3               imul eax, ebx
// 004c7666  99                   cdq 
// 004c7667  83e207               and edx, 7
// 004c766a  03c2                 add eax, edx
// 004c766c  8bf0                 mov esi, eax
// 004c766e  c1fe03               sar esi, 3
// 004c7671  33ed                 xor ebp, ebp
// 004c7673  83791803             cmp dword ptr [ecx + 0x18], 3
// 004c7677  7534                 jne 0x4c76ad
// 004c7679  83ff02               cmp edi, 2
// 004c767c  7e31                 jle 0x4c76af
// 004c767e  8bff                 mov edi, edi
// 004c7680  83fb02               cmp ebx, 2
// 004c7683  7e2a                 jle 0x4c76af
// 004c7685  8bc6                 mov eax, esi
// 004c7687  99                   cdq 
// 004c7688  83e203               and edx, 3
// 004c768b  03c2                 add eax, edx
// 004c768d  c1f802               sar eax, 2
// 004c7690  03ee                 add ebp, esi
// 004c7692  8bf0                 mov esi, eax
// 004c7694  8bc7                 mov eax, edi
// 004c7696  99                   cdq 
// 004c7697  2bc2                 sub eax, edx
// 004c7699  d1f8                 sar eax, 1
// 004c769b  8bf8                 mov edi, eax
// 004c769d  8bc3                 mov eax, ebx
// 004c769f  99                   cdq 
// 004c76a0  2bc2                 sub eax, edx
// 004c76a2  d1f8                 sar eax, 1
// 004c76a4  83ff02               cmp edi, 2
// 004c76a7  8bd8                 mov ebx, eax
// 004c76a9  7fd5                 jg 0x4c7680
// 004c76ab  eb02                 jmp 0x4c76af
// 004c76ad  8bee                 mov ebp, esi
// 004c76af  83795805             cmp dword ptr [ecx + 0x58], 5
// 004c76b3  7506                 jne 0x4c76bb
// 004c76b5  8d6c6d00             lea ebp, [ebp + ebp*2]
// 004c76b9  03ed                 add ebp, ebp
// 004c76bb  5f                   pop edi
// 004c76bc  5e                   pop esi
// 004c76bd  8bc5                 mov eax, ebp
// 004c76bf  5d                   pop ebp
// 004c76c0  5b                   pop ebx
// 004c76c1  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?sizeInMemory@Texture@G3D@@QBEIXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
