// roc 2010-06 008174a0  unit: CXTPToolTipContext  size: 460 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008174a0
//
// 008174a0  6aff                 push -1
// 008174a2  687c4a9b00           push 0x9b4a7c
// 008174a7  64a100000000         mov eax, dword ptr fs:[0]
// 008174ad  50                   push eax
// 008174ae  51                   push ecx
// 008174af  56                   push esi
// 008174b0  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 008174b5  33c4                 xor eax, esp
// 008174b7  50                   push eax
// 008174b8  8d44240c             lea eax, [esp + 0xc]
// 008174bc  64a300000000         mov dword ptr fs:[0], eax
// 008174c2  8bf1                 mov esi, ecx
// 008174c4  8b4630               mov eax, dword ptr [esi + 0x30]
// 008174c7  83c0fe               add eax, -2
// 008174ca  83f804               cmp eax, 4
// 008174cd  0f872f010000         ja 0x817602
// 008174d3  ff248558768100       jmp dword ptr [eax*4 + 0x817658]
// 008174da  6830010000           push 0x130
// 008174df  e8bc04f9ff           call 0x7a79a0
// 008174e4  83c404               add esp, 4
// 008174e7  89442408             mov dword ptr [esp + 8], eax
// 008174eb  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008174f3  85c0                 test eax, eax
// 008174f5  0f8445010000         je 0x817640
// 008174fb  56                   push esi
// 008174fc  8bc8                 mov ecx, eax
// 008174fe  e8cde8ffff           call 0x815dd0
// 00817503  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00817507  64890d00000000       mov dword ptr fs:[0], ecx
// 0081750e  59                   pop ecx
// 0081750f  5e                   pop esi
// 00817510  83c410               add esp, 0x10
// 00817513  c20400               ret 4
// 00817516  685c020000           push 0x25c
// 0081751b  e88004f9ff           call 0x7a79a0
// 00817520  83c404               add esp, 4
// 00817523  89442408             mov dword ptr [esp + 8], eax
// 00817527  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0081752f  85c0                 test eax, eax
// 00817531  0f8409010000         je 0x817640
// 00817537  56                   push esi
// 00817538  8bc8                 mov ecx, eax
// 0081753a  e801fdffff           call 0x817240
// 0081753f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00817543  64890d00000000       mov dword ptr fs:[0], ecx
// 0081754a  59                   pop ecx
// 0081754b  5e                   pop esi
// 0081754c  83c410               add esp, 0x10
// 0081754f  c20400               ret 4
// 00817552  6830010000           push 0x130
// 00817557  e84404f9ff           call 0x7a79a0
// 0081755c  83c404               add esp, 4
// 0081755f  89442408             mov dword ptr [esp + 8], eax
// 00817563  c744241402000000     mov dword ptr [esp + 0x14], 2
// 0081756b  85c0                 test eax, eax
// 0081756d  0f84cd000000         je 0x817640
// 00817573  56                   push esi
// 00817574  8bc8                 mov ecx, eax
// 00817576  e8f5f9ffff           call 0x816f70
// 0081757b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0081757f  64890d00000000       mov dword ptr fs:[0], ecx
// 00817586  59                   pop ecx
// 00817587  5e                   pop esi
// 00817588  83c410               add esp, 0x10
// 0081758b  c20400               ret 4
// 0081758e  6830010000           push 0x130
// 00817593  e80804f9ff           call 0x7a79a0
// 00817598  83c404               add esp, 4
// 0081759b  89442408             mov dword ptr [esp + 8], eax
// 0081759f  c744241403000000     mov dword ptr [esp + 0x14], 3
// 008175a7  85c0                 test eax, eax
// 008175a9  0f8491000000         je 0x817640
// 008175af  56                   push esi
// 008175b0  8bc8                 mov ecx, eax
// 008175b2  e809fbffff           call 0x8170c0
// 008175b7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008175bb  64890d00000000       mov dword ptr fs:[0], ecx
// 008175c2  59                   pop ecx
// 008175c3  5e                   pop esi
// 008175c4  83c410               add esp, 0x10
// 008175c7  c20400               ret 4
// 008175ca  6898010000           push 0x198
// 008175cf  e8cc03f9ff           call 0x7a79a0
// 008175d4  83c404               add esp, 4
// 008175d7  89442408             mov dword ptr [esp + 8], eax
// 008175db  c744241404000000     mov dword ptr [esp + 0x14], 4
// 008175e3  85c0                 test eax, eax
// 008175e5  7459                 je 0x817640
// 008175e7  56                   push esi
// 008175e8  8bc8                 mov ecx, eax
// 008175ea  e811fdffff           call 0x817300
// 008175ef  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008175f3  64890d00000000       mov dword ptr fs:[0], ecx
// 008175fa  59                   pop ecx
// 008175fb  5e                   pop esi
// 008175fc  83c410               add esp, 0x10
// 008175ff  c20400               ret 4
// 00817602  6a70                 push 0x70
// 00817604  e89703f9ff           call 0x7a79a0
// 00817609  8bf0                 mov esi, eax
// 0081760b  83c404               add esp, 4
// 0081760e  89742408             mov dword ptr [esp + 8], esi
// 00817612  c744241405000000     mov dword ptr [esp + 0x14], 5
// 0081761a  85f6                 test esi, esi
// 0081761c  7422                 je 0x817640
// 0081761e  8bce                 mov ecx, esi
// 00817620  e84b5f1600           call 0x97d570
// 00817625  c7061420a600         mov dword ptr [esi], 0xa62014
// 0081762b  8bc6                 mov eax, esi
// 0081762d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00817631  64890d00000000       mov dword ptr fs:[0], ecx
// 00817638  59                   pop ecx
// 00817639  5e                   pop esi
// 0081763a  83c410               add esp, 0x10
// 0081763d  c20400               ret 4
// 00817640  33c0                 xor eax, eax
// 00817642  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00817646  64890d00000000       mov dword ptr fs:[0], ecx
// 0081764d  59                   pop ecx
// 0081764e  5e                   pop esi
// 0081764f  83c410               add esp, 0x10
// 00817652  c20400               ret 4
// 00817655  8d4900               lea ecx, [ecx]
// 00817658  da748100             fidiv dword ptr [ecx + eax*4]
// 0081765c  16                   push ss
// 0081765d  7581                 jne 0x8175e0
// 0081765f  005275               add byte ptr [edx + 0x75], dl
// 00817662  81008e758100         add dword ptr [eax], 0x81758e
// 00817668  ca7581               retf 0x8175
// copied from an identical function in another client (function ?CreateToolTip@CXTPToolTipContext@@MAEPAVCWnd@@PAV2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPToolTipContext.cpp