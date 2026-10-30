// roc 2009-12 00851af0  unit: CXTPPropExchangeArchive  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00851af0
//
// 00851af0  6aff                 push -1
// 00851af2  68ca459600           push 0x9645ca
// 00851af7  64a100000000         mov eax, dword ptr fs:[0]
// 00851afd  50                   push eax
// 00851afe  51                   push ecx
// 00851aff  56                   push esi
// 00851b00  a10052b600           mov eax, dword ptr [0xb65200]
// 00851b05  33c4                 xor eax, esp
// 00851b07  50                   push eax
// 00851b08  8d44240c             lea eax, [esp + 0xc]
// 00851b0c  64a300000000         mov dword ptr fs:[0], eax
// 00851b12  8bf1                 mov esi, ecx
// 00851b14  6a48                 push 0x48
// 00851b16  e8451dfaff           call 0x7f3860
// 00851b1b  83c404               add esp, 4
// 00851b1e  89442408             mov dword ptr [esp + 8], eax
// 00851b22  33c9                 xor ecx, ecx
// 00851b24  894c2414             mov dword ptr [esp + 0x14], ecx
// 00851b28  3bc1                 cmp eax, ecx
// 00851b2a  740d                 je 0x851b39
// 00851b2c  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 00851b2f  51                   push ecx
// 00851b30  8bc8                 mov ecx, eax
// 00851b32  e869ffffff           call 0x851aa0
// 00851b37  8bc8                 mov ecx, eax
// 00851b39  56                   push esi
// 00851b3a  e841e5ffff           call 0x850080
// 00851b3f  8bc1                 mov eax, ecx
// 00851b41  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00851b45  64890d00000000       mov dword ptr fs:[0], ecx
// 00851b4c  59                   pop ecx
// 00851b4d  5e                   pop esi
// 00851b4e  83c410               add esp, 0x10
// 00851b51  c20400               ret 4
// copied from an identical function in another client (function ?GetSection@CXTPPropExchangeArchive@@UAEPAVCXTPPropExchange@@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPPropExchange.cpp