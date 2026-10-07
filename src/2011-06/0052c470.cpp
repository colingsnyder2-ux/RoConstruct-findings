// roc 2011-06 0052c470  unit: RakPeer  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0052c470
//
// 0052c470  53                   push ebx
// 0052c471  56                   push esi
// 0052c472  57                   push edi
// 0052c473  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0052c477  837f0800             cmp dword ptr [edi + 8], 0
// 0052c47b  8bd9                 mov ebx, ecx
// 0052c47d  7623                 jbe 0x52c4a2
// 0052c47f  8b07                 mov eax, dword ptr [edi]
// 0052c481  85c0                 test eax, eax
// 0052c483  741d                 je 0x52c4a2
// 0052c485  8b48fc               mov ecx, dword ptr [eax - 4]
// 0052c488  8d70fc               lea esi, [eax - 4]
// 0052c48b  6800f45000           push 0x50f400
// 0052c490  51                   push ecx
// 0052c491  6a08                 push 8
// 0052c493  50                   push eax
// 0052c494  e83fed2d00           call 0x80b1d8
// 0052c499  56                   push esi
// 0052c49a  e865de2d00           call 0x80a304
// 0052c49f  83c404               add esp, 4
// 0052c4a2  8d7314               lea esi, [ebx + 0x14]
// 0052c4a5  8bce                 mov ecx, esi
// 0052c4a7  e824140000           call 0x52d8d0
// 0052c4ac  8b542418             mov edx, dword ptr [esp + 0x18]
// 0052c4b0  8b442414             mov eax, dword ptr [esp + 0x14]
// 0052c4b4  52                   push edx
// 0052c4b5  50                   push eax
// 0052c4b6  57                   push edi
// 0052c4b7  8bcb                 mov ecx, ebx
// 0052c4b9  e80256ffff           call 0x521ac0
// 0052c4be  8bce                 mov ecx, esi
// 0052c4c0  e8db94eeff           call 0x4159a0
// 0052c4c5  5f                   pop edi
// 0052c4c6  5e                   pop esi
// 0052c4c7  5b                   pop ebx
// 0052c4c8  c20c00               ret 0xc
// library rbx2016-raknet/RakPeer.cpp (function ?Deallocate@?$ThreadsafeAllocatingQueue@USocketQueryOutput@RakPeer@RakNet@@@DataStructures@@QAEXPAUSocketQueryOutput@RakPeer@RakNet@@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp
