// roc 2007-03 0051e2d0  unit: seg_00510000  size: 225 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0051e2d0
//
// 0051e2d0  807c240800           cmp byte ptr [esp + 8], 0
// 0051e2d5  8b442404             mov eax, dword ptr [esp + 4]
// 0051e2d9  55                   push ebp
// 0051e2da  56                   push esi
// 0051e2db  8bf1                 mov esi, ecx
// 0051e2dd  740d                 je 0x51e2ec
// 0051e2df  8b6c8668             mov ebp, dword ptr [esi + eax*4 + 0x68]
// 0051e2e3  83c010               add eax, 0x10
// 0051e2e6  8944240c             mov dword ptr [esp + 0xc], eax
// 0051e2ea  eb04                 jmp 0x51e2f0
// 0051e2ec  8b6c8658             mov ebp, dword ptr [esi + eax*4 + 0x58]
// 0051e2f0  85ed                 test ebp, ebp
// 0051e2f2  7518                 jne 0x51e30c
// 0051e2f4  8b0e                 mov ecx, dword ptr [esi]
// 0051e2f6  c7411432000000       mov dword ptr [ecx + 0x14], 0x32
// 0051e2fd  8b16                 mov edx, dword ptr [esi]
// 0051e2ff  894218               mov dword ptr [edx + 0x18], eax
// 0051e302  8b06                 mov eax, dword ptr [esi]
// 0051e304  8b08                 mov ecx, dword ptr [eax]
// 0051e306  56                   push esi
// 0051e307  ffd1                 call ecx
// 0051e309  83c404               add esp, 4
// 0051e30c  80bd1101000000       cmp byte ptr [ebp + 0x111], 0
// 0051e313  0f8595000000         jne 0x51e3ae
// 0051e319  53                   push ebx
// 0051e31a  57                   push edi
// 0051e31b  68c4000000           push 0xc4
// 0051e320  8bc6                 mov eax, esi
// 0051e322  e859feffff           call 0x51e180
// 0051e327  83c404               add esp, 4
// 0051e32a  33ff                 xor edi, edi
// 0051e32c  8d4503               lea eax, [ebp + 3]
// 0051e32f  b904000000           mov ecx, 4
// 0051e334  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 0051e338  0fb650fe             movzx edx, byte ptr [eax - 2]
// 0051e33c  03d3                 add edx, ebx
// 0051e33e  0fb65801             movzx ebx, byte ptr [eax + 1]
// 0051e342  03d3                 add edx, ebx
// 0051e344  0fb618               movzx ebx, byte ptr [eax]
// 0051e347  03df                 add ebx, edi
// 0051e349  83c004               add eax, 4
// 0051e34c  83e901               sub ecx, 1
// 0051e34f  8d3c13               lea edi, [ebx + edx]
// 0051e352  75e0                 jne 0x51e334
// 0051e354  8d4713               lea eax, [edi + 0x13]
// 0051e357  8bce                 mov ecx, esi
// 0051e359  e842feffff           call 0x51e1a0
// 0051e35e  8b442414             mov eax, dword ptr [esp + 0x14]
// 0051e362  50                   push eax
// 0051e363  e8d8fdffff           call 0x51e140
// 0051e368  83c404               add esp, 4
// 0051e36b  bb01000000           mov ebx, 1
// 0051e370  0fb60c2b             movzx ecx, byte ptr [ebx + ebp]
// 0051e374  51                   push ecx
// 0051e375  e8c6fdffff           call 0x51e140
// 0051e37a  83c301               add ebx, 1
// 0051e37d  83c404               add esp, 4
// 0051e380  83fb10               cmp ebx, 0x10
// 0051e383  7eeb                 jle 0x51e370
// 0051e385  33db                 xor ebx, ebx
// 0051e387  85ff                 test edi, edi
// 0051e389  7e1a                 jle 0x51e3a5
// 0051e38b  eb03                 jmp 0x51e390
// 0051e38d  8d4900               lea ecx, [ecx]
// 0051e390  0fb6542b11           movzx edx, byte ptr [ebx + ebp + 0x11]
// 0051e395  52                   push edx
// 0051e396  e8a5fdffff           call 0x51e140
// 0051e39b  83c301               add ebx, 1
// 0051e39e  83c404               add esp, 4
// 0051e3a1  3bdf                 cmp ebx, edi
// 0051e3a3  7ceb                 jl 0x51e390
// 0051e3a5  5f                   pop edi
// 0051e3a6  c6851101000001       mov byte ptr [ebp + 0x111], 1
// 0051e3ad  5b                   pop ebx
// 0051e3ae  5e                   pop esi
// 0051e3af  5d                   pop ebp
// 0051e3b0  c3                   ret 
// library jpeg-6b/jcmarker.c (function _emit_dht)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
