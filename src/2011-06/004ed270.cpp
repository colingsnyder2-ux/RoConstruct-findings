// roc 2011-06 004ed270  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004ed270
//
// 004ed270  53                   push ebx
// 004ed271  56                   push esi
// 004ed272  6a20                 push 0x20
// 004ed274  8bf1                 mov esi, ecx
// 004ed276  e855f9ffff           call 0x4ecbd0
// 004ed27b  e820a1ffff           call 0x4e73a0
// 004ed280  8b0e                 mov ecx, dword ptr [esi]
// 004ed282  8b560c               mov edx, dword ptr [esi + 0xc]
// 004ed285  c1e903               shr ecx, 3
// 004ed288  84c0                 test al, al
// 004ed28a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004ed28e  743d                 je 0x4ed2cd
// 004ed290  0fb65803             movzx ebx, byte ptr [eax + 3]
// 004ed294  881c11               mov byte ptr [ecx + edx], bl
// 004ed297  8b0e                 mov ecx, dword ptr [esi]
// 004ed299  0fb65802             movzx ebx, byte ptr [eax + 2]
// 004ed29d  8b560c               mov edx, dword ptr [esi + 0xc]
// 004ed2a0  c1e903               shr ecx, 3
// 004ed2a3  885c1101             mov byte ptr [ecx + edx + 1], bl
// 004ed2a7  8b0e                 mov ecx, dword ptr [esi]
// 004ed2a9  0fb65801             movzx ebx, byte ptr [eax + 1]
// 004ed2ad  8b560c               mov edx, dword ptr [esi + 0xc]
// 004ed2b0  c1e903               shr ecx, 3
// 004ed2b3  885c1102             mov byte ptr [ecx + edx + 2], bl
// 004ed2b7  8b0e                 mov ecx, dword ptr [esi]
// 004ed2b9  8a00                 mov al, byte ptr [eax]
// 004ed2bb  8b560c               mov edx, dword ptr [esi + 0xc]
// 004ed2be  c1e903               shr ecx, 3
// 004ed2c1  88441103             mov byte ptr [ecx + edx + 3], al
// 004ed2c5  830620               add dword ptr [esi], 0x20
// 004ed2c8  5e                   pop esi
// 004ed2c9  5b                   pop ebx
// 004ed2ca  c20400               ret 4
// 004ed2cd  0fb618               movzx ebx, byte ptr [eax]
// 004ed2d0  881c11               mov byte ptr [ecx + edx], bl
// 004ed2d3  8b0e                 mov ecx, dword ptr [esi]
// 004ed2d5  0fb65801             movzx ebx, byte ptr [eax + 1]
// 004ed2d9  8b560c               mov edx, dword ptr [esi + 0xc]
// 004ed2dc  c1e903               shr ecx, 3
// 004ed2df  885c1101             mov byte ptr [ecx + edx + 1], bl
// 004ed2e3  8b0e                 mov ecx, dword ptr [esi]
// 004ed2e5  0fb65802             movzx ebx, byte ptr [eax + 2]
// 004ed2e9  8b560c               mov edx, dword ptr [esi + 0xc]
// 004ed2ec  c1e903               shr ecx, 3
// 004ed2ef  885c1102             mov byte ptr [ecx + edx + 2], bl
// 004ed2f3  8b0e                 mov ecx, dword ptr [esi]
// 004ed2f5  8a4003               mov al, byte ptr [eax + 3]
// 004ed2f8  8b560c               mov edx, dword ptr [esi + 0xc]
// 004ed2fb  c1e903               shr ecx, 3
// 004ed2fe  88441103             mov byte ptr [ecx + edx + 3], al
// 004ed302  830620               add dword ptr [esi], 0x20
// 004ed305  5e                   pop esi
// 004ed306  5b                   pop ebx
// 004ed307  c20400               ret 4
// library rbx2016-raknet/BitStream.cpp (function ?WriteAlignedVar32@BitStream@RakNet@@QAEXPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp
