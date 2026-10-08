// roc 2007-08 00596990  unit: RBX::LaserTool  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00596990
//
// 00596990  8b442404             mov eax, dword ptr [esp + 4]
// 00596994  53                   push ebx
// 00596995  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00596999  56                   push esi
// 0059699a  57                   push edi
// 0059699b  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0059699f  53                   push ebx
// 005969a0  57                   push edi
// 005969a1  50                   push eax
// 005969a2  8bf1                 mov esi, ecx
// 005969a4  e857feffff           call 0x596800
// 005969a9  8bcb                 mov ecx, ebx
// 005969ab  2bcf                 sub ecx, edi
// 005969ad  010e                 add dword ptr [esi], ecx
// 005969af  8b16                 mov edx, dword ptr [esi]
// 005969b1  83c40c               add esp, 0xc
// 005969b4  85ff                 test edi, edi
// 005969b6  7504                 jne 0x5969bc
// 005969b8  83460401             add dword ptr [esi + 4], 1
// 005969bc  85db                 test ebx, ebx
// 005969be  7504                 jne 0x5969c4
// 005969c0  834604ff             add dword ptr [esi + 4], -1
// 005969c4  395608               cmp dword ptr [esi + 8], edx
// 005969c7  8d4e08               lea ecx, [esi + 8]
// 005969ca  8bd6                 mov edx, esi
// 005969cc  7202                 jb 0x5969d0
// 005969ce  8bd1                 mov edx, ecx
// 005969d0  8b12                 mov edx, dword ptr [edx]
// 005969d2  8911                 mov dword ptr [ecx], edx
// 005969d4  8d4e0c               lea ecx, [esi + 0xc]
// 005969d7  8d5604               lea edx, [esi + 4]
// 005969da  8b31                 mov esi, dword ptr [ecx]
// 005969dc  3b32                 cmp esi, dword ptr [edx]
// 005969de  5f                   pop edi
// 005969df  5e                   pop esi
// 005969e0  5b                   pop ebx
// 005969e1  7202                 jb 0x5969e5
// 005969e3  8bd1                 mov edx, ecx
// 005969e5  8b12                 mov edx, dword ptr [edx]
// 005969e7  8911                 mov dword ptr [ecx], edx
// 005969e9  c20c00               ret 0xc
// library rbxgs/script\LuaMemory.cpp (function ?alloc@LuaAllocator@@QAEPAXPAXII@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
