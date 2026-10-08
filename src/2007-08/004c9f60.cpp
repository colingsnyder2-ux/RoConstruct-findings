// roc 2007-08 004c9f60  unit: seg_004c0000  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c9f60
//
// 004c9f60  53                   push ebx
// 004c9f61  55                   push ebp
// 004c9f62  56                   push esi
// 004c9f63  57                   push edi
// 004c9f64  8b7904               mov edi, dword ptr [ecx + 4]
// 004c9f67  33c0                 xor eax, eax
// 004c9f69  85ff                 test edi, edi
// 004c9f6b  7646                 jbe 0x4c9fb3
// 004c9f6d  8b31                 mov esi, dword ptr [ecx]
// 004c9f6f  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004c9f73  833e00               cmp dword ptr [esi], 0
// 004c9f76  7431                 je 0x4c9fa9
// 004c9f78  8b0e                 mov ecx, dword ptr [esi]
// 004c9f7a  8b09                 mov ecx, dword ptr [ecx]
// 004c9f7c  8bd5                 mov edx, ebp
// 004c9f7e  8bff                 mov edi, edi
// 004c9f80  8a19                 mov bl, byte ptr [ecx]
// 004c9f82  3a1a                 cmp bl, byte ptr [edx]
// 004c9f84  751a                 jne 0x4c9fa0
// 004c9f86  84db                 test bl, bl
// 004c9f88  7412                 je 0x4c9f9c
// 004c9f8a  8a5901               mov bl, byte ptr [ecx + 1]
// 004c9f8d  3a5a01               cmp bl, byte ptr [edx + 1]
// 004c9f90  750e                 jne 0x4c9fa0
// 004c9f92  83c102               add ecx, 2
// 004c9f95  83c202               add edx, 2
// 004c9f98  84db                 test bl, bl
// 004c9f9a  75e4                 jne 0x4c9f80
// 004c9f9c  33c9                 xor ecx, ecx
// 004c9f9e  eb05                 jmp 0x4c9fa5
// 004c9fa0  1bc9                 sbb ecx, ecx
// 004c9fa2  83d9ff               sbb ecx, -1
// 004c9fa5  85c9                 test ecx, ecx
// 004c9fa7  740c                 je 0x4c9fb5
// 004c9fa9  83c001               add eax, 1
// 004c9fac  83c604               add esi, 4
// 004c9faf  3bc7                 cmp eax, edi
// 004c9fb1  72c0                 jb 0x4c9f73
// 004c9fb3  0cff                 or al, 0xff
// 004c9fb5  5f                   pop edi
// 004c9fb6  5e                   pop esi
// 004c9fb7  5d                   pop ebp
// 004c9fb8  5b                   pop ebx
// 004c9fb9  c20400               ret 4
// library rbxgs-raknet/RPCMap.cpp (function ?GetIndexFromFunctionName@RPCMap@@QAEEPBD@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RPCMap.cpp
