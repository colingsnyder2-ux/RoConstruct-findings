// from server: 100% by auto
// roc 2011-06 00781380  unit: lua_exception  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00781380
//
// 00781380  53                   push ebx
// 00781381  55                   push ebp
// 00781382  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00781386  56                   push esi
// 00781387  8bf0                 mov esi, eax
// 00781389  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 0078138c  57                   push edi
// 0078138d  85db                 test ebx, ebx
// 0078138f  7509                 jne 0x78139a
// 00781391  85ed                 test ebp, ebp
// 00781393  7405                 je 0x78139a
// 00781395  bb01000000           mov ebx, 1
// 0078139a  8b4608               mov eax, dword ptr [esi + 8]
// 0078139d  68a07dab00           push 0xab7da0
// 007813a2  53                   push ebx
// 007813a3  50                   push eax
// 007813a4  e8f723feff           call 0x7637a0
// 007813a9  83c40c               add esp, 0xc
// 007813ac  33ff                 xor edi, edi
// 007813ae  85db                 test ebx, ebx
// 007813b0  7e10                 jle 0x7813c2
// 007813b2  8b442418             mov eax, dword ptr [esp + 0x18]
// 007813b6  8bcd                 mov ecx, ebp
// 007813b8  e843ffffff           call 0x781300
// 007813bd  47                   inc edi
// 007813be  3bfb                 cmp edi, ebx
// 007813c0  7cf0                 jl 0x7813b2
// 007813c2  5f                   pop edi
// 007813c3  5e                   pop esi
// 007813c4  5d                   pop ebp
// 007813c5  8bc3                 mov eax, ebx
// 007813c7  5b                   pop ebx
// 007813c8  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _push_captures)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
