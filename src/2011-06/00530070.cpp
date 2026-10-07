// roc 2011-06 00530070  unit: RBX::Network::ProfiledRakPeer  size: 218 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00530070
//
// 00530070  83ec10               sub esp, 0x10
// 00530073  56                   push esi
// 00530074  8bf1                 mov esi, ecx
// 00530076  807e0c00             cmp byte ptr [esi + 0xc], 0
// 0053007a  0f8592000000         jne 0x530112
// 00530080  8b5604               mov edx, dword ptr [esi + 4]
// 00530083  53                   push ebx
// 00530084  55                   push ebp
// 00530085  57                   push edi
// 00530086  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0053008a  85d2                 test edx, edx
// 0053008c  7628                 jbe 0x5300b6
// 0053008e  8d4aff               lea ecx, [edx - 1]
// 00530091  d1e9                 shr ecx, 1
// 00530093  3bca                 cmp ecx, edx
// 00530095  731f                 jae 0x5300b6
// 00530097  8b1f                 mov ebx, dword ptr [edi]
// 00530099  8b6f04               mov ebp, dword ptr [edi + 4]
// 0053009c  8bc1                 mov eax, ecx
// 0053009e  c1e004               shl eax, 4
// 005300a1  0306                 add eax, dword ptr [esi]
// 005300a3  3b6804               cmp ebp, dword ptr [eax + 4]
// 005300a6  7249                 jb 0x5300f1
// 005300a8  7704                 ja 0x5300ae
// 005300aa  3b18                 cmp ebx, dword ptr [eax]
// 005300ac  7243                 jb 0x5300f1
// 005300ae  41                   inc ecx
// 005300af  83c010               add eax, 0x10
// 005300b2  3bca                 cmp ecx, edx
// 005300b4  72ed                 jb 0x5300a3
// 005300b6  8b4f04               mov ecx, dword ptr [edi + 4]
// 005300b9  8b07                 mov eax, dword ptr [edi]
// 005300bb  8b542428             mov edx, dword ptr [esp + 0x28]
// 005300bf  894c2414             mov dword ptr [esp + 0x14], ecx
// 005300c3  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005300c7  89442410             mov dword ptr [esp + 0x10], eax
// 005300cb  8b02                 mov eax, dword ptr [edx]
// 005300cd  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005300d1  51                   push ecx
// 005300d2  8944241c             mov dword ptr [esp + 0x1c], eax
// 005300d6  52                   push edx
// 005300d7  8d442418             lea eax, [esp + 0x18]
// 005300db  50                   push eax
// 005300dc  8bce                 mov ecx, esi
// 005300de  e86df3ffff           call 0x52f450
// 005300e3  5f                   pop edi
// 005300e4  5d                   pop ebp
// 005300e5  5b                   pop ebx
// 005300e6  c6460c01             mov byte ptr [esi + 0xc], 1
// 005300ea  5e                   pop esi
// 005300eb  83c410               add esp, 0x10
// 005300ee  c21000               ret 0x10
// 005300f1  8b442430             mov eax, dword ptr [esp + 0x30]
// 005300f5  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005300f9  8b542428             mov edx, dword ptr [esp + 0x28]
// 005300fd  50                   push eax
// 005300fe  51                   push ecx
// 005300ff  52                   push edx
// 00530100  57                   push edi
// 00530101  8bce                 mov ecx, esi
// 00530103  e888feffff           call 0x52ff90
// 00530108  5f                   pop edi
// 00530109  5d                   pop ebp
// 0053010a  5b                   pop ebx
// 0053010b  5e                   pop esi
// 0053010c  83c410               add esp, 0x10
// 0053010f  c21000               ret 0x10
// 00530112  8b442418             mov eax, dword ptr [esp + 0x18]
// 00530116  8b5004               mov edx, dword ptr [eax + 4]
// 00530119  8b08                 mov ecx, dword ptr [eax]
// 0053011b  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0053011f  894c2404             mov dword ptr [esp + 4], ecx
// 00530123  8b08                 mov ecx, dword ptr [eax]
// 00530125  8b442420             mov eax, dword ptr [esp + 0x20]
// 00530129  89542408             mov dword ptr [esp + 8], edx
// 0053012d  8b542424             mov edx, dword ptr [esp + 0x24]
// 00530131  52                   push edx
// 00530132  894c2410             mov dword ptr [esp + 0x10], ecx
// 00530136  50                   push eax
// 00530137  8d4c240c             lea ecx, [esp + 0xc]
// 0053013b  51                   push ecx
// 0053013c  8bce                 mov ecx, esi
// 0053013e  e80df3ffff           call 0x52f450
// 00530143  5e                   pop esi
// 00530144  83c410               add esp, 0x10
// 00530147  c21000               ret 0x10
// library rbx2016-raknet/ReliabilityLayer.cpp (function ?PushSeries@?$Heap@_KPAUInternalPacket@RakNet@@$0A@@DataStructures@@QAEXAB_KABQAUInternalPacket@RakNet@@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
