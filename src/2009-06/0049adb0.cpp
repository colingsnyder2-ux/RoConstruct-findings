// from server: 100% by auto
// roc 2009-06 0049adb0  unit: G3D::ReferenceCountedObject  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049adb0
//
// 0049adb0  803d5ac29e0000       cmp byte ptr [0x9ec25a], 0
// 0049adb7  7503                 jne 0x49adbc
// 0049adb9  33c0                 xor eax, eax
// 0049adbb  c3                   ret 
// 0049adbc  8b4160               mov eax, dword ptr [ecx + 0x60]
// 0049adbf  8b403c               mov eax, dword ptr [eax + 0x3c]
// 0049adc2  0faf416c             imul eax, dword ptr [ecx + 0x6c]
// 0049adc6  53                   push ebx
// 0049adc7  8b5968               mov ebx, dword ptr [ecx + 0x68]
// 0049adca  55                   push ebp
// 0049adcb  56                   push esi
// 0049adcc  57                   push edi
// 0049adcd  8b7964               mov edi, dword ptr [ecx + 0x64]
// 0049add0  0fafc7               imul eax, edi
// 0049add3  0fafc3               imul eax, ebx
// 0049add6  99                   cdq 
// 0049add7  83e207               and edx, 7
// 0049adda  03c2                 add eax, edx
// 0049addc  8bf0                 mov esi, eax
// 0049adde  c1fe03               sar esi, 3
// 0049ade1  33ed                 xor ebp, ebp
// 0049ade3  83791803             cmp dword ptr [ecx + 0x18], 3
// 0049ade7  7534                 jne 0x49ae1d
// 0049ade9  83ff02               cmp edi, 2
// 0049adec  7e31                 jle 0x49ae1f
// 0049adee  8bff                 mov edi, edi
// 0049adf0  83fb02               cmp ebx, 2
// 0049adf3  7e2a                 jle 0x49ae1f
// 0049adf5  8bc6                 mov eax, esi
// 0049adf7  99                   cdq 
// 0049adf8  83e203               and edx, 3
// 0049adfb  03c2                 add eax, edx
// 0049adfd  c1f802               sar eax, 2
// 0049ae00  03ee                 add ebp, esi
// 0049ae02  8bf0                 mov esi, eax
// 0049ae04  8bc7                 mov eax, edi
// 0049ae06  99                   cdq 
// 0049ae07  2bc2                 sub eax, edx
// 0049ae09  d1f8                 sar eax, 1
// 0049ae0b  8bf8                 mov edi, eax
// 0049ae0d  8bc3                 mov eax, ebx
// 0049ae0f  99                   cdq 
// 0049ae10  2bc2                 sub eax, edx
// 0049ae12  d1f8                 sar eax, 1
// 0049ae14  83ff02               cmp edi, 2
// 0049ae17  8bd8                 mov ebx, eax
// 0049ae19  7fd5                 jg 0x49adf0
// 0049ae1b  eb02                 jmp 0x49ae1f
// 0049ae1d  8bee                 mov ebp, esi
// 0049ae1f  83795805             cmp dword ptr [ecx + 0x58], 5
// 0049ae23  7506                 jne 0x49ae2b
// 0049ae25  8d6c6d00             lea ebp, [ebp + ebp*2]
// 0049ae29  03ed                 add ebp, ebp
// 0049ae2b  5f                   pop edi
// 0049ae2c  5e                   pop esi
// 0049ae2d  8bc5                 mov eax, ebp
// 0049ae2f  5d                   pop ebp
// 0049ae30  5b                   pop ebx
// 0049ae31  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?sizeInMemory@Texture@G3D@@QBEIXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
