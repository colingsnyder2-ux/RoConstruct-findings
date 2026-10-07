// roc 2012-06 0059ef30  unit: seg_00590000  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0059ef30
//
// 0059ef30  51                   push ecx
// 0059ef31  53                   push ebx
// 0059ef32  55                   push ebp
// 0059ef33  56                   push esi
// 0059ef34  57                   push edi
// 0059ef35  8bf9                 mov edi, ecx
// 0059ef37  68a0ac5900           push 0x59aca0
// 0059ef3c  8d442417             lea eax, [esp + 0x17]
// 0059ef40  50                   push eax
// 0059ef41  8d4c2420             lea ecx, [esp + 0x20]
// 0059ef45  8db7a8080000         lea esi, [edi + 0x8a8]
// 0059ef4b  51                   push ecx
// 0059ef4c  8bce                 mov ecx, esi
// 0059ef4e  e88dc5ffff           call 0x59b4e0
// 0059ef53  8b16                 mov edx, dword ptr [esi]
// 0059ef55  8bd8                 mov ebx, eax
// 0059ef57  8b2c9a               mov ebp, dword ptr [edx + ebx*4]
// 0059ef5a  8b4508               mov eax, dword ptr [ebp + 8]
// 0059ef5d  8b08                 mov ecx, dword ptr [eax]
// 0059ef5f  8b550c               mov edx, dword ptr [ebp + 0xc]
// 0059ef62  3b5114               cmp edx, dword ptr [ecx + 0x14]
// 0059ef65  756e                 jne 0x59efd5
// 0059ef67  8b442438             mov eax, dword ptr [esp + 0x38]
// 0059ef6b  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0059ef6f  8b542430             mov edx, dword ptr [esp + 0x30]
// 0059ef73  50                   push eax
// 0059ef74  8b442430             mov eax, dword ptr [esp + 0x30]
// 0059ef78  51                   push ecx
// 0059ef79  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0059ef7d  52                   push edx
// 0059ef7e  8b542428             mov edx, dword ptr [esp + 0x28]
// 0059ef82  50                   push eax
// 0059ef83  8b442438             mov eax, dword ptr [esp + 0x38]
// 0059ef87  51                   push ecx
// 0059ef88  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0059ef8c  52                   push edx
// 0059ef8d  50                   push eax
// 0059ef8e  51                   push ecx
// 0059ef8f  8bcf                 mov ecx, edi
// 0059ef91  e8caeaffff           call 0x59da60
// 0059ef96  8b542420             mov edx, dword ptr [esp + 0x20]
// 0059ef9a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0059ef9e  52                   push edx
// 0059ef9f  50                   push eax
// 0059efa0  55                   push ebp
// 0059efa1  8bcf                 mov ecx, edi
// 0059efa3  e818feffff           call 0x59edc0
// 0059efa8  8b5604               mov edx, dword ptr [esi + 4]
// 0059efab  3bda                 cmp ebx, edx
// 0059efad  7328                 jae 0x59efd7
// 0059efaf  4a                   dec edx
// 0059efb0  8bcb                 mov ecx, ebx
// 0059efb2  3bda                 cmp ebx, edx
// 0059efb4  7314                 jae 0x59efca
// 0059efb6  8b16                 mov edx, dword ptr [esi]
// 0059efb8  8b7c8a04             mov edi, dword ptr [edx + ecx*4 + 4]
// 0059efbc  8d148a               lea edx, [edx + ecx*4]
// 0059efbf  893a                 mov dword ptr [edx], edi
// 0059efc1  8b5604               mov edx, dword ptr [esi + 4]
// 0059efc4  41                   inc ecx
// 0059efc5  4a                   dec edx
// 0059efc6  3bca                 cmp ecx, edx
// 0059efc8  72ec                 jb 0x59efb6
// 0059efca  ff4e04               dec dword ptr [esi + 4]
// 0059efcd  5f                   pop edi
// 0059efce  5e                   pop esi
// 0059efcf  5d                   pop ebp
// 0059efd0  5b                   pop ebx
// 0059efd1  59                   pop ecx
// 0059efd2  c22400               ret 0x24
// 0059efd5  33c0                 xor eax, eax
// 0059efd7  5f                   pop edi
// 0059efd8  5e                   pop esi
// 0059efd9  5d                   pop ebp
// 0059efda  5b                   pop ebx
// 0059efdb  59                   pop ecx
// 0059efdc  c22400               ret 0x24
// library rbx2016-raknet/ReliabilityLayer.cpp (function ?BuildPacketFromSplitPacketList@ReliabilityLayer@RakNet@@AAEPAUInternalPacket@2@G_KIAAUSystemAddress@2@PAVRakNetRandom@2@GIAAVBitStream@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
