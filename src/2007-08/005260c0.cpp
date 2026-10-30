// from server: 100% by auto
// roc 2007-08 005260c0  unit: G3D::Line  size: 226 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005260c0
//
// 005260c0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005260c4  53                   push ebx
// 005260c5  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 005260c9  3bc3                 cmp eax, ebx
// 005260cb  57                   push edi
// 005260cc  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005260d0  7d22                 jge 0x5260f4
// 005260d2  53                   push ebx
// 005260d3  50                   push eax
// 005260d4  8b442418             mov eax, dword ptr [esp + 0x18]
// 005260d8  50                   push eax
// 005260d9  57                   push edi
// 005260da  e8b1feffff           call 0x525f90
// 005260df  83c410               add esp, 0x10
// 005260e2  84c0                 test al, al
// 005260e4  7506                 jne 0x5260ec
// 005260e6  5f                   pop edi
// 005260e7  83c8ff               or eax, 0xffffffff
// 005260ea  5b                   pop ebx
// 005260eb  c3                   ret 
// 005260ec  8b5708               mov edx, dword ptr [edi + 8]
// 005260ef  8b470c               mov eax, dword ptr [edi + 0xc]
// 005260f2  eb04                 jmp 0x5260f8
// 005260f4  8b542410             mov edx, dword ptr [esp + 0x10]
// 005260f8  55                   push ebp
// 005260f9  56                   push esi
// 005260fa  2bc3                 sub eax, ebx
// 005260fc  8bc8                 mov ecx, eax
// 005260fe  8bf2                 mov esi, edx
// 00526100  d3fe                 sar esi, cl
// 00526102  8bcb                 mov ecx, ebx
// 00526104  bd01000000           mov ebp, 1
// 00526109  d3e5                 shl ebp, cl
// 0052610b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0052610f  83ed01               sub ebp, 1
// 00526112  23f5                 and esi, ebp
// 00526114  3b3499               cmp esi, dword ptr [ecx + ebx*4]
// 00526117  7e3f                 jle 0x526158
// 00526119  8da42400000000       lea esp, [esp]
// 00526120  03f6                 add esi, esi
// 00526122  83f801               cmp eax, 1
// 00526125  7d17                 jge 0x52613e
// 00526127  6a01                 push 1
// 00526129  50                   push eax
// 0052612a  52                   push edx
// 0052612b  57                   push edi
// 0052612c  e85ffeffff           call 0x525f90
// 00526131  83c410               add esp, 0x10
// 00526134  84c0                 test al, al
// 00526136  744e                 je 0x526186
// 00526138  8b5708               mov edx, dword ptr [edi + 8]
// 0052613b  8b470c               mov eax, dword ptr [edi + 0xc]
// 0052613e  83e801               sub eax, 1
// 00526141  8bc8                 mov ecx, eax
// 00526143  8bea                 mov ebp, edx
// 00526145  d3fd                 sar ebp, cl
// 00526147  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0052614b  83c301               add ebx, 1
// 0052614e  83e501               and ebp, 1
// 00526151  0bf5                 or esi, ebp
// 00526153  3b3499               cmp esi, dword ptr [ecx + ebx*4]
// 00526156  7fc8                 jg 0x526120
// 00526158  83fb10               cmp ebx, 0x10
// 0052615b  895708               mov dword ptr [edi + 8], edx
// 0052615e  89470c               mov dword ptr [edi + 0xc], eax
// 00526161  7e2b                 jle 0x52618e
// 00526163  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 00526166  8b11                 mov edx, dword ptr [ecx]
// 00526168  c7421476000000       mov dword ptr [edx + 0x14], 0x76
// 0052616f  8b7f10               mov edi, dword ptr [edi + 0x10]
// 00526172  8b07                 mov eax, dword ptr [edi]
// 00526174  8b4804               mov ecx, dword ptr [eax + 4]
// 00526177  6aff                 push -1
// 00526179  57                   push edi
// 0052617a  ffd1                 call ecx
// 0052617c  83c408               add esp, 8
// 0052617f  5e                   pop esi
// 00526180  5d                   pop ebp
// 00526181  5f                   pop edi
// 00526182  33c0                 xor eax, eax
// 00526184  5b                   pop ebx
// 00526185  c3                   ret 
// 00526186  5e                   pop esi
// 00526187  5d                   pop ebp
// 00526188  5f                   pop edi
// 00526189  83c8ff               or eax, 0xffffffff
// 0052618c  5b                   pop ebx
// 0052618d  c3                   ret 
// 0052618e  8b549948             mov edx, dword ptr [ecx + ebx*4 + 0x48]
// 00526192  03918c000000         add edx, dword ptr [ecx + 0x8c]
// 00526198  0fb6443211           movzx eax, byte ptr [edx + esi + 0x11]
// 0052619d  5e                   pop esi
// 0052619e  5d                   pop ebp
// 0052619f  5f                   pop edi
// 005261a0  5b                   pop ebx
// 005261a1  c3                   ret 
// library jpeg-6b/jdhuff.c (function _jpeg_huff_decode)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdhuff.c
