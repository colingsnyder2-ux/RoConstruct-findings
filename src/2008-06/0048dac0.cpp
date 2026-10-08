// roc 2008-06 0048dac0  unit: RBX::Reflection::Z::$$A6AXM::?$TSignalDesc::TSignalInstance  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048dac0
//
// 0048dac0  56                   push esi
// 0048dac1  57                   push edi
// 0048dac2  8bf9                 mov edi, ecx
// 0048dac4  833f00               cmp dword ptr [edi], 0
// 0048dac7  740a                 je 0x48dad3
// 0048dac9  807f4400             cmp byte ptr [edi + 0x44], 0
// 0048dacd  7504                 jne 0x48dad3
// 0048dacf  32d2                 xor dl, dl
// 0048dad1  eb02                 jmp 0x48dad5
// 0048dad3  b201                 mov dl, 1
// 0048dad5  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0048dad9  833e00               cmp dword ptr [esi], 0
// 0048dadc  740a                 je 0x48dae8
// 0048dade  807e4400             cmp byte ptr [esi + 0x44], 0
// 0048dae2  7504                 jne 0x48dae8
// 0048dae4  32c9                 xor cl, cl
// 0048dae6  eb02                 jmp 0x48daea
// 0048dae8  b101                 mov cl, 1
// 0048daea  84d2                 test dl, dl
// 0048daec  7549                 jne 0x48db37
// 0048daee  84c9                 test cl, cl
// 0048daf0  7545                 jne 0x48db37
// 0048daf2  8d4620               lea eax, [esi + 0x20]
// 0048daf5  50                   push eax
// 0048daf6  8d4f20               lea ecx, [edi + 0x20]
// 0048daf9  51                   push ecx
// 0048dafa  e8e1f4ffff           call 0x48cfe0
// 0048daff  83c408               add esp, 8
// 0048db02  84c0                 test al, al
// 0048db04  742a                 je 0x48db30
// 0048db06  8d5634               lea edx, [esi + 0x34]
// 0048db09  52                   push edx
// 0048db0a  8d4f34               lea ecx, [edi + 0x34]
// 0048db0d  e8ae1efeff           call 0x46f9c0
// 0048db12  84c0                 test al, al
// 0048db14  741a                 je 0x48db30
// 0048db16  83c63c               add esi, 0x3c
// 0048db19  56                   push esi
// 0048db1a  8d4f3c               lea ecx, [edi + 0x3c]
// 0048db1d  e89e1efeff           call 0x46f9c0
// 0048db22  84c0                 test al, al
// 0048db24  740a                 je 0x48db30
// 0048db26  5f                   pop edi
// 0048db27  b801000000           mov eax, 1
// 0048db2c  5e                   pop esi
// 0048db2d  c20400               ret 4
// 0048db30  5f                   pop edi
// 0048db31  33c0                 xor eax, eax
// 0048db33  5e                   pop esi
// 0048db34  c20400               ret 4
// 0048db37  33c0                 xor eax, eax
// 0048db39  3ad1                 cmp dl, cl
// 0048db3b  5f                   pop edi
// 0048db3c  0f94c0               sete al
// 0048db3f  5e                   pop esi
// 0048db40  c20400               ret 4
// library rbxgs-net/Player.cpp (function ?equal@?$split_iterator@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@algorithm@boost@@ABE_NABV123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
