// roc 2010-06 00863cf0  unit: CXTPDockingPaneMiniWnd  size: 499 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00863cf0
//
// 00863cf0  8b442404             mov eax, dword ptr [esp + 4]
// 00863cf4  83ec18               sub esp, 0x18
// 00863cf7  56                   push esi
// 00863cf8  8bf1                 mov esi, ecx
// 00863cfa  3d29090000           cmp eax, 0x929
// 00863cff  7568                 jne 0x863d69
// 00863d01  8d442404             lea eax, [esp + 4]
// 00863d05  50                   push eax
// 00863d06  ff1574bc9e00         call dword ptr [0x9ebc74]
// 00863d0c  56                   push esi
// 00863d0d  8d4c2410             lea ecx, [esp + 0x10]
// 00863d11  e89ab5f9ff           call 0x7ff2b0
// 00863d16  8d8ef8000000         lea ecx, [esi + 0xf8]
// 00863d1c  e8ff0b0000           call 0x864920
// 00863d21  8b4878               mov ecx, dword ptr [eax + 0x78]
// 00863d24  8b542410             mov edx, dword ptr [esp + 0x10]
// 00863d28  8d441104             lea eax, [ecx + edx + 4]
// 00863d2c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00863d30  8b542404             mov edx, dword ptr [esp + 4]
// 00863d34  51                   push ecx
// 00863d35  8944241c             mov dword ptr [esp + 0x1c], eax
// 00863d39  52                   push edx
// 00863d3a  8d442414             lea eax, [esp + 0x14]
// 00863d3e  50                   push eax
// 00863d3f  ff15e0bb9e00         call dword ptr [0x9ebbe0]
// 00863d45  85c0                 test eax, eax
// 00863d47  0f8588010000         jne 0x863ed5
// 00863d4d  83c8ff               or eax, 0xffffffff
// 00863d50  0bc8                 or ecx, eax
// 00863d52  51                   push ecx
// 00863d53  8b8e24010000         mov ecx, dword ptr [esi + 0x124]
// 00863d59  50                   push eax
// 00863d5a  e8010c0000           call 0x864960
// 00863d5f  6829090000           push 0x929
// 00863d64  e962010000           jmp 0x863ecb
// 00863d69  83f803               cmp eax, 3
// 00863d6c  7568                 jne 0x863dd6
// 00863d6e  83be5001000000       cmp dword ptr [esi + 0x150], 0
// 00863d75  0f845a010000         je 0x863ed5
// 00863d7b  ff8e40010000         dec dword ptr [esi + 0x140]
// 00863d81  83be40010000ff       cmp dword ptr [esi + 0x140], -1
// 00863d88  7e15                 jle 0x863d9f
// 00863d8a  6a00                 push 0
// 00863d8c  e8cff1ffff           call 0x862f60
// 00863d91  8bce                 mov ecx, esi
// 00863d93  e8d841f4ff           call 0x7a7f70
// 00863d98  5e                   pop esi
// 00863d99  83c418               add esp, 0x18
// 00863d9c  c20400               ret 4
// 00863d9f  8b5620               mov edx, dword ptr [esi + 0x20]
// 00863da2  6a03                 push 3
// 00863da4  52                   push edx
// 00863da5  c7865001000000000000 mov dword ptr [esi + 0x150], 0
// 00863daf  c7864c01000000000000 mov dword ptr [esi + 0x14c], 0
// 00863db9  ff1560ba9e00         call dword ptr [0x9eba60]
// 00863dbf  6a0b                 push 0xb
// 00863dc1  8bce                 mov ecx, esi
// 00863dc3  e808fdffff           call 0x863ad0
// 00863dc8  8bce                 mov ecx, esi
// 00863dca  e8a141f4ff           call 0x7a7f70
// 00863dcf  5e                   pop esi
// 00863dd0  83c418               add esp, 0x18
// 00863dd3  c20400               ret 4
// 00863dd6  83f801               cmp eax, 1
// 00863dd9  0f85f6000000         jne 0x863ed5
// 00863ddf  8d442404             lea eax, [esp + 4]
// 00863de3  50                   push eax
// 00863de4  ff1574bc9e00         call dword ptr [0x9ebc74]
// 00863dea  ff1580ba9e00         call dword ptr [0x9eba80]
// 00863df0  50                   push eax
// 00863df1  e8743ef4ff           call 0x7a7c6a
// 00863df6  85c0                 test eax, eax
// 00863df8  7422                 je 0x863e1c
// 00863dfa  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00863dfd  85c9                 test ecx, ecx
// 00863dff  741b                 je 0x863e1c
// 00863e01  3bc6                 cmp eax, esi
// 00863e03  0f84cc000000         je 0x863ed5
// 00863e09  51                   push ecx
// 00863e0a  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00863e0d  51                   push ecx
// 00863e0e  ff15acba9e00         call dword ptr [0x9ebaac]
// 00863e14  85c0                 test eax, eax
// 00863e16  0f85b9000000         jne 0x863ed5
// 00863e1c  83be5001000000       cmp dword ptr [esi + 0x150], 0
// 00863e23  0f85ac000000         jne 0x863ed5
// 00863e29  53                   push ebx
// 00863e2a  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00863e2e  57                   push edi
// 00863e2f  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00863e33  56                   push esi
// 00863e34  8d4c2418             lea ecx, [esp + 0x18]
// 00863e38  e873b4f9ff           call 0x7ff2b0
// 00863e3d  53                   push ebx
// 00863e3e  57                   push edi
// 00863e3f  50                   push eax
// 00863e40  ff15e0bb9e00         call dword ptr [0x9ebbe0]
// 00863e46  5f                   pop edi
// 00863e47  5b                   pop ebx
// 00863e48  85c0                 test eax, eax
// 00863e4a  0f8585000000         jne 0x863ed5
// 00863e50  ff1584bc9e00         call dword ptr [0x9ebc84]
// 00863e56  85c0                 test eax, eax
// 00863e58  757b                 jne 0x863ed5
// 00863e5a  ff8e44010000         dec dword ptr [esi + 0x144]
// 00863e60  398644010000         cmp dword ptr [esi + 0x144], eax
// 00863e66  7f6d                 jg 0x863ed5
// 00863e68  6a0a                 push 0xa
// 00863e6a  8bce                 mov ecx, esi
// 00863e6c  e85ffcffff           call 0x863ad0
// 00863e71  85c0                 test eax, eax
// 00863e73  7411                 je 0x863e86
// 00863e75  c7864401000006000000 mov dword ptr [esi + 0x144], 6
// 00863e7f  5e                   pop esi
// 00863e80  83c418               add esp, 0x18
// 00863e83  c20400               ret 4
// 00863e86  8b9640010000         mov edx, dword ptr [esi + 0x140]
// 00863e8c  3b963c010000         cmp edx, dword ptr [esi + 0x13c]
// 00863e92  7516                 jne 0x863eaa
// 00863e94  56                   push esi
// 00863e95  8d4c2410             lea ecx, [esp + 0x10]
// 00863e99  e812b4f9ff           call 0x7ff2b0
// 00863e9e  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00863ea1  2b4804               sub ecx, dword ptr [eax + 4]
// 00863ea4  898e38010000         mov dword ptr [esi + 0x138], ecx
// 00863eaa  8b4620               mov eax, dword ptr [esi + 0x20]
// 00863ead  6a00                 push 0
// 00863eaf  c7865001000001000000 mov dword ptr [esi + 0x150], 1
// 00863eb9  8b15689cbe00         mov edx, dword ptr [0xbe9c68]
// 00863ebf  52                   push edx
// 00863ec0  6a03                 push 3
// 00863ec2  50                   push eax
// 00863ec3  ff1554bc9e00         call dword ptr [0x9ebc54]
// 00863ec9  6a01                 push 1
// 00863ecb  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00863ece  51                   push ecx
// 00863ecf  ff1560ba9e00         call dword ptr [0x9eba60]
// 00863ed5  8bce                 mov ecx, esi
// 00863ed7  e89440f4ff           call 0x7a7f70
// 00863edc  5e                   pop esi
// 00863edd  83c418               add esp, 0x18
// 00863ee0  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnTimer@CXTPDockingPaneMiniWnd@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
