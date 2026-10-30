// roc 2010-06 0085bce0  unit: CXTRegistryManager  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0085bce0
//
// 0085bce0  55                   push ebp
// 0085bce1  8be9                 mov ebp, ecx
// 0085bce3  56                   push esi
// 0085bce4  b94c62c200           mov ecx, 0xc2624c
// 0085bce9  ff15eccd9e00         call dword ptr [0x9ecdec]
// 0085bcef  84c0                 test al, al
// 0085bcf1  7464                 je 0x85bd57
// 0085bcf3  8bcd                 mov ecx, ebp
// 0085bcf5  e8c6fbffff           call 0x85b8c0
// 0085bcfa  85c0                 test eax, eax
// 0085bcfc  7442                 je 0x85bd40
// 0085bcfe  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0085bd02  8b4500               mov eax, dword ptr [ebp]
// 0085bd05  8b5008               mov edx, dword ptr [eax + 8]
// 0085bd08  681f000200           push 0x2001f
// 0085bd0d  51                   push ecx
// 0085bd0e  8bcd                 mov ecx, ebp
// 0085bd10  ffd2                 call edx
// 0085bd12  8bf0                 mov esi, eax
// 0085bd14  85f6                 test esi, esi
// 0085bd16  7428                 je 0x85bd40
// 0085bd18  8b442418             mov eax, dword ptr [esp + 0x18]
// 0085bd1c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0085bd20  8b542410             mov edx, dword ptr [esp + 0x10]
// 0085bd24  50                   push eax
// 0085bd25  51                   push ecx
// 0085bd26  6a03                 push 3
// 0085bd28  6a00                 push 0
// 0085bd2a  52                   push edx
// 0085bd2b  56                   push esi
// 0085bd2c  ff151ca09e00         call dword ptr [0x9ea01c]
// 0085bd32  894510               mov dword ptr [ebp + 0x10], eax
// 0085bd35  56                   push esi
// 0085bd36  85c0                 test eax, eax
// 0085bd38  740d                 je 0x85bd47
// 0085bd3a  ff1510a09e00         call dword ptr [0x9ea010]
// 0085bd40  5e                   pop esi
// 0085bd41  33c0                 xor eax, eax
// 0085bd43  5d                   pop ebp
// 0085bd44  c21000               ret 0x10
// 0085bd47  ff1510a09e00         call dword ptr [0x9ea010]
// 0085bd4d  5e                   pop esi
// 0085bd4e  b801000000           mov eax, 1
// 0085bd53  5d                   pop ebp
// 0085bd54  c21000               ret 0x10
// 0085bd57  57                   push edi
// 0085bd58  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0085bd5c  8d443f01             lea eax, [edi + edi + 1]
// 0085bd60  50                   push eax
// 0085bd61  e81cbff4ff           call 0x7a7c82
// 0085bd66  8bf0                 mov esi, eax
// 0085bd68  83c404               add esp, 4
// 0085bd6b  33c0                 xor eax, eax
// 0085bd6d  85ff                 test edi, edi
// 0085bd6f  7624                 jbe 0x85bd95
// 0085bd71  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0085bd75  0fb61408             movzx edx, byte ptr [eax + ecx]
// 0085bd79  80e20f               and dl, 0xf
// 0085bd7c  80c241               add dl, 0x41
// 0085bd7f  881446               mov byte ptr [esi + eax*2], dl
// 0085bd82  0fb61408             movzx edx, byte ptr [eax + ecx]
// 0085bd86  c0ea04               shr dl, 4
// 0085bd89  80c241               add dl, 0x41
// 0085bd8c  88544601             mov byte ptr [esi + eax*2 + 1], dl
// 0085bd90  40                   inc eax
// 0085bd91  3bc7                 cmp eax, edi
// 0085bd93  72e0                 jb 0x85bd75
// 0085bd95  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0085bd99  c6044600             mov byte ptr [esi + eax*2], 0
// 0085bd9d  8b442414             mov eax, dword ptr [esp + 0x14]
// 0085bda1  56                   push esi
// 0085bda2  50                   push eax
// 0085bda3  51                   push ecx
// 0085bda4  8bcd                 mov ecx, ebp
// 0085bda6  e875fcffff           call 0x85ba20
// 0085bdab  56                   push esi
// 0085bdac  8bf8                 mov edi, eax
// 0085bdae  e893bef4ff           call 0x7a7c46
// 0085bdb3  83c404               add esp, 4
// 0085bdb6  8bc7                 mov eax, edi
// 0085bdb8  5f                   pop edi
// 0085bdb9  5e                   pop esi
// 0085bdba  5d                   pop ebp
// 0085bdbb  c21000               ret 0x10
// copied from an identical function in another client (function ?WriteProfileBinary@CXTRegistryManager@@QAEHPBD0PAEI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTRegistryManager.cpp