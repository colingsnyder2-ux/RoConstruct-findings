// roc 2011-06 004ed3d0  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004ed3d0
//
// 004ed3d0  51                   push ecx
// 004ed3d1  56                   push esi
// 004ed3d2  8bf1                 mov esi, ecx
// 004ed3d4  e8c79fffff           call 0x4e73a0
// 004ed3d9  6a01                 push 1
// 004ed3db  8bce                 mov ecx, esi
// 004ed3dd  6a20                 push 0x20
// 004ed3df  84c0                 test al, al
// 004ed3e1  7437                 je 0x4ed41a
// 004ed3e3  8d44240c             lea eax, [esp + 0xc]
// 004ed3e7  50                   push eax
// 004ed3e8  e8f3f6ffff           call 0x4ecae0
// 004ed3ed  84c0                 test al, al
// 004ed3ef  7422                 je 0x4ed413
// 004ed3f1  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004ed3f5  8a4c2407             mov cl, byte ptr [esp + 7]
// 004ed3f9  8a542406             mov dl, byte ptr [esp + 6]
// 004ed3fd  8808                 mov byte ptr [eax], cl
// 004ed3ff  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004ed403  885001               mov byte ptr [eax + 1], dl
// 004ed406  886802               mov byte ptr [eax + 2], ch
// 004ed409  884803               mov byte ptr [eax + 3], cl
// 004ed40c  b001                 mov al, 1
// 004ed40e  5e                   pop esi
// 004ed40f  59                   pop ecx
// 004ed410  c20400               ret 4
// 004ed413  32c0                 xor al, al
// 004ed415  5e                   pop esi
// 004ed416  59                   pop ecx
// 004ed417  c20400               ret 4
// 004ed41a  8b442414             mov eax, dword ptr [esp + 0x14]
// 004ed41e  50                   push eax
// 004ed41f  e8bcf6ffff           call 0x4ecae0
// 004ed424  5e                   pop esi
// 004ed425  59                   pop ecx
// 004ed426  c20400               ret 4
// library rbx2016-raknet/BitStream.cpp (function ??$ReadCompressed@I@BitStream@RakNet@@QAE_NAAI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp
