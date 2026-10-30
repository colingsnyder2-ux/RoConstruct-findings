// roc 2012-06 00a31390  unit: CXTRegistryManager  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a31390
//
// 00a31390  55                   push ebp
// 00a31391  8be9                 mov ebp, ecx
// 00a31393  56                   push esi
// 00a31394  b9a8a0e500           mov ecx, 0xe5a0a8
// 00a31399  ff156046b200         call dword ptr [0xb24660]
// 00a3139f  84c0                 test al, al
// 00a313a1  7464                 je 0xa31407
// 00a313a3  8bcd                 mov ecx, ebp
// 00a313a5  e8c6fbffff           call 0xa30f70
// 00a313aa  85c0                 test eax, eax
// 00a313ac  7442                 je 0xa313f0
// 00a313ae  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a313b2  8b4500               mov eax, dword ptr [ebp]
// 00a313b5  8b5008               mov edx, dword ptr [eax + 8]
// 00a313b8  681f000200           push 0x2001f
// 00a313bd  51                   push ecx
// 00a313be  8bcd                 mov ecx, ebp
// 00a313c0  ffd2                 call edx
// 00a313c2  8bf0                 mov esi, eax
// 00a313c4  85f6                 test esi, esi
// 00a313c6  7428                 je 0xa313f0
// 00a313c8  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a313cc  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a313d0  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a313d4  50                   push eax
// 00a313d5  51                   push ecx
// 00a313d6  6a03                 push 3
// 00a313d8  6a00                 push 0
// 00a313da  52                   push edx
// 00a313db  56                   push esi
// 00a313dc  ff151020b200         call dword ptr [0xb22010]
// 00a313e2  894510               mov dword ptr [ebp + 0x10], eax
// 00a313e5  56                   push esi
// 00a313e6  85c0                 test eax, eax
// 00a313e8  740d                 je 0xa313f7
// 00a313ea  ff150420b200         call dword ptr [0xb22004]
// 00a313f0  5e                   pop esi
// 00a313f1  33c0                 xor eax, eax
// 00a313f3  5d                   pop ebp
// 00a313f4  c21000               ret 0x10
// 00a313f7  ff150420b200         call dword ptr [0xb22004]
// 00a313fd  5e                   pop esi
// 00a313fe  b801000000           mov eax, 1
// 00a31403  5d                   pop ebp
// 00a31404  c21000               ret 0x10
// 00a31407  57                   push edi
// 00a31408  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00a3140c  8d443f01             lea eax, [edi + edi + 1]
// 00a31410  50                   push eax
// 00a31411  e8da0ff5ff           call 0x9823f0
// 00a31416  8bf0                 mov esi, eax
// 00a31418  83c404               add esp, 4
// 00a3141b  33c0                 xor eax, eax
// 00a3141d  85ff                 test edi, edi
// 00a3141f  7624                 jbe 0xa31445
// 00a31421  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a31425  0fb61408             movzx edx, byte ptr [eax + ecx]
// 00a31429  80e20f               and dl, 0xf
// 00a3142c  80c241               add dl, 0x41
// 00a3142f  881446               mov byte ptr [esi + eax*2], dl
// 00a31432  0fb61408             movzx edx, byte ptr [eax + ecx]
// 00a31436  c0ea04               shr dl, 4
// 00a31439  80c241               add dl, 0x41
// 00a3143c  88544601             mov byte ptr [esi + eax*2 + 1], dl
// 00a31440  40                   inc eax
// 00a31441  3bc7                 cmp eax, edi
// 00a31443  72e0                 jb 0xa31425
// 00a31445  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a31449  c6044600             mov byte ptr [esi + eax*2], 0
// 00a3144d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a31451  56                   push esi
// 00a31452  50                   push eax
// 00a31453  51                   push ecx
// 00a31454  8bcd                 mov ecx, ebp
// 00a31456  e875fcffff           call 0xa310d0
// 00a3145b  56                   push esi
// 00a3145c  8bf8                 mov edi, eax
// 00a3145e  e8570ff5ff           call 0x9823ba
// 00a31463  83c404               add esp, 4
// 00a31466  8bc7                 mov eax, edi
// 00a31468  5f                   pop edi
// 00a31469  5e                   pop esi
// 00a3146a  5d                   pop ebp
// 00a3146b  c21000               ret 0x10
// copied from an identical function in another client (function ?WriteProfileBinary@CXTRegistryManager@@QAEHPBD0PAEI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTRegistryManager.cpp