// roc 2009-06 006e9e90  unit: RBX::PartDropTool  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006e9e90
//
// 006e9e90  8b442404             mov eax, dword ptr [esp + 4]
// 006e9e94  8b4808               mov ecx, dword ptr [eax + 8]
// 006e9e97  83ec08               sub esp, 8
// 006e9e9a  83f903               cmp ecx, 3
// 006e9e9d  7431                 je 0x6e9ed0
// 006e9e9f  83f904               cmp ecx, 4
// 006e9ea2  752a                 jne 0x6e9ece
// 006e9ea4  8b10                 mov edx, dword ptr [eax]
// 006e9ea6  8d0c24               lea ecx, [esp]
// 006e9ea9  51                   push ecx
// 006e9eaa  83c210               add edx, 0x10
// 006e9ead  52                   push edx
// 006e9eae  e8fdedfdff           call 0x6c8cb0
// 006e9eb3  83c408               add esp, 8
// 006e9eb6  85c0                 test eax, eax
// 006e9eb8  7414                 je 0x6e9ece
// 006e9eba  8b442410             mov eax, dword ptr [esp + 0x10]
// 006e9ebe  dd0424               fld qword ptr [esp]
// 006e9ec1  dd18                 fstp qword ptr [eax]
// 006e9ec3  c7400803000000       mov dword ptr [eax + 8], 3
// 006e9eca  83c408               add esp, 8
// 006e9ecd  c3                   ret 
// 006e9ece  33c0                 xor eax, eax
// 006e9ed0  83c408               add esp, 8
// 006e9ed3  c3                   ret 
// library lua-5.1.4/lvm.c (function _luaV_tonumber)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lvm.c
