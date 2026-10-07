// roc 2012-06 00643be0  unit: seg_00640000  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00643be0
//
// 00643be0  53                   push ebx
// 00643be1  55                   push ebp
// 00643be2  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00643be6  56                   push esi
// 00643be7  8b742410             mov esi, dword ptr [esp + 0x10]
// 00643beb  8b06                 mov eax, dword ptr [esi]
// 00643bed  8b9e7c010000         mov ebx, dword ptr [esi + 0x17c]
// 00643bf3  c7401479000000       mov dword ptr [eax + 0x14], 0x79
// 00643bfa  8b0e                 mov ecx, dword ptr [esi]
// 00643bfc  895918               mov dword ptr [ecx + 0x18], ebx
// 00643bff  8b16                 mov edx, dword ptr [esi]
// 00643c01  57                   push edi
// 00643c02  896a1c               mov dword ptr [edx + 0x1c], ebp
// 00643c05  8b06                 mov eax, dword ptr [esi]
// 00643c07  8b4804               mov ecx, dword ptr [eax + 4]
// 00643c0a  6aff                 push -1
// 00643c0c  56                   push esi
// 00643c0d  ffd1                 call ecx
// 00643c0f  83c408               add esp, 8
// 00643c12  81fbc0000000         cmp ebx, 0xc0
// 00643c18  7d07                 jge 0x643c21
// 00643c1a  bf02000000           mov edi, 2
// 00643c1f  eb55                 jmp 0x643c76
// 00643c21  8d9330ffffff         lea edx, [ebx - 0xd0]
// 00643c27  83fa07               cmp edx, 7
// 00643c2a  7745                 ja 0x643c71
// 00643c2c  8d4501               lea eax, [ebp + 1]
// 00643c2f  83e007               and eax, 7
// 00643c32  05d0000000           add eax, 0xd0
// 00643c37  3bd8                 cmp ebx, eax
// 00643c39  7436                 je 0x643c71
// 00643c3b  8d4d02               lea ecx, [ebp + 2]
// 00643c3e  83e107               and ecx, 7
// 00643c41  81c1d0000000         add ecx, 0xd0
// 00643c47  3bd9                 cmp ebx, ecx
// 00643c49  7426                 je 0x643c71
// 00643c4b  8d55ff               lea edx, [ebp - 1]
// 00643c4e  83e207               and edx, 7
// 00643c51  81c2d0000000         add edx, 0xd0
// 00643c57  3bda                 cmp ebx, edx
// 00643c59  74bf                 je 0x643c1a
// 00643c5b  8d45fe               lea eax, [ebp - 2]
// 00643c5e  83e007               and eax, 7
// 00643c61  05d0000000           add eax, 0xd0
// 00643c66  3bd8                 cmp ebx, eax
// 00643c68  74b0                 je 0x643c1a
// 00643c6a  bf01000000           mov edi, 1
// 00643c6f  eb05                 jmp 0x643c76
// 00643c71  bf03000000           mov edi, 3
// 00643c76  8b0e                 mov ecx, dword ptr [esi]
// 00643c78  c7411461000000       mov dword ptr [ecx + 0x14], 0x61
// 00643c7f  8b16                 mov edx, dword ptr [esi]
// 00643c81  895a18               mov dword ptr [edx + 0x18], ebx
// 00643c84  8b06                 mov eax, dword ptr [esi]
// 00643c86  89781c               mov dword ptr [eax + 0x1c], edi
// 00643c89  8b0e                 mov ecx, dword ptr [esi]
// 00643c8b  8b5104               mov edx, dword ptr [ecx + 4]
// 00643c8e  6a04                 push 4
// 00643c90  56                   push esi
// 00643c91  ffd2                 call edx
// 00643c93  83c408               add esp, 8
// 00643c96  83ef01               sub edi, 1
// 00643c99  7434                 je 0x643ccf
// 00643c9b  83ef01               sub edi, 1
// 00643c9e  7410                 je 0x643cb0
// 00643ca0  83ef01               sub edi, 1
// 00643ca3  0f8569ffffff         jne 0x643c12
// 00643ca9  5f                   pop edi
// 00643caa  5e                   pop esi
// 00643cab  5d                   pop ebp
// 00643cac  b001                 mov al, 1
// 00643cae  5b                   pop ebx
// 00643caf  c3                   ret 
// 00643cb0  56                   push esi
// 00643cb1  e84af9ffff           call 0x643600
// 00643cb6  83c404               add esp, 4
// 00643cb9  84c0                 test al, al
// 00643cbb  740b                 je 0x643cc8
// 00643cbd  8b9e7c010000         mov ebx, dword ptr [esi + 0x17c]
// 00643cc3  e94affffff           jmp 0x643c12
// 00643cc8  5f                   pop edi
// 00643cc9  5e                   pop esi
// 00643cca  5d                   pop ebp
// 00643ccb  32c0                 xor al, al
// 00643ccd  5b                   pop ebx
// 00643cce  c3                   ret 
// 00643ccf  5f                   pop edi
// 00643cd0  c7867c01000000000000 mov dword ptr [esi + 0x17c], 0
// 00643cda  5e                   pop esi
// 00643cdb  5d                   pop ebp
// 00643cdc  b001                 mov al, 1
// 00643cde  5b                   pop ebx
// 00643cdf  c3                   ret 
// library jpeg-6b/jdmarker.c (function _jpeg_resync_to_restart)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
