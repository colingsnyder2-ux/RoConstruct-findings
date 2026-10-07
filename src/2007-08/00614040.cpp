// roc 2007-08 00614040  unit: seg_00610000  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00614040
//
// 00614040  57                   push edi
// 00614041  8b7e14               mov edi, dword ptr [esi + 0x14]
// 00614044  8b07                 mov eax, dword ptr [edi]
// 00614046  894614               mov dword ptr [esi + 0x14], eax
// 00614049  0fb65708             movzx edx, byte ptr [edi + 8]
// 0061404d  8b460c               mov eax, dword ptr [esi + 0xc]
// 00614050  e8abfcffff           call 0x613d00
// 00614055  807f0900             cmp byte ptr [edi + 9], 0
// 00614059  7414                 je 0x61406f
// 0061405b  0fb64f08             movzx ecx, byte ptr [edi + 8]
// 0061405f  6a00                 push 0
// 00614061  6a00                 push 0
// 00614063  51                   push ecx
// 00614064  6a23                 push 0x23
// 00614066  56                   push esi
// 00614067  e8144d0100           call 0x628d80
// 0061406c  83c414               add esp, 0x14
// 0061406f  0fb65632             movzx edx, byte ptr [esi + 0x32]
// 00614073  895624               mov dword ptr [esi + 0x24], edx
// 00614076  8b4704               mov eax, dword ptr [edi + 4]
// 00614079  50                   push eax
// 0061407a  56                   push esi
// 0061407b  e8604f0100           call 0x628fe0
// 00614080  83c408               add esp, 8
// 00614083  5f                   pop edi
// 00614084  c3                   ret 
// library lua-5.1.4/lparser.c (function _leaveblock)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
