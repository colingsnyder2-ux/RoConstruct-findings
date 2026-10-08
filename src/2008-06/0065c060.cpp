// from server: 100% by auto
// roc 2008-06 0065c060  unit: RBX::BallBallContact  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065c060
//
// 0065c060  33c0                 xor eax, eax
// 0065c062  56                   push esi
// 0065c063  8b7710               mov esi, dword ptr [edi + 0x10]
// 0065c066  894624               mov dword ptr [esi + 0x24], eax
// 0065c069  894628               mov dword ptr [esi + 0x28], eax
// 0065c06c  89462c               mov dword ptr [esi + 0x2c], eax
// 0065c06f  8b4670               mov eax, dword ptr [esi + 0x70]
// 0065c072  f6400503             test byte ptr [eax + 5], 3
// 0065c076  740a                 je 0x65c082
// 0065c078  50                   push eax
// 0065c079  56                   push esi
// 0065c07a  e851f5ffff           call 0x65b5d0
// 0065c07f  83c408               add esp, 8
// 0065c082  8b4670               mov eax, dword ptr [esi + 0x70]
// 0065c085  83785004             cmp dword ptr [eax + 0x50], 4
// 0065c089  7c13                 jl 0x65c09e
// 0065c08b  8b4048               mov eax, dword ptr [eax + 0x48]
// 0065c08e  f6400503             test byte ptr [eax + 5], 3
// 0065c092  740a                 je 0x65c09e
// 0065c094  50                   push eax
// 0065c095  56                   push esi
// 0065c096  e835f5ffff           call 0x65b5d0
// 0065c09b  83c408               add esp, 8
// 0065c09e  8b4710               mov eax, dword ptr [edi + 0x10]
// 0065c0a1  83786804             cmp dword ptr [eax + 0x68], 4
// 0065c0a5  7c13                 jl 0x65c0ba
// 0065c0a7  8b4060               mov eax, dword ptr [eax + 0x60]
// 0065c0aa  f6400503             test byte ptr [eax + 5], 3
// 0065c0ae  740a                 je 0x65c0ba
// 0065c0b0  50                   push eax
// 0065c0b1  56                   push esi
// 0065c0b2  e819f5ffff           call 0x65b5d0
// 0065c0b7  83c408               add esp, 8
// 0065c0ba  56                   push esi
// 0065c0bb  e860ffffff           call 0x65c020
// 0065c0c0  83c404               add esp, 4
// 0065c0c3  c6461501             mov byte ptr [esi + 0x15], 1
// 0065c0c7  5e                   pop esi
// 0065c0c8  c3                   ret 
// library lua-5.1.4/lgc.c (function _markroot)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
