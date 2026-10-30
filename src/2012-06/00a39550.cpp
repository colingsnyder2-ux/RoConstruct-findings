// roc 2012-06 00a39550  unit: CXTPDockingPaneMiniWnd  size: 499 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a39550
//
// 00a39550  8b442404             mov eax, dword ptr [esp + 4]
// 00a39554  83ec18               sub esp, 0x18
// 00a39557  56                   push esi
// 00a39558  8bf1                 mov esi, ecx
// 00a3955a  3d29090000           cmp eax, 0x929
// 00a3955f  7568                 jne 0xa395c9
// 00a39561  8d442404             lea eax, [esp + 4]
// 00a39565  50                   push eax
// 00a39566  ff158c3ab200         call dword ptr [0xb23a8c]
// 00a3956c  56                   push esi
// 00a3956d  8d4c2410             lea ecx, [esp + 0x10]
// 00a39571  e8cabbf9ff           call 0x9d5140
// 00a39576  8d8ef8000000         lea ecx, [esi + 0xf8]
// 00a3957c  e8ff0b0000           call 0xa3a180
// 00a39581  8b4878               mov ecx, dword ptr [eax + 0x78]
// 00a39584  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a39588  8d441104             lea eax, [ecx + edx + 4]
// 00a3958c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00a39590  8b542404             mov edx, dword ptr [esp + 4]
// 00a39594  51                   push ecx
// 00a39595  8944241c             mov dword ptr [esp + 0x1c], eax
// 00a39599  52                   push edx
// 00a3959a  8d442414             lea eax, [esp + 0x14]
// 00a3959e  50                   push eax
// 00a3959f  ff15483bb200         call dword ptr [0xb23b48]
// 00a395a5  85c0                 test eax, eax
// 00a395a7  0f8588010000         jne 0xa39735
// 00a395ad  83c8ff               or eax, 0xffffffff
// 00a395b0  0bc8                 or ecx, eax
// 00a395b2  51                   push ecx
// 00a395b3  8b8e24010000         mov ecx, dword ptr [esi + 0x124]
// 00a395b9  50                   push eax
// 00a395ba  e8110c0000           call 0xa3a1d0
// 00a395bf  6829090000           push 0x929
// 00a395c4  e962010000           jmp 0xa3972b
// 00a395c9  83f803               cmp eax, 3
// 00a395cc  7568                 jne 0xa39636
// 00a395ce  83be5001000000       cmp dword ptr [esi + 0x150], 0
// 00a395d5  0f845a010000         je 0xa39735
// 00a395db  ff8e40010000         dec dword ptr [esi + 0x140]
// 00a395e1  83be40010000ff       cmp dword ptr [esi + 0x140], -1
// 00a395e8  7e15                 jle 0xa395ff
// 00a395ea  6a00                 push 0
// 00a395ec  e8cff1ffff           call 0xa387c0
// 00a395f1  8bce                 mov ecx, esi
// 00a395f3  e8e690f4ff           call 0x9826de
// 00a395f8  5e                   pop esi
// 00a395f9  83c418               add esp, 0x18
// 00a395fc  c20400               ret 4
// 00a395ff  8b5620               mov edx, dword ptr [esi + 0x20]
// 00a39602  6a03                 push 3
// 00a39604  52                   push edx
// 00a39605  c7865001000000000000 mov dword ptr [esi + 0x150], 0
// 00a3960f  c7864c01000000000000 mov dword ptr [esi + 0x14c], 0
// 00a39619  ff15083cb200         call dword ptr [0xb23c08]
// 00a3961f  6a0b                 push 0xb
// 00a39621  8bce                 mov ecx, esi
// 00a39623  e808fdffff           call 0xa39330
// 00a39628  8bce                 mov ecx, esi
// 00a3962a  e8af90f4ff           call 0x9826de
// 00a3962f  5e                   pop esi
// 00a39630  83c418               add esp, 0x18
// 00a39633  c20400               ret 4
// 00a39636  83f801               cmp eax, 1
// 00a39639  0f85f6000000         jne 0xa39735
// 00a3963f  8d442404             lea eax, [esp + 4]
// 00a39643  50                   push eax
// 00a39644  ff158c3ab200         call dword ptr [0xb23a8c]
// 00a3964a  ff15e83bb200         call dword ptr [0xb23be8]
// 00a39650  50                   push eax
// 00a39651  e81090f4ff           call 0x982666
// 00a39656  85c0                 test eax, eax
// 00a39658  7422                 je 0xa3967c
// 00a3965a  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00a3965d  85c9                 test ecx, ecx
// 00a3965f  741b                 je 0xa3967c
// 00a39661  3bc6                 cmp eax, esi
// 00a39663  0f84cc000000         je 0xa39735
// 00a39669  51                   push ecx
// 00a3966a  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00a3966d  51                   push ecx
// 00a3966e  ff15143db200         call dword ptr [0xb23d14]
// 00a39674  85c0                 test eax, eax
// 00a39676  0f85b9000000         jne 0xa39735
// 00a3967c  83be5001000000       cmp dword ptr [esi + 0x150], 0
// 00a39683  0f85ac000000         jne 0xa39735
// 00a39689  53                   push ebx
// 00a3968a  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00a3968e  57                   push edi
// 00a3968f  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00a39693  56                   push esi
// 00a39694  8d4c2418             lea ecx, [esp + 0x18]
// 00a39698  e8a3baf9ff           call 0x9d5140
// 00a3969d  53                   push ebx
// 00a3969e  57                   push edi
// 00a3969f  50                   push eax
// 00a396a0  ff15483bb200         call dword ptr [0xb23b48]
// 00a396a6  5f                   pop edi
// 00a396a7  5b                   pop ebx
// 00a396a8  85c0                 test eax, eax
// 00a396aa  0f8585000000         jne 0xa39735
// 00a396b0  ff157c3ab200         call dword ptr [0xb23a7c]
// 00a396b6  85c0                 test eax, eax
// 00a396b8  757b                 jne 0xa39735
// 00a396ba  ff8e44010000         dec dword ptr [esi + 0x144]
// 00a396c0  398644010000         cmp dword ptr [esi + 0x144], eax
// 00a396c6  7f6d                 jg 0xa39735
// 00a396c8  6a0a                 push 0xa
// 00a396ca  8bce                 mov ecx, esi
// 00a396cc  e85ffcffff           call 0xa39330
// 00a396d1  85c0                 test eax, eax
// 00a396d3  7411                 je 0xa396e6
// 00a396d5  c7864401000006000000 mov dword ptr [esi + 0x144], 6
// 00a396df  5e                   pop esi
// 00a396e0  83c418               add esp, 0x18
// 00a396e3  c20400               ret 4
// 00a396e6  8b9640010000         mov edx, dword ptr [esi + 0x140]
// 00a396ec  3b963c010000         cmp edx, dword ptr [esi + 0x13c]
// 00a396f2  7516                 jne 0xa3970a
// 00a396f4  56                   push esi
// 00a396f5  8d4c2410             lea ecx, [esp + 0x10]
// 00a396f9  e842baf9ff           call 0x9d5140
// 00a396fe  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00a39701  2b4804               sub ecx, dword ptr [eax + 4]
// 00a39704  898e38010000         mov dword ptr [esi + 0x138], ecx
// 00a3970a  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a3970d  6a00                 push 0
// 00a3970f  c7865001000001000000 mov dword ptr [esi + 0x150], 1
// 00a39719  8b150063e000         mov edx, dword ptr [0xe06300]
// 00a3971f  52                   push edx
// 00a39720  6a03                 push 3
// 00a39722  50                   push eax
// 00a39723  ff15e03ab200         call dword ptr [0xb23ae0]
// 00a39729  6a01                 push 1
// 00a3972b  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00a3972e  51                   push ecx
// 00a3972f  ff15083cb200         call dword ptr [0xb23c08]
// 00a39735  8bce                 mov ecx, esi
// 00a39737  e8a28ff4ff           call 0x9826de
// 00a3973c  5e                   pop esi
// 00a3973d  83c418               add esp, 0x18
// 00a39740  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnTimer@CXTPDockingPaneMiniWnd@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
