// roc 2009-06 007ccda0  unit: CXTRegistryManager  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007ccda0
//
// 007ccda0  55                   push ebp
// 007ccda1  8be9                 mov ebp, ecx
// 007ccda3  56                   push esi
// 007ccda4  b9c426a500           mov ecx, 0xa526c4
// 007ccda9  ff155cfb8900         call dword ptr [0x89fb5c]
// 007ccdaf  84c0                 test al, al
// 007ccdb1  7464                 je 0x7cce17
// 007ccdb3  8bcd                 mov ecx, ebp
// 007ccdb5  e8c6fbffff           call 0x7cc980
// 007ccdba  85c0                 test eax, eax
// 007ccdbc  7442                 je 0x7cce00
// 007ccdbe  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007ccdc2  8b4500               mov eax, dword ptr [ebp]
// 007ccdc5  8b5008               mov edx, dword ptr [eax + 8]
// 007ccdc8  681f000200           push 0x2001f
// 007ccdcd  51                   push ecx
// 007ccdce  8bcd                 mov ecx, ebp
// 007ccdd0  ffd2                 call edx
// 007ccdd2  8bf0                 mov esi, eax
// 007ccdd4  85f6                 test esi, esi
// 007ccdd6  7428                 je 0x7cce00
// 007ccdd8  8b442418             mov eax, dword ptr [esp + 0x18]
// 007ccddc  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007ccde0  8b542410             mov edx, dword ptr [esp + 0x10]
// 007ccde4  50                   push eax
// 007ccde5  51                   push ecx
// 007ccde6  6a03                 push 3
// 007ccde8  6a00                 push 0
// 007ccdea  52                   push edx
// 007ccdeb  56                   push esi
// 007ccdec  ff1514e08900         call dword ptr [0x89e014]
// 007ccdf2  894510               mov dword ptr [ebp + 0x10], eax
// 007ccdf5  56                   push esi
// 007ccdf6  85c0                 test eax, eax
// 007ccdf8  740d                 je 0x7cce07
// 007ccdfa  ff1508e08900         call dword ptr [0x89e008]
// 007cce00  5e                   pop esi
// 007cce01  33c0                 xor eax, eax
// 007cce03  5d                   pop ebp
// 007cce04  c21000               ret 0x10
// 007cce07  ff1508e08900         call dword ptr [0x89e008]
// 007cce0d  5e                   pop esi
// 007cce0e  b801000000           mov eax, 1
// 007cce13  5d                   pop ebp
// 007cce14  c21000               ret 0x10
// 007cce17  57                   push edi
// 007cce18  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 007cce1c  8d443f01             lea eax, [edi + edi + 1]
// 007cce20  50                   push eax
// 007cce21  e8f4bef4ff           call 0x718d1a
// 007cce26  8bf0                 mov esi, eax
// 007cce28  83c404               add esp, 4
// 007cce2b  33c0                 xor eax, eax
// 007cce2d  85ff                 test edi, edi
// 007cce2f  7624                 jbe 0x7cce55
// 007cce31  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007cce35  0fb61408             movzx edx, byte ptr [eax + ecx]
// 007cce39  80e20f               and dl, 0xf
// 007cce3c  80c241               add dl, 0x41
// 007cce3f  881446               mov byte ptr [esi + eax*2], dl
// 007cce42  0fb61408             movzx edx, byte ptr [eax + ecx]
// 007cce46  c0ea04               shr dl, 4
// 007cce49  80c241               add dl, 0x41
// 007cce4c  88544601             mov byte ptr [esi + eax*2 + 1], dl
// 007cce50  40                   inc eax
// 007cce51  3bc7                 cmp eax, edi
// 007cce53  72e0                 jb 0x7cce35
// 007cce55  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007cce59  c6044600             mov byte ptr [esi + eax*2], 0
// 007cce5d  8b442414             mov eax, dword ptr [esp + 0x14]
// 007cce61  56                   push esi
// 007cce62  50                   push eax
// 007cce63  51                   push ecx
// 007cce64  8bcd                 mov ecx, ebp
// 007cce66  e875fcffff           call 0x7ccae0
// 007cce6b  56                   push esi
// 007cce6c  8bf8                 mov edi, eax
// 007cce6e  e86bbef4ff           call 0x718cde
// 007cce73  83c404               add esp, 4
// 007cce76  8bc7                 mov eax, edi
// 007cce78  5f                   pop edi
// 007cce79  5e                   pop esi
// 007cce7a  5d                   pop ebp
// 007cce7b  c21000               ret 0x10
// copied from an identical function in another client (function ?WriteProfileBinary@CXTRegistryManager@@QAEHPBD0PAEI@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTRegistryManager.cpp