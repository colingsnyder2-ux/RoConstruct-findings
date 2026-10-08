// from server: 100% by auto
// roc 2007-08 00510920  unit: G3D::VMeshDirectedEdgeKey::?$Table  size: 262 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00510920
//
// 00510920  83ec0c               sub esp, 0xc
// 00510923  d9442410             fld dword ptr [esp + 0x10]
// 00510927  83ec08               sub esp, 8
// 0051092a  d8a118000600         fsub dword ptr [ecx + 0x60018]
// 00510930  d95c2408             fstp dword ptr [esp + 8]
// 00510934  d944241c             fld dword ptr [esp + 0x1c]
// 00510938  d8a11c000600         fsub dword ptr [ecx + 0x6001c]
// 0051093e  d95c240c             fstp dword ptr [esp + 0xc]
// 00510942  d9442420             fld dword ptr [esp + 0x20]
// 00510946  d8a120000600         fsub dword ptr [ecx + 0x60020]
// 0051094c  d95c2410             fstp dword ptr [esp + 0x10]
// 00510950  d98124000600         fld dword ptr [ecx + 0x60024]
// 00510956  d84c2408             fmul dword ptr [esp + 8]
// 0051095a  d95c2418             fstp dword ptr [esp + 0x18]
// 0051095e  d98128000600         fld dword ptr [ecx + 0x60028]
// 00510964  d84c240c             fmul dword ptr [esp + 0xc]
// 00510968  d95c241c             fstp dword ptr [esp + 0x1c]
// 0051096c  d9812c000600         fld dword ptr [ecx + 0x6002c]
// 00510972  d84c2410             fmul dword ptr [esp + 0x10]
// 00510976  d95c2420             fstp dword ptr [esp + 0x20]
// 0051097a  d9442418             fld dword ptr [esp + 0x18]
// 0051097e  dc0dc00e7a00         fmul qword ptr [0x7a0ec0]
// 00510984  dd1c24               fstp qword ptr [esp]
// 00510987  e89c071200           call 0x631128
// 0051098c  83c408               add esp, 8
// 0051098f  e8cc031200           call 0x630d60
// 00510994  85c0                 test eax, eax
// 00510996  7f04                 jg 0x51099c
// 00510998  33c0                 xor eax, eax
// 0051099a  eb0a                 jmp 0x5109a6
// 0051099c  83f81f               cmp eax, 0x1f
// 0051099f  7c05                 jl 0x5109a6
// 005109a1  b81f000000           mov eax, 0x1f
// 005109a6  d9442414             fld dword ptr [esp + 0x14]
// 005109aa  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005109ae  dc0dc00e7a00         fmul qword ptr [0x7a0ec0]
// 005109b4  83ec08               sub esp, 8
// 005109b7  8901                 mov dword ptr [ecx], eax
// 005109b9  dd1c24               fstp qword ptr [esp]
// 005109bc  e867071200           call 0x631128
// 005109c1  83c408               add esp, 8
// 005109c4  e897031200           call 0x630d60
// 005109c9  85c0                 test eax, eax
// 005109cb  7f04                 jg 0x5109d1
// 005109cd  33c0                 xor eax, eax
// 005109cf  eb0a                 jmp 0x5109db
// 005109d1  83f81f               cmp eax, 0x1f
// 005109d4  7c05                 jl 0x5109db
// 005109d6  b81f000000           mov eax, 0x1f
// 005109db  d9442418             fld dword ptr [esp + 0x18]
// 005109df  8b542420             mov edx, dword ptr [esp + 0x20]
// 005109e3  dc0dc00e7a00         fmul qword ptr [0x7a0ec0]
// 005109e9  83ec08               sub esp, 8
// 005109ec  8902                 mov dword ptr [edx], eax
// 005109ee  dd1c24               fstp qword ptr [esp]
// 005109f1  e832071200           call 0x631128
// 005109f6  83c408               add esp, 8
// 005109f9  e862031200           call 0x630d60
// 005109fe  85c0                 test eax, eax
// 00510a00  7f0e                 jg 0x510a10
// 00510a02  33c0                 xor eax, eax
// 00510a04  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00510a08  8901                 mov dword ptr [ecx], eax
// 00510a0a  83c40c               add esp, 0xc
// 00510a0d  c21800               ret 0x18
// 00510a10  83f81f               cmp eax, 0x1f
// 00510a13  7cef                 jl 0x510a04
// 00510a15  8b542424             mov edx, dword ptr [esp + 0x24]
// 00510a19  b81f000000           mov eax, 0x1f
// 00510a1e  8902                 mov dword ptr [edx], eax
// 00510a20  83c40c               add esp, 0xc
// 00510a23  c21800               ret 0x18
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ?toGridCoords@Welder@_internal@G3D@@QBEXVVector3@3@AAH11@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
