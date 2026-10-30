// from server: 100% by auto
// roc 2007-08 00597ee0  unit: RBX::VControllerService::?$FactoryProduct  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00597ee0
//
// 00597ee0  8b442404             mov eax, dword ptr [esp + 4]
// 00597ee4  56                   push esi
// 00597ee5  8bf1                 mov esi, ecx
// 00597ee7  8b08                 mov ecx, dword ptr [eax]
// 00597ee9  57                   push edi
// 00597eea  890e                 mov dword ptr [esi], ecx
// 00597eec  8b7804               mov edi, dword ptr [eax + 4]
// 00597eef  85ff                 test edi, edi
// 00597ef1  740c                 je 0x597eff
// 00597ef3  8d5708               lea edx, [edi + 8]
// 00597ef6  b801000000           mov eax, 1
// 00597efb  f00fc102             lock xadd dword ptr [edx], eax
// 00597eff  8b4e04               mov ecx, dword ptr [esi + 4]
// 00597f02  85c9                 test ecx, ecx
// 00597f04  7413                 je 0x597f19
// 00597f06  8d5108               lea edx, [ecx + 8]
// 00597f09  83c8ff               or eax, 0xffffffff
// 00597f0c  f00fc102             lock xadd dword ptr [edx], eax
// 00597f10  7507                 jne 0x597f19
// 00597f12  8b11                 mov edx, dword ptr [ecx]
// 00597f14  8b4208               mov eax, dword ptr [edx + 8]
// 00597f17  ffd0                 call eax
// 00597f19  897e04               mov dword ptr [esi + 4], edi
// 00597f1c  5f                   pop edi
// 00597f1d  8bc6                 mov eax, esi
// 00597f1f  5e                   pop esi
// 00597f20  c20400               ret 4
// library templates-boost-1_34_1/deque_wp.cpp (function ??4?$weak_ptr@UT@@@boost@@QAEAAV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 deque_wp.cpp
