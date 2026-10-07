// roc 2012-06 005bd0c0  unit: RakNet::RakPeer  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005bd0c0
//
// 005bd0c0  51                   push ecx
// 005bd0c1  53                   push ebx
// 005bd0c2  6a01                 push 1
// 005bd0c4  6a08                 push 8
// 005bd0c6  8d44240f             lea eax, [esp + 0xf]
// 005bd0ca  50                   push eax
// 005bd0cb  8bd9                 mov ebx, ecx
// 005bd0cd  e8aea6faff           call 0x567780
// 005bd0d2  807c240704           cmp byte ptr [esp + 7], 4
// 005bd0d7  754f                 jne 0x5bd128
// 005bd0d9  56                   push esi
// 005bd0da  8b742410             mov esi, dword ptr [esp + 0x10]
// 005bd0de  57                   push edi
// 005bd0df  6a01                 push 1
// 005bd0e1  b902000000           mov ecx, 2
// 005bd0e6  6a20                 push 0x20
// 005bd0e8  8d54241c             lea edx, [esp + 0x1c]
// 005bd0ec  66890e               mov word ptr [esi], cx
// 005bd0ef  52                   push edx
// 005bd0f0  8bcb                 mov ecx, ebx
// 005bd0f2  e889a6faff           call 0x567780
// 005bd0f7  8b442414             mov eax, dword ptr [esp + 0x14]
// 005bd0fb  6a01                 push 1
// 005bd0fd  6a10                 push 0x10
// 005bd0ff  f7d0                 not eax
// 005bd101  8d7e02               lea edi, [esi + 2]
// 005bd104  57                   push edi
// 005bd105  8bcb                 mov ecx, ebx
// 005bd107  894604               mov dword ptr [esi + 4], eax
// 005bd10a  e871a6faff           call 0x567780
// 005bd10f  0fb70f               movzx ecx, word ptr [edi]
// 005bd112  51                   push ecx
// 005bd113  8ad8                 mov bl, al
// 005bd115  ff150c3eb200         call dword ptr [0xb23e0c]
// 005bd11b  5f                   pop edi
// 005bd11c  66894610             mov word ptr [esi + 0x10], ax
// 005bd120  5e                   pop esi
// 005bd121  8ac3                 mov al, bl
// 005bd123  5b                   pop ebx
// 005bd124  59                   pop ecx
// 005bd125  c20400               ret 4
// 005bd128  32c0                 xor al, al
// 005bd12a  5b                   pop ebx
// 005bd12b  59                   pop ecx
// 005bd12c  c20400               ret 4
// library rbx2016-raknet/CloudCommon.cpp (function ??$Read@USystemAddress@RakNet@@@BitStream@RakNet@@QAE_NAAUSystemAddress@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet CloudCommon.cpp
