// from server: 100% by auto
// roc 2008-06 00537f90  unit: seg_00530000  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00537f90
//
// 00537f90  83ec24               sub esp, 0x24
// 00537f93  53                   push ebx
// 00537f94  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 00537f98  8b4318               mov eax, dword ptr [ebx + 0x18]
// 00537f9b  8b08                 mov ecx, dword ptr [eax]
// 00537f9d  8b5004               mov edx, dword ptr [eax + 4]
// 00537fa0  56                   push esi
// 00537fa1  57                   push edi
// 00537fa2  8bbb5c010000         mov edi, dword ptr [ebx + 0x15c]
// 00537fa8  8b470c               mov eax, dword ptr [edi + 0xc]
// 00537fab  894c240c             mov dword ptr [esp + 0xc], ecx
// 00537faf  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 00537fb2  89542410             mov dword ptr [esp + 0x10], edx
// 00537fb6  8b5714               mov edx, dword ptr [edi + 0x14]
// 00537fb9  89442414             mov dword ptr [esp + 0x14], eax
// 00537fbd  8b4718               mov eax, dword ptr [edi + 0x18]
// 00537fc0  894c2418             mov dword ptr [esp + 0x18], ecx
// 00537fc4  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 00537fc7  8954241c             mov dword ptr [esp + 0x1c], edx
// 00537fcb  8b5720               mov edx, dword ptr [edi + 0x20]
// 00537fce  89442420             mov dword ptr [esp + 0x20], eax
// 00537fd2  6a7f                 push 0x7f
// 00537fd4  b807000000           mov eax, 7
// 00537fd9  8d742410             lea esi, [esp + 0x10]
// 00537fdd  894c2428             mov dword ptr [esp + 0x28], ecx
// 00537fe1  8954242c             mov dword ptr [esp + 0x2c], edx
// 00537fe5  895c2430             mov dword ptr [esp + 0x30], ebx
// 00537fe9  e822fbffff           call 0x537b10
// 00537fee  83c404               add esp, 4
// 00537ff1  84c0                 test al, al
// 00537ff3  7406                 je 0x537ffb
// 00537ff5  33c9                 xor ecx, ecx
// 00537ff7  33c0                 xor eax, eax
// 00537ff9  eb1b                 jmp 0x538016
// 00537ffb  8b03                 mov eax, dword ptr [ebx]
// 00537ffd  c7401418000000       mov dword ptr [eax + 0x14], 0x18
// 00538004  8b0b                 mov ecx, dword ptr [ebx]
// 00538006  8b11                 mov edx, dword ptr [ecx]
// 00538008  53                   push ebx
// 00538009  ffd2                 call edx
// 0053800b  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0053800f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00538013  83c404               add esp, 4
// 00538016  8b5318               mov edx, dword ptr [ebx + 0x18]
// 00538019  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0053801d  8932                 mov dword ptr [edx], esi
// 0053801f  8b5318               mov edx, dword ptr [ebx + 0x18]
// 00538022  8b742410             mov esi, dword ptr [esp + 0x10]
// 00538026  897204               mov dword ptr [edx + 4], esi
// 00538029  8b542424             mov edx, dword ptr [esp + 0x24]
// 0053802d  894f0c               mov dword ptr [edi + 0xc], ecx
// 00538030  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00538034  894710               mov dword ptr [edi + 0x10], eax
// 00538037  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0053803b  894714               mov dword ptr [edi + 0x14], eax
// 0053803e  8b442428             mov eax, dword ptr [esp + 0x28]
// 00538042  894f18               mov dword ptr [edi + 0x18], ecx
// 00538045  89571c               mov dword ptr [edi + 0x1c], edx
// 00538048  894720               mov dword ptr [edi + 0x20], eax
// 0053804b  5f                   pop edi
// 0053804c  5e                   pop esi
// 0053804d  5b                   pop ebx
// 0053804e  83c424               add esp, 0x24
// 00538051  c3                   ret 
// library jpeg-6b/jchuff.c (function _finish_pass_huff)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
