// roc 2007-03 00728b60  unit: seg_00720000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00728b60
//
// 00728b60  8b542404             mov edx, dword ptr [esp + 4]
// 00728b64  8bc1                 mov eax, ecx
// 00728b66  8b4a04               mov ecx, dword ptr [edx + 4]
// 00728b69  894804               mov dword ptr [eax + 4], ecx
// 00728b6c  8b4a08               mov ecx, dword ptr [edx + 8]
// 00728b6f  85c9                 test ecx, ecx
// 00728b71  894808               mov dword ptr [eax + 8], ecx
// 00728b74  740e                 je 0x728b84
// 00728b76  56                   push esi
// 00728b77  83c104               add ecx, 4
// 00728b7a  be01000000           mov esi, 1
// 00728b7f  f00fc131             lock xadd dword ptr [ecx], esi
// 00728b83  5e                   pop esi
// 00728b84  8a520c               mov dl, byte ptr [edx + 0xc]
// 00728b87  88500c               mov byte ptr [eax + 0xc], dl
// 00728b8a  c6401000             mov byte ptr [eax + 0x10], 0
// 00728b8e  c20400               ret 4
// library boost-1.34.1/libs\signals\src\connection.cpp (function ??0scoped_connection@signals@boost@@QAE@ABVconnection@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/connection.cpp
