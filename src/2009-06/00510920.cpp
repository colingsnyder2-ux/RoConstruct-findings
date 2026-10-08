// roc 2009-06 00510920  unit: CSHA1  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00510920
//
// 00510920  53                   push ebx
// 00510921  55                   push ebp
// 00510922  56                   push esi
// 00510923  57                   push edi
// 00510924  8b7904               mov edi, dword ptr [ecx + 4]
// 00510927  33c0                 xor eax, eax
// 00510929  85ff                 test edi, edi
// 0051092b  7644                 jbe 0x510971
// 0051092d  8b31                 mov esi, dword ptr [ecx]
// 0051092f  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00510933  833e00               cmp dword ptr [esi], 0
// 00510936  7431                 je 0x510969
// 00510938  8b0e                 mov ecx, dword ptr [esi]
// 0051093a  8b09                 mov ecx, dword ptr [ecx]
// 0051093c  8bd5                 mov edx, ebp
// 0051093e  8bff                 mov edi, edi
// 00510940  8a19                 mov bl, byte ptr [ecx]
// 00510942  3a1a                 cmp bl, byte ptr [edx]
// 00510944  751a                 jne 0x510960
// 00510946  84db                 test bl, bl
// 00510948  7412                 je 0x51095c
// 0051094a  8a5901               mov bl, byte ptr [ecx + 1]
// 0051094d  3a5a01               cmp bl, byte ptr [edx + 1]
// 00510950  750e                 jne 0x510960
// 00510952  83c102               add ecx, 2
// 00510955  83c202               add edx, 2
// 00510958  84db                 test bl, bl
// 0051095a  75e4                 jne 0x510940
// 0051095c  33c9                 xor ecx, ecx
// 0051095e  eb05                 jmp 0x510965
// 00510960  1bc9                 sbb ecx, ecx
// 00510962  83d9ff               sbb ecx, -1
// 00510965  85c9                 test ecx, ecx
// 00510967  740a                 je 0x510973
// 00510969  40                   inc eax
// 0051096a  83c604               add esi, 4
// 0051096d  3bc7                 cmp eax, edi
// 0051096f  72c2                 jb 0x510933
// 00510971  0cff                 or al, 0xff
// 00510973  5f                   pop edi
// 00510974  5e                   pop esi
// 00510975  5d                   pop ebp
// 00510976  5b                   pop ebx
// 00510977  c20400               ret 4
// library rbxgs-raknet/RPCMap.cpp (function ?GetIndexFromFunctionName@RPCMap@@QAEEPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RPCMap.cpp
