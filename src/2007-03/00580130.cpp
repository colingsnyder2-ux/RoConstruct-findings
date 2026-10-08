// roc 2007-03 00580130  unit: seg_00580000  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00580130
//
// 00580130  8b442404             mov eax, dword ptr [esp + 4]
// 00580134  53                   push ebx
// 00580135  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00580139  56                   push esi
// 0058013a  57                   push edi
// 0058013b  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0058013f  53                   push ebx
// 00580140  57                   push edi
// 00580141  50                   push eax
// 00580142  8bf1                 mov esi, ecx
// 00580144  e857feffff           call 0x57ffa0
// 00580149  8bcb                 mov ecx, ebx
// 0058014b  2bcf                 sub ecx, edi
// 0058014d  010e                 add dword ptr [esi], ecx
// 0058014f  8b16                 mov edx, dword ptr [esi]
// 00580151  83c40c               add esp, 0xc
// 00580154  85ff                 test edi, edi
// 00580156  7504                 jne 0x58015c
// 00580158  83460401             add dword ptr [esi + 4], 1
// 0058015c  85db                 test ebx, ebx
// 0058015e  7504                 jne 0x580164
// 00580160  834604ff             add dword ptr [esi + 4], -1
// 00580164  395608               cmp dword ptr [esi + 8], edx
// 00580167  8d4e08               lea ecx, [esi + 8]
// 0058016a  8bd6                 mov edx, esi
// 0058016c  7202                 jb 0x580170
// 0058016e  8bd1                 mov edx, ecx
// 00580170  8b12                 mov edx, dword ptr [edx]
// 00580172  8911                 mov dword ptr [ecx], edx
// 00580174  8d4e0c               lea ecx, [esi + 0xc]
// 00580177  8d5604               lea edx, [esi + 4]
// 0058017a  8b31                 mov esi, dword ptr [ecx]
// 0058017c  3b32                 cmp esi, dword ptr [edx]
// 0058017e  5f                   pop edi
// 0058017f  5e                   pop esi
// 00580180  5b                   pop ebx
// 00580181  7202                 jb 0x580185
// 00580183  8bd1                 mov edx, ecx
// 00580185  8b12                 mov edx, dword ptr [edx]
// 00580187  8911                 mov dword ptr [ecx], edx
// 00580189  c20c00               ret 0xc
// library rbxgs/script\LuaMemory.cpp (function ?alloc@LuaAllocator@@QAEPAXPAXII@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
