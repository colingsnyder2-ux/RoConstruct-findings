// roc 2010-06 0051eec0  unit: CSHA1  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0051eec0
//
// 0051eec0  53                   push ebx
// 0051eec1  55                   push ebp
// 0051eec2  56                   push esi
// 0051eec3  57                   push edi
// 0051eec4  8b7904               mov edi, dword ptr [ecx + 4]
// 0051eec7  33c0                 xor eax, eax
// 0051eec9  85ff                 test edi, edi
// 0051eecb  7644                 jbe 0x51ef11
// 0051eecd  8b31                 mov esi, dword ptr [ecx]
// 0051eecf  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0051eed3  833e00               cmp dword ptr [esi], 0
// 0051eed6  7431                 je 0x51ef09
// 0051eed8  8b0e                 mov ecx, dword ptr [esi]
// 0051eeda  8b09                 mov ecx, dword ptr [ecx]
// 0051eedc  8bd5                 mov edx, ebp
// 0051eede  8bff                 mov edi, edi
// 0051eee0  8a19                 mov bl, byte ptr [ecx]
// 0051eee2  3a1a                 cmp bl, byte ptr [edx]
// 0051eee4  751a                 jne 0x51ef00
// 0051eee6  84db                 test bl, bl
// 0051eee8  7412                 je 0x51eefc
// 0051eeea  8a5901               mov bl, byte ptr [ecx + 1]
// 0051eeed  3a5a01               cmp bl, byte ptr [edx + 1]
// 0051eef0  750e                 jne 0x51ef00
// 0051eef2  83c102               add ecx, 2
// 0051eef5  83c202               add edx, 2
// 0051eef8  84db                 test bl, bl
// 0051eefa  75e4                 jne 0x51eee0
// 0051eefc  33c9                 xor ecx, ecx
// 0051eefe  eb05                 jmp 0x51ef05
// 0051ef00  1bc9                 sbb ecx, ecx
// 0051ef02  83d9ff               sbb ecx, -1
// 0051ef05  85c9                 test ecx, ecx
// 0051ef07  740a                 je 0x51ef13
// 0051ef09  40                   inc eax
// 0051ef0a  83c604               add esi, 4
// 0051ef0d  3bc7                 cmp eax, edi
// 0051ef0f  72c2                 jb 0x51eed3
// 0051ef11  0cff                 or al, 0xff
// 0051ef13  5f                   pop edi
// 0051ef14  5e                   pop esi
// 0051ef15  5d                   pop ebp
// 0051ef16  5b                   pop ebx
// 0051ef17  c20400               ret 4
// library rbxgs-raknet/RPCMap.cpp (function ?GetIndexFromFunctionName@RPCMap@@QAEEPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RPCMap.cpp
