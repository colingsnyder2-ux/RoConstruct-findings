// roc 2009-12 008e63a0  unit: CXTCaptionButton  size: 344 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e63a0
//
// 008e63a0  6aff                 push -1
// 008e63a2  6858619600           push 0x966158
// 008e63a7  64a100000000         mov eax, dword ptr fs:[0]
// 008e63ad  50                   push eax
// 008e63ae  83ec48               sub esp, 0x48
// 008e63b1  53                   push ebx
// 008e63b2  56                   push esi
// 008e63b3  a10052b600           mov eax, dword ptr [0xb65200]
// 008e63b8  33c4                 xor eax, esp
// 008e63ba  50                   push eax
// 008e63bb  8d442454             lea eax, [esp + 0x54]
// 008e63bf  64a300000000         mov dword ptr fs:[0], eax
// 008e63c5  8bf1                 mov esi, ecx
// 008e63c7  8d4c2430             lea ecx, [esp + 0x30]
// 008e63cb  e86044f2ff           call 0x80a830
// 008e63d0  33db                 xor ebx, ebx
// 008e63d2  8d4c240c             lea ecx, [esp + 0xc]
// 008e63d6  895c245c             mov dword ptr [esp + 0x5c], ebx
// 008e63da  e85144f2ff           call 0x80a830
// 008e63df  8b442468             mov eax, dword ptr [esp + 0x68]
// 008e63e3  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 008e63e7  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 008e63eb  6a01                 push 1
// 008e63ed  50                   push eax
// 008e63ee  51                   push ecx
// 008e63ef  52                   push edx
// 008e63f0  8d4c2440             lea ecx, [esp + 0x40]
// 008e63f4  c644246c01           mov byte ptr [esp + 0x6c], 1
// 008e63f9  e8d273f2ff           call 0x80d7d0
// 008e63fe  8d4c2430             lea ecx, [esp + 0x30]
// 008e6402  e89944f2ff           call 0x80a8a0
// 008e6407  85c0                 test eax, eax
// 008e6409  7434                 je 0x8e643f
// 008e640b  8d4c240c             lea ecx, [esp + 0xc]
// 008e640f  885c245c             mov byte ptr [esp + 0x5c], bl
// 008e6413  e8c869f2ff           call 0x80cde0
// 008e6418  8d4c2430             lea ecx, [esp + 0x30]
// 008e641c  c744245cffffffff     mov dword ptr [esp + 0x5c], 0xffffffff
// 008e6424  e8b769f2ff           call 0x80cde0
// 008e6429  33c0                 xor eax, eax
// 008e642b  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 008e642f  64890d00000000       mov dword ptr fs:[0], ecx
// 008e6436  59                   pop ecx
// 008e6437  5e                   pop esi
// 008e6438  5b                   pop ebx
// 008e6439  83c454               add esp, 0x54
// 008e643c  c21400               ret 0x14
// 008e643f  8b442470             mov eax, dword ptr [esp + 0x70]
// 008e6443  3bc3                 cmp eax, ebx
// 008e6445  7423                 je 0x8e646a
// 008e6447  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 008e644b  8b542464             mov edx, dword ptr [esp + 0x64]
// 008e644f  6a01                 push 1
// 008e6451  51                   push ecx
// 008e6452  52                   push edx
// 008e6453  50                   push eax
// 008e6454  8d4c241c             lea ecx, [esp + 0x1c]
// 008e6458  e87373f2ff           call 0x80d7d0
// 008e645d  8d4c240c             lea ecx, [esp + 0xc]
// 008e6461  e83a44f2ff           call 0x80a8a0
// 008e6466  85c0                 test eax, eax
// 008e6468  75a1                 jne 0x8e640b
// 008e646a  8b442474             mov eax, dword ptr [esp + 0x74]
// 008e646e  50                   push eax
// 008e646f  83ec24               sub esp, 0x24
// 008e6472  8d542434             lea edx, [esp + 0x34]
// 008e6476  8bcc                 mov ecx, esp
// 008e6478  89a42494000000       mov dword ptr [esp + 0x94], esp
// 008e647f  52                   push edx
// 008e6480  e8bb43f2ff           call 0x80a840
// 008e6485  83ec24               sub esp, 0x24
// 008e6488  8d44247c             lea eax, [esp + 0x7c]
// 008e648c  8bcc                 mov ecx, esp
// 008e648e  89a424bc000000       mov dword ptr [esp + 0xbc], esp
// 008e6495  50                   push eax
// 008e6496  c68424ac00000002     mov byte ptr [esp + 0xac], 2
// 008e649e  e89d43f2ff           call 0x80a840
// 008e64a3  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 008e64aa  8b9424b0000000       mov edx, dword ptr [esp + 0xb0]
// 008e64b1  51                   push ecx
// 008e64b2  52                   push edx
// 008e64b3  8bce                 mov ecx, esi
// 008e64b5  c68424b000000001     mov byte ptr [esp + 0xb0], 1
// 008e64bd  e84efaffff           call 0x8e5f10
// 008e64c2  8d4c240c             lea ecx, [esp + 0xc]
// 008e64c6  8bf0                 mov esi, eax
// 008e64c8  885c245c             mov byte ptr [esp + 0x5c], bl
// 008e64cc  e80f69f2ff           call 0x80cde0
// 008e64d1  8d4c2430             lea ecx, [esp + 0x30]
// 008e64d5  c744245cffffffff     mov dword ptr [esp + 0x5c], 0xffffffff
// 008e64dd  e8fe68f2ff           call 0x80cde0
// 008e64e2  8bc6                 mov eax, esi
// 008e64e4  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 008e64e8  64890d00000000       mov dword ptr fs:[0], ecx
// 008e64ef  59                   pop ecx
// 008e64f0  5e                   pop esi
// 008e64f1  5b                   pop ebx
// 008e64f2  83c454               add esp, 0x54
// 008e64f5  c21400               ret 0x14
// copied from an identical function in another client (function ?SetIcon@CXTButton@@UAEHVCSize@@PBD1H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp