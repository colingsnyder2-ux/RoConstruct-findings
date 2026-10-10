// from server: 100% by tester
// roc 2008-06 006f1f80  unit: CXTPControls  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f1f80
//
// 006f1f80  8b442408             mov eax, dword ptr [esp + 8]
// 006f1f84  83ec08               sub esp, 8
// 006f1f87  56                   push esi
// 006f1f88  8bf1                 mov esi, ecx
// 006f1f8a  89463c               mov dword ptr [esi + 0x3c], eax
// 006f1f8d  33c0                 xor eax, eax
// 006f1f8f  8d4e10               lea ecx, [esi + 0x10]
// 006f1f92  51                   push ecx
// 006f1f93  89462c               mov dword ptr [esi + 0x2c], eax
// 006f1f96  894630               mov dword ptr [esi + 0x30], eax
// 006f1f99  ff157c2c8000         call dword ptr [0x802c7c]
// 006f1f9f  8b442410             mov eax, dword ptr [esp + 0x10]
// 006f1fa3  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 006f1fa6  8b11                 mov edx, dword ptr [ecx]
// 006f1fa8  8b929c000000         mov edx, dword ptr [edx + 0x9c]
// 006f1fae  50                   push eax
// 006f1faf  8d442408             lea eax, [esp + 8]
// 006f1fb3  50                   push eax
// 006f1fb4  ffd2                 call edx
// 006f1fb6  8b08                 mov ecx, dword ptr [eax]
// 006f1fb8  894e20               mov dword ptr [esi + 0x20], ecx
// 006f1fbb  8b5004               mov edx, dword ptr [eax + 4]
// 006f1fbe  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 006f1fc1  895624               mov dword ptr [esi + 0x24], edx
// 006f1fc4  8b81c0000000         mov eax, dword ptr [ecx + 0xc0]
// 006f1fca  8906                 mov dword ptr [esi], eax
// 006f1fcc  8b91c4000000         mov edx, dword ptr [ecx + 0xc4]
// 006f1fd2  895604               mov dword ptr [esi + 4], edx
// 006f1fd5  8b81c8000000         mov eax, dword ptr [ecx + 0xc8]
// 006f1fdb  894608               mov dword ptr [esi + 8], eax
// 006f1fde  8b91cc000000         mov edx, dword ptr [ecx + 0xcc]
// 006f1fe4  89560c               mov dword ptr [esi + 0xc], edx
// 006f1fe7  8b8198000000         mov eax, dword ptr [ecx + 0x98]
// 006f1fed  894634               mov dword ptr [esi + 0x34], eax
// 006f1ff0  8b11                 mov edx, dword ptr [ecx]
// 006f1ff2  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 006f1ff8  6a02                 push 2
// 006f1ffa  ffd0                 call eax
// 006f1ffc  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 006f1fff  894628               mov dword ptr [esi + 0x28], eax
// 006f2002  e8898ffbff           call 0x6aaf90
// 006f2007  894638               mov dword ptr [esi + 0x38], eax
// 006f200a  5e                   pop esi
// 006f200b  83c408               add esp, 8
// 006f200e  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControls.cpp (function ?Attach@XTPBUTTONINFO@CXTPControls@@QAEXPAVCDC@@PAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControls.cpp
