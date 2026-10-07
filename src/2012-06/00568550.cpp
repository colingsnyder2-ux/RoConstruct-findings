// roc 2012-06 00568550  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00568550
//
// 00568550  51                   push ecx
// 00568551  56                   push esi
// 00568552  8bf1                 mov esi, ecx
// 00568554  e807f9ffff           call 0x567e60
// 00568559  6a01                 push 1
// 0056855b  6a10                 push 0x10
// 0056855d  84c0                 test al, al
// 0056855f  742c                 je 0x56858d
// 00568561  8d44240c             lea eax, [esp + 0xc]
// 00568565  50                   push eax
// 00568566  8bce                 mov ecx, esi
// 00568568  e813f2ffff           call 0x567780
// 0056856d  84c0                 test al, al
// 0056856f  7415                 je 0x568586
// 00568571  668b442404           mov ax, word ptr [esp + 4]
// 00568576  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0056857a  884101               mov byte ptr [ecx + 1], al
// 0056857d  8821                 mov byte ptr [ecx], ah
// 0056857f  b001                 mov al, 1
// 00568581  5e                   pop esi
// 00568582  59                   pop ecx
// 00568583  c20400               ret 4
// 00568586  32c0                 xor al, al
// 00568588  5e                   pop esi
// 00568589  59                   pop ecx
// 0056858a  c20400               ret 4
// 0056858d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00568591  51                   push ecx
// 00568592  8bce                 mov ecx, esi
// 00568594  e8e7f1ffff           call 0x567780
// 00568599  5e                   pop esi
// 0056859a  59                   pop ecx
// 0056859b  c20400               ret 4
// library rbx2016-raknet/BitStream.cpp (function ??$Read@G@BitStream@RakNet@@QAE_NAAG@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp
