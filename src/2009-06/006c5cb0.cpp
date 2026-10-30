// from server: 100% by auto
// roc 2009-06 006c5cb0  unit: lua_exception  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c5cb0
//
// 006c5cb0  3b7e0c               cmp edi, dword ptr [esi + 0xc]
// 006c5cb3  7c27                 jl 0x6c5cdc
// 006c5cb5  85ff                 test edi, edi
// 006c5cb7  7511                 jne 0x6c5cca
// 006c5cb9  2bc1                 sub eax, ecx
// 006c5cbb  50                   push eax
// 006c5cbc  8b4608               mov eax, dword ptr [esi + 8]
// 006c5cbf  51                   push ecx
// 006c5cc0  50                   push eax
// 006c5cc1  e8ba36ffff           call 0x6b9380
// 006c5cc6  83c40c               add esp, 0xc
// 006c5cc9  c3                   ret 
// 006c5cca  8b4e08               mov ecx, dword ptr [esi + 8]
// 006c5ccd  6888bb8e00           push 0x8ebb88
// 006c5cd2  51                   push ecx
// 006c5cd3  e86845ffff           call 0x6ba240
// 006c5cd8  83c408               add esp, 8
// 006c5cdb  c3                   ret 
// 006c5cdc  53                   push ebx
// 006c5cdd  8b5cfe14             mov ebx, dword ptr [esi + edi*8 + 0x14]
// 006c5ce1  83fbff               cmp ebx, -1
// 006c5ce4  7525                 jne 0x6c5d0b
// 006c5ce6  8b5608               mov edx, dword ptr [esi + 8]
// 006c5ce9  6848bc8e00           push 0x8ebc48
// 006c5cee  52                   push edx
// 006c5cef  e84c45ffff           call 0x6ba240
// 006c5cf4  83c408               add esp, 8
// 006c5cf7  8b54fe10             mov edx, dword ptr [esi + edi*8 + 0x10]
// 006c5cfb  8b4608               mov eax, dword ptr [esi + 8]
// 006c5cfe  53                   push ebx
// 006c5cff  52                   push edx
// 006c5d00  50                   push eax
// 006c5d01  e87a36ffff           call 0x6b9380
// 006c5d06  83c40c               add esp, 0xc
// 006c5d09  5b                   pop ebx
// 006c5d0a  c3                   ret 
// 006c5d0b  83fbfe               cmp ebx, -2
// 006c5d0e  75e7                 jne 0x6c5cf7
// 006c5d10  8b44fe10             mov eax, dword ptr [esi + edi*8 + 0x10]
// 006c5d14  2b06                 sub eax, dword ptr [esi]
// 006c5d16  8b4e08               mov ecx, dword ptr [esi + 8]
// 006c5d19  40                   inc eax
// 006c5d1a  50                   push eax
// 006c5d1b  51                   push ecx
// 006c5d1c  e83f36ffff           call 0x6b9360
// 006c5d21  83c408               add esp, 8
// 006c5d24  5b                   pop ebx
// 006c5d25  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _push_onecapture)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
