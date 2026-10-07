// roc 2011-06 00574fe0  unit: seg_00570000  size: 209 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00574fe0
//
// 00574fe0  53                   push ebx
// 00574fe1  55                   push ebp
// 00574fe2  56                   push esi
// 00574fe3  8b742410             mov esi, dword ptr [esp + 0x10]
// 00574fe7  8b4604               mov eax, dword ptr [esi + 4]
// 00574fea  8b08                 mov ecx, dword ptr [eax]
// 00574fec  6a50                 push 0x50
// 00574fee  6a01                 push 1
// 00574ff0  56                   push esi
// 00574ff1  ffd1                 call ecx
// 00574ff3  8bd8                 mov ebx, eax
// 00574ff5  83c40c               add esp, 0xc
// 00574ff8  807c241400           cmp byte ptr [esp + 0x14], 0
// 00574ffd  899e84010000         mov dword ptr [esi + 0x184], ebx
// 00575003  c703604f5700         mov dword ptr [ebx], 0x574f60
// 00575009  7413                 je 0x57501e
// 0057500b  8b16                 mov edx, dword ptr [esi]
// 0057500d  c7421404000000       mov dword ptr [edx + 0x14], 4
// 00575014  8b06                 mov eax, dword ptr [esi]
// 00575016  8b08                 mov ecx, dword ptr [eax]
// 00575018  56                   push esi
// 00575019  ffd1                 call ecx
// 0057501b  83c404               add esp, 4
// 0057501e  8b96a0010000         mov edx, dword ptr [esi + 0x1a0]
// 00575024  807a0800             cmp byte ptr [edx + 8], 0
// 00575028  742c                 je 0x575056
// 0057502a  83be1801000002       cmp dword ptr [esi + 0x118], 2
// 00575031  7d13                 jge 0x575046
// 00575033  8b06                 mov eax, dword ptr [esi]
// 00575035  c740142f000000       mov dword ptr [eax + 0x14], 0x2f
// 0057503c  8b0e                 mov ecx, dword ptr [esi]
// 0057503e  8b11                 mov edx, dword ptr [ecx]
// 00575040  56                   push esi
// 00575041  ffd2                 call edx
// 00575043  83c404               add esp, 4
// 00575046  e8c5f9ffff           call 0x574a10
// 0057504b  8b8618010000         mov eax, dword ptr [esi + 0x118]
// 00575051  83c002               add eax, 2
// 00575054  eb06                 jmp 0x57505c
// 00575056  8b8618010000         mov eax, dword ptr [esi + 0x118]
// 0057505c  33ed                 xor ebp, ebp
// 0057505e  396e24               cmp dword ptr [esi + 0x24], ebp
// 00575061  89442414             mov dword ptr [esp + 0x14], eax
// 00575065  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 0057506b  7e40                 jle 0x5750ad
// 0057506d  57                   push edi
// 0057506e  8d7824               lea edi, [eax + 0x24]
// 00575071  83c308               add ebx, 8
// 00575074  8b0f                 mov ecx, dword ptr [edi]
// 00575076  8b47e8               mov eax, dword ptr [edi - 0x18]
// 00575079  0fafc1               imul eax, ecx
// 0057507c  99                   cdq 
// 0057507d  f7be18010000         idiv dword ptr [esi + 0x118]
// 00575083  8b5604               mov edx, dword ptr [esi + 4]
// 00575086  0faf442418           imul eax, dword ptr [esp + 0x18]
// 0057508b  50                   push eax
// 0057508c  8b47f8               mov eax, dword ptr [edi - 8]
// 0057508f  0fafc1               imul eax, ecx
// 00575092  8b4a08               mov ecx, dword ptr [edx + 8]
// 00575095  50                   push eax
// 00575096  6a01                 push 1
// 00575098  56                   push esi
// 00575099  ffd1                 call ecx
// 0057509b  8903                 mov dword ptr [ebx], eax
// 0057509d  45                   inc ebp
// 0057509e  83c410               add esp, 0x10
// 005750a1  83c304               add ebx, 4
// 005750a4  83c754               add edi, 0x54
// 005750a7  3b6e24               cmp ebp, dword ptr [esi + 0x24]
// 005750aa  7cc8                 jl 0x575074
// 005750ac  5f                   pop edi
// 005750ad  5e                   pop esi
// 005750ae  5d                   pop ebp
// 005750af  5b                   pop ebx
// 005750b0  c3                   ret 
// library jpeg-6b/jdmainct.c (function _jinit_d_main_controller)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
