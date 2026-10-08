// from server: 100% by auto
// roc 2007-08 005ca970  unit: seg_005c0000  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ca970
//
// 005ca970  3b7e0c               cmp edi, dword ptr [esi + 0xc]
// 005ca973  7c27                 jl 0x5ca99c
// 005ca975  85ff                 test edi, edi
// 005ca977  7511                 jne 0x5ca98a
// 005ca979  2bc1                 sub eax, ecx
// 005ca97b  50                   push eax
// 005ca97c  8b4608               mov eax, dword ptr [esi + 8]
// 005ca97f  51                   push ecx
// 005ca980  50                   push eax
// 005ca981  e82a32ffff           call 0x5bdbb0
// 005ca986  83c40c               add esp, 0xc
// 005ca989  c3                   ret 
// 005ca98a  8b4e08               mov ecx, dword ptr [esi + 8]
// 005ca98d  68c09e7b00           push 0x7b9ec0
// 005ca992  51                   push ecx
// 005ca993  e8483fffff           call 0x5be8e0
// 005ca998  83c408               add esp, 8
// 005ca99b  c3                   ret 
// 005ca99c  53                   push ebx
// 005ca99d  8b5cfe14             mov ebx, dword ptr [esi + edi*8 + 0x14]
// 005ca9a1  83fbff               cmp ebx, -1
// 005ca9a4  7525                 jne 0x5ca9cb
// 005ca9a6  8b5608               mov edx, dword ptr [esi + 8]
// 005ca9a9  68809f7b00           push 0x7b9f80
// 005ca9ae  52                   push edx
// 005ca9af  e82c3fffff           call 0x5be8e0
// 005ca9b4  83c408               add esp, 8
// 005ca9b7  8b54fe10             mov edx, dword ptr [esi + edi*8 + 0x10]
// 005ca9bb  8b4608               mov eax, dword ptr [esi + 8]
// 005ca9be  53                   push ebx
// 005ca9bf  52                   push edx
// 005ca9c0  50                   push eax
// 005ca9c1  e8ea31ffff           call 0x5bdbb0
// 005ca9c6  83c40c               add esp, 0xc
// 005ca9c9  5b                   pop ebx
// 005ca9ca  c3                   ret 
// 005ca9cb  83fbfe               cmp ebx, -2
// 005ca9ce  75e7                 jne 0x5ca9b7
// 005ca9d0  8b44fe10             mov eax, dword ptr [esi + edi*8 + 0x10]
// 005ca9d4  2b06                 sub eax, dword ptr [esi]
// 005ca9d6  8b4e08               mov ecx, dword ptr [esi + 8]
// 005ca9d9  83c001               add eax, 1
// 005ca9dc  50                   push eax
// 005ca9dd  51                   push ecx
// 005ca9de  e8ad31ffff           call 0x5bdb90
// 005ca9e3  83c408               add esp, 8
// 005ca9e6  5b                   pop ebx
// 005ca9e7  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _push_onecapture)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
