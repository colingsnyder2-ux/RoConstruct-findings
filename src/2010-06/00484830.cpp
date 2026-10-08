// from server: 100% by auto
// roc 2010-06 00484830  unit: G3D::ReferenceCountedObject  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00484830
//
// 00484830  803dd271b80000       cmp byte ptr [0xb871d2], 0
// 00484837  7503                 jne 0x48483c
// 00484839  33c0                 xor eax, eax
// 0048483b  c3                   ret 
// 0048483c  8b4160               mov eax, dword ptr [ecx + 0x60]
// 0048483f  8b403c               mov eax, dword ptr [eax + 0x3c]
// 00484842  0faf416c             imul eax, dword ptr [ecx + 0x6c]
// 00484846  53                   push ebx
// 00484847  8b5968               mov ebx, dword ptr [ecx + 0x68]
// 0048484a  55                   push ebp
// 0048484b  56                   push esi
// 0048484c  57                   push edi
// 0048484d  8b7964               mov edi, dword ptr [ecx + 0x64]
// 00484850  0fafc7               imul eax, edi
// 00484853  0fafc3               imul eax, ebx
// 00484856  99                   cdq 
// 00484857  83e207               and edx, 7
// 0048485a  03c2                 add eax, edx
// 0048485c  8bf0                 mov esi, eax
// 0048485e  c1fe03               sar esi, 3
// 00484861  33ed                 xor ebp, ebp
// 00484863  83791803             cmp dword ptr [ecx + 0x18], 3
// 00484867  7534                 jne 0x48489d
// 00484869  83ff02               cmp edi, 2
// 0048486c  7e31                 jle 0x48489f
// 0048486e  8bff                 mov edi, edi
// 00484870  83fb02               cmp ebx, 2
// 00484873  7e2a                 jle 0x48489f
// 00484875  8bc6                 mov eax, esi
// 00484877  99                   cdq 
// 00484878  83e203               and edx, 3
// 0048487b  03c2                 add eax, edx
// 0048487d  c1f802               sar eax, 2
// 00484880  03ee                 add ebp, esi
// 00484882  8bf0                 mov esi, eax
// 00484884  8bc7                 mov eax, edi
// 00484886  99                   cdq 
// 00484887  2bc2                 sub eax, edx
// 00484889  d1f8                 sar eax, 1
// 0048488b  8bf8                 mov edi, eax
// 0048488d  8bc3                 mov eax, ebx
// 0048488f  99                   cdq 
// 00484890  2bc2                 sub eax, edx
// 00484892  d1f8                 sar eax, 1
// 00484894  83ff02               cmp edi, 2
// 00484897  8bd8                 mov ebx, eax
// 00484899  7fd5                 jg 0x484870
// 0048489b  eb02                 jmp 0x48489f
// 0048489d  8bee                 mov ebp, esi
// 0048489f  83795805             cmp dword ptr [ecx + 0x58], 5
// 004848a3  7506                 jne 0x4848ab
// 004848a5  8d6c6d00             lea ebp, [ebp + ebp*2]
// 004848a9  03ed                 add ebp, ebp
// 004848ab  5f                   pop edi
// 004848ac  5e                   pop esi
// 004848ad  8bc5                 mov eax, ebp
// 004848af  5d                   pop ebp
// 004848b0  5b                   pop ebx
// 004848b1  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?sizeInMemory@Texture@G3D@@QBEIXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
