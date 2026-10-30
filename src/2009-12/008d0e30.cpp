// roc 2009-12 008d0e30  unit: CXTPTabPaintManager  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d0e30
//
// 008d0e30  83ec40               sub esp, 0x40
// 008d0e33  a10052b600           mov eax, dword ptr [0xb65200]
// 008d0e38  33c4                 xor eax, esp
// 008d0e3a  8944243c             mov dword ptr [esp + 0x3c], eax
// 008d0e3e  56                   push esi
// 008d0e3f  8bf1                 mov esi, ecx
// 008d0e41  83be2c01000000       cmp dword ptr [esi + 0x12c], 0
// 008d0e48  741f                 je 0x8d0e69
// 008d0e4a  6a00                 push 0
// 008d0e4c  8d442408             lea eax, [esp + 8]
// 008d0e50  50                   push eax
// 008d0e51  6a3c                 push 0x3c
// 008d0e53  6a1f                 push 0x1f
// 008d0e55  ff1500cc9800         call dword ptr [0x98cc00]
// 008d0e5b  6a01                 push 1
// 008d0e5d  8d4c2408             lea ecx, [esp + 8]
// 008d0e61  51                   push ecx
// 008d0e62  8bce                 mov ecx, esi
// 008d0e64  e887feffff           call 0x8d0cf0
// 008d0e69  8b8ee4000000         mov ecx, dword ptr [esi + 0xe4]
// 008d0e6f  8b11                 mov edx, dword ptr [ecx]
// 008d0e71  8b4204               mov eax, dword ptr [edx + 4]
// 008d0e74  ffd0                 call eax
// 008d0e76  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 008d0e7c  8b11                 mov edx, dword ptr [ecx]
// 008d0e7e  8b4204               mov eax, dword ptr [edx + 4]
// 008d0e81  ffd0                 call eax
// 008d0e83  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008d0e87  5e                   pop esi
// 008d0e88  33cc                 xor ecx, esp
// 008d0e8a  e80b45f2ff           call 0x7f539a
// 008d0e8f  83c440               add esp, 0x40
// 008d0e92  c3                   ret 
// copied from an identical function in another client (function ?RefreshMetrics@CXTPTabPaintManager@@UAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManager.cpp