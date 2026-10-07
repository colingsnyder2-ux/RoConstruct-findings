// roc 2008-06 004bb6d0  unit: ProfiledRakPeer  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004bb6d0
//
// 004bb6d0  53                   push ebx
// 004bb6d1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004bb6d5  81fbff000000         cmp ebx, 0xff
// 004bb6db  56                   push esi
// 004bb6dc  8bf1                 mov esi, ecx
// 004bb6de  7e05                 jle 0x4bb6e5
// 004bb6e0  bbff000000           mov ebx, 0xff
// 004bb6e5  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004bb6e9  85c0                 test eax, eax
// 004bb6eb  750b                 jne 0x4bb6f8
// 004bb6ed  888628020000         mov byte ptr [esi + 0x228], al
// 004bb6f3  5e                   pop esi
// 004bb6f4  5b                   pop ebx
// 004bb6f5  c20800               ret 8
// 004bb6f8  85db                 test ebx, ebx
// 004bb6fa  7e11                 jle 0x4bb70d
// 004bb6fc  53                   push ebx
// 004bb6fd  50                   push eax
// 004bb6fe  8d8628010000         lea eax, [esi + 0x128]
// 004bb704  50                   push eax
// 004bb705  e8d6601e00           call 0x6a17e0
// 004bb70a  83c40c               add esp, 0xc
// 004bb70d  889e28020000         mov byte ptr [esi + 0x228], bl
// 004bb713  5e                   pop esi
// 004bb714  5b                   pop ebx
// 004bb715  c20800               ret 8
// library rbx2016-raknet/RakPeer.cpp (function ?SetIncomingPassword@RakPeer@RakNet@@UAEXPBDH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp
