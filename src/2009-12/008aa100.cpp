// roc 2009-12 008aa100  unit: CXTPDockingPaneAutoHideWnd  size: 656 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008aa100
//
// 008aa100  83ec18               sub esp, 0x18
// 008aa103  56                   push esi
// 008aa104  8bf1                 mov esi, ecx
// 008aa106  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008aa10a  83f904               cmp ecx, 4
// 008aa10d  750e                 jne 0x8aa11d
// 008aa10f  8bce                 mov ecx, esi
// 008aa111  e83affffff           call 0x8aa050
// 008aa116  5e                   pop esi
// 008aa117  83c418               add esp, 0x18
// 008aa11a  c20400               ret 4
// 008aa11d  83bef800000000       cmp dword ptr [esi + 0xf8], 0
// 008aa124  0f845f020000         je 0x8aa389
// 008aa12a  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 008aa130  85c0                 test eax, eax
// 008aa132  740c                 je 0x8aa140
// 008aa134  39b0a8000000         cmp dword ptr [eax + 0xa8], esi
// 008aa13a  0f8549020000         jne 0x8aa389
// 008aa140  83f901               cmp ecx, 1
// 008aa143  0f8564010000         jne 0x8aa2ad
// 008aa149  83be2801000000       cmp dword ptr [esi + 0x128], 0
// 008aa150  0f8533020000         jne 0x8aa389
// 008aa156  8d442404             lea eax, [esp + 4]
// 008aa15a  50                   push eax
// 008aa15b  ff1538cc9800         call dword ptr [0x98cc38]
// 008aa161  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 008aa167  83b99401000000       cmp dword ptr [ecx + 0x194], 0
// 008aa16e  0f85f1000000         jne 0x8aa265
// 008aa174  8b542408             mov edx, dword ptr [esp + 8]
// 008aa178  8b442404             mov eax, dword ptr [esp + 4]
// 008aa17c  52                   push edx
// 008aa17d  50                   push eax
// 008aa17e  56                   push esi
// 008aa17f  8d4c2418             lea ecx, [esp + 0x18]
// 008aa183  e8e810faff           call 0x84b270
// 008aa188  8bc8                 mov ecx, eax
// 008aa18a  e82185baff           call 0x4526b0
// 008aa18f  85c0                 test eax, eax
// 008aa191  0f85ce000000         jne 0x8aa265
// 008aa197  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008aa19b  8b542404             mov edx, dword ptr [esp + 4]
// 008aa19f  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 008aa1a5  51                   push ecx
// 008aa1a6  52                   push edx
// 008aa1a7  50                   push eax
// 008aa1a8  8d4c2418             lea ecx, [esp + 0x18]
// 008aa1ac  e8bf10faff           call 0x84b270
// 008aa1b1  8bc8                 mov ecx, eax
// 008aa1b3  e8f884baff           call 0x4526b0
// 008aa1b8  85c0                 test eax, eax
// 008aa1ba  0f85a5000000         jne 0x8aa265
// 008aa1c0  398610010000         cmp dword ptr [esi + 0x110], eax
// 008aa1c6  0f85bd010000         jne 0x8aa389
// 008aa1cc  ff8e24010000         dec dword ptr [esi + 0x124]
// 008aa1d2  398624010000         cmp dword ptr [esi + 0x124], eax
// 008aa1d8  0f8fab010000         jg 0x8aa389
// 008aa1de  8d4e04               lea ecx, [esi + 4]
// 008aa1e1  51                   push ecx
// 008aa1e2  898624010000         mov dword ptr [esi + 0x124], eax
// 008aa1e8  ff150cb29800         call dword ptr [0x98b20c]
// 008aa1ee  833db88eb60000       cmp dword ptr [0xb68eb8], 0
// 008aa1f5  7456                 je 0x8aa24d
// 008aa1f7  8b96f8000000         mov edx, dword ptr [esi + 0xf8]
// 008aa1fd  8b82a4010000         mov eax, dword ptr [edx + 0x1a4]
// 008aa203  6a00                 push 0
// 008aa205  6a00                 push 0
// 008aa207  50                   push eax
// 008aa208  6a0a                 push 0xa
// 008aa20a  8bce                 mov ecx, esi
// 008aa20c  e87ff9ffff           call 0x8a9b90
// 008aa211  8bc8                 mov ecx, eax
// 008aa213  e808e3f8ff           call 0x838520
// 008aa218  85c0                 test eax, eax
// 008aa21a  7531                 jne 0x8aa24d
// 008aa21c  8b4620               mov eax, dword ptr [esi + 0x20]
// 008aa21f  c7861001000001000000 mov dword ptr [esi + 0x110], 1
// 008aa229  85c0                 test eax, eax
// 008aa22b  742a                 je 0x8aa257
// 008aa22d  8b0db08eb600         mov ecx, dword ptr [0xb68eb0]
// 008aa233  6a00                 push 0
// 008aa235  51                   push ecx
// 008aa236  6a03                 push 3
// 008aa238  50                   push eax
// 008aa239  ff1558cc9800         call dword ptr [0x98cc58]
// 008aa23f  8bce                 mov ecx, esi
// 008aa241  e8969bf4ff           call 0x7f3ddc
// 008aa246  5e                   pop esi
// 008aa247  83c418               add esp, 0x18
// 008aa24a  c20400               ret 4
// 008aa24d  c7862401000006000000 mov dword ptr [esi + 0x124], 6
// 008aa257  8bce                 mov ecx, esi
// 008aa259  e87e9bf4ff           call 0x7f3ddc
// 008aa25e  5e                   pop esi
// 008aa25f  83c418               add esp, 0x18
// 008aa262  c20400               ret 4
// 008aa265  83be1001000000       cmp dword ptr [esi + 0x110], 0
// 008aa26c  c7862401000006000000 mov dword ptr [esi + 0x124], 6
// 008aa276  0f840d010000         je 0x8aa389
// 008aa27c  8b5620               mov edx, dword ptr [esi + 0x20]
// 008aa27f  6a03                 push 3
// 008aa281  52                   push edx
// 008aa282  c7861001000000000000 mov dword ptr [esi + 0x110], 0
// 008aa28c  ff15d0cb9800         call dword ptr [0x98cbd0]
// 008aa292  a1b08eb600           mov eax, dword ptr [0xb68eb0]
// 008aa297  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008aa29a  6a00                 push 0
// 008aa29c  50                   push eax
// 008aa29d  6a02                 push 2
// 008aa29f  51                   push ecx
// 008aa2a0  ff1558cc9800         call dword ptr [0x98cc58]
// 008aa2a6  5e                   pop esi
// 008aa2a7  83c418               add esp, 0x18
// 008aa2aa  c20400               ret 4
// 008aa2ad  83f903               cmp ecx, 3
// 008aa2b0  7571                 jne 0x8aa323
// 008aa2b2  83be1001000000       cmp dword ptr [esi + 0x110], 0
// 008aa2b9  0f84ca000000         je 0x8aa389
// 008aa2bf  ff8e08010000         dec dword ptr [esi + 0x108]
// 008aa2c5  83be08010000ff       cmp dword ptr [esi + 0x108], -1
// 008aa2cc  7f79                 jg 0x8aa347
// 008aa2ce  8b5620               mov edx, dword ptr [esi + 0x20]
// 008aa2d1  51                   push ecx
// 008aa2d2  52                   push edx
// 008aa2d3  c7861001000000000000 mov dword ptr [esi + 0x110], 0
// 008aa2dd  ff15d0cb9800         call dword ptr [0x98cbd0]
// 008aa2e3  8d4604               lea eax, [esi + 4]
// 008aa2e6  50                   push eax
// 008aa2e7  ff150cb29800         call dword ptr [0x98b20c]
// 008aa2ed  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 008aa2f3  8b81a4010000         mov eax, dword ptr [ecx + 0x1a4]
// 008aa2f9  6a00                 push 0
// 008aa2fb  6a00                 push 0
// 008aa2fd  50                   push eax
// 008aa2fe  6a0b                 push 0xb
// 008aa300  8bce                 mov ecx, esi
// 008aa302  e889f8ffff           call 0x8a9b90
// 008aa307  8bc8                 mov ecx, eax
// 008aa309  e812e2f8ff           call 0x838520
// 008aa30e  8bce                 mov ecx, esi
// 008aa310  e83bfdffff           call 0x8aa050
// 008aa315  8bce                 mov ecx, esi
// 008aa317  e8c09af4ff           call 0x7f3ddc
// 008aa31c  5e                   pop esi
// 008aa31d  83c418               add esp, 0x18
// 008aa320  c20400               ret 4
// 008aa323  83f902               cmp ecx, 2
// 008aa326  7561                 jne 0x8aa389
// 008aa328  83be1001000000       cmp dword ptr [esi + 0x110], 0
// 008aa32f  7558                 jne 0x8aa389
// 008aa331  ff8608010000         inc dword ptr [esi + 0x108]
// 008aa337  8b8e08010000         mov ecx, dword ptr [esi + 0x108]
// 008aa33d  8b860c010000         mov eax, dword ptr [esi + 0x10c]
// 008aa343  3bc8                 cmp ecx, eax
// 008aa345  7d0e                 jge 0x8aa355
// 008aa347  8bce                 mov ecx, esi
// 008aa349  e8c2faffff           call 0x8a9e10
// 008aa34e  5e                   pop esi
// 008aa34f  83c418               add esp, 0x18
// 008aa352  c20400               ret 4
// 008aa355  8b5620               mov edx, dword ptr [esi + 0x20]
// 008aa358  6a02                 push 2
// 008aa35a  48                   dec eax
// 008aa35b  52                   push edx
// 008aa35c  898608010000         mov dword ptr [esi + 0x108], eax
// 008aa362  ff15d0cb9800         call dword ptr [0x98cbd0]
// 008aa368  8b86f8000000         mov eax, dword ptr [esi + 0xf8]
// 008aa36e  8b80a4010000         mov eax, dword ptr [eax + 0x1a4]
// 008aa374  6a00                 push 0
// 008aa376  6a00                 push 0
// 008aa378  50                   push eax
// 008aa379  6a0d                 push 0xd
// 008aa37b  8bce                 mov ecx, esi
// 008aa37d  e80ef8ffff           call 0x8a9b90
// 008aa382  8bc8                 mov ecx, eax
// 008aa384  e897e1f8ff           call 0x838520
// 008aa389  5e                   pop esi
// 008aa38a  83c418               add esp, 0x18
// 008aa38d  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?OnTimer@CXTPDockingPaneAutoHideWnd@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
