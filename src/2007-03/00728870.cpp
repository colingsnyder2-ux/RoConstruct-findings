// roc 2007-03 00728870  unit: seg_00720000  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00728870
//
// 00728870  8b542404             mov edx, dword ptr [esp + 4]
// 00728874  8bc1                 mov eax, ecx
// 00728876  8b4a04               mov ecx, dword ptr [edx + 4]
// 00728879  894804               mov dword ptr [eax + 4], ecx
// 0072887c  8b4a08               mov ecx, dword ptr [edx + 8]
// 0072887f  85c9                 test ecx, ecx
// 00728881  894808               mov dword ptr [eax + 8], ecx
// 00728884  740e                 je 0x728894
// 00728886  56                   push esi
// 00728887  83c104               add ecx, 4
// 0072888a  be01000000           mov esi, 1
// 0072888f  f00fc131             lock xadd dword ptr [ecx], esi
// 00728893  5e                   pop esi
// 00728894  8a520c               mov dl, byte ptr [edx + 0xc]
// 00728897  88500c               mov byte ptr [eax + 0xc], dl
// 0072889a  c20400               ret 4
// library boost-1.34.1/libs\signals\src\connection.cpp (function ??0connection@signals@boost@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/connection.cpp
