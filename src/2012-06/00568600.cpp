// roc 2012-06 00568600  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00568600
//
// 00568600  51                   push ecx
// 00568601  56                   push esi
// 00568602  8bf1                 mov esi, ecx
// 00568604  e857f8ffff           call 0x567e60
// 00568609  6a01                 push 1
// 0056860b  8bce                 mov ecx, esi
// 0056860d  6a20                 push 0x20
// 0056860f  84c0                 test al, al
// 00568611  7437                 je 0x56864a
// 00568613  8d44240c             lea eax, [esp + 0xc]
// 00568617  50                   push eax
// 00568618  e863f2ffff           call 0x567880
// 0056861d  84c0                 test al, al
// 0056861f  7422                 je 0x568643
// 00568621  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00568625  8a4c2407             mov cl, byte ptr [esp + 7]
// 00568629  8a542406             mov dl, byte ptr [esp + 6]
// 0056862d  8808                 mov byte ptr [eax], cl
// 0056862f  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00568633  885001               mov byte ptr [eax + 1], dl
// 00568636  886802               mov byte ptr [eax + 2], ch
// 00568639  884803               mov byte ptr [eax + 3], cl
// 0056863c  b001                 mov al, 1
// 0056863e  5e                   pop esi
// 0056863f  59                   pop ecx
// 00568640  c20400               ret 4
// 00568643  32c0                 xor al, al
// 00568645  5e                   pop esi
// 00568646  59                   pop ecx
// 00568647  c20400               ret 4
// 0056864a  8b442414             mov eax, dword ptr [esp + 0x14]
// 0056864e  50                   push eax
// 0056864f  e82cf2ffff           call 0x567880
// 00568654  5e                   pop esi
// 00568655  59                   pop ecx
// 00568656  c20400               ret 4
// library rbx2016-raknet/BitStream.cpp (function ??$ReadCompressed@I@BitStream@RakNet@@QAE_NAAI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp
