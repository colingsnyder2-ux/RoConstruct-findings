// roc 2012-06 0059a4b0  unit: RBX::Network::Marker  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0059a4b0
//
// 0059a4b0  8b442404             mov eax, dword ptr [esp + 4]
// 0059a4b4  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0059a4b7  85d2                 test edx, edx
// 0059a4b9  740a                 je 0x59a4c5
// 0059a4bb  83fa01               cmp edx, 1
// 0059a4be  7405                 je 0x59a4c5
// 0059a4c0  83fa05               cmp edx, 5
// 0059a4c3  7533                 jne 0x59a4f8
// 0059a4c5  8b5058               mov edx, dword ptr [eax + 0x58]
// 0059a4c8  56                   push esi
// 0059a4c9  8b705c               mov esi, dword ptr [eax + 0x5c]
// 0059a4cc  89725c               mov dword ptr [edx + 0x5c], esi
// 0059a4cf  8b7058               mov esi, dword ptr [eax + 0x58]
// 0059a4d2  8b505c               mov edx, dword ptr [eax + 0x5c]
// 0059a4d5  897258               mov dword ptr [edx + 0x58], esi
// 0059a4d8  5e                   pop esi
// 0059a4d9  39816c080000         cmp dword ptr [ecx + 0x86c], eax
// 0059a4df  7517                 jne 0x59a4f8
// 0059a4e1  8b505c               mov edx, dword ptr [eax + 0x5c]
// 0059a4e4  89916c080000         mov dword ptr [ecx + 0x86c], edx
// 0059a4ea  3bd0                 cmp edx, eax
// 0059a4ec  750a                 jne 0x59a4f8
// 0059a4ee  c7816c08000000000000 mov dword ptr [ecx + 0x86c], 0
// 0059a4f8  c20400               ret 4
// library rbx2016-raknet/ReliabilityLayer.cpp (function ?RemoveFromUnreliableLinkedList@ReliabilityLayer@RakNet@@AAEXPAUInternalPacket@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
