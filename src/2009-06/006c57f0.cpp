// from server: 100% by auto
// roc 2009-06 006c57f0  unit: lua_exception  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c57f0
//
// 006c57f0  57                   push edi
// 006c57f1  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 006c57f4  83ff20               cmp edi, 0x20
// 006c57f7  7c11                 jl 0x6c580a
// 006c57f9  8b4608               mov eax, dword ptr [esi + 8]
// 006c57fc  6810bc8e00           push 0x8ebc10
// 006c5801  50                   push eax
// 006c5802  e8394affff           call 0x6ba240
// 006c5807  83c408               add esp, 8
// 006c580a  8b542408             mov edx, dword ptr [esp + 8]
// 006c580e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006c5812  52                   push edx
// 006c5813  895cfe10             mov dword ptr [esi + edi*8 + 0x10], ebx
// 006c5817  894cfe14             mov dword ptr [esi + edi*8 + 0x14], ecx
// 006c581b  53                   push ebx
// 006c581c  47                   inc edi
// 006c581d  56                   push esi
// 006c581e  897e0c               mov dword ptr [esi + 0xc], edi
// 006c5821  e80a010000           call 0x6c5930
// 006c5826  83c40c               add esp, 0xc
// 006c5829  5f                   pop edi
// 006c582a  85c0                 test eax, eax
// 006c582c  7503                 jne 0x6c5831
// 006c582e  ff4e0c               dec dword ptr [esi + 0xc]
// 006c5831  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _start_capture)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
