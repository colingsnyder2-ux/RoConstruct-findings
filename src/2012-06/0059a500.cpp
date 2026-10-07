// roc 2012-06 0059a500  unit: RBX::Network::Marker  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0059a500
//
// 0059a500  8b442404             mov eax, dword ptr [esp + 4]
// 0059a504  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0059a507  85d2                 test edx, edx
// 0059a509  740a                 je 0x59a515
// 0059a50b  83fa01               cmp edx, 1
// 0059a50e  7405                 je 0x59a515
// 0059a510  83fa05               cmp edx, 5
// 0059a513  7534                 jne 0x59a549
// 0059a515  8b916c080000         mov edx, dword ptr [ecx + 0x86c]
// 0059a51b  85d2                 test edx, edx
// 0059a51d  750f                 jne 0x59a52e
// 0059a51f  89405c               mov dword ptr [eax + 0x5c], eax
// 0059a522  894058               mov dword ptr [eax + 0x58], eax
// 0059a525  89816c080000         mov dword ptr [ecx + 0x86c], eax
// 0059a52b  c20400               ret 4
// 0059a52e  89505c               mov dword ptr [eax + 0x5c], edx
// 0059a531  8b916c080000         mov edx, dword ptr [ecx + 0x86c]
// 0059a537  8b5258               mov edx, dword ptr [edx + 0x58]
// 0059a53a  895058               mov dword ptr [eax + 0x58], edx
// 0059a53d  89425c               mov dword ptr [edx + 0x5c], eax
// 0059a540  8b896c080000         mov ecx, dword ptr [ecx + 0x86c]
// 0059a546  894158               mov dword ptr [ecx + 0x58], eax
// 0059a549  c20400               ret 4
// library rbx2016-raknet/ReliabilityLayer.cpp (function ?AddToUnreliableLinkedList@ReliabilityLayer@RakNet@@AAEXPAUInternalPacket@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
