// roc 2008-06 00478240  unit: CInstanceRecord::CNameItem  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00478240
//
// 00478240  56                   push esi
// 00478241  8bf1                 mov esi, ecx
// 00478243  8b4608               mov eax, dword ptr [esi + 8]
// 00478246  57                   push edi
// 00478247  8b3e                 mov edi, dword ptr [esi]
// 00478249  03c0                 add eax, eax
// 0047824b  6a10                 push 0x10
// 0047824d  50                   push eax
// 0047824e  e82d030900           call 0x508580
// 00478253  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00478257  8906                 mov dword ptr [esi], eax
// 00478259  8b7608               mov esi, dword ptr [esi + 8]
// 0047825c  83c408               add esp, 8
// 0047825f  3bce                 cmp ecx, esi
// 00478261  7d02                 jge 0x478265
// 00478263  8bf1                 mov esi, ecx
// 00478265  8d1470               lea edx, [eax + esi*2]
// 00478268  8bcf                 mov ecx, edi
// 0047826a  3bc2                 cmp eax, edx
// 0047826c  7316                 jae 0x478284
// 0047826e  8bff                 mov edi, edi
// 00478270  85c0                 test eax, eax
// 00478272  7406                 je 0x47827a
// 00478274  668b31               mov si, word ptr [ecx]
// 00478277  668930               mov word ptr [eax], si
// 0047827a  83c002               add eax, 2
// 0047827d  83c102               add ecx, 2
// 00478280  3bc2                 cmp eax, edx
// 00478282  72ec                 jb 0x478270
// 00478284  57                   push edi
// 00478285  e896fa0800           call 0x507d20
// 0047828a  83c404               add esp, 4
// 0047828d  5f                   pop edi
// 0047828e  5e                   pop esi
// 0047828f  c20400               ret 4
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?realloc@?$Array@G@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
