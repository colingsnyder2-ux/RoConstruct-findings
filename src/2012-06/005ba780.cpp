// roc 2012-06 005ba780  unit: RakNet::RakPeer  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005ba780
//
// 005ba780  53                   push ebx
// 005ba781  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 005ba785  81fbff000000         cmp ebx, 0xff
// 005ba78b  56                   push esi
// 005ba78c  8bf1                 mov esi, ecx
// 005ba78e  7e05                 jle 0x5ba795
// 005ba790  bbff000000           mov ebx, 0xff
// 005ba795  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005ba799  85c0                 test eax, eax
// 005ba79b  750b                 jne 0x5ba7a8
// 005ba79d  888628020000         mov byte ptr [esi + 0x228], al
// 005ba7a3  5e                   pop esi
// 005ba7a4  5b                   pop ebx
// 005ba7a5  c20800               ret 8
// 005ba7a8  85db                 test ebx, ebx
// 005ba7aa  7e11                 jle 0x5ba7bd
// 005ba7ac  53                   push ebx
// 005ba7ad  50                   push eax
// 005ba7ae  8d8628010000         lea eax, [esi + 0x128]
// 005ba7b4  50                   push eax
// 005ba7b5  e8a28e3c00           call 0x98365c
// 005ba7ba  83c40c               add esp, 0xc
// 005ba7bd  889e28020000         mov byte ptr [esi + 0x228], bl
// 005ba7c3  5e                   pop esi
// 005ba7c4  5b                   pop ebx
// 005ba7c5  c20800               ret 8
// library rbx2016-raknet/RakPeer.cpp (function ?SetIncomingPassword@RakPeer@RakNet@@UAEXPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp
