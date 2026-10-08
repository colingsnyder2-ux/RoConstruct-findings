// roc 2007-03 00470330  unit: seg_00470000  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00470330
//
// 00470330  803dd6b1880000       cmp byte ptr [0x88b1d6], 0
// 00470337  7503                 jne 0x47033c
// 00470339  33c0                 xor eax, eax
// 0047033b  c3                   ret 
// 0047033c  8b4160               mov eax, dword ptr [ecx + 0x60]
// 0047033f  8b403c               mov eax, dword ptr [eax + 0x3c]
// 00470342  0faf416c             imul eax, dword ptr [ecx + 0x6c]
// 00470346  53                   push ebx
// 00470347  8b5968               mov ebx, dword ptr [ecx + 0x68]
// 0047034a  55                   push ebp
// 0047034b  56                   push esi
// 0047034c  57                   push edi
// 0047034d  8b7964               mov edi, dword ptr [ecx + 0x64]
// 00470350  0fafc7               imul eax, edi
// 00470353  0fafc3               imul eax, ebx
// 00470356  99                   cdq 
// 00470357  83e207               and edx, 7
// 0047035a  03c2                 add eax, edx
// 0047035c  8bf0                 mov esi, eax
// 0047035e  c1fe03               sar esi, 3
// 00470361  33ed                 xor ebp, ebp
// 00470363  83791803             cmp dword ptr [ecx + 0x18], 3
// 00470367  7534                 jne 0x47039d
// 00470369  83ff02               cmp edi, 2
// 0047036c  7e31                 jle 0x47039f
// 0047036e  8bff                 mov edi, edi
// 00470370  83fb02               cmp ebx, 2
// 00470373  7e2a                 jle 0x47039f
// 00470375  8bc6                 mov eax, esi
// 00470377  99                   cdq 
// 00470378  83e203               and edx, 3
// 0047037b  03c2                 add eax, edx
// 0047037d  c1f802               sar eax, 2
// 00470380  03ee                 add ebp, esi
// 00470382  8bf0                 mov esi, eax
// 00470384  8bc7                 mov eax, edi
// 00470386  99                   cdq 
// 00470387  2bc2                 sub eax, edx
// 00470389  d1f8                 sar eax, 1
// 0047038b  8bf8                 mov edi, eax
// 0047038d  8bc3                 mov eax, ebx
// 0047038f  99                   cdq 
// 00470390  2bc2                 sub eax, edx
// 00470392  d1f8                 sar eax, 1
// 00470394  83ff02               cmp edi, 2
// 00470397  8bd8                 mov ebx, eax
// 00470399  7fd5                 jg 0x470370
// 0047039b  eb02                 jmp 0x47039f
// 0047039d  8bee                 mov ebp, esi
// 0047039f  83795805             cmp dword ptr [ecx + 0x58], 5
// 004703a3  7506                 jne 0x4703ab
// 004703a5  8d6c6d00             lea ebp, [ebp + ebp*2]
// 004703a9  03ed                 add ebp, ebp
// 004703ab  5f                   pop edi
// 004703ac  5e                   pop esi
// 004703ad  8bc5                 mov eax, ebp
// 004703af  5d                   pop ebp
// 004703b0  5b                   pop ebx
// 004703b1  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\Texture.cpp (function ?sizeInMemory@Texture@G3D@@QBEIXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/Texture.cpp
