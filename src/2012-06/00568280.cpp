// roc 2012-06 00568280  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00568280
//
// 00568280  53                   push ebx
// 00568281  56                   push esi
// 00568282  6a20                 push 0x20
// 00568284  8bf1                 mov esi, ecx
// 00568286  e8e5f6ffff           call 0x567970
// 0056828b  e8d0fbffff           call 0x567e60
// 00568290  8b0e                 mov ecx, dword ptr [esi]
// 00568292  8b560c               mov edx, dword ptr [esi + 0xc]
// 00568295  c1e903               shr ecx, 3
// 00568298  84c0                 test al, al
// 0056829a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0056829e  743d                 je 0x5682dd
// 005682a0  0fb65803             movzx ebx, byte ptr [eax + 3]
// 005682a4  881c11               mov byte ptr [ecx + edx], bl
// 005682a7  8b0e                 mov ecx, dword ptr [esi]
// 005682a9  0fb65802             movzx ebx, byte ptr [eax + 2]
// 005682ad  8b560c               mov edx, dword ptr [esi + 0xc]
// 005682b0  c1e903               shr ecx, 3
// 005682b3  885c1101             mov byte ptr [ecx + edx + 1], bl
// 005682b7  8b0e                 mov ecx, dword ptr [esi]
// 005682b9  0fb65801             movzx ebx, byte ptr [eax + 1]
// 005682bd  8b560c               mov edx, dword ptr [esi + 0xc]
// 005682c0  c1e903               shr ecx, 3
// 005682c3  885c1102             mov byte ptr [ecx + edx + 2], bl
// 005682c7  8b0e                 mov ecx, dword ptr [esi]
// 005682c9  8a00                 mov al, byte ptr [eax]
// 005682cb  8b560c               mov edx, dword ptr [esi + 0xc]
// 005682ce  c1e903               shr ecx, 3
// 005682d1  88441103             mov byte ptr [ecx + edx + 3], al
// 005682d5  830620               add dword ptr [esi], 0x20
// 005682d8  5e                   pop esi
// 005682d9  5b                   pop ebx
// 005682da  c20400               ret 4
// 005682dd  0fb618               movzx ebx, byte ptr [eax]
// 005682e0  881c11               mov byte ptr [ecx + edx], bl
// 005682e3  8b0e                 mov ecx, dword ptr [esi]
// 005682e5  0fb65801             movzx ebx, byte ptr [eax + 1]
// 005682e9  8b560c               mov edx, dword ptr [esi + 0xc]
// 005682ec  c1e903               shr ecx, 3
// 005682ef  885c1101             mov byte ptr [ecx + edx + 1], bl
// 005682f3  8b0e                 mov ecx, dword ptr [esi]
// 005682f5  0fb65802             movzx ebx, byte ptr [eax + 2]
// 005682f9  8b560c               mov edx, dword ptr [esi + 0xc]
// 005682fc  c1e903               shr ecx, 3
// 005682ff  885c1102             mov byte ptr [ecx + edx + 2], bl
// 00568303  8b0e                 mov ecx, dword ptr [esi]
// 00568305  8a4003               mov al, byte ptr [eax + 3]
// 00568308  8b560c               mov edx, dword ptr [esi + 0xc]
// 0056830b  c1e903               shr ecx, 3
// 0056830e  88441103             mov byte ptr [ecx + edx + 3], al
// 00568312  830620               add dword ptr [esi], 0x20
// 00568315  5e                   pop esi
// 00568316  5b                   pop ebx
// 00568317  c20400               ret 4
// library rbx2016-raknet/BitStream.cpp (function ?WriteAlignedVar32@BitStream@RakNet@@QAEXPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp
