// from server: 100% by auto
// roc 2007-03 004ae770  unit: seg_004a0000  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004ae770
//
// 004ae770  56                   push esi
// 004ae771  8bf1                 mov esi, ecx
// 004ae773  8b4604               mov eax, dword ptr [esi + 4]
// 004ae776  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 004ae779  3b4e08               cmp ecx, dword ptr [esi + 8]
// 004ae77c  740e                 je 0x4ae78c
// 004ae77e  8b5604               mov edx, dword ptr [esi + 4]
// 004ae781  8b423c               mov eax, dword ptr [edx + 0x3c]
// 004ae784  8a4838               mov cl, byte ptr [eax + 0x38]
// 004ae787  80f901               cmp cl, 1
// 004ae78a  7521                 jne 0x4ae7ad
// 004ae78c  8b5604               mov edx, dword ptr [esi + 4]
// 004ae78f  57                   push edi
// 004ae790  8b7a3c               mov edi, dword ptr [edx + 0x3c]
// 004ae793  6a40                 push 0x40
// 004ae795  e86ef91600           call 0x61e108
// 004ae79a  8b4e04               mov ecx, dword ptr [esi + 4]
// 004ae79d  89413c               mov dword ptr [ecx + 0x3c], eax
// 004ae7a0  8b5604               mov edx, dword ptr [esi + 4]
// 004ae7a3  8b423c               mov eax, dword ptr [edx + 0x3c]
// 004ae7a6  83c404               add esp, 4
// 004ae7a9  89783c               mov dword ptr [eax + 0x3c], edi
// 004ae7ac  5f                   pop edi
// 004ae7ad  8b4604               mov eax, dword ptr [esi + 4]
// 004ae7b0  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 004ae7b3  894e04               mov dword ptr [esi + 4], ecx
// 004ae7b6  5e                   pop esi
// 004ae7b7  c3                   ret 

// from server: 51% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreAutoParamDataSource.cpp