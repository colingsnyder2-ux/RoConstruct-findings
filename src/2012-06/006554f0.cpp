// roc 2012-06 006554f0  unit: seg_00650000  size: 367 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006554f0
//
// 006554f0  53                   push ebx
// 006554f1  55                   push ebp
// 006554f2  56                   push esi
// 006554f3  57                   push edi
// 006554f4  8bf1                 mov esi, ecx
// 006554f6  50                   push eax
// 006554f7  e8c4fbffff           call 0x6550c0
// 006554fc  8b463c               mov eax, dword ptr [esi + 0x3c]
// 006554ff  83c404               add esp, 4
// 00655502  8d5c4008             lea ebx, [eax + eax*2 + 8]
// 00655506  e825fcffff           call 0x655130
// 0065550b  b8ffff0000           mov eax, 0xffff
// 00655510  394620               cmp dword ptr [esi + 0x20], eax
// 00655513  7f05                 jg 0x65551a
// 00655515  39461c               cmp dword ptr [esi + 0x1c], eax
// 00655518  7e18                 jle 0x655532
// 0065551a  8b0e                 mov ecx, dword ptr [esi]
// 0065551c  c7411429000000       mov dword ptr [ecx + 0x14], 0x29
// 00655523  8b16                 mov edx, dword ptr [esi]
// 00655525  894218               mov dword ptr [edx + 0x18], eax
// 00655528  8b06                 mov eax, dword ptr [esi]
// 0065552a  8b08                 mov ecx, dword ptr [eax]
// 0065552c  56                   push esi
// 0065552d  ffd1                 call ecx
// 0065552f  83c404               add esp, 4
// 00655532  8b4618               mov eax, dword ptr [esi + 0x18]
// 00655535  8a4e38               mov cl, byte ptr [esi + 0x38]
// 00655538  8b10                 mov edx, dword ptr [eax]
// 0065553a  880a                 mov byte ptr [edx], cl
// 0065553c  ff00                 inc dword ptr [eax]
// 0065553e  83cdff               or ebp, 0xffffffff
// 00655541  016804               add dword ptr [eax + 4], ebp
// 00655544  7520                 jne 0x655566
// 00655546  8b500c               mov edx, dword ptr [eax + 0xc]
// 00655549  56                   push esi
// 0065554a  ffd2                 call edx
// 0065554c  83c404               add esp, 4
// 0065554f  84c0                 test al, al
// 00655551  7513                 jne 0x655566
// 00655553  8b06                 mov eax, dword ptr [esi]
// 00655555  c7401418000000       mov dword ptr [eax + 0x14], 0x18
// 0065555c  8b0e                 mov ecx, dword ptr [esi]
// 0065555e  8b11                 mov edx, dword ptr [ecx]
// 00655560  56                   push esi
// 00655561  ffd2                 call edx
// 00655563  83c404               add esp, 4
// 00655566  8b5e20               mov ebx, dword ptr [esi + 0x20]
// 00655569  e8c2fbffff           call 0x655130
// 0065556e  8b5e1c               mov ebx, dword ptr [esi + 0x1c]
// 00655571  e8bafbffff           call 0x655130
// 00655576  8b4618               mov eax, dword ptr [esi + 0x18]
// 00655579  8a563c               mov dl, byte ptr [esi + 0x3c]
// 0065557c  8b08                 mov ecx, dword ptr [eax]
// 0065557e  8811                 mov byte ptr [ecx], dl
// 00655580  ff00                 inc dword ptr [eax]
// 00655582  016804               add dword ptr [eax + 4], ebp
// 00655585  7520                 jne 0x6555a7
// 00655587  8b400c               mov eax, dword ptr [eax + 0xc]
// 0065558a  56                   push esi
// 0065558b  ffd0                 call eax
// 0065558d  83c404               add esp, 4
// 00655590  84c0                 test al, al
// 00655592  7513                 jne 0x6555a7
// 00655594  8b0e                 mov ecx, dword ptr [esi]
// 00655596  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 0065559d  8b16                 mov edx, dword ptr [esi]
// 0065559f  8b02                 mov eax, dword ptr [edx]
// 006555a1  56                   push esi
// 006555a2  ffd0                 call eax
// 006555a4  83c404               add esp, 4
// 006555a7  8b7e44               mov edi, dword ptr [esi + 0x44]
// 006555aa  33db                 xor ebx, ebx
// 006555ac  395e3c               cmp dword ptr [esi + 0x3c], ebx
// 006555af  0f8ea5000000         jle 0x65565a
// 006555b5  8b4618               mov eax, dword ptr [esi + 0x18]
// 006555b8  8a17                 mov dl, byte ptr [edi]
// 006555ba  8b08                 mov ecx, dword ptr [eax]
// 006555bc  8811                 mov byte ptr [ecx], dl
// 006555be  ff00                 inc dword ptr [eax]
// 006555c0  016804               add dword ptr [eax + 4], ebp
// 006555c3  7520                 jne 0x6555e5
// 006555c5  8b400c               mov eax, dword ptr [eax + 0xc]
// 006555c8  56                   push esi
// 006555c9  ffd0                 call eax
// 006555cb  83c404               add esp, 4
// 006555ce  84c0                 test al, al
// 006555d0  7513                 jne 0x6555e5
// 006555d2  8b0e                 mov ecx, dword ptr [esi]
// 006555d4  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 006555db  8b16                 mov edx, dword ptr [esi]
// 006555dd  8b02                 mov eax, dword ptr [edx]
// 006555df  56                   push esi
// 006555e0  ffd0                 call eax
// 006555e2  83c404               add esp, 4
// 006555e5  8a4f08               mov cl, byte ptr [edi + 8]
// 006555e8  8b4618               mov eax, dword ptr [esi + 0x18]
// 006555eb  8b10                 mov edx, dword ptr [eax]
// 006555ed  c0e104               shl cl, 4
// 006555f0  024f0c               add cl, byte ptr [edi + 0xc]
// 006555f3  880a                 mov byte ptr [edx], cl
// 006555f5  ff00                 inc dword ptr [eax]
// 006555f7  016804               add dword ptr [eax + 4], ebp
// 006555fa  7520                 jne 0x65561c
// 006555fc  8b400c               mov eax, dword ptr [eax + 0xc]
// 006555ff  56                   push esi
// 00655600  ffd0                 call eax
// 00655602  83c404               add esp, 4
// 00655605  84c0                 test al, al
// 00655607  7513                 jne 0x65561c
// 00655609  8b0e                 mov ecx, dword ptr [esi]
// 0065560b  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 00655612  8b16                 mov edx, dword ptr [esi]
// 00655614  8b02                 mov eax, dword ptr [edx]
// 00655616  56                   push esi
// 00655617  ffd0                 call eax
// 00655619  83c404               add esp, 4
// 0065561c  8b4618               mov eax, dword ptr [esi + 0x18]
// 0065561f  8a5710               mov dl, byte ptr [edi + 0x10]
// 00655622  8b08                 mov ecx, dword ptr [eax]
// 00655624  8811                 mov byte ptr [ecx], dl
// 00655626  ff00                 inc dword ptr [eax]
// 00655628  016804               add dword ptr [eax + 4], ebp
// 0065562b  7520                 jne 0x65564d
// 0065562d  8b400c               mov eax, dword ptr [eax + 0xc]
// 00655630  56                   push esi
// 00655631  ffd0                 call eax
// 00655633  83c404               add esp, 4
// 00655636  84c0                 test al, al
// 00655638  7513                 jne 0x65564d
// 0065563a  8b0e                 mov ecx, dword ptr [esi]
// 0065563c  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 00655643  8b16                 mov edx, dword ptr [esi]
// 00655645  8b02                 mov eax, dword ptr [edx]
// 00655647  56                   push esi
// 00655648  ffd0                 call eax
// 0065564a  83c404               add esp, 4
// 0065564d  43                   inc ebx
// 0065564e  83c754               add edi, 0x54
// 00655651  3b5e3c               cmp ebx, dword ptr [esi + 0x3c]
// 00655654  0f8c5bffffff         jl 0x6555b5
// 0065565a  5f                   pop edi
// 0065565b  5e                   pop esi
// 0065565c  5d                   pop ebp
// 0065565d  5b                   pop ebx
// 0065565e  c3                   ret 
// library jpeg-6b/jcmarker.c (function _emit_sof)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
