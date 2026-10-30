// roc 2009-12 00604060  unit: seg_00600000  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00604060
//
// 00604060  53                   push ebx
// 00604061  57                   push edi
// 00604062  bfcc000000           mov edi, 0xcc
// 00604067  397e14               cmp dword ptr [esi + 0x14], edi
// 0060406a  7418                 je 0x604084
// 0060406c  8b8680010000         mov eax, dword ptr [esi + 0x180]
// 00604072  8b08                 mov ecx, dword ptr [eax]
// 00604074  56                   push esi
// 00604075  ffd1                 call ecx
// 00604077  83c404               add esp, 4
// 0060407a  c7467800000000       mov dword ptr [esi + 0x78], 0
// 00604081  897e14               mov dword ptr [esi + 0x14], edi
// 00604084  8b9680010000         mov edx, dword ptr [esi + 0x180]
// 0060408a  807a0800             cmp byte ptr [edx + 8], 0
// 0060408e  747d                 je 0x60410d
// 00604090  8d7e78               lea edi, [esi + 0x78]
// 00604093  8b07                 mov eax, dword ptr [edi]
// 00604095  3b4660               cmp eax, dword ptr [esi + 0x60]
// 00604098  7347                 jae 0x6040e1
// 0060409a  8d9b00000000         lea ebx, [ebx]
// 006040a0  8b4e08               mov ecx, dword ptr [esi + 8]
// 006040a3  85c9                 test ecx, ecx
// 006040a5  7417                 je 0x6040be
// 006040a7  894104               mov dword ptr [ecx + 4], eax
// 006040aa  8b4608               mov eax, dword ptr [esi + 8]
// 006040ad  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 006040b0  894808               mov dword ptr [eax + 8], ecx
// 006040b3  8b5608               mov edx, dword ptr [esi + 8]
// 006040b6  8b02                 mov eax, dword ptr [edx]
// 006040b8  56                   push esi
// 006040b9  ffd0                 call eax
// 006040bb  83c404               add esp, 4
// 006040be  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 006040c4  8b5104               mov edx, dword ptr [ecx + 4]
// 006040c7  8b1f                 mov ebx, dword ptr [edi]
// 006040c9  6a00                 push 0
// 006040cb  57                   push edi
// 006040cc  6a00                 push 0
// 006040ce  56                   push esi
// 006040cf  ffd2                 call edx
// 006040d1  8b07                 mov eax, dword ptr [edi]
// 006040d3  83c410               add esp, 0x10
// 006040d6  3bc3                 cmp eax, ebx
// 006040d8  7449                 je 0x604123
// 006040da  8bc8                 mov ecx, eax
// 006040dc  3b4e60               cmp ecx, dword ptr [esi + 0x60]
// 006040df  72bf                 jb 0x6040a0
// 006040e1  8b9680010000         mov edx, dword ptr [esi + 0x180]
// 006040e7  8b4204               mov eax, dword ptr [edx + 4]
// 006040ea  56                   push esi
// 006040eb  ffd0                 call eax
// 006040ed  8b8e80010000         mov ecx, dword ptr [esi + 0x180]
// 006040f3  8b11                 mov edx, dword ptr [ecx]
// 006040f5  56                   push esi
// 006040f6  ffd2                 call edx
// 006040f8  c70700000000         mov dword ptr [edi], 0
// 006040fe  8b8680010000         mov eax, dword ptr [esi + 0x180]
// 00604104  83c408               add esp, 8
// 00604107  80780800             cmp byte ptr [eax + 8], 0
// 0060410b  7586                 jne 0x604093
// 0060410d  33c9                 xor ecx, ecx
// 0060410f  384e41               cmp byte ptr [esi + 0x41], cl
// 00604112  5f                   pop edi
// 00604113  0f95c1               setne cl
// 00604116  b001                 mov al, 1
// 00604118  5b                   pop ebx
// 00604119  81c1cd000000         add ecx, 0xcd
// 0060411f  894e14               mov dword ptr [esi + 0x14], ecx
// 00604122  c3                   ret 
// 00604123  5f                   pop edi
// 00604124  32c0                 xor al, al
// 00604126  5b                   pop ebx
// 00604127  c3                   ret 
// library jpeg-6b/jdapistd.c (function _output_pass_setup)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapistd.c
