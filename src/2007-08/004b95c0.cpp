// from server: 100% by auto
// roc 2007-08 004b95c0  unit: RakPeer  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b95c0
//
// 004b95c0  56                   push esi
// 004b95c1  8bf1                 mov esi, ecx
// 004b95c3  8b4604               mov eax, dword ptr [esi + 4]
// 004b95c6  8b403c               mov eax, dword ptr [eax + 0x3c]
// 004b95c9  3b4604               cmp eax, dword ptr [esi + 4]
// 004b95cc  894608               mov dword ptr [esi + 8], eax
// 004b95cf  741e                 je 0x4b95ef
// 004b95d1  57                   push edi
// 004b95d2  8b4e08               mov ecx, dword ptr [esi + 8]
// 004b95d5  8b793c               mov edi, dword ptr [ecx + 0x3c]
// 004b95d8  8b5608               mov edx, dword ptr [esi + 8]
// 004b95db  52                   push edx
// 004b95dc  e881661700           call 0x62fc62
// 004b95e1  8bc7                 mov eax, edi
// 004b95e3  83c404               add esp, 4
// 004b95e6  897e08               mov dword ptr [esi + 8], edi
// 004b95e9  3b4604               cmp eax, dword ptr [esi + 4]
// 004b95ec  75e4                 jne 0x4b95d2
// 004b95ee  5f                   pop edi
// 004b95ef  8b4e08               mov ecx, dword ptr [esi + 8]
// 004b95f2  51                   push ecx
// 004b95f3  e86a661700           call 0x62fc62
// 004b95f8  83c404               add esp, 4
// 004b95fb  5e                   pop esi
// 004b95fc  c3                   ret 

// from server: 59% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreAutoParamDataSource.cpp