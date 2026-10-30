// from server: 100% by auto
// roc 2008-06 005caa00  unit: RBX::KeyboardSecondaryController  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005caa00
//
// 005caa00  8b442404             mov eax, dword ptr [esp + 4]
// 005caa04  56                   push esi
// 005caa05  8bf1                 mov esi, ecx
// 005caa07  8b08                 mov ecx, dword ptr [eax]
// 005caa09  57                   push edi
// 005caa0a  890e                 mov dword ptr [esi], ecx
// 005caa0c  8b7804               mov edi, dword ptr [eax + 4]
// 005caa0f  85ff                 test edi, edi
// 005caa11  740c                 je 0x5caa1f
// 005caa13  8d5708               lea edx, [edi + 8]
// 005caa16  b801000000           mov eax, 1
// 005caa1b  f00fc102             lock xadd dword ptr [edx], eax
// 005caa1f  8b4e04               mov ecx, dword ptr [esi + 4]
// 005caa22  85c9                 test ecx, ecx
// 005caa24  7413                 je 0x5caa39
// 005caa26  8d5108               lea edx, [ecx + 8]
// 005caa29  83c8ff               or eax, 0xffffffff
// 005caa2c  f00fc102             lock xadd dword ptr [edx], eax
// 005caa30  7507                 jne 0x5caa39
// 005caa32  8b11                 mov edx, dword ptr [ecx]
// 005caa34  8b4208               mov eax, dword ptr [edx + 8]
// 005caa37  ffd0                 call eax
// 005caa39  897e04               mov dword ptr [esi + 4], edi
// 005caa3c  5f                   pop edi
// 005caa3d  8bc6                 mov eax, esi
// 005caa3f  5e                   pop esi
// 005caa40  c20400               ret 4
// library templates-boost-1_34_1/deque_wp.cpp (function ??4?$weak_ptr@UT@@@boost@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 deque_wp.cpp
