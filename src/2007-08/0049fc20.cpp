// roc 2007-08 0049fc20  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0049fc20
//
// 0049fc20  51                   push ecx
// 0049fc21  53                   push ebx
// 0049fc22  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0049fc26  56                   push esi
// 0049fc27  53                   push ebx
// 0049fc28  8bf1                 mov esi, ecx
// 0049fc2a  e811ffffff           call 0x49fb40
// 0049fc2f  85db                 test ebx, ebx
// 0049fc31  0f8e90000000         jle 0x49fcc7
// 0049fc37  57                   push edi
// 0049fc38  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0049fc3c  8d642400             lea esp, [esp]
// 0049fc40  8b4f08               mov ecx, dword ptr [edi + 8]
// 0049fc43  83eb01               sub ebx, 1
// 0049fc46  8d4101               lea eax, [ecx + 1]
// 0049fc49  3b07                 cmp eax, dword ptr [edi]
// 0049fc4b  895c2418             mov dword ptr [esp + 0x18], ebx
// 0049fc4f  7f75                 jg 0x49fcc6
// 0049fc51  8b06                 mov eax, dword ptr [esi]
// 0049fc53  8b5f0c               mov ebx, dword ptr [edi + 0xc]
// 0049fc56  8bd0                 mov edx, eax
// 0049fc58  83e207               and edx, 7
// 0049fc5b  8954240c             mov dword ptr [esp + 0xc], edx
// 0049fc5f  8bd1                 mov edx, ecx
// 0049fc61  b880000000           mov eax, 0x80
// 0049fc66  7527                 jne 0x49fc8f
// 0049fc68  83e107               and ecx, 7
// 0049fc6b  d3f8                 sar eax, cl
// 0049fc6d  c1fa03               sar edx, 3
// 0049fc70  84041a               test byte ptr [edx + ebx], al
// 0049fc73  8b06                 mov eax, dword ptr [esi]
// 0049fc75  740c                 je 0x49fc83
// 0049fc77  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0049fc7a  c1f803               sar eax, 3
// 0049fc7d  c6040880             mov byte ptr [eax + ecx], 0x80
// 0049fc81  eb30                 jmp 0x49fcb3
// 0049fc83  8b560c               mov edx, dword ptr [esi + 0xc]
// 0049fc86  c1f803               sar eax, 3
// 0049fc89  c6041000             mov byte ptr [eax + edx], 0
// 0049fc8d  eb24                 jmp 0x49fcb3
// 0049fc8f  83e107               and ecx, 7
// 0049fc92  d3f8                 sar eax, cl
// 0049fc94  c1fa03               sar edx, 3
// 0049fc97  84041a               test byte ptr [edx + ebx], al
// 0049fc9a  8b06                 mov eax, dword ptr [esi]
// 0049fc9c  7415                 je 0x49fcb3
// 0049fc9e  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0049fca1  c1f803               sar eax, 3
// 0049fca4  03c1                 add eax, ecx
// 0049fca6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0049fcaa  ba80000000           mov edx, 0x80
// 0049fcaf  d3fa                 sar edx, cl
// 0049fcb1  0810                 or byte ptr [eax], dl
// 0049fcb3  83470801             add dword ptr [edi + 8], 1
// 0049fcb7  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0049fcbb  830601               add dword ptr [esi], 1
// 0049fcbe  85db                 test ebx, ebx
// 0049fcc0  0f8f7affffff         jg 0x49fc40
// 0049fcc6  5f                   pop edi
// 0049fcc7  5e                   pop esi
// 0049fcc8  5b                   pop ebx
// 0049fcc9  59                   pop ecx
// 0049fcca  c20800               ret 8
// library rbxgs-raknet/BitStream.cpp (function ?Write@BitStream@RakNet@@QAEXPAV12@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet BitStream.cpp
