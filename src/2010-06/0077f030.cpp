// from server: 100% by auto
// roc 2010-06 0077f030  unit: seg_00770000  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077f030
//
// 0077f030  57                   push edi
// 0077f031  8b7e14               mov edi, dword ptr [esi + 0x14]
// 0077f034  8b07                 mov eax, dword ptr [edi]
// 0077f036  894614               mov dword ptr [esi + 0x14], eax
// 0077f039  0fb65708             movzx edx, byte ptr [edi + 8]
// 0077f03d  8b460c               mov eax, dword ptr [esi + 0xc]
// 0077f040  e8bbfcffff           call 0x77ed00
// 0077f045  807f0900             cmp byte ptr [edi + 9], 0
// 0077f049  7414                 je 0x77f05f
// 0077f04b  0fb64f08             movzx ecx, byte ptr [edi + 8]
// 0077f04f  6a00                 push 0
// 0077f051  6a00                 push 0
// 0077f053  51                   push ecx
// 0077f054  6a23                 push 0x23
// 0077f056  56                   push esi
// 0077f057  e8040b0100           call 0x78fb60
// 0077f05c  83c414               add esp, 0x14
// 0077f05f  0fb65632             movzx edx, byte ptr [esi + 0x32]
// 0077f063  895624               mov dword ptr [esi + 0x24], edx
// 0077f066  8b4704               mov eax, dword ptr [edi + 4]
// 0077f069  50                   push eax
// 0077f06a  56                   push esi
// 0077f06b  e8500d0100           call 0x78fdc0
// 0077f070  83c408               add esp, 8
// 0077f073  5f                   pop edi
// 0077f074  c3                   ret 
// library lua-5.1.4/lparser.c (function _leaveblock)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
