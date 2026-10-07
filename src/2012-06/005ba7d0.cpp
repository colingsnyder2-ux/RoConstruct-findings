// roc 2012-06 005ba7d0  unit: RakNet::RakPeer  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005ba7d0
//
// 005ba7d0  0fb68128020000       movzx eax, byte ptr [ecx + 0x228]
// 005ba7d7  56                   push esi
// 005ba7d8  8b742408             mov esi, dword ptr [esp + 8]
// 005ba7dc  85f6                 test esi, esi
// 005ba7de  750a                 jne 0x5ba7ea
// 005ba7e0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005ba7e4  8901                 mov dword ptr [ecx], eax
// 005ba7e6  5e                   pop esi
// 005ba7e7  c20800               ret 8
// 005ba7ea  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005ba7ee  3902                 cmp dword ptr [edx], eax
// 005ba7f0  7e02                 jle 0x5ba7f4
// 005ba7f2  8902                 mov dword ptr [edx], eax
// 005ba7f4  8b02                 mov eax, dword ptr [edx]
// 005ba7f6  85c0                 test eax, eax
// 005ba7f8  7e11                 jle 0x5ba80b
// 005ba7fa  50                   push eax
// 005ba7fb  81c128010000         add ecx, 0x128
// 005ba801  51                   push ecx
// 005ba802  56                   push esi
// 005ba803  e8548e3c00           call 0x98365c
// 005ba808  83c40c               add esp, 0xc
// 005ba80b  5e                   pop esi
// 005ba80c  c20800               ret 8
// library rbx2016-raknet/RakPeer.cpp (function ?GetIncomingPassword@RakPeer@RakNet@@UAEXPADPAH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp
