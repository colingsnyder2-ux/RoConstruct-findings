// roc 2007-03 00728c00  unit: seg_00720000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00728c00
//
// 00728c00  51                   push ecx
// 00728c01  8b442408             mov eax, dword ptr [esp + 8]
// 00728c05  c6411001             mov byte ptr [ecx + 0x10], 1
// 00728c09  8b5104               mov edx, dword ptr [ecx + 4]
// 00728c0c  895004               mov dword ptr [eax + 4], edx
// 00728c0f  8b5108               mov edx, dword ptr [ecx + 8]
// 00728c12  85d2                 test edx, edx
// 00728c14  c7042400000000       mov dword ptr [esp], 0
// 00728c1b  895008               mov dword ptr [eax + 8], edx
// 00728c1e  740e                 je 0x728c2e
// 00728c20  56                   push esi
// 00728c21  83c204               add edx, 4
// 00728c24  be01000000           mov esi, 1
// 00728c29  f00fc132             lock xadd dword ptr [edx], esi
// 00728c2d  5e                   pop esi
// 00728c2e  8a490c               mov cl, byte ptr [ecx + 0xc]
// 00728c31  88480c               mov byte ptr [eax + 0xc], cl
// 00728c34  59                   pop ecx
// 00728c35  c20400               ret 4
// library boost-1.34.1/libs\signals\src\connection.cpp (function ?release@scoped_connection@signals@boost@@QAE?AVconnection@23@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/connection.cpp
