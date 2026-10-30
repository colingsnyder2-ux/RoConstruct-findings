// roc 2009-12 008634f0  unit: CXTPToolTipContext  size: 460 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008634f0
//
// 008634f0  6aff                 push -1
// 008634f2  686ceb9500           push 0x95eb6c
// 008634f7  64a100000000         mov eax, dword ptr fs:[0]
// 008634fd  50                   push eax
// 008634fe  51                   push ecx
// 008634ff  56                   push esi
// 00863500  a10052b600           mov eax, dword ptr [0xb65200]
// 00863505  33c4                 xor eax, esp
// 00863507  50                   push eax
// 00863508  8d44240c             lea eax, [esp + 0xc]
// 0086350c  64a300000000         mov dword ptr fs:[0], eax
// 00863512  8bf1                 mov esi, ecx
// 00863514  8b4630               mov eax, dword ptr [esi + 0x30]
// 00863517  83c0fe               add eax, -2
// 0086351a  83f804               cmp eax, 4
// 0086351d  0f872f010000         ja 0x863652
// 00863523  ff2485a8368600       jmp dword ptr [eax*4 + 0x8636a8]
// 0086352a  6830010000           push 0x130
// 0086352f  e82c03f9ff           call 0x7f3860
// 00863534  83c404               add esp, 4
// 00863537  89442408             mov dword ptr [esp + 8], eax
// 0086353b  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00863543  85c0                 test eax, eax
// 00863545  0f8445010000         je 0x863690
// 0086354b  56                   push esi
// 0086354c  8bc8                 mov ecx, eax
// 0086354e  e89de8ffff           call 0x861df0
// 00863553  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00863557  64890d00000000       mov dword ptr fs:[0], ecx
// 0086355e  59                   pop ecx
// 0086355f  5e                   pop esi
// 00863560  83c410               add esp, 0x10
// 00863563  c20400               ret 4
// 00863566  685c020000           push 0x25c
// 0086356b  e8f002f9ff           call 0x7f3860
// 00863570  83c404               add esp, 4
// 00863573  89442408             mov dword ptr [esp + 8], eax
// 00863577  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0086357f  85c0                 test eax, eax
// 00863581  0f8409010000         je 0x863690
// 00863587  56                   push esi
// 00863588  8bc8                 mov ecx, eax
// 0086358a  e801fdffff           call 0x863290
// 0086358f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00863593  64890d00000000       mov dword ptr fs:[0], ecx
// 0086359a  59                   pop ecx
// 0086359b  5e                   pop esi
// 0086359c  83c410               add esp, 0x10
// 0086359f  c20400               ret 4
// 008635a2  6830010000           push 0x130
// 008635a7  e8b402f9ff           call 0x7f3860
// 008635ac  83c404               add esp, 4
// 008635af  89442408             mov dword ptr [esp + 8], eax
// 008635b3  c744241402000000     mov dword ptr [esp + 0x14], 2
// 008635bb  85c0                 test eax, eax
// 008635bd  0f84cd000000         je 0x863690
// 008635c3  56                   push esi
// 008635c4  8bc8                 mov ecx, eax
// 008635c6  e8f5f9ffff           call 0x862fc0
// 008635cb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008635cf  64890d00000000       mov dword ptr fs:[0], ecx
// 008635d6  59                   pop ecx
// 008635d7  5e                   pop esi
// 008635d8  83c410               add esp, 0x10
// 008635db  c20400               ret 4
// 008635de  6830010000           push 0x130
// 008635e3  e87802f9ff           call 0x7f3860
// 008635e8  83c404               add esp, 4
// 008635eb  89442408             mov dword ptr [esp + 8], eax
// 008635ef  c744241403000000     mov dword ptr [esp + 0x14], 3
// 008635f7  85c0                 test eax, eax
// 008635f9  0f8491000000         je 0x863690
// 008635ff  56                   push esi
// 00863600  8bc8                 mov ecx, eax
// 00863602  e809fbffff           call 0x863110
// 00863607  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0086360b  64890d00000000       mov dword ptr fs:[0], ecx
// 00863612  59                   pop ecx
// 00863613  5e                   pop esi
// 00863614  83c410               add esp, 0x10
// 00863617  c20400               ret 4
// 0086361a  6898010000           push 0x198
// 0086361f  e83c02f9ff           call 0x7f3860
// 00863624  83c404               add esp, 4
// 00863627  89442408             mov dword ptr [esp + 8], eax
// 0086362b  c744241404000000     mov dword ptr [esp + 0x14], 4
// 00863633  85c0                 test eax, eax
// 00863635  7459                 je 0x863690
// 00863637  56                   push esi
// 00863638  8bc8                 mov ecx, eax
// 0086363a  e811fdffff           call 0x863350
// 0086363f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00863643  64890d00000000       mov dword ptr fs:[0], ecx
// 0086364a  59                   pop ecx
// 0086364b  5e                   pop esi
// 0086364c  83c410               add esp, 0x10
// 0086364f  c20400               ret 4
// 00863652  6a70                 push 0x70
// 00863654  e80702f9ff           call 0x7f3860
// 00863659  8bf0                 mov esi, eax
// 0086365b  83c404               add esp, 4
// 0086365e  89742408             mov dword ptr [esp + 8], esi
// 00863662  c744241405000000     mov dword ptr [esp + 0x14], 5
// 0086366a  85f6                 test esi, esi
// 0086366c  7422                 je 0x863690
// 0086366e  8bce                 mov ecx, esi
// 00863670  e8b9350c00           call 0x926c2e
// 00863675  c70654dd9f00         mov dword ptr [esi], 0x9fdd54
// 0086367b  8bc6                 mov eax, esi
// 0086367d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00863681  64890d00000000       mov dword ptr fs:[0], ecx
// 00863688  59                   pop ecx
// 00863689  5e                   pop esi
// 0086368a  83c410               add esp, 0x10
// 0086368d  c20400               ret 4
// 00863690  33c0                 xor eax, eax
// 00863692  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00863696  64890d00000000       mov dword ptr fs:[0], ecx
// 0086369d  59                   pop ecx
// 0086369e  5e                   pop esi
// 0086369f  83c410               add esp, 0x10
// 008636a2  c20400               ret 4
// 008636a5  8d4900               lea ecx, [ecx]
// 008636a8  2a3586006635         sub dh, byte ptr [0x35660086]
// 008636ae  8600                 xchg byte ptr [eax], al
// 008636b0  a2358600de           mov byte ptr [0xde008635], al
// 008636b5  3586001a36           xor eax, 0x361a0086
// 008636ba  8600                 xchg byte ptr [eax], al
// copied from an identical function in another client (function ?CreateToolTip@CXTPToolTipContext@@MAEPAVCWnd@@PAV2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPToolTipContext.cpp