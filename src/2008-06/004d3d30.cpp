// roc 2008-06 004d3d30  unit: seg_004d0000  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d3d30
//
// 004d3d30  53                   push ebx
// 004d3d31  55                   push ebp
// 004d3d32  56                   push esi
// 004d3d33  57                   push edi
// 004d3d34  8b7904               mov edi, dword ptr [ecx + 4]
// 004d3d37  33c0                 xor eax, eax
// 004d3d39  85ff                 test edi, edi
// 004d3d3b  7644                 jbe 0x4d3d81
// 004d3d3d  8b31                 mov esi, dword ptr [ecx]
// 004d3d3f  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004d3d43  833e00               cmp dword ptr [esi], 0
// 004d3d46  7431                 je 0x4d3d79
// 004d3d48  8b0e                 mov ecx, dword ptr [esi]
// 004d3d4a  8b09                 mov ecx, dword ptr [ecx]
// 004d3d4c  8bd5                 mov edx, ebp
// 004d3d4e  8bff                 mov edi, edi
// 004d3d50  8a19                 mov bl, byte ptr [ecx]
// 004d3d52  3a1a                 cmp bl, byte ptr [edx]
// 004d3d54  751a                 jne 0x4d3d70
// 004d3d56  84db                 test bl, bl
// 004d3d58  7412                 je 0x4d3d6c
// 004d3d5a  8a5901               mov bl, byte ptr [ecx + 1]
// 004d3d5d  3a5a01               cmp bl, byte ptr [edx + 1]
// 004d3d60  750e                 jne 0x4d3d70
// 004d3d62  83c102               add ecx, 2
// 004d3d65  83c202               add edx, 2
// 004d3d68  84db                 test bl, bl
// 004d3d6a  75e4                 jne 0x4d3d50
// 004d3d6c  33c9                 xor ecx, ecx
// 004d3d6e  eb05                 jmp 0x4d3d75
// 004d3d70  1bc9                 sbb ecx, ecx
// 004d3d72  83d9ff               sbb ecx, -1
// 004d3d75  85c9                 test ecx, ecx
// 004d3d77  740a                 je 0x4d3d83
// 004d3d79  40                   inc eax
// 004d3d7a  83c604               add esi, 4
// 004d3d7d  3bc7                 cmp eax, edi
// 004d3d7f  72c2                 jb 0x4d3d43
// 004d3d81  0cff                 or al, 0xff
// 004d3d83  5f                   pop edi
// 004d3d84  5e                   pop esi
// 004d3d85  5d                   pop ebp
// 004d3d86  5b                   pop ebx
// 004d3d87  c20400               ret 4
// library rbxgs-raknet/RPCMap.cpp (function ?GetIndexFromFunctionName@RPCMap@@QAEEPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RPCMap.cpp
