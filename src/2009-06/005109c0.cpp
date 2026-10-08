// roc 2009-06 005109c0  unit: CSHA1  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005109c0
//
// 005109c0  56                   push esi
// 005109c1  8bf1                 mov esi, ecx
// 005109c3  8b4604               mov eax, dword ptr [esi + 4]
// 005109c6  57                   push edi
// 005109c7  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005109cb  85c0                 test eax, eax
// 005109cd  7612                 jbe 0x5109e1
// 005109cf  3bf8                 cmp edi, eax
// 005109d1  730e                 jae 0x5109e1
// 005109d3  8b06                 mov eax, dword ptr [esi]
// 005109d5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005109d9  890cb8               mov dword ptr [eax + edi*4], ecx
// 005109dc  5f                   pop edi
// 005109dd  5e                   pop esi
// 005109de  c20c00               ret 0xc
// 005109e1  3b7e08               cmp edi, dword ptr [esi + 8]
// 005109e4  7246                 jb 0x510a2c
// 005109e6  33c9                 xor ecx, ecx
// 005109e8  8d4701               lea eax, [edi + 1]
// 005109eb  894608               mov dword ptr [esi + 8], eax
// 005109ee  ba04000000           mov edx, 4
// 005109f3  f7e2                 mul edx
// 005109f5  0f90c1               seto cl
// 005109f8  53                   push ebx
// 005109f9  f7d9                 neg ecx
// 005109fb  0bc8                 or ecx, eax
// 005109fd  51                   push ecx
// 005109fe  e817832000           call 0x718d1a
// 00510a03  8bd8                 mov ebx, eax
// 00510a05  33c0                 xor eax, eax
// 00510a07  83c404               add esp, 4
// 00510a0a  394604               cmp dword ptr [esi + 4], eax
// 00510a0d  760f                 jbe 0x510a1e
// 00510a0f  90                   nop 
// 00510a10  8b0e                 mov ecx, dword ptr [esi]
// 00510a12  8b1481               mov edx, dword ptr [ecx + eax*4]
// 00510a15  891483               mov dword ptr [ebx + eax*4], edx
// 00510a18  40                   inc eax
// 00510a19  3b4604               cmp eax, dword ptr [esi + 4]
// 00510a1c  72f2                 jb 0x510a10
// 00510a1e  8b06                 mov eax, dword ptr [esi]
// 00510a20  50                   push eax
// 00510a21  e8b8822000           call 0x718cde
// 00510a26  83c404               add esp, 4
// 00510a29  891e                 mov dword ptr [esi], ebx
// 00510a2b  5b                   pop ebx
// 00510a2c  397e04               cmp dword ptr [esi + 4], edi
// 00510a2f  7314                 jae 0x510a45
// 00510a31  8b442410             mov eax, dword ptr [esp + 0x10]
// 00510a35  8b4e04               mov ecx, dword ptr [esi + 4]
// 00510a38  8b16                 mov edx, dword ptr [esi]
// 00510a3a  89048a               mov dword ptr [edx + ecx*4], eax
// 00510a3d  ff4604               inc dword ptr [esi + 4]
// 00510a40  397e04               cmp dword ptr [esi + 4], edi
// 00510a43  72f0                 jb 0x510a35
// 00510a45  8b4604               mov eax, dword ptr [esi + 4]
// 00510a48  8b0e                 mov ecx, dword ptr [esi]
// 00510a4a  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00510a4e  891481               mov dword ptr [ecx + eax*4], edx
// 00510a51  ff4604               inc dword ptr [esi + 4]
// 00510a54  5f                   pop edi
// 00510a55  5e                   pop esi
// 00510a56  c20c00               ret 0xc
// library rbxgs-raknet/RPCMap.cpp (function ?Replace@?$List@PAURPCNode@@@DataStructures@@QAEXQAURPCNode@@0I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RPCMap.cpp
