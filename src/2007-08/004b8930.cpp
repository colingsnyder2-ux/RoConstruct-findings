// roc 2007-08 004b8930  unit: RakPeer  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b8930
//
// 004b8930  53                   push ebx
// 004b8931  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004b8935  81fbff000000         cmp ebx, 0xff
// 004b893b  56                   push esi
// 004b893c  8bf1                 mov esi, ecx
// 004b893e  7e05                 jle 0x4b8945
// 004b8940  bbff000000           mov ebx, 0xff
// 004b8945  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004b8949  85c0                 test eax, eax
// 004b894b  750b                 jne 0x4b8958
// 004b894d  888628020000         mov byte ptr [esi + 0x228], al
// 004b8953  5e                   pop esi
// 004b8954  5b                   pop ebx
// 004b8955  c20800               ret 8
// 004b8958  85db                 test ebx, ebx
// 004b895a  7e11                 jle 0x4b896d
// 004b895c  53                   push ebx
// 004b895d  50                   push eax
// 004b895e  8d8628010000         lea eax, [esi + 0x128]
// 004b8964  50                   push eax
// 004b8965  e8e2831700           call 0x630d4c
// 004b896a  83c40c               add esp, 0xc
// 004b896d  889e28020000         mov byte ptr [esi + 0x228], bl
// 004b8973  5e                   pop esi
// 004b8974  5b                   pop ebx
// 004b8975  c20800               ret 8
// library rbx2016-raknet/RakPeer.cpp (function ?SetIncomingPassword@RakPeer@RakNet@@UAEXPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp
