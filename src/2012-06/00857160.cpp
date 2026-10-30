// from server: 100% by auto
// roc 2012-06 00857160  unit: lua_exception  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00857160
//
// 00857160  53                   push ebx
// 00857161  55                   push ebp
// 00857162  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00857166  56                   push esi
// 00857167  8bf0                 mov esi, eax
// 00857169  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 0085716c  57                   push edi
// 0085716d  85db                 test ebx, ebx
// 0085716f  7509                 jne 0x85717a
// 00857171  85ed                 test ebp, ebp
// 00857173  7405                 je 0x85717a
// 00857175  bb01000000           mov ebx, 1
// 0085717a  8b4608               mov eax, dword ptr [esi + 8]
// 0085717d  68503ebd00           push 0xbd3e50
// 00857182  53                   push ebx
// 00857183  50                   push eax
// 00857184  e8a7bdfdff           call 0x832f30
// 00857189  83c40c               add esp, 0xc
// 0085718c  33ff                 xor edi, edi
// 0085718e  85db                 test ebx, ebx
// 00857190  7e10                 jle 0x8571a2
// 00857192  8b442418             mov eax, dword ptr [esp + 0x18]
// 00857196  8bcd                 mov ecx, ebp
// 00857198  e843ffffff           call 0x8570e0
// 0085719d  47                   inc edi
// 0085719e  3bfb                 cmp edi, ebx
// 008571a0  7cf0                 jl 0x857192
// 008571a2  5f                   pop edi
// 008571a3  5e                   pop esi
// 008571a4  5d                   pop ebp
// 008571a5  8bc3                 mov eax, ebx
// 008571a7  5b                   pop ebx
// 008571a8  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _push_captures)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
