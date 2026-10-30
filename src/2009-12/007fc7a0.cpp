// roc 2009-12 007fc7a0  unit: CPatchedControlComboBox  size: 259 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fc7a0
//
// 007fc7a0  6aff                 push -1
// 007fc7a2  68198f9500           push 0x958f19
// 007fc7a7  64a100000000         mov eax, dword ptr fs:[0]
// 007fc7ad  50                   push eax
// 007fc7ae  53                   push ebx
// 007fc7af  56                   push esi
// 007fc7b0  57                   push edi
// 007fc7b1  a10052b600           mov eax, dword ptr [0xb65200]
// 007fc7b6  33c4                 xor eax, esp
// 007fc7b8  50                   push eax
// 007fc7b9  8d442410             lea eax, [esp + 0x10]
// 007fc7bd  64a300000000         mov dword ptr fs:[0], eax
// 007fc7c3  8bf1                 mov esi, ecx
// 007fc7c5  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 007fc7c9  53                   push ebx
// 007fc7ca  e831caffff           call 0x7f9200
// 007fc7cf  50                   push eax
// 007fc7d0  e86974ffff           call 0x7f3c3e
// 007fc7d5  8bf8                 mov edi, eax
// 007fc7d7  83c408               add esp, 8
// 007fc7da  85ff                 test edi, edi
// 007fc7dc  0f849f000000         je 0x7fc881
// 007fc7e2  8b8fd4010000         mov ecx, dword ptr [edi + 0x1d4]
// 007fc7e8  898ed4010000         mov dword ptr [esi + 0x1d4], ecx
// 007fc7ee  8b978c010000         mov edx, dword ptr [edi + 0x18c]
// 007fc7f4  8d442420             lea eax, [esp + 0x20]
// 007fc7f8  50                   push eax
// 007fc7f9  8bcf                 mov ecx, edi
// 007fc7fb  89968c010000         mov dword ptr [esi + 0x18c], edx
// 007fc801  e85af6ffff           call 0x7fbe60
// 007fc806  50                   push eax
// 007fc807  8bce                 mov ecx, esi
// 007fc809  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 007fc811  e8faf6ffff           call 0x7fbf10
// 007fc816  8d4c2420             lea ecx, [esp + 0x20]
// 007fc81a  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 007fc822  ff15c0de9800         call dword ptr [0x98dec0]
// 007fc828  8d8fa8010000         lea ecx, [edi + 0x1a8]
// 007fc82e  ff1580de9800         call dword ptr [0x98de80]
// 007fc834  50                   push eax
// 007fc835  8bce                 mov ecx, esi
// 007fc837  e804dcffff           call 0x7fa440
// 007fc83c  33c9                 xor ecx, ecx
// 007fc83e  398f84010000         cmp dword ptr [edi + 0x184], ecx
// 007fc844  0f95c1               setne cl
// 007fc847  51                   push ecx
// 007fc848  8bce                 mov ecx, esi
// 007fc84a  e811ccffff           call 0x7f9460
// 007fc84f  8b97ac010000         mov edx, dword ptr [edi + 0x1ac]
// 007fc855  8996ac010000         mov dword ptr [esi + 0x1ac], edx
// 007fc85b  8b87b4010000         mov eax, dword ptr [edi + 0x1b4]
// 007fc861  50                   push eax
// 007fc862  8bce                 mov ecx, esi
// 007fc864  e857deffff           call 0x7fa6c0
// 007fc869  8b8fbc010000         mov ecx, dword ptr [edi + 0x1bc]
// 007fc86f  898ebc010000         mov dword ptr [esi + 0x1bc], ecx
// 007fc875  8b97c4010000         mov edx, dword ptr [edi + 0x1c4]
// 007fc87b  8996c4010000         mov dword ptr [esi + 0x1c4], edx
// 007fc881  8b442424             mov eax, dword ptr [esp + 0x24]
// 007fc885  50                   push eax
// 007fc886  53                   push ebx
// 007fc887  8bce                 mov ecx, esi
// 007fc889  e802ee0300           call 0x83b690
// 007fc88e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007fc892  64890d00000000       mov dword ptr fs:[0], ecx
// 007fc899  59                   pop ecx
// 007fc89a  5f                   pop edi
// 007fc89b  5e                   pop esi
// 007fc89c  5b                   pop ebx
// 007fc89d  83c40c               add esp, 0xc
// 007fc8a0  c20800               ret 8
// copied from an identical function in another client (function ?Copy@CXTPControlComboBox@@MAEXPAVCXTPControl@@H@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlComboBox.cpp