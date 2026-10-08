// from server: 100% by auto
// roc 2010-06 007330f0  unit: lua_exception  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007330f0
//
// 007330f0  8b442408             mov eax, dword ptr [esp + 8]
// 007330f4  8b4060               mov eax, dword ptr [eax + 0x60]
// 007330f7  53                   push ebx
// 007330f8  8b5c2408             mov ebx, dword ptr [esp + 8]
// 007330fc  8b5328               mov edx, dword ptr [ebx + 0x28]
// 007330ff  55                   push ebp
// 00733100  56                   push esi
// 00733101  8d0c40               lea ecx, [eax + eax*2]
// 00733104  57                   push edi
// 00733105  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00733109  8d34ca               lea esi, [edx + ecx*8]
// 0073310c  e86fffffff           call 0x733080
// 00733111  8be8                 mov ebp, eax
// 00733113  85ed                 test ebp, ebp
// 00733115  7415                 je 0x73312c
// 00733117  8b06                 mov eax, dword ptr [esi]
// 00733119  c1e704               shl edi, 4
// 0073311c  8d4c07f0             lea ecx, [edi + eax - 0x10]
// 00733120  51                   push ecx
// 00733121  53                   push ebx
// 00733122  e8f9dcfeff           call 0x720e20
// 00733127  83c408               add esp, 8
// 0073312a  8bc5                 mov eax, ebp
// 0073312c  5f                   pop edi
// 0073312d  5e                   pop esi
// 0073312e  5d                   pop ebp
// 0073312f  5b                   pop ebx
// 00733130  c3                   ret 
// library lua-5.1.4/ldebug.c (function _lua_getlocal)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
