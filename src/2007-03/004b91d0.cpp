// roc 2007-03 004b91d0  unit: seg_004b0000  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004b91d0
//
// 004b91d0  53                   push ebx
// 004b91d1  55                   push ebp
// 004b91d2  56                   push esi
// 004b91d3  57                   push edi
// 004b91d4  8b7904               mov edi, dword ptr [ecx + 4]
// 004b91d7  33c0                 xor eax, eax
// 004b91d9  85ff                 test edi, edi
// 004b91db  7646                 jbe 0x4b9223
// 004b91dd  8b31                 mov esi, dword ptr [ecx]
// 004b91df  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004b91e3  833e00               cmp dword ptr [esi], 0
// 004b91e6  7431                 je 0x4b9219
// 004b91e8  8b0e                 mov ecx, dword ptr [esi]
// 004b91ea  8b09                 mov ecx, dword ptr [ecx]
// 004b91ec  8bd5                 mov edx, ebp
// 004b91ee  8bff                 mov edi, edi
// 004b91f0  8a19                 mov bl, byte ptr [ecx]
// 004b91f2  3a1a                 cmp bl, byte ptr [edx]
// 004b91f4  751a                 jne 0x4b9210
// 004b91f6  84db                 test bl, bl
// 004b91f8  7412                 je 0x4b920c
// 004b91fa  8a5901               mov bl, byte ptr [ecx + 1]
// 004b91fd  3a5a01               cmp bl, byte ptr [edx + 1]
// 004b9200  750e                 jne 0x4b9210
// 004b9202  83c102               add ecx, 2
// 004b9205  83c202               add edx, 2
// 004b9208  84db                 test bl, bl
// 004b920a  75e4                 jne 0x4b91f0
// 004b920c  33c9                 xor ecx, ecx
// 004b920e  eb05                 jmp 0x4b9215
// 004b9210  1bc9                 sbb ecx, ecx
// 004b9212  83d9ff               sbb ecx, -1
// 004b9215  85c9                 test ecx, ecx
// 004b9217  740c                 je 0x4b9225
// 004b9219  83c001               add eax, 1
// 004b921c  83c604               add esi, 4
// 004b921f  3bc7                 cmp eax, edi
// 004b9221  72c0                 jb 0x4b91e3
// 004b9223  0cff                 or al, 0xff
// 004b9225  5f                   pop edi
// 004b9226  5e                   pop esi
// 004b9227  5d                   pop ebp
// 004b9228  5b                   pop ebx
// 004b9229  c20400               ret 4
// library rbxgs-raknet/RPCMap.cpp (function ?GetIndexFromFunctionName@RPCMap@@QAEEPBD@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RPCMap.cpp
