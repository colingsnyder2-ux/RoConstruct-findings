// roc 2009-12 00804cc0  unit: CXTPCommandBar  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00804cc0
//
// 00804cc0  56                   push esi
// 00804cc1  8bf1                 mov esi, ecx
// 00804cc3  e868f1feff           call 0x7f3e30
// 00804cc8  83f8ff               cmp eax, -1
// 00804ccb  7506                 jne 0x804cd3
// 00804ccd  0bc0                 or eax, eax
// 00804ccf  5e                   pop esi
// 00804cd0  c20400               ret 4
// 00804cd3  57                   push edi
// 00804cd4  8bce                 mov ecx, esi
// 00804cd6  e8f5f7ffff           call 0x8044d0
// 00804cdb  83be0001000006       cmp dword ptr [esi + 0x100], 6
// 00804ce2  8bf8                 mov edi, eax
// 00804ce4  740d                 je 0x804cf3
// 00804ce6  85ff                 test edi, edi
// 00804ce8  7448                 je 0x804d32
// 00804cea  8b4f4c               mov ecx, dword ptr [edi + 0x4c]
// 00804ced  56                   push esi
// 00804cee  e85db00600           call 0x86fd50
// 00804cf3  85ff                 test edi, edi
// 00804cf5  743b                 je 0x804d32
// 00804cf7  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 00804cfd  85c9                 test ecx, ecx
// 00804cff  740f                 je 0x804d10
// 00804d01  e8d6f0feff           call 0x7f3ddc
// 00804d06  c7867401000000000000 mov dword ptr [esi + 0x174], 0
// 00804d10  8bcf                 mov ecx, edi
// 00804d12  e8f9f90000           call 0x814710
// 00804d17  898674010000         mov dword ptr [esi + 0x174], eax
// 00804d1d  85c0                 test eax, eax
// 00804d1f  7423                 je 0x804d44
// 00804d21  83c004               add eax, 4
// 00804d24  50                   push eax
// 00804d25  ff150cb29800         call dword ptr [0x98b20c]
// 00804d2b  5f                   pop edi
// 00804d2c  33c0                 xor eax, eax
// 00804d2e  5e                   pop esi
// 00804d2f  c20400               ret 4
// 00804d32  83bef800000002       cmp dword ptr [esi + 0xf8], 2
// 00804d39  7409                 je 0x804d44
// 00804d3b  6a01                 push 1
// 00804d3d  8bce                 mov ecx, esi
// 00804d3f  e882171200           call 0x9264c6
// 00804d44  5f                   pop edi
// 00804d45  33c0                 xor eax, eax
// 00804d47  5e                   pop esi
// 00804d48  c20400               ret 4
// copied from an identical function in another client (function ?OnCreate@CXTPCommandBar@@QAEHPAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp