// roc 2011-06 0077edc0  unit: lua_exception  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077edc0
//
// 0077edc0  68c0000000           push 0xc0
// 0077edc5  6a00                 push 0
// 0077edc7  6a00                 push 0
// 0077edc9  57                   push edi
// 0077edca  e871c00500           call 0x7dae40
// 0077edcf  68d0020000           push 0x2d0
// 0077edd4  6a00                 push 0
// 0077edd6  894628               mov dword ptr [esi + 0x28], eax
// 0077edd9  894614               mov dword ptr [esi + 0x14], eax
// 0077eddc  05a8000000           add eax, 0xa8
// 0077ede1  6a00                 push 0
// 0077ede3  57                   push edi
// 0077ede4  c7463008000000       mov dword ptr [esi + 0x30], 8
// 0077edeb  894624               mov dword ptr [esi + 0x24], eax
// 0077edee  e84dc00500           call 0x7dae40
// 0077edf3  8b5614               mov edx, dword ptr [esi + 0x14]
// 0077edf6  894608               mov dword ptr [esi + 8], eax
// 0077edf9  894620               mov dword ptr [esi + 0x20], eax
// 0077edfc  8d8870020000         lea ecx, [eax + 0x270]
// 0077ee02  894e1c               mov dword ptr [esi + 0x1c], ecx
// 0077ee05  c7462c2d000000       mov dword ptr [esi + 0x2c], 0x2d
// 0077ee0c  894204               mov dword ptr [edx + 4], eax
// 0077ee0f  8b4608               mov eax, dword ptr [esi + 8]
// 0077ee12  c7400800000000       mov dword ptr [eax + 8], 0
// 0077ee19  83460810             add dword ptr [esi + 8], 0x10
// 0077ee1d  8b4608               mov eax, dword ptr [esi + 8]
// 0077ee20  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0077ee23  8901                 mov dword ptr [ecx], eax
// 0077ee25  8b4614               mov eax, dword ptr [esi + 0x14]
// 0077ee28  8b4e08               mov ecx, dword ptr [esi + 8]
// 0077ee2b  8b10                 mov edx, dword ptr [eax]
// 0077ee2d  81c140010000         add ecx, 0x140
// 0077ee33  89560c               mov dword ptr [esi + 0xc], edx
// 0077ee36  83c420               add esp, 0x20
// 0077ee39  894808               mov dword ptr [eax + 8], ecx
// 0077ee3c  c3                   ret 
// library lua-5.1.4/lstate.c (function _stack_init)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstate.c
