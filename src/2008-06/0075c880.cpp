// roc 2008-06 0075c880  unit: CXTPDockingPaneMiniWnd  size: 499 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075c880
//
// 0075c880  8b442404             mov eax, dword ptr [esp + 4]
// 0075c884  83ec18               sub esp, 0x18
// 0075c887  56                   push esi
// 0075c888  8bf1                 mov esi, ecx
// 0075c88a  3d29090000           cmp eax, 0x929
// 0075c88f  7568                 jne 0x75c8f9
// 0075c891  8d442404             lea eax, [esp + 4]
// 0075c895  50                   push eax
// 0075c896  ff159c2d8000         call dword ptr [0x802d9c]
// 0075c89c  56                   push esi
// 0075c89d  8d4c2410             lea ecx, [esp + 0x10]
// 0075c8a1  e82ab2f9ff           call 0x6f7ad0
// 0075c8a6  8d8ef8000000         lea ecx, [esi + 0xf8]
// 0075c8ac  e8ff0b0000           call 0x75d4b0
// 0075c8b1  8b4878               mov ecx, dword ptr [eax + 0x78]
// 0075c8b4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0075c8b8  8d441104             lea eax, [ecx + edx + 4]
// 0075c8bc  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0075c8c0  8b542404             mov edx, dword ptr [esp + 4]
// 0075c8c4  51                   push ecx
// 0075c8c5  8944241c             mov dword ptr [esp + 0x1c], eax
// 0075c8c9  52                   push edx
// 0075c8ca  8d442414             lea eax, [esp + 0x14]
// 0075c8ce  50                   push eax
// 0075c8cf  ff152c2d8000         call dword ptr [0x802d2c]
// 0075c8d5  85c0                 test eax, eax
// 0075c8d7  0f8588010000         jne 0x75ca65
// 0075c8dd  83c8ff               or eax, 0xffffffff
// 0075c8e0  0bc8                 or ecx, eax
// 0075c8e2  51                   push ecx
// 0075c8e3  8b8e24010000         mov ecx, dword ptr [esi + 0x124]
// 0075c8e9  50                   push eax
// 0075c8ea  e8110c0000           call 0x75d500
// 0075c8ef  6829090000           push 0x929
// 0075c8f4  e962010000           jmp 0x75ca5b
// 0075c8f9  83f803               cmp eax, 3
// 0075c8fc  7568                 jne 0x75c966
// 0075c8fe  83be5001000000       cmp dword ptr [esi + 0x150], 0
// 0075c905  0f845a010000         je 0x75ca65
// 0075c90b  ff8e40010000         dec dword ptr [esi + 0x140]
// 0075c911  83be40010000ff       cmp dword ptr [esi + 0x140], -1
// 0075c918  7e15                 jle 0x75c92f
// 0075c91a  6a00                 push 0
// 0075c91c  e8cff1ffff           call 0x75baf0
// 0075c921  8bce                 mov ecx, esi
// 0075c923  e84043f4ff           call 0x6a0c68
// 0075c928  5e                   pop esi
// 0075c929  83c418               add esp, 0x18
// 0075c92c  c20400               ret 4
// 0075c92f  8b5620               mov edx, dword ptr [esi + 0x20]
// 0075c932  6a03                 push 3
// 0075c934  52                   push edx
// 0075c935  c7865001000000000000 mov dword ptr [esi + 0x150], 0
// 0075c93f  c7864c01000000000000 mov dword ptr [esi + 0x14c], 0
// 0075c949  ff151c2e8000         call dword ptr [0x802e1c]
// 0075c94f  6a0b                 push 0xb
// 0075c951  8bce                 mov ecx, esi
// 0075c953  e808fdffff           call 0x75c660
// 0075c958  8bce                 mov ecx, esi
// 0075c95a  e80943f4ff           call 0x6a0c68
// 0075c95f  5e                   pop esi
// 0075c960  83c418               add esp, 0x18
// 0075c963  c20400               ret 4
// 0075c966  83f801               cmp eax, 1
// 0075c969  0f85f6000000         jne 0x75ca65
// 0075c96f  8d442404             lea eax, [esp + 4]
// 0075c973  50                   push eax
// 0075c974  ff159c2d8000         call dword ptr [0x802d9c]
// 0075c97a  ff15102e8000         call dword ptr [0x802e10]
// 0075c980  50                   push eax
// 0075c981  e85842f4ff           call 0x6a0bde
// 0075c986  85c0                 test eax, eax
// 0075c988  7422                 je 0x75c9ac
// 0075c98a  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0075c98d  85c9                 test ecx, ecx
// 0075c98f  741b                 je 0x75c9ac
// 0075c991  3bc6                 cmp eax, esi
// 0075c993  0f84cc000000         je 0x75ca65
// 0075c999  51                   push ecx
// 0075c99a  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0075c99d  51                   push ecx
// 0075c99e  ff15742b8000         call dword ptr [0x802b74]
// 0075c9a4  85c0                 test eax, eax
// 0075c9a6  0f85b9000000         jne 0x75ca65
// 0075c9ac  83be5001000000       cmp dword ptr [esi + 0x150], 0
// 0075c9b3  0f85ac000000         jne 0x75ca65
// 0075c9b9  53                   push ebx
// 0075c9ba  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0075c9be  57                   push edi
// 0075c9bf  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0075c9c3  56                   push esi
// 0075c9c4  8d4c2418             lea ecx, [esp + 0x18]
// 0075c9c8  e803b1f9ff           call 0x6f7ad0
// 0075c9cd  53                   push ebx
// 0075c9ce  57                   push edi
// 0075c9cf  50                   push eax
// 0075c9d0  ff152c2d8000         call dword ptr [0x802d2c]
// 0075c9d6  5f                   pop edi
// 0075c9d7  5b                   pop ebx
// 0075c9d8  85c0                 test eax, eax
// 0075c9da  0f8585000000         jne 0x75ca65
// 0075c9e0  ff15ac2d8000         call dword ptr [0x802dac]
// 0075c9e6  85c0                 test eax, eax
// 0075c9e8  757b                 jne 0x75ca65
// 0075c9ea  ff8e44010000         dec dword ptr [esi + 0x144]
// 0075c9f0  398644010000         cmp dword ptr [esi + 0x144], eax
// 0075c9f6  7f6d                 jg 0x75ca65
// 0075c9f8  6a0a                 push 0xa
// 0075c9fa  8bce                 mov ecx, esi
// 0075c9fc  e85ffcffff           call 0x75c660
// 0075ca01  85c0                 test eax, eax
// 0075ca03  7411                 je 0x75ca16
// 0075ca05  c7864401000006000000 mov dword ptr [esi + 0x144], 6
// 0075ca0f  5e                   pop esi
// 0075ca10  83c418               add esp, 0x18
// 0075ca13  c20400               ret 4
// 0075ca16  8b9640010000         mov edx, dword ptr [esi + 0x140]
// 0075ca1c  3b963c010000         cmp edx, dword ptr [esi + 0x13c]
// 0075ca22  7516                 jne 0x75ca3a
// 0075ca24  56                   push esi
// 0075ca25  8d4c2410             lea ecx, [esp + 0x10]
// 0075ca29  e8a2b0f9ff           call 0x6f7ad0
// 0075ca2e  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0075ca31  2b4804               sub ecx, dword ptr [eax + 4]
// 0075ca34  898e38010000         mov dword ptr [esi + 0x138], ecx
// 0075ca3a  8b4620               mov eax, dword ptr [esi + 0x20]
// 0075ca3d  6a00                 push 0
// 0075ca3f  c7865001000001000000 mov dword ptr [esi + 0x150], 1
// 0075ca49  8b15b0999600         mov edx, dword ptr [0x9699b0]
// 0075ca4f  52                   push edx
// 0075ca50  6a03                 push 3
// 0075ca52  50                   push eax
// 0075ca53  ff157c2d8000         call dword ptr [0x802d7c]
// 0075ca59  6a01                 push 1
// 0075ca5b  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0075ca5e  51                   push ecx
// 0075ca5f  ff151c2e8000         call dword ptr [0x802e1c]
// 0075ca65  8bce                 mov ecx, esi
// 0075ca67  e8fc41f4ff           call 0x6a0c68
// 0075ca6c  5e                   pop esi
// 0075ca6d  83c418               add esp, 0x18
// 0075ca70  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnTimer@CXTPDockingPaneMiniWnd@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
