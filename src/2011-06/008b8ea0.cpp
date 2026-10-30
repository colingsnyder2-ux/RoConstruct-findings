// roc 2011-06 008b8ea0  unit: CXTRegistryManager  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b8ea0
//
// 008b8ea0  55                   push ebp
// 008b8ea1  8be9                 mov ebp, ecx
// 008b8ea3  56                   push esi
// 008b8ea4  b9388fd100           mov ecx, 0xd18f38
// 008b8ea9  ff15b026a400         call dword ptr [0xa426b0]
// 008b8eaf  84c0                 test al, al
// 008b8eb1  7464                 je 0x8b8f17
// 008b8eb3  8bcd                 mov ecx, ebp
// 008b8eb5  e8c6fbffff           call 0x8b8a80
// 008b8eba  85c0                 test eax, eax
// 008b8ebc  7442                 je 0x8b8f00
// 008b8ebe  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008b8ec2  8b4500               mov eax, dword ptr [ebp]
// 008b8ec5  8b5008               mov edx, dword ptr [eax + 8]
// 008b8ec8  681f000200           push 0x2001f
// 008b8ecd  51                   push ecx
// 008b8ece  8bcd                 mov ecx, ebp
// 008b8ed0  ffd2                 call edx
// 008b8ed2  8bf0                 mov esi, eax
// 008b8ed4  85f6                 test esi, esi
// 008b8ed6  7428                 je 0x8b8f00
// 008b8ed8  8b442418             mov eax, dword ptr [esp + 0x18]
// 008b8edc  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008b8ee0  8b542410             mov edx, dword ptr [esp + 0x10]
// 008b8ee4  50                   push eax
// 008b8ee5  51                   push ecx
// 008b8ee6  6a03                 push 3
// 008b8ee8  6a00                 push 0
// 008b8eea  52                   push edx
// 008b8eeb  56                   push esi
// 008b8eec  ff154400a400         call dword ptr [0xa40044]
// 008b8ef2  894510               mov dword ptr [ebp + 0x10], eax
// 008b8ef5  56                   push esi
// 008b8ef6  85c0                 test eax, eax
// 008b8ef8  740d                 je 0x8b8f07
// 008b8efa  ff150400a400         call dword ptr [0xa40004]
// 008b8f00  5e                   pop esi
// 008b8f01  33c0                 xor eax, eax
// 008b8f03  5d                   pop ebp
// 008b8f04  c21000               ret 0x10
// 008b8f07  ff150400a400         call dword ptr [0xa40004]
// 008b8f0d  5e                   pop esi
// 008b8f0e  b801000000           mov eax, 1
// 008b8f13  5d                   pop ebp
// 008b8f14  c21000               ret 0x10
// 008b8f17  57                   push edi
// 008b8f18  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 008b8f1c  8d443f01             lea eax, [edi + edi + 1]
// 008b8f20  50                   push eax
// 008b8f21  e81a14f5ff           call 0x80a340
// 008b8f26  8bf0                 mov esi, eax
// 008b8f28  83c404               add esp, 4
// 008b8f2b  33c0                 xor eax, eax
// 008b8f2d  85ff                 test edi, edi
// 008b8f2f  7624                 jbe 0x8b8f55
// 008b8f31  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008b8f35  0fb61408             movzx edx, byte ptr [eax + ecx]
// 008b8f39  80e20f               and dl, 0xf
// 008b8f3c  80c241               add dl, 0x41
// 008b8f3f  881446               mov byte ptr [esi + eax*2], dl
// 008b8f42  0fb61408             movzx edx, byte ptr [eax + ecx]
// 008b8f46  c0ea04               shr dl, 4
// 008b8f49  80c241               add dl, 0x41
// 008b8f4c  88544601             mov byte ptr [esi + eax*2 + 1], dl
// 008b8f50  40                   inc eax
// 008b8f51  3bc7                 cmp eax, edi
// 008b8f53  72e0                 jb 0x8b8f35
// 008b8f55  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008b8f59  c6044600             mov byte ptr [esi + eax*2], 0
// 008b8f5d  8b442414             mov eax, dword ptr [esp + 0x14]
// 008b8f61  56                   push esi
// 008b8f62  50                   push eax
// 008b8f63  51                   push ecx
// 008b8f64  8bcd                 mov ecx, ebp
// 008b8f66  e875fcffff           call 0x8b8be0
// 008b8f6b  56                   push esi
// 008b8f6c  8bf8                 mov edi, eax
// 008b8f6e  e89113f5ff           call 0x80a304
// 008b8f73  83c404               add esp, 4
// 008b8f76  8bc7                 mov eax, edi
// 008b8f78  5f                   pop edi
// 008b8f79  5e                   pop esi
// 008b8f7a  5d                   pop ebp
// 008b8f7b  c21000               ret 0x10
// copied from an identical function in another client (function ?WriteProfileBinary@CXTRegistryManager@@QAEHPBD0PAEI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTRegistryManager.cpp