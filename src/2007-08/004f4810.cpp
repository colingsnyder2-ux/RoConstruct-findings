// roc 2007-08 004f4810  unit: boost::bad_lexical_cast  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f4810
//
// 004f4810  51                   push ecx
// 004f4811  56                   push esi
// 004f4812  8bf1                 mov esi, ecx
// 004f4814  8b4610               mov eax, dword ptr [esi + 0x10]
// 004f4817  c744240400000000     mov dword ptr [esp + 4], 0
// 004f481f  89442404             mov dword ptr [esp + 4], eax
// 004f4823  db442404             fild dword ptr [esp + 4]
// 004f4827  57                   push edi
// 004f4828  8d78ff               lea edi, [eax - 1]
// 004f482b  d84c2414             fmul dword ptr [esp + 0x14]
// 004f482f  e82cc51300           call 0x630d60
// 004f4834  85c0                 test eax, eax
// 004f4836  7f04                 jg 0x4f483c
// 004f4838  33c0                 xor eax, eax
// 004f483a  eb06                 jmp 0x4f4842
// 004f483c  3bc7                 cmp eax, edi
// 004f483e  7c02                 jl 0x4f4842
// 004f4840  8bc7                 mov eax, edi
// 004f4842  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004f4845  8b0481               mov eax, dword ptr [ecx + eax*4]
// 004f4848  8b742410             mov esi, dword ptr [esp + 0x10]
// 004f484c  50                   push eax
// 004f484d  8bce                 mov ecx, esi
// 004f484f  c70600000000         mov dword ptr [esi], 0
// 004f4855  e81607f8ff           call 0x474f70
// 004f485a  5f                   pop edi
// 004f485b  8bc6                 mov eax, esi
// 004f485d  5e                   pop esi
// 004f485e  59                   pop ecx
// 004f485f  c20800               ret 8
// library openrbx-client/Rendering\RenderLib\Mesh.cpp (function ?detailLevel@Mesh@Render@RBX@@QBE?BV?$ReferenceCountedPointer@VLevel@Mesh@Render@RBX@@@G3D@@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/Mesh.cpp
