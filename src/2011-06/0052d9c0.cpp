// roc 2011-06 0052d9c0  unit: RBX::Network::ProfiledRakPeer  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0052d9c0
//
// 0052d9c0  53                   push ebx
// 0052d9c1  55                   push ebp
// 0052d9c2  56                   push esi
// 0052d9c3  57                   push edi
// 0052d9c4  8b7904               mov edi, dword ptr [ecx + 4]
// 0052d9c7  33c0                 xor eax, eax
// 0052d9c9  85ff                 test edi, edi
// 0052d9cb  7644                 jbe 0x52da11
// 0052d9cd  8b31                 mov esi, dword ptr [ecx]
// 0052d9cf  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0052d9d3  833e00               cmp dword ptr [esi], 0
// 0052d9d6  7431                 je 0x52da09
// 0052d9d8  8b0e                 mov ecx, dword ptr [esi]
// 0052d9da  8b09                 mov ecx, dword ptr [ecx]
// 0052d9dc  8bd5                 mov edx, ebp
// 0052d9de  8bff                 mov edi, edi
// 0052d9e0  8a19                 mov bl, byte ptr [ecx]
// 0052d9e2  3a1a                 cmp bl, byte ptr [edx]
// 0052d9e4  751a                 jne 0x52da00
// 0052d9e6  84db                 test bl, bl
// 0052d9e8  7412                 je 0x52d9fc
// 0052d9ea  8a5901               mov bl, byte ptr [ecx + 1]
// 0052d9ed  3a5a01               cmp bl, byte ptr [edx + 1]
// 0052d9f0  750e                 jne 0x52da00
// 0052d9f2  83c102               add ecx, 2
// 0052d9f5  83c202               add edx, 2
// 0052d9f8  84db                 test bl, bl
// 0052d9fa  75e4                 jne 0x52d9e0
// 0052d9fc  33c9                 xor ecx, ecx
// 0052d9fe  eb05                 jmp 0x52da05
// 0052da00  1bc9                 sbb ecx, ecx
// 0052da02  83d9ff               sbb ecx, -1
// 0052da05  85c9                 test ecx, ecx
// 0052da07  740a                 je 0x52da13
// 0052da09  40                   inc eax
// 0052da0a  83c604               add esi, 4
// 0052da0d  3bc7                 cmp eax, edi
// 0052da0f  72c2                 jb 0x52d9d3
// 0052da11  0cff                 or al, 0xff
// 0052da13  5f                   pop edi
// 0052da14  5e                   pop esi
// 0052da15  5d                   pop ebp
// 0052da16  5b                   pop ebx
// 0052da17  c20400               ret 4
// library rbxgs-raknet/RPCMap.cpp (function ?GetIndexFromFunctionName@RPCMap@@QAEEPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RPCMap.cpp
