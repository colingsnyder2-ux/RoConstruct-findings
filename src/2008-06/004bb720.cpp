// roc 2008-06 004bb720  unit: ProfiledRakPeer  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004bb720
//
// 004bb720  0fb68128020000       movzx eax, byte ptr [ecx + 0x228]
// 004bb727  56                   push esi
// 004bb728  8b742408             mov esi, dword ptr [esp + 8]
// 004bb72c  85f6                 test esi, esi
// 004bb72e  750a                 jne 0x4bb73a
// 004bb730  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004bb734  8901                 mov dword ptr [ecx], eax
// 004bb736  5e                   pop esi
// 004bb737  c20800               ret 8
// 004bb73a  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004bb73e  3902                 cmp dword ptr [edx], eax
// 004bb740  7e02                 jle 0x4bb744
// 004bb742  8902                 mov dword ptr [edx], eax
// 004bb744  8b02                 mov eax, dword ptr [edx]
// 004bb746  85c0                 test eax, eax
// 004bb748  7e11                 jle 0x4bb75b
// 004bb74a  50                   push eax
// 004bb74b  81c128010000         add ecx, 0x128
// 004bb751  51                   push ecx
// 004bb752  56                   push esi
// 004bb753  e888601e00           call 0x6a17e0
// 004bb758  83c40c               add esp, 0xc
// 004bb75b  5e                   pop esi
// 004bb75c  c20800               ret 8
// library rbx2016-raknet/RakPeer.cpp (function ?GetIncomingPassword@RakPeer@RakNet@@UAEXPADPAH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp
