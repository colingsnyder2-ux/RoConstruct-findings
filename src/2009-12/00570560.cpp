// roc 2009-12 00570560  unit: CSHA1  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00570560
//
// 00570560  53                   push ebx
// 00570561  55                   push ebp
// 00570562  56                   push esi
// 00570563  57                   push edi
// 00570564  8b7904               mov edi, dword ptr [ecx + 4]
// 00570567  33c0                 xor eax, eax
// 00570569  85ff                 test edi, edi
// 0057056b  7644                 jbe 0x5705b1
// 0057056d  8b31                 mov esi, dword ptr [ecx]
// 0057056f  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00570573  833e00               cmp dword ptr [esi], 0
// 00570576  7431                 je 0x5705a9
// 00570578  8b0e                 mov ecx, dword ptr [esi]
// 0057057a  8b09                 mov ecx, dword ptr [ecx]
// 0057057c  8bd5                 mov edx, ebp
// 0057057e  8bff                 mov edi, edi
// 00570580  8a19                 mov bl, byte ptr [ecx]
// 00570582  3a1a                 cmp bl, byte ptr [edx]
// 00570584  751a                 jne 0x5705a0
// 00570586  84db                 test bl, bl
// 00570588  7412                 je 0x57059c
// 0057058a  8a5901               mov bl, byte ptr [ecx + 1]
// 0057058d  3a5a01               cmp bl, byte ptr [edx + 1]
// 00570590  750e                 jne 0x5705a0
// 00570592  83c102               add ecx, 2
// 00570595  83c202               add edx, 2
// 00570598  84db                 test bl, bl
// 0057059a  75e4                 jne 0x570580
// 0057059c  33c9                 xor ecx, ecx
// 0057059e  eb05                 jmp 0x5705a5
// 005705a0  1bc9                 sbb ecx, ecx
// 005705a2  83d9ff               sbb ecx, -1
// 005705a5  85c9                 test ecx, ecx
// 005705a7  740a                 je 0x5705b3
// 005705a9  40                   inc eax
// 005705aa  83c604               add esi, 4
// 005705ad  3bc7                 cmp eax, edi
// 005705af  72c2                 jb 0x570573
// 005705b1  0cff                 or al, 0xff
// 005705b3  5f                   pop edi
// 005705b4  5e                   pop esi
// 005705b5  5d                   pop ebp
// 005705b6  5b                   pop ebx
// 005705b7  c20400               ret 4
// library rbxgs-raknet/RPCMap.cpp (function ?GetIndexFromFunctionName@RPCMap@@QAEEPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RPCMap.cpp
