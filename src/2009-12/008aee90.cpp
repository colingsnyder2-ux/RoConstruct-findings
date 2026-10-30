// roc 2009-12 008aee90  unit: CXTPDockingPaneMiniWnd  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008aee90
//
// 008aee90  83ec10               sub esp, 0x10
// 008aee93  56                   push esi
// 008aee94  8bf1                 mov esi, ecx
// 008aee96  57                   push edi
// 008aee97  8d8ef8000000         lea ecx, [esi + 0xf8]
// 008aee9d  e8ae190000           call 0x8b0850
// 008aeea2  8b7878               mov edi, dword ptr [eax + 0x78]
// 008aeea5  56                   push esi
// 008aeea6  8d4c240c             lea ecx, [esp + 0xc]
// 008aeeaa  83c708               add edi, 8
// 008aeead  e8bec3f9ff           call 0x84b270
// 008aeeb2  8b8640010000         mov eax, dword ptr [esi + 0x140]
// 008aeeb8  0faf8638010000       imul eax, dword ptr [esi + 0x138]
// 008aeebf  99                   cdq 
// 008aeec0  f7be3c010000         idiv dword ptr [esi + 0x13c]
// 008aeec6  3bf8                 cmp edi, eax
// 008aeec8  7f02                 jg 0x8aeecc
// 008aeeca  8bf8                 mov edi, eax
// 008aeecc  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008aeed0  33d2                 xor edx, edx
// 008aeed2  3954241c             cmp dword ptr [esp + 0x1c], edx
// 008aeed6  8d040f               lea eax, [edi + ecx]
// 008aeed9  0f94c2               sete dl
// 008aeedc  89442414             mov dword ptr [esp + 0x14], eax
// 008aeee0  2bc1                 sub eax, ecx
// 008aeee2  8d149510000000       lea edx, [edx*4 + 0x10]
// 008aeee9  52                   push edx
// 008aeeea  8b542414             mov edx, dword ptr [esp + 0x14]
// 008aeeee  50                   push eax
// 008aeeef  8b442410             mov eax, dword ptr [esp + 0x10]
// 008aeef3  2bd0                 sub edx, eax
// 008aeef5  52                   push edx
// 008aeef6  51                   push ecx
// 008aeef7  50                   push eax
// 008aeef8  a180d79800           mov eax, dword ptr [0x98d780]
// 008aeefd  50                   push eax
// 008aeefe  8bce                 mov ecx, esi
// 008aef00  e8274df4ff           call 0x7f3c2c
// 008aef05  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008aef08  6a00                 push 0
// 008aef0a  6a00                 push 0
// 008aef0c  51                   push ecx
// 008aef0d  ff15e8cb9800         call dword ptr [0x98cbe8]
// 008aef13  5f                   pop edi
// 008aef14  5e                   pop esi
// 008aef15  83c410               add esp, 0x10
// 008aef18  c20400               ret 4
// copied from an identical function in another client (function ?DoSlideStep@CXTPDockingPaneMiniWnd@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneMiniWnd.cpp