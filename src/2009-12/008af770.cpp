// roc 2009-12 008af770  unit: CXTPDockingPaneMiniWnd  size: 241 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008af770
//
// 008af770  6aff                 push -1
// 008af772  6818309600           push 0x963018
// 008af777  64a100000000         mov eax, dword ptr fs:[0]
// 008af77d  50                   push eax
// 008af77e  83ec1c               sub esp, 0x1c
// 008af781  56                   push esi
// 008af782  a10052b600           mov eax, dword ptr [0xb65200]
// 008af787  33c4                 xor eax, esp
// 008af789  50                   push eax
// 008af78a  8d442424             lea eax, [esp + 0x24]
// 008af78e  64a300000000         mov dword ptr fs:[0], eax
// 008af794  8bf1                 mov esi, ecx
// 008af796  8b442434             mov eax, dword ptr [esp + 0x34]
// 008af79a  50                   push eax
// 008af79b  e86c750700           call 0x926d0c
// 008af7a0  83be3001000000       cmp dword ptr [esi + 0x130], 0
// 008af7a7  0f84a1000000         je 0x8af84e
// 008af7ad  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 008af7b3  85c9                 test ecx, ecx
// 008af7b5  0f8493000000         je 0x8af84e
// 008af7bb  e88086ffff           call 0x8a7e40
// 008af7c0  85c0                 test eax, eax
// 008af7c2  0f8486000000         je 0x8af84e
// 008af7c8  6a0a                 push 0xa
// 008af7ca  8d4c240c             lea ecx, [esp + 0xc]
// 008af7ce  e8ed9ef8ff           call 0x8396c0
// 008af7d3  8b96f8000000         mov edx, dword ptr [esi + 0xf8]
// 008af7d9  8b520c               mov edx, dword ptr [edx + 0xc]
// 008af7dc  81c6f8000000         add esi, 0xf8
// 008af7e2  8d442408             lea eax, [esp + 8]
// 008af7e6  50                   push eax
// 008af7e7  6a01                 push 1
// 008af7e9  8bce                 mov ecx, esi
// 008af7eb  c744243400000000     mov dword ptr [esp + 0x34], 0
// 008af7f3  ffd2                 call edx
// 008af7f5  837c241401           cmp dword ptr [esp + 0x14], 1
// 008af7fa  7533                 jne 0x8af82f
// 008af7fc  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008af800  33c9                 xor ecx, ecx
// 008af802  85c0                 test eax, eax
// 008af804  0f95c1               setne cl
// 008af807  85c9                 test ecx, ecx
// 008af809  7505                 jne 0x8af810
// 008af80b  e8fc42f4ff           call 0x7f3b0c
// 008af810  8b4008               mov eax, dword ptr [eax + 8]
// 008af813  85c0                 test eax, eax
// 008af815  7405                 je 0x8af81c
// 008af817  83c0ac               add eax, -0x54
// 008af81a  eb02                 jmp 0x8af81e
// 008af81c  33c0                 xor eax, eax
// 008af81e  8b88a4010000         mov ecx, dword ptr [eax + 0x1a4]
// 008af824  85c9                 test ecx, ecx
// 008af826  7407                 je 0x8af82f
// 008af828  8b01                 mov eax, dword ptr [ecx]
// 008af82a  8b5058               mov edx, dword ptr [eax + 0x58]
// 008af82d  ffd2                 call edx
// 008af82f  8bce                 mov ecx, esi
// 008af831  e80a100000           call 0x8b0840
// 008af836  8bc8                 mov ecx, eax
// 008af838  e87391f8ff           call 0x8389b0
// 008af83d  8d4c2408             lea ecx, [esp + 8]
// 008af841  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 008af849  e8a29ef8ff           call 0x8396f0
// 008af84e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008af852  64890d00000000       mov dword ptr fs:[0], ecx
// 008af859  59                   pop ecx
// 008af85a  5e                   pop esi
// 008af85b  83c428               add esp, 0x28
// 008af85e  c20400               ret 4
// copied from an identical function in another client (function ?OnSetFocus@CXTPDockingPaneMiniWnd@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneMiniWnd.cpp