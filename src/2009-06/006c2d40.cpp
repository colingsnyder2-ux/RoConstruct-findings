// roc 2009-06 006c2d40  unit: lua_exception  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c2d40
//
// 006c2d40  53                   push ebx
// 006c2d41  55                   push ebp
// 006c2d42  56                   push esi
// 006c2d43  8b742410             mov esi, dword ptr [esp + 0x10]
// 006c2d47  8b6e28               mov ebp, dword ptr [esi + 0x28]
// 006c2d4a  57                   push edi
// 006c2d4b  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 006c2d4f  8d4701               lea eax, [edi + 1]
// 006c2d52  3daaaaaa0a           cmp eax, 0xaaaaaaa
// 006c2d57  7723                 ja 0x6c2d7c
// 006c2d59  8b4630               mov eax, dword ptr [esi + 0x30]
// 006c2d5c  8d0c7f               lea ecx, [edi + edi*2]
// 006c2d5f  03c9                 add ecx, ecx
// 006c2d61  8d1440               lea edx, [eax + eax*2]
// 006c2d64  03d2                 add edx, edx
// 006c2d66  03c9                 add ecx, ecx
// 006c2d68  03c9                 add ecx, ecx
// 006c2d6a  51                   push ecx
// 006c2d6b  03d2                 add edx, edx
// 006c2d6d  03d2                 add edx, edx
// 006c2d6f  52                   push edx
// 006c2d70  55                   push ebp
// 006c2d71  56                   push esi
// 006c2d72  e8e9a90200           call 0x6ed760
// 006c2d77  83c410               add esp, 0x10
// 006c2d7a  eb09                 jmp 0x6c2d85
// 006c2d7c  56                   push esi
// 006c2d7d  e8bea90200           call 0x6ed740
// 006c2d82  83c404               add esp, 4
// 006c2d85  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 006c2d88  8bd8                 mov ebx, eax
// 006c2d8a  2bcd                 sub ecx, ebp
// 006c2d8c  b8abaaaa2a           mov eax, 0x2aaaaaab
// 006c2d91  f7e9                 imul ecx
// 006c2d93  c1fa02               sar edx, 2
// 006c2d96  8bc2                 mov eax, edx
// 006c2d98  c1e81f               shr eax, 0x1f
// 006c2d9b  03c2                 add eax, edx
// 006c2d9d  8d0440               lea eax, [eax + eax*2]
// 006c2da0  8d0cc3               lea ecx, [ebx + eax*8]
// 006c2da3  8d147f               lea edx, [edi + edi*2]
// 006c2da6  897e30               mov dword ptr [esi + 0x30], edi
// 006c2da9  8d44d3e8             lea eax, [ebx + edx*8 - 0x18]
// 006c2dad  5f                   pop edi
// 006c2dae  895e28               mov dword ptr [esi + 0x28], ebx
// 006c2db1  894e14               mov dword ptr [esi + 0x14], ecx
// 006c2db4  894624               mov dword ptr [esi + 0x24], eax
// 006c2db7  5e                   pop esi
// 006c2db8  5d                   pop ebp
// 006c2db9  5b                   pop ebx
// 006c2dba  c3                   ret 
// library lua-5.1.4/ldo.c (function _luaD_reallocCI)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
