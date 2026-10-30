// roc 2009-06 007d50c0  unit: CXTPDockingPaneMiniWnd  size: 499 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d50c0
//
// 007d50c0  8b442404             mov eax, dword ptr [esp + 4]
// 007d50c4  83ec18               sub esp, 0x18
// 007d50c7  56                   push esi
// 007d50c8  8bf1                 mov esi, ecx
// 007d50ca  3d29090000           cmp eax, 0x929
// 007d50cf  7568                 jne 0x7d5139
// 007d50d1  8d442404             lea eax, [esp + 4]
// 007d50d5  50                   push eax
// 007d50d6  ff152cee8900         call dword ptr [0x89ee2c]
// 007d50dc  56                   push esi
// 007d50dd  8d4c2410             lea ecx, [esp + 0x10]
// 007d50e1  e88ab3f9ff           call 0x770470
// 007d50e6  8d8ef8000000         lea ecx, [esi + 0xf8]
// 007d50ec  e81f0c0000           call 0x7d5d10
// 007d50f1  8b4878               mov ecx, dword ptr [eax + 0x78]
// 007d50f4  8b542410             mov edx, dword ptr [esp + 0x10]
// 007d50f8  8d441104             lea eax, [ecx + edx + 4]
// 007d50fc  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007d5100  8b542404             mov edx, dword ptr [esp + 4]
// 007d5104  51                   push ecx
// 007d5105  8944241c             mov dword ptr [esp + 0x1c], eax
// 007d5109  52                   push edx
// 007d510a  8d442414             lea eax, [esp + 0x14]
// 007d510e  50                   push eax
// 007d510f  ff15c0ed8900         call dword ptr [0x89edc0]
// 007d5115  85c0                 test eax, eax
// 007d5117  0f8588010000         jne 0x7d52a5
// 007d511d  83c8ff               or eax, 0xffffffff
// 007d5120  0bc8                 or ecx, eax
// 007d5122  51                   push ecx
// 007d5123  8b8e24010000         mov ecx, dword ptr [esi + 0x124]
// 007d5129  50                   push eax
// 007d512a  e8210c0000           call 0x7d5d50
// 007d512f  6829090000           push 0x929
// 007d5134  e962010000           jmp 0x7d529b
// 007d5139  83f803               cmp eax, 3
// 007d513c  7568                 jne 0x7d51a6
// 007d513e  83be5001000000       cmp dword ptr [esi + 0x150], 0
// 007d5145  0f845a010000         je 0x7d52a5
// 007d514b  ff8e40010000         dec dword ptr [esi + 0x140]
// 007d5151  83be40010000ff       cmp dword ptr [esi + 0x140], -1
// 007d5158  7e15                 jle 0x7d516f
// 007d515a  6a00                 push 0
// 007d515c  e8eff1ffff           call 0x7d4350
// 007d5161  8bce                 mov ecx, esi
// 007d5163  e8a03ef4ff           call 0x719008
// 007d5168  5e                   pop esi
// 007d5169  83c418               add esp, 0x18
// 007d516c  c20400               ret 4
// 007d516f  8b5620               mov edx, dword ptr [esi + 0x20]
// 007d5172  6a03                 push 3
// 007d5174  52                   push edx
// 007d5175  c7865001000000000000 mov dword ptr [esi + 0x150], 0
// 007d517f  c7864c01000000000000 mov dword ptr [esi + 0x14c], 0
// 007d5189  ff1584ee8900         call dword ptr [0x89ee84]
// 007d518f  6a0b                 push 0xb
// 007d5191  8bce                 mov ecx, esi
// 007d5193  e808fdffff           call 0x7d4ea0
// 007d5198  8bce                 mov ecx, esi
// 007d519a  e8693ef4ff           call 0x719008
// 007d519f  5e                   pop esi
// 007d51a0  83c418               add esp, 0x18
// 007d51a3  c20400               ret 4
// 007d51a6  83f801               cmp eax, 1
// 007d51a9  0f85f6000000         jne 0x7d52a5
// 007d51af  8d442404             lea eax, [esp + 4]
// 007d51b3  50                   push eax
// 007d51b4  ff152cee8900         call dword ptr [0x89ee2c]
// 007d51ba  ff1578ee8900         call dword ptr [0x89ee78]
// 007d51c0  50                   push eax
// 007d51c1  e83c3bf4ff           call 0x718d02
// 007d51c6  85c0                 test eax, eax
// 007d51c8  7422                 je 0x7d51ec
// 007d51ca  8b4820               mov ecx, dword ptr [eax + 0x20]
// 007d51cd  85c9                 test ecx, ecx
// 007d51cf  741b                 je 0x7d51ec
// 007d51d1  3bc6                 cmp eax, esi
// 007d51d3  0f84cc000000         je 0x7d52a5
// 007d51d9  51                   push ecx
// 007d51da  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007d51dd  51                   push ecx
// 007d51de  ff1508ef8900         call dword ptr [0x89ef08]
// 007d51e4  85c0                 test eax, eax
// 007d51e6  0f85b9000000         jne 0x7d52a5
// 007d51ec  83be5001000000       cmp dword ptr [esi + 0x150], 0
// 007d51f3  0f85ac000000         jne 0x7d52a5
// 007d51f9  53                   push ebx
// 007d51fa  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 007d51fe  57                   push edi
// 007d51ff  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007d5203  56                   push esi
// 007d5204  8d4c2418             lea ecx, [esp + 0x18]
// 007d5208  e863b2f9ff           call 0x770470
// 007d520d  53                   push ebx
// 007d520e  57                   push edi
// 007d520f  50                   push eax
// 007d5210  ff15c0ed8900         call dword ptr [0x89edc0]
// 007d5216  5f                   pop edi
// 007d5217  5b                   pop ebx
// 007d5218  85c0                 test eax, eax
// 007d521a  0f8585000000         jne 0x7d52a5
// 007d5220  ff153cee8900         call dword ptr [0x89ee3c]
// 007d5226  85c0                 test eax, eax
// 007d5228  757b                 jne 0x7d52a5
// 007d522a  ff8e44010000         dec dword ptr [esi + 0x144]
// 007d5230  398644010000         cmp dword ptr [esi + 0x144], eax
// 007d5236  7f6d                 jg 0x7d52a5
// 007d5238  6a0a                 push 0xa
// 007d523a  8bce                 mov ecx, esi
// 007d523c  e85ffcffff           call 0x7d4ea0
// 007d5241  85c0                 test eax, eax
// 007d5243  7411                 je 0x7d5256
// 007d5245  c7864401000006000000 mov dword ptr [esi + 0x144], 6
// 007d524f  5e                   pop esi
// 007d5250  83c418               add esp, 0x18
// 007d5253  c20400               ret 4
// 007d5256  8b9640010000         mov edx, dword ptr [esi + 0x140]
// 007d525c  3b963c010000         cmp edx, dword ptr [esi + 0x13c]
// 007d5262  7516                 jne 0x7d527a
// 007d5264  56                   push esi
// 007d5265  8d4c2410             lea ecx, [esp + 0x10]
// 007d5269  e802b2f9ff           call 0x770470
// 007d526e  8b480c               mov ecx, dword ptr [eax + 0xc]
// 007d5271  2b4804               sub ecx, dword ptr [eax + 4]
// 007d5274  898e38010000         mov dword ptr [esi + 0x138], ecx
// 007d527a  8b4620               mov eax, dword ptr [esi + 0x20]
// 007d527d  6a00                 push 0
// 007d527f  c7865001000001000000 mov dword ptr [esi + 0x150], 1
// 007d5289  8b15e08ba200         mov edx, dword ptr [0xa28be0]
// 007d528f  52                   push edx
// 007d5290  6a03                 push 3
// 007d5292  50                   push eax
// 007d5293  ff150cee8900         call dword ptr [0x89ee0c]
// 007d5299  6a01                 push 1
// 007d529b  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007d529e  51                   push ecx
// 007d529f  ff1584ee8900         call dword ptr [0x89ee84]
// 007d52a5  8bce                 mov ecx, esi
// 007d52a7  e85c3df4ff           call 0x719008
// 007d52ac  5e                   pop esi
// 007d52ad  83c418               add esp, 0x18
// 007d52b0  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnTimer@CXTPDockingPaneMiniWnd@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
