// roc 2012-06 00643d10  unit: seg_00640000  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00643d10
//
// 00643d10  53                   push ebx
// 00643d11  56                   push esi
// 00643d12  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00643d16  8b4604               mov eax, dword ptr [esi + 4]
// 00643d19  8b08                 mov ecx, dword ptr [eax]
// 00643d1b  68a8000000           push 0xa8
// 00643d20  33db                 xor ebx, ebx
// 00643d22  53                   push ebx
// 00643d23  56                   push esi
// 00643d24  ffd1                 call ecx
// 00643d26  898694010000         mov dword ptr [esi + 0x194], eax
// 00643d2c  83c40c               add esp, 0xc
// 00643d2f  c700e03c6400         mov dword ptr [eax], 0x643ce0
// 00643d35  c74004c0376400       mov dword ptr [eax + 4], 0x6437c0
// 00643d3c  c74008403b6400       mov dword ptr [eax + 8], 0x643b40
// 00643d43  c7401850356400       mov dword ptr [eax + 0x18], 0x643550
// 00643d4a  89585c               mov dword ptr [eax + 0x5c], ebx
// 00643d4d  8d4860               lea ecx, [eax + 0x60]
// 00643d50  ba10000000           mov edx, 0x10
// 00643d55  eb09                 jmp 0x643d60
// 00643d57  8da42400000000       lea esp, [esp]
// 00643d5e  8bff                 mov edi, edi
// 00643d60  c741bc50356400       mov dword ptr [ecx - 0x44], 0x643550
// 00643d67  8919                 mov dword ptr [ecx], ebx
// 00643d69  83c104               add ecx, 4
// 00643d6c  83ea01               sub edx, 1
// 00643d6f  75ef                 jne 0x643d60
// 00643d71  b9f0336400           mov ecx, 0x6433f0
// 00643d76  89481c               mov dword ptr [eax + 0x1c], ecx
// 00643d79  894854               mov dword ptr [eax + 0x54], ecx
// 00643d7c  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 00643d82  899ec4000000         mov dword ptr [esi + 0xc4], ebx
// 00643d88  895e7c               mov dword ptr [esi + 0x7c], ebx
// 00643d8b  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 00643d91  5e                   pop esi
// 00643d92  88580c               mov byte ptr [eax + 0xc], bl
// 00643d95  88580d               mov byte ptr [eax + 0xd], bl
// 00643d98  895814               mov dword ptr [eax + 0x14], ebx
// 00643d9b  8998a0000000         mov dword ptr [eax + 0xa0], ebx
// 00643da1  5b                   pop ebx
// 00643da2  c3                   ret 
// library jpeg-6b/jdmarker.c (function _jinit_marker_reader)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
