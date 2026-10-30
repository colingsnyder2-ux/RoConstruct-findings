// roc 2007-03 0051e4a0  unit: seg_00510000  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0051e4a0
//
// 0051e4a0  55                   push ebp
// 0051e4a1  56                   push esi
// 0051e4a2  68da000000           push 0xda
// 0051e4a7  8bf0                 mov esi, eax
// 0051e4a9  e8d2fcffff           call 0x51e180
// 0051e4ae  8b86e4000000         mov eax, dword ptr [esi + 0xe4]
// 0051e4b4  8d440006             lea eax, [eax + eax + 6]
// 0051e4b8  8bce                 mov ecx, esi
// 0051e4ba  e8e1fcffff           call 0x51e1a0
// 0051e4bf  8b86e4000000         mov eax, dword ptr [esi + 0xe4]
// 0051e4c5  50                   push eax
// 0051e4c6  e875fcffff           call 0x51e140
// 0051e4cb  33ed                 xor ebp, ebp
// 0051e4cd  83c408               add esp, 8
// 0051e4d0  39aee4000000         cmp dword ptr [esi + 0xe4], ebp
// 0051e4d6  7e60                 jle 0x51e538
// 0051e4d8  53                   push ebx
// 0051e4d9  57                   push edi
// 0051e4da  8d9ee8000000         lea ebx, [esi + 0xe8]
// 0051e4e0  8b3b                 mov edi, dword ptr [ebx]
// 0051e4e2  8b0f                 mov ecx, dword ptr [edi]
// 0051e4e4  51                   push ecx
// 0051e4e5  e856fcffff           call 0x51e140
// 0051e4ea  8b4714               mov eax, dword ptr [edi + 0x14]
// 0051e4ed  8b7f18               mov edi, dword ptr [edi + 0x18]
// 0051e4f0  83c404               add esp, 4
// 0051e4f3  80bed400000000       cmp byte ptr [esi + 0xd4], 0
// 0051e4fa  741e                 je 0x51e51a
// 0051e4fc  83be2c01000000       cmp dword ptr [esi + 0x12c], 0
// 0051e503  7513                 jne 0x51e518
// 0051e505  33ff                 xor edi, edi
// 0051e507  39be34010000         cmp dword ptr [esi + 0x134], edi
// 0051e50d  740b                 je 0x51e51a
// 0051e50f  80beb100000000       cmp byte ptr [esi + 0xb1], 0
// 0051e516  7502                 jne 0x51e51a
// 0051e518  33c0                 xor eax, eax
// 0051e51a  c1e004               shl eax, 4
// 0051e51d  03c7                 add eax, edi
// 0051e51f  50                   push eax
// 0051e520  e81bfcffff           call 0x51e140
// 0051e525  83c501               add ebp, 1
// 0051e528  83c404               add esp, 4
// 0051e52b  83c304               add ebx, 4
// 0051e52e  3baee4000000         cmp ebp, dword ptr [esi + 0xe4]
// 0051e534  7caa                 jl 0x51e4e0
// 0051e536  5f                   pop edi
// 0051e537  5b                   pop ebx
// 0051e538  8b962c010000         mov edx, dword ptr [esi + 0x12c]
// 0051e53e  52                   push edx
// 0051e53f  e8fcfbffff           call 0x51e140
// 0051e544  8b8630010000         mov eax, dword ptr [esi + 0x130]
// 0051e54a  50                   push eax
// 0051e54b  e8f0fbffff           call 0x51e140
// 0051e550  8b8e34010000         mov ecx, dword ptr [esi + 0x134]
// 0051e556  c1e104               shl ecx, 4
// 0051e559  038e38010000         add ecx, dword ptr [esi + 0x138]
// 0051e55f  51                   push ecx
// 0051e560  e8dbfbffff           call 0x51e140
// 0051e565  83c40c               add esp, 0xc
// 0051e568  5e                   pop esi
// 0051e569  5d                   pop ebp
// 0051e56a  c3                   ret 
// library jpeg-6b/jcmarker.c (function _emit_sos)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
