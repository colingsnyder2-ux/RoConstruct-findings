// roc 2009-06 006c5d30  unit: lua_exception  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c5d30
//
// 006c5d30  53                   push ebx
// 006c5d31  55                   push ebp
// 006c5d32  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 006c5d36  56                   push esi
// 006c5d37  8bf0                 mov esi, eax
// 006c5d39  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 006c5d3c  57                   push edi
// 006c5d3d  85db                 test ebx, ebx
// 006c5d3f  7509                 jne 0x6c5d4a
// 006c5d41  85ed                 test ebp, ebp
// 006c5d43  7405                 je 0x6c5d4a
// 006c5d45  bb01000000           mov ebx, 1
// 006c5d4a  8b4608               mov eax, dword ptr [esi + 8]
// 006c5d4d  6810bc8e00           push 0x8ebc10
// 006c5d52  53                   push ebx
// 006c5d53  50                   push eax
// 006c5d54  e87745ffff           call 0x6ba2d0
// 006c5d59  83c40c               add esp, 0xc
// 006c5d5c  33ff                 xor edi, edi
// 006c5d5e  85db                 test ebx, ebx
// 006c5d60  7e10                 jle 0x6c5d72
// 006c5d62  8b442418             mov eax, dword ptr [esp + 0x18]
// 006c5d66  8bcd                 mov ecx, ebp
// 006c5d68  e843ffffff           call 0x6c5cb0
// 006c5d6d  47                   inc edi
// 006c5d6e  3bfb                 cmp edi, ebx
// 006c5d70  7cf0                 jl 0x6c5d62
// 006c5d72  5f                   pop edi
// 006c5d73  5e                   pop esi
// 006c5d74  5d                   pop ebp
// 006c5d75  8bc3                 mov eax, ebx
// 006c5d77  5b                   pop ebx
// 006c5d78  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _push_captures)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
