// roc 2009-06 007cf2d0  unit: CXTPDockingPaneAutoHideWnd  size: 656 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007cf2d0
//
// 007cf2d0  83ec18               sub esp, 0x18
// 007cf2d3  56                   push esi
// 007cf2d4  8bf1                 mov esi, ecx
// 007cf2d6  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007cf2da  83f904               cmp ecx, 4
// 007cf2dd  750e                 jne 0x7cf2ed
// 007cf2df  8bce                 mov ecx, esi
// 007cf2e1  e83affffff           call 0x7cf220
// 007cf2e6  5e                   pop esi
// 007cf2e7  83c418               add esp, 0x18
// 007cf2ea  c20400               ret 4
// 007cf2ed  83bef800000000       cmp dword ptr [esi + 0xf8], 0
// 007cf2f4  0f845f020000         je 0x7cf559
// 007cf2fa  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 007cf300  85c0                 test eax, eax
// 007cf302  740c                 je 0x7cf310
// 007cf304  39b0a8000000         cmp dword ptr [eax + 0xa8], esi
// 007cf30a  0f8549020000         jne 0x7cf559
// 007cf310  83f901               cmp ecx, 1
// 007cf313  0f8564010000         jne 0x7cf47d
// 007cf319  83be2801000000       cmp dword ptr [esi + 0x128], 0
// 007cf320  0f8533020000         jne 0x7cf559
// 007cf326  8d442404             lea eax, [esp + 4]
// 007cf32a  50                   push eax
// 007cf32b  ff152cee8900         call dword ptr [0x89ee2c]
// 007cf331  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 007cf337  83b99401000000       cmp dword ptr [ecx + 0x194], 0
// 007cf33e  0f85f1000000         jne 0x7cf435
// 007cf344  8b542408             mov edx, dword ptr [esp + 8]
// 007cf348  8b442404             mov eax, dword ptr [esp + 4]
// 007cf34c  52                   push edx
// 007cf34d  50                   push eax
// 007cf34e  56                   push esi
// 007cf34f  8d4c2418             lea ecx, [esp + 0x18]
// 007cf353  e81811faff           call 0x770470
// 007cf358  8bc8                 mov ecx, eax
// 007cf35a  e831cdc7ff           call 0x44c090
// 007cf35f  85c0                 test eax, eax
// 007cf361  0f85ce000000         jne 0x7cf435
// 007cf367  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007cf36b  8b542404             mov edx, dword ptr [esp + 4]
// 007cf36f  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 007cf375  51                   push ecx
// 007cf376  52                   push edx
// 007cf377  50                   push eax
// 007cf378  8d4c2418             lea ecx, [esp + 0x18]
// 007cf37c  e8ef10faff           call 0x770470
// 007cf381  8bc8                 mov ecx, eax
// 007cf383  e808cdc7ff           call 0x44c090
// 007cf388  85c0                 test eax, eax
// 007cf38a  0f85a5000000         jne 0x7cf435
// 007cf390  398610010000         cmp dword ptr [esi + 0x110], eax
// 007cf396  0f85bd010000         jne 0x7cf559
// 007cf39c  ff8e24010000         dec dword ptr [esi + 0x124]
// 007cf3a2  398624010000         cmp dword ptr [esi + 0x124], eax
// 007cf3a8  0f8fab010000         jg 0x7cf559
// 007cf3ae  8d4e04               lea ecx, [esi + 4]
// 007cf3b1  51                   push ecx
// 007cf3b2  898624010000         mov dword ptr [esi + 0x124], eax
// 007cf3b8  ff15d0e18900         call dword ptr [0x89e1d0]
// 007cf3be  833de88ba20000       cmp dword ptr [0xa28be8], 0
// 007cf3c5  7456                 je 0x7cf41d
// 007cf3c7  8b96f8000000         mov edx, dword ptr [esi + 0xf8]
// 007cf3cd  8b82a4010000         mov eax, dword ptr [edx + 0x1a4]
// 007cf3d3  6a00                 push 0
// 007cf3d5  6a00                 push 0
// 007cf3d7  50                   push eax
// 007cf3d8  6a0a                 push 0xa
// 007cf3da  8bce                 mov ecx, esi
// 007cf3dc  e89ff9ffff           call 0x7ced80
// 007cf3e1  8bc8                 mov ecx, eax
// 007cf3e3  e8c8e3f8ff           call 0x75d7b0
// 007cf3e8  85c0                 test eax, eax
// 007cf3ea  7531                 jne 0x7cf41d
// 007cf3ec  8b4620               mov eax, dword ptr [esi + 0x20]
// 007cf3ef  c7861001000001000000 mov dword ptr [esi + 0x110], 1
// 007cf3f9  85c0                 test eax, eax
// 007cf3fb  742a                 je 0x7cf427
// 007cf3fd  8b0de08ba200         mov ecx, dword ptr [0xa28be0]
// 007cf403  6a00                 push 0
// 007cf405  51                   push ecx
// 007cf406  6a03                 push 3
// 007cf408  50                   push eax
// 007cf409  ff150cee8900         call dword ptr [0x89ee0c]
// 007cf40f  8bce                 mov ecx, esi
// 007cf411  e8929bf4ff           call 0x718fa8
// 007cf416  5e                   pop esi
// 007cf417  83c418               add esp, 0x18
// 007cf41a  c20400               ret 4
// 007cf41d  c7862401000006000000 mov dword ptr [esi + 0x124], 6
// 007cf427  8bce                 mov ecx, esi
// 007cf429  e87a9bf4ff           call 0x718fa8
// 007cf42e  5e                   pop esi
// 007cf42f  83c418               add esp, 0x18
// 007cf432  c20400               ret 4
// 007cf435  83be1001000000       cmp dword ptr [esi + 0x110], 0
// 007cf43c  c7862401000006000000 mov dword ptr [esi + 0x124], 6
// 007cf446  0f840d010000         je 0x7cf559
// 007cf44c  8b5620               mov edx, dword ptr [esi + 0x20]
// 007cf44f  6a03                 push 3
// 007cf451  52                   push edx
// 007cf452  c7861001000000000000 mov dword ptr [esi + 0x110], 0
// 007cf45c  ff1584ee8900         call dword ptr [0x89ee84]
// 007cf462  a1e08ba200           mov eax, dword ptr [0xa28be0]
// 007cf467  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007cf46a  6a00                 push 0
// 007cf46c  50                   push eax
// 007cf46d  6a02                 push 2
// 007cf46f  51                   push ecx
// 007cf470  ff150cee8900         call dword ptr [0x89ee0c]
// 007cf476  5e                   pop esi
// 007cf477  83c418               add esp, 0x18
// 007cf47a  c20400               ret 4
// 007cf47d  83f903               cmp ecx, 3
// 007cf480  7571                 jne 0x7cf4f3
// 007cf482  83be1001000000       cmp dword ptr [esi + 0x110], 0
// 007cf489  0f84ca000000         je 0x7cf559
// 007cf48f  ff8e08010000         dec dword ptr [esi + 0x108]
// 007cf495  83be08010000ff       cmp dword ptr [esi + 0x108], -1
// 007cf49c  7f79                 jg 0x7cf517
// 007cf49e  8b5620               mov edx, dword ptr [esi + 0x20]
// 007cf4a1  51                   push ecx
// 007cf4a2  52                   push edx
// 007cf4a3  c7861001000000000000 mov dword ptr [esi + 0x110], 0
// 007cf4ad  ff1584ee8900         call dword ptr [0x89ee84]
// 007cf4b3  8d4604               lea eax, [esi + 4]
// 007cf4b6  50                   push eax
// 007cf4b7  ff15d0e18900         call dword ptr [0x89e1d0]
// 007cf4bd  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 007cf4c3  8b81a4010000         mov eax, dword ptr [ecx + 0x1a4]
// 007cf4c9  6a00                 push 0
// 007cf4cb  6a00                 push 0
// 007cf4cd  50                   push eax
// 007cf4ce  6a0b                 push 0xb
// 007cf4d0  8bce                 mov ecx, esi
// 007cf4d2  e8a9f8ffff           call 0x7ced80
// 007cf4d7  8bc8                 mov ecx, eax
// 007cf4d9  e8d2e2f8ff           call 0x75d7b0
// 007cf4de  8bce                 mov ecx, esi
// 007cf4e0  e83bfdffff           call 0x7cf220
// 007cf4e5  8bce                 mov ecx, esi
// 007cf4e7  e8bc9af4ff           call 0x718fa8
// 007cf4ec  5e                   pop esi
// 007cf4ed  83c418               add esp, 0x18
// 007cf4f0  c20400               ret 4
// 007cf4f3  83f902               cmp ecx, 2
// 007cf4f6  7561                 jne 0x7cf559
// 007cf4f8  83be1001000000       cmp dword ptr [esi + 0x110], 0
// 007cf4ff  7558                 jne 0x7cf559
// 007cf501  ff8608010000         inc dword ptr [esi + 0x108]
// 007cf507  8b8e08010000         mov ecx, dword ptr [esi + 0x108]
// 007cf50d  8b860c010000         mov eax, dword ptr [esi + 0x10c]
// 007cf513  3bc8                 cmp ecx, eax
// 007cf515  7d0e                 jge 0x7cf525
// 007cf517  8bce                 mov ecx, esi
// 007cf519  e8c2faffff           call 0x7cefe0
// 007cf51e  5e                   pop esi
// 007cf51f  83c418               add esp, 0x18
// 007cf522  c20400               ret 4
// 007cf525  8b5620               mov edx, dword ptr [esi + 0x20]
// 007cf528  6a02                 push 2
// 007cf52a  48                   dec eax
// 007cf52b  52                   push edx
// 007cf52c  898608010000         mov dword ptr [esi + 0x108], eax
// 007cf532  ff1584ee8900         call dword ptr [0x89ee84]
// 007cf538  8b86f8000000         mov eax, dword ptr [esi + 0xf8]
// 007cf53e  8b80a4010000         mov eax, dword ptr [eax + 0x1a4]
// 007cf544  6a00                 push 0
// 007cf546  6a00                 push 0
// 007cf548  50                   push eax
// 007cf549  6a0d                 push 0xd
// 007cf54b  8bce                 mov ecx, esi
// 007cf54d  e82ef8ffff           call 0x7ced80
// 007cf552  8bc8                 mov ecx, eax
// 007cf554  e857e2f8ff           call 0x75d7b0
// 007cf559  5e                   pop esi
// 007cf55a  83c418               add esp, 0x18
// 007cf55d  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?OnTimer@CXTPDockingPaneAutoHideWnd@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
