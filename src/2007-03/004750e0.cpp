// roc 2007-03 004750e0  unit: seg_00470000  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004750e0
//
// 004750e0  56                   push esi
// 004750e1  8bf1                 mov esi, ecx
// 004750e3  8b4608               mov eax, dword ptr [esi + 8]
// 004750e6  57                   push edi
// 004750e7  8b3e                 mov edi, dword ptr [esi]
// 004750e9  03c0                 add eax, eax
// 004750eb  6a10                 push 0x10
// 004750ed  50                   push eax
// 004750ee  e8ddea0700           call 0x4f3bd0
// 004750f3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004750f7  8906                 mov dword ptr [esi], eax
// 004750f9  8b7608               mov esi, dword ptr [esi + 8]
// 004750fc  83c408               add esp, 8
// 004750ff  3bce                 cmp ecx, esi
// 00475101  7d02                 jge 0x475105
// 00475103  8bf1                 mov esi, ecx
// 00475105  8d1470               lea edx, [eax + esi*2]
// 00475108  3bc2                 cmp eax, edx
// 0047510a  8bcf                 mov ecx, edi
// 0047510c  7316                 jae 0x475124
// 0047510e  8bff                 mov edi, edi
// 00475110  85c0                 test eax, eax
// 00475112  7406                 je 0x47511a
// 00475114  668b31               mov si, word ptr [ecx]
// 00475117  668930               mov word ptr [eax], si
// 0047511a  83c002               add eax, 2
// 0047511d  83c102               add ecx, 2
// 00475120  3bc2                 cmp eax, edx
// 00475122  72ec                 jb 0x475110
// 00475124  57                   push edi
// 00475125  e856e20700           call 0x4f3380
// 0047512a  83c404               add esp, 4
// 0047512d  5f                   pop edi
// 0047512e  5e                   pop esi
// 0047512f  c20400               ret 4
// library rbxgs-render/Chunk.cpp (function ?realloc@?$Array@G@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Chunk.cpp
