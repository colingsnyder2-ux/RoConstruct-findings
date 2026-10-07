// roc 2008-06 005c8dd0  unit: RBX::LaserTool  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c8dd0
//
// 005c8dd0  8b442404             mov eax, dword ptr [esp + 4]
// 005c8dd4  53                   push ebx
// 005c8dd5  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005c8dd9  56                   push esi
// 005c8dda  57                   push edi
// 005c8ddb  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005c8ddf  53                   push ebx
// 005c8de0  57                   push edi
// 005c8de1  50                   push eax
// 005c8de2  8bf1                 mov esi, ecx
// 005c8de4  e857feffff           call 0x5c8c40
// 005c8de9  8bcb                 mov ecx, ebx
// 005c8deb  2bcf                 sub ecx, edi
// 005c8ded  010e                 add dword ptr [esi], ecx
// 005c8def  8b16                 mov edx, dword ptr [esi]
// 005c8df1  83c40c               add esp, 0xc
// 005c8df4  85ff                 test edi, edi
// 005c8df6  7503                 jne 0x5c8dfb
// 005c8df8  ff4604               inc dword ptr [esi + 4]
// 005c8dfb  85db                 test ebx, ebx
// 005c8dfd  7503                 jne 0x5c8e02
// 005c8dff  ff4e04               dec dword ptr [esi + 4]
// 005c8e02  395608               cmp dword ptr [esi + 8], edx
// 005c8e05  8d4e08               lea ecx, [esi + 8]
// 005c8e08  8bd6                 mov edx, esi
// 005c8e0a  7202                 jb 0x5c8e0e
// 005c8e0c  8bd1                 mov edx, ecx
// 005c8e0e  8b12                 mov edx, dword ptr [edx]
// 005c8e10  8911                 mov dword ptr [ecx], edx
// 005c8e12  8d4e0c               lea ecx, [esi + 0xc]
// 005c8e15  8d5604               lea edx, [esi + 4]
// 005c8e18  8b31                 mov esi, dword ptr [ecx]
// 005c8e1a  3b32                 cmp esi, dword ptr [edx]
// 005c8e1c  5f                   pop edi
// 005c8e1d  5e                   pop esi
// 005c8e1e  5b                   pop ebx
// 005c8e1f  7202                 jb 0x5c8e23
// 005c8e21  8bd1                 mov edx, ecx
// 005c8e23  8b12                 mov edx, dword ptr [edx]
// 005c8e25  8911                 mov dword ptr [ecx], edx
// 005c8e27  c20c00               ret 0xc
// library rbxgs/script\LuaMemory.cpp (function ?alloc@LuaAllocator@@QAEPAXPAXII@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
