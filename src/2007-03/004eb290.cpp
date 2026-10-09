// roc 2007-03 004eb290  unit: seg_004e0000  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004eb290
//
// 004eb290  51                   push ecx
// 004eb291  57                   push edi
// 004eb292  8bf9                 mov edi, ecx
// 004eb294  837f1000             cmp dword ptr [edi + 0x10], 0
// 004eb298  7507                 jne 0x4eb2a1
// 004eb29a  33c0                 xor eax, eax
// 004eb29c  5f                   pop edi
// 004eb29d  59                   pop ecx
// 004eb29e  c20400               ret 4
// 004eb2a1  8b4710               mov eax, dword ptr [edi + 0x10]
// 004eb2a4  89442404             mov dword ptr [esp + 4], eax
// 004eb2a8  db442404             fild dword ptr [esp + 4]
// 004eb2ac  56                   push esi
// 004eb2ad  8d70ff               lea esi, [eax - 1]
// 004eb2b0  d84c2410             fmul dword ptr [esp + 0x10]
// 004eb2b4  e8473f1300           call 0x61f200
// 004eb2b9  85c0                 test eax, eax
// 004eb2bb  7f04                 jg 0x4eb2c1
// 004eb2bd  33c0                 xor eax, eax
// 004eb2bf  eb06                 jmp 0x4eb2c7
// 004eb2c1  3bc6                 cmp eax, esi
// 004eb2c3  7c02                 jl 0x4eb2c7
// 004eb2c5  8bc6                 mov eax, esi
// 004eb2c7  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 004eb2ca  8d0480               lea eax, [eax + eax*4]
// 004eb2cd  8a14c1               mov dl, byte ptr [ecx + eax*8]
// 004eb2d0  8d04c1               lea eax, [ecx + eax*8]
// 004eb2d3  f6da                 neg dl
// 004eb2d5  5e                   pop esi
// 004eb2d6  5f                   pop edi
// 004eb2d7  1bd2                 sbb edx, edx
// 004eb2d9  f7d2                 not edx
// 004eb2db  23c2                 and eax, edx
// 004eb2dd  59                   pop ecx
// 004eb2de  c20400               ret 4
// library openrbx-client/Rendering\RenderLib\RenderScene.cpp (function ?detailLevel@Material@Render@RBX@@QBEPBVLevel@123@M@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/RenderScene.cpp
