// from server: 100% by auto
// roc 2007-03 004ae730  unit: seg_004a0000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004ae730
//
// 004ae730  56                   push esi
// 004ae731  8bf1                 mov esi, ecx
// 004ae733  8b4604               mov eax, dword ptr [esi + 4]
// 004ae736  8b403c               mov eax, dword ptr [eax + 0x3c]
// 004ae739  3b4604               cmp eax, dword ptr [esi + 4]
// 004ae73c  894608               mov dword ptr [esi + 8], eax
// 004ae73f  741e                 je 0x4ae75f
// 004ae741  57                   push edi
// 004ae742  8b4e08               mov ecx, dword ptr [esi + 8]
// 004ae745  8b793c               mov edi, dword ptr [ecx + 0x3c]
// 004ae748  8b5608               mov edx, dword ptr [esi + 8]
// 004ae74b  52                   push edx
// 004ae74c  e89ff91600           call 0x61e0f0
// 004ae751  8bc7                 mov eax, edi
// 004ae753  83c404               add esp, 4
// 004ae756  897e08               mov dword ptr [esi + 8], edi
// 004ae759  3b4604               cmp eax, dword ptr [esi + 4]
// 004ae75c  75e4                 jne 0x4ae742
// 004ae75e  5f                   pop edi
// 004ae75f  8b4e08               mov ecx, dword ptr [esi + 8]
// 004ae762  51                   push ecx
// 004ae763  e888f91600           call 0x61e0f0
// 004ae768  83c404               add esp, 4
// 004ae76b  5e                   pop esi
// 004ae76c  c3                   ret 

// from server: 59% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreAutoParamDataSource.cpp