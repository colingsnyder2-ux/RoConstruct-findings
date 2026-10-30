// roc 2009-12 0080c700  unit: KKPAVCXTPImageManagerResource::?$CMap  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080c700
//
// 0080c700  6aff                 push -1
// 0080c702  68639a9500           push 0x959a63
// 0080c707  64a100000000         mov eax, dword ptr fs:[0]
// 0080c70d  50                   push eax
// 0080c70e  51                   push ecx
// 0080c70f  56                   push esi
// 0080c710  a10052b600           mov eax, dword ptr [0xb65200]
// 0080c715  33c4                 xor eax, esp
// 0080c717  50                   push eax
// 0080c718  8d44240c             lea eax, [esp + 0xc]
// 0080c71c  64a300000000         mov dword ptr fs:[0], eax
// 0080c722  8bf1                 mov esi, ecx
// 0080c724  89742408             mov dword ptr [esp + 8], esi
// 0080c728  e8159d1100           call 0x926442
// 0080c72d  6a0a                 push 0xa
// 0080c72f  8d4e20               lea ecx, [esi + 0x20]
// 0080c732  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0080c73a  c70654319f00         mov dword ptr [esi], 0x9f3154
// 0080c740  e8cbefffff           call 0x80b710
// 0080c745  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0080c749  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0080c74d  894e40               mov dword ptr [esi + 0x40], ecx
// 0080c750  8bce                 mov ecx, esi
// 0080c752  c644241401           mov byte ptr [esp + 0x14], 1
// 0080c757  89463c               mov dword ptr [esi + 0x3c], eax
// 0080c75a  e8e99c1100           call 0x926448
// 0080c75f  8bc6                 mov eax, esi
// 0080c761  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0080c765  64890d00000000       mov dword ptr fs:[0], ecx
// 0080c76c  59                   pop ecx
// 0080c76d  5e                   pop esi
// 0080c76e  83c410               add esp, 0x10
// 0080c771  c20800               ret 8
// copied from an identical function in another client (function ??0CXTPImageManagerIconSet@@QAE@IPAVCXTPImageManager@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp