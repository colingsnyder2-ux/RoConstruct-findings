// roc 2009-06 005a2270  unit: seg_005a0000  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a2270
//
// 005a2270  83ec24               sub esp, 0x24
// 005a2273  53                   push ebx
// 005a2274  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 005a2278  8b4318               mov eax, dword ptr [ebx + 0x18]
// 005a227b  8b08                 mov ecx, dword ptr [eax]
// 005a227d  8b5004               mov edx, dword ptr [eax + 4]
// 005a2280  56                   push esi
// 005a2281  57                   push edi
// 005a2282  8bbb5c010000         mov edi, dword ptr [ebx + 0x15c]
// 005a2288  8b470c               mov eax, dword ptr [edi + 0xc]
// 005a228b  894c240c             mov dword ptr [esp + 0xc], ecx
// 005a228f  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 005a2292  89542410             mov dword ptr [esp + 0x10], edx
// 005a2296  8b5714               mov edx, dword ptr [edi + 0x14]
// 005a2299  89442414             mov dword ptr [esp + 0x14], eax
// 005a229d  8b4718               mov eax, dword ptr [edi + 0x18]
// 005a22a0  894c2418             mov dword ptr [esp + 0x18], ecx
// 005a22a4  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 005a22a7  8954241c             mov dword ptr [esp + 0x1c], edx
// 005a22ab  8b5720               mov edx, dword ptr [edi + 0x20]
// 005a22ae  89442420             mov dword ptr [esp + 0x20], eax
// 005a22b2  6a7f                 push 0x7f
// 005a22b4  b807000000           mov eax, 7
// 005a22b9  8d742410             lea esi, [esp + 0x10]
// 005a22bd  894c2428             mov dword ptr [esp + 0x28], ecx
// 005a22c1  8954242c             mov dword ptr [esp + 0x2c], edx
// 005a22c5  895c2430             mov dword ptr [esp + 0x30], ebx
// 005a22c9  e822fbffff           call 0x5a1df0
// 005a22ce  83c404               add esp, 4
// 005a22d1  84c0                 test al, al
// 005a22d3  7406                 je 0x5a22db
// 005a22d5  33c9                 xor ecx, ecx
// 005a22d7  33c0                 xor eax, eax
// 005a22d9  eb1b                 jmp 0x5a22f6
// 005a22db  8b03                 mov eax, dword ptr [ebx]
// 005a22dd  c7401418000000       mov dword ptr [eax + 0x14], 0x18
// 005a22e4  8b0b                 mov ecx, dword ptr [ebx]
// 005a22e6  8b11                 mov edx, dword ptr [ecx]
// 005a22e8  53                   push ebx
// 005a22e9  ffd2                 call edx
// 005a22eb  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005a22ef  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005a22f3  83c404               add esp, 4
// 005a22f6  8b5318               mov edx, dword ptr [ebx + 0x18]
// 005a22f9  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005a22fd  8932                 mov dword ptr [edx], esi
// 005a22ff  8b5318               mov edx, dword ptr [ebx + 0x18]
// 005a2302  8b742410             mov esi, dword ptr [esp + 0x10]
// 005a2306  897204               mov dword ptr [edx + 4], esi
// 005a2309  8b542424             mov edx, dword ptr [esp + 0x24]
// 005a230d  894f0c               mov dword ptr [edi + 0xc], ecx
// 005a2310  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005a2314  894710               mov dword ptr [edi + 0x10], eax
// 005a2317  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005a231b  894714               mov dword ptr [edi + 0x14], eax
// 005a231e  8b442428             mov eax, dword ptr [esp + 0x28]
// 005a2322  894f18               mov dword ptr [edi + 0x18], ecx
// 005a2325  89571c               mov dword ptr [edi + 0x1c], edx
// 005a2328  894720               mov dword ptr [edi + 0x20], eax
// 005a232b  5f                   pop edi
// 005a232c  5e                   pop esi
// 005a232d  5b                   pop ebx
// 005a232e  83c424               add esp, 0x24
// 005a2331  c3                   ret 
// library jpeg-6b/jchuff.c (function _finish_pass_huff)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
