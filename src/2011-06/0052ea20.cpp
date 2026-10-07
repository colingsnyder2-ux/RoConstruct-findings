// roc 2011-06 0052ea20  unit: RBX::Network::ProfiledRakPeer  size: 157 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0052ea20
//
// 0052ea20  56                   push esi
// 0052ea21  8bf1                 mov esi, ecx
// 0052ea23  8b4608               mov eax, dword ptr [esi + 8]
// 0052ea26  8d48ff               lea ecx, [eax - 1]
// 0052ea29  83e107               and ecx, 7
// 0052ea2c  2bc1                 sub eax, ecx
// 0052ea2e  83c007               add eax, 7
// 0052ea31  894608               mov dword ptr [esi + 8], eax
// 0052ea34  83c018               add eax, 0x18
// 0052ea37  3b06                 cmp eax, dword ptr [esi]
// 0052ea39  7606                 jbe 0x52ea41
// 0052ea3b  32c0                 xor al, al
// 0052ea3d  5e                   pop esi
// 0052ea3e  c20400               ret 4
// 0052ea41  e8fa87fbff           call 0x4e7240
// 0052ea46  8b5608               mov edx, dword ptr [esi + 8]
// 0052ea49  c1ea03               shr edx, 3
// 0052ea4c  84c0                 test al, al
// 0052ea4e  8b460c               mov eax, dword ptr [esi + 0xc]
// 0052ea51  0fb60c02             movzx ecx, byte ptr [edx + eax]
// 0052ea55  8b442408             mov eax, dword ptr [esp + 8]
// 0052ea59  7531                 jne 0x52ea8c
// 0052ea5b  8808                 mov byte ptr [eax], cl
// 0052ea5d  8b5608               mov edx, dword ptr [esi + 8]
// 0052ea60  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0052ea63  c1ea03               shr edx, 3
// 0052ea66  8a540a01             mov dl, byte ptr [edx + ecx + 1]
// 0052ea6a  885001               mov byte ptr [eax + 1], dl
// 0052ea6d  8b4e08               mov ecx, dword ptr [esi + 8]
// 0052ea70  8b560c               mov edx, dword ptr [esi + 0xc]
// 0052ea73  c1e903               shr ecx, 3
// 0052ea76  0fb64c1102           movzx ecx, byte ptr [ecx + edx + 2]
// 0052ea7b  884802               mov byte ptr [eax + 2], cl
// 0052ea7e  c6400300             mov byte ptr [eax + 3], 0
// 0052ea82  83460818             add dword ptr [esi + 8], 0x18
// 0052ea86  b001                 mov al, 1
// 0052ea88  5e                   pop esi
// 0052ea89  c20400               ret 4
// 0052ea8c  884803               mov byte ptr [eax + 3], cl
// 0052ea8f  8b5608               mov edx, dword ptr [esi + 8]
// 0052ea92  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0052ea95  c1ea03               shr edx, 3
// 0052ea98  8a540a01             mov dl, byte ptr [edx + ecx + 1]
// 0052ea9c  885002               mov byte ptr [eax + 2], dl
// 0052ea9f  8b4e08               mov ecx, dword ptr [esi + 8]
// 0052eaa2  8b560c               mov edx, dword ptr [esi + 0xc]
// 0052eaa5  c1e903               shr ecx, 3
// 0052eaa8  0fb64c1102           movzx ecx, byte ptr [ecx + edx + 2]
// 0052eaad  884801               mov byte ptr [eax + 1], cl
// 0052eab0  c60000               mov byte ptr [eax], 0
// 0052eab3  83460818             add dword ptr [esi + 8], 0x18
// 0052eab7  b001                 mov al, 1
// 0052eab9  5e                   pop esi
// 0052eaba  c20400               ret 4
// library rbx2016-raknet/ReliabilityLayer.cpp (function ??$Read@Uuint24_t@RakNet@@@BitStream@RakNet@@QAE_NAAUuint24_t@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
