// roc 2007-08 00580020  unit: RBX::Workspace  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00580020
//
// 00580020  81ec10010000         sub esp, 0x110
// 00580026  57                   push edi
// 00580027  8d442404             lea eax, [esp + 4]
// 0058002b  50                   push eax
// 0058002c  ff15fcd17700         call dword ptr [0x77d1fc]
// 00580032  80bc241801000000     cmp byte ptr [esp + 0x118], 0
// 0058003a  8b3d68e97700         mov edi, dword ptr [0x77e968]
// 00580040  742c                 je 0x58006e
// 00580042  0fb74c2404           movzx ecx, word ptr [esp + 4]
// 00580047  0fb7542406           movzx edx, word ptr [esp + 6]
// 0058004c  0fb744240a           movzx eax, word ptr [esp + 0xa]
// 00580051  51                   push ecx
// 00580052  52                   push edx
// 00580053  50                   push eax
// 00580054  8d4c2420             lea ecx, [esp + 0x20]
// 00580058  6888bf7a00           push 0x7abf88
// 0058005d  51                   push ecx
// 0058005e  ffd7                 call edi
// 00580060  8d542428             lea edx, [esp + 0x28]
// 00580064  52                   push edx
// 00580065  56                   push esi
// 00580066  e835b3eeff           call 0x46b3a0
// 0058006b  83c41c               add esp, 0x1c
// 0058006e  0fb7442412           movzx eax, word ptr [esp + 0x12]
// 00580073  0fb74c240e           movzx ecx, word ptr [esp + 0xe]
// 00580078  0fb754240c           movzx edx, word ptr [esp + 0xc]
// 0058007d  50                   push eax
// 0058007e  51                   push ecx
// 0058007f  52                   push edx
// 00580080  8d442420             lea eax, [esp + 0x20]
// 00580084  6878bf7a00           push 0x7abf78
// 00580089  50                   push eax
// 0058008a  ffd7                 call edi
// 0058008c  8d4c2428             lea ecx, [esp + 0x28]
// 00580090  51                   push ecx
// 00580091  56                   push esi
// 00580092  e809b3eeff           call 0x46b3a0
// 00580097  83c41c               add esp, 0x1c
// 0058009a  8bce                 mov ecx, esi
// 0058009c  ff15fce57700         call dword ptr [0x77e5fc]
// 005800a2  5f                   pop edi
// 005800a3  81c410010000         add esp, 0x110
// 005800a9  c3                   ret 
// library openrbx-client/App\util\Log.cpp (function ?timeStamp@@YAXAAV?$basic_ofstream@DU?$char_traits@D@std@@@std@@_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Log.cpp
