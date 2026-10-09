// roc 2007-03 004e8270  unit: seg_004e0000  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e8270
//
// 004e8270  51                   push ecx
// 004e8271  56                   push esi
// 004e8272  8bf1                 mov esi, ecx
// 004e8274  8b4610               mov eax, dword ptr [esi + 0x10]
// 004e8277  c744240400000000     mov dword ptr [esp + 4], 0
// 004e827f  89442404             mov dword ptr [esp + 4], eax
// 004e8283  db442404             fild dword ptr [esp + 4]
// 004e8287  57                   push edi
// 004e8288  8d78ff               lea edi, [eax - 1]
// 004e828b  d84c2414             fmul dword ptr [esp + 0x14]
// 004e828f  e86c6f1300           call 0x61f200
// 004e8294  85c0                 test eax, eax
// 004e8296  7f04                 jg 0x4e829c
// 004e8298  33c0                 xor eax, eax
// 004e829a  eb06                 jmp 0x4e82a2
// 004e829c  3bc7                 cmp eax, edi
// 004e829e  7c02                 jl 0x4e82a2
// 004e82a0  8bc7                 mov eax, edi
// 004e82a2  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004e82a5  8b0481               mov eax, dword ptr [ecx + eax*4]
// 004e82a8  8b742410             mov esi, dword ptr [esp + 0x10]
// 004e82ac  50                   push eax
// 004e82ad  8bce                 mov ecx, esi
// 004e82af  c70600000000         mov dword ptr [esi], 0
// 004e82b5  e8d6cdf8ff           call 0x475090
// 004e82ba  5f                   pop edi
// 004e82bb  8bc6                 mov eax, esi
// 004e82bd  5e                   pop esi
// 004e82be  59                   pop ecx
// 004e82bf  c20800               ret 8
// library openrbx-client/Rendering\RenderLib\Mesh.cpp (function ?detailLevel@Mesh@Render@RBX@@QBE?BV?$ReferenceCountedPointer@VLevel@Mesh@Render@RBX@@@G3D@@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/Mesh.cpp
