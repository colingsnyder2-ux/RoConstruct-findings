// from server: 100% by auto
// roc 2008-06 00622dd0  unit: lua_exception  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00622dd0
//
// 00622dd0  8b442408             mov eax, dword ptr [esp + 8]
// 00622dd4  8b4060               mov eax, dword ptr [eax + 0x60]
// 00622dd7  53                   push ebx
// 00622dd8  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00622ddc  8b5328               mov edx, dword ptr [ebx + 0x28]
// 00622ddf  55                   push ebp
// 00622de0  56                   push esi
// 00622de1  8d0c40               lea ecx, [eax + eax*2]
// 00622de4  57                   push edi
// 00622de5  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00622de9  8d34ca               lea esi, [edx + ecx*8]
// 00622dec  e86fffffff           call 0x622d60
// 00622df1  8be8                 mov ebp, eax
// 00622df3  85ed                 test ebp, ebp
// 00622df5  7415                 je 0x622e0c
// 00622df7  8b06                 mov eax, dword ptr [esi]
// 00622df9  c1e704               shl edi, 4
// 00622dfc  8d4c07f0             lea ecx, [edi + eax - 0x10]
// 00622e00  51                   push ecx
// 00622e01  53                   push ebx
// 00622e02  e809edfeff           call 0x611b10
// 00622e07  83c408               add esp, 8
// 00622e0a  8bc5                 mov eax, ebp
// 00622e0c  5f                   pop edi
// 00622e0d  5e                   pop esi
// 00622e0e  5d                   pop ebp
// 00622e0f  5b                   pop ebx
// 00622e10  c3                   ret 
// library lua-5.1.4/ldebug.c (function _lua_getlocal)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
