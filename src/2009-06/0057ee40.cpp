// from server: 100% by auto
// roc 2009-06 0057ee40  unit: G3D::_internal::DialogTemplate  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057ee40
//
// 0057ee40  53                   push ebx
// 0057ee41  55                   push ebp
// 0057ee42  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0057ee46  56                   push esi
// 0057ee47  8b742410             mov esi, dword ptr [esp + 0x10]
// 0057ee4b  8b06                 mov eax, dword ptr [esi]
// 0057ee4d  8b9e7c010000         mov ebx, dword ptr [esi + 0x17c]
// 0057ee53  c7401479000000       mov dword ptr [eax + 0x14], 0x79
// 0057ee5a  8b0e                 mov ecx, dword ptr [esi]
// 0057ee5c  895918               mov dword ptr [ecx + 0x18], ebx
// 0057ee5f  8b16                 mov edx, dword ptr [esi]
// 0057ee61  57                   push edi
// 0057ee62  896a1c               mov dword ptr [edx + 0x1c], ebp
// 0057ee65  8b06                 mov eax, dword ptr [esi]
// 0057ee67  8b4804               mov ecx, dword ptr [eax + 4]
// 0057ee6a  6aff                 push -1
// 0057ee6c  56                   push esi
// 0057ee6d  ffd1                 call ecx
// 0057ee6f  83c408               add esp, 8
// 0057ee72  81fbc0000000         cmp ebx, 0xc0
// 0057ee78  7d07                 jge 0x57ee81
// 0057ee7a  bf02000000           mov edi, 2
// 0057ee7f  eb55                 jmp 0x57eed6
// 0057ee81  8d9330ffffff         lea edx, [ebx - 0xd0]
// 0057ee87  83fa07               cmp edx, 7
// 0057ee8a  7745                 ja 0x57eed1
// 0057ee8c  8d4501               lea eax, [ebp + 1]
// 0057ee8f  83e007               and eax, 7
// 0057ee92  05d0000000           add eax, 0xd0
// 0057ee97  3bd8                 cmp ebx, eax
// 0057ee99  7436                 je 0x57eed1
// 0057ee9b  8d4d02               lea ecx, [ebp + 2]
// 0057ee9e  83e107               and ecx, 7
// 0057eea1  81c1d0000000         add ecx, 0xd0
// 0057eea7  3bd9                 cmp ebx, ecx
// 0057eea9  7426                 je 0x57eed1
// 0057eeab  8d55ff               lea edx, [ebp - 1]
// 0057eeae  83e207               and edx, 7
// 0057eeb1  81c2d0000000         add edx, 0xd0
// 0057eeb7  3bda                 cmp ebx, edx
// 0057eeb9  74bf                 je 0x57ee7a
// 0057eebb  8d45fe               lea eax, [ebp - 2]
// 0057eebe  83e007               and eax, 7
// 0057eec1  05d0000000           add eax, 0xd0
// 0057eec6  3bd8                 cmp ebx, eax
// 0057eec8  74b0                 je 0x57ee7a
// 0057eeca  bf01000000           mov edi, 1
// 0057eecf  eb05                 jmp 0x57eed6
// 0057eed1  bf03000000           mov edi, 3
// 0057eed6  8b0e                 mov ecx, dword ptr [esi]
// 0057eed8  c7411461000000       mov dword ptr [ecx + 0x14], 0x61
// 0057eedf  8b16                 mov edx, dword ptr [esi]
// 0057eee1  895a18               mov dword ptr [edx + 0x18], ebx
// 0057eee4  8b06                 mov eax, dword ptr [esi]
// 0057eee6  89781c               mov dword ptr [eax + 0x1c], edi
// 0057eee9  8b0e                 mov ecx, dword ptr [esi]
// 0057eeeb  8b5104               mov edx, dword ptr [ecx + 4]
// 0057eeee  6a04                 push 4
// 0057eef0  56                   push esi
// 0057eef1  ffd2                 call edx
// 0057eef3  83c408               add esp, 8
// 0057eef6  83ef01               sub edi, 1
// 0057eef9  7434                 je 0x57ef2f
// 0057eefb  83ef01               sub edi, 1
// 0057eefe  7410                 je 0x57ef10
// 0057ef00  83ef01               sub edi, 1
// 0057ef03  0f8569ffffff         jne 0x57ee72
// 0057ef09  5f                   pop edi
// 0057ef0a  5e                   pop esi
// 0057ef0b  5d                   pop ebp
// 0057ef0c  b001                 mov al, 1
// 0057ef0e  5b                   pop ebx
// 0057ef0f  c3                   ret 
// 0057ef10  56                   push esi
// 0057ef11  e84af9ffff           call 0x57e860
// 0057ef16  83c404               add esp, 4
// 0057ef19  84c0                 test al, al
// 0057ef1b  740b                 je 0x57ef28
// 0057ef1d  8b9e7c010000         mov ebx, dword ptr [esi + 0x17c]
// 0057ef23  e94affffff           jmp 0x57ee72
// 0057ef28  5f                   pop edi
// 0057ef29  5e                   pop esi
// 0057ef2a  5d                   pop ebp
// 0057ef2b  32c0                 xor al, al
// 0057ef2d  5b                   pop ebx
// 0057ef2e  c3                   ret 
// 0057ef2f  5f                   pop edi
// 0057ef30  c7867c01000000000000 mov dword ptr [esi + 0x17c], 0
// 0057ef3a  5e                   pop esi
// 0057ef3b  5d                   pop ebp
// 0057ef3c  b001                 mov al, 1
// 0057ef3e  5b                   pop ebx
// 0057ef3f  c3                   ret 
// library jpeg-6b/jdmarker.c (function _jpeg_resync_to_restart)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
