// from server: 100% by auto
// roc 2007-08 005ca420  unit: seg_005c0000  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ca420
//
// 005ca420  57                   push edi
// 005ca421  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 005ca424  83ff20               cmp edi, 0x20
// 005ca427  7c11                 jl 0x5ca43a
// 005ca429  8b4608               mov eax, dword ptr [esi + 8]
// 005ca42c  68489f7b00           push 0x7b9f48
// 005ca431  50                   push eax
// 005ca432  e8a944ffff           call 0x5be8e0
// 005ca437  83c408               add esp, 8
// 005ca43a  8b542408             mov edx, dword ptr [esp + 8]
// 005ca43e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005ca442  52                   push edx
// 005ca443  895cfe10             mov dword ptr [esi + edi*8 + 0x10], ebx
// 005ca447  894cfe14             mov dword ptr [esi + edi*8 + 0x14], ecx
// 005ca44b  53                   push ebx
// 005ca44c  83c701               add edi, 1
// 005ca44f  56                   push esi
// 005ca450  897e0c               mov dword ptr [esi + 0xc], edi
// 005ca453  e848010000           call 0x5ca5a0
// 005ca458  83c40c               add esp, 0xc
// 005ca45b  85c0                 test eax, eax
// 005ca45d  5f                   pop edi
// 005ca45e  7504                 jne 0x5ca464
// 005ca460  83460cff             add dword ptr [esi + 0xc], -1
// 005ca464  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _start_capture)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
