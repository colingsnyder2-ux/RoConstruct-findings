// roc 2009-12 007f87a0  unit: CPatchedControlComboBox  size: 228 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f87a0
//
// 007f87a0  56                   push esi
// 007f87a1  8d442408             lea eax, [esp + 8]
// 007f87a5  50                   push eax
// 007f87a6  8bf1                 mov esi, ecx
// 007f87a8  e8f3310400           call 0x83b9a0
// 007f87ad  85c0                 test eax, eax
// 007f87af  7409                 je 0x7f87ba
// 007f87b1  b857000780           mov eax, 0x80070057
// 007f87b6  5e                   pop esi
// 007f87b7  c21400               ret 0x14
// 007f87ba  57                   push edi
// 007f87bb  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 007f87bf  b903000000           mov ecx, 3
// 007f87c4  66890f               mov word ptr [edi], cx
// 007f87c7  8b9684000000         mov edx, dword ptr [esi + 0x84]
// 007f87cd  f7da                 neg edx
// 007f87cf  1bd2                 sbb edx, edx
// 007f87d1  81e286000000         and edx, 0x86
// 007f87d7  81ca00001000         or edx, 0x100000
// 007f87dd  895708               mov dword ptr [edi + 8], edx
// 007f87e0  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 007f87e6  8b01                 mov eax, dword ptr [ecx]
// 007f87e8  8b9068010000         mov edx, dword ptr [eax + 0x168]
// 007f87ee  ffd2                 call edx
// 007f87f0  85c0                 test eax, eax
// 007f87f2  7414                 je 0x7f8808
// 007f87f4  8b46e0               mov eax, dword ptr [esi - 0x20]
// 007f87f7  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 007f87fd  8d4ee0               lea ecx, [esi - 0x20]
// 007f8800  6a00                 push 0
// 007f8802  ffd2                 call edx
// 007f8804  85c0                 test eax, eax
// 007f8806  7507                 jne 0x7f880f
// 007f8808  814f0800800000       or dword ptr [edi + 8], 0x8000
// 007f880f  8b467c               mov eax, dword ptr [esi + 0x7c]
// 007f8812  83c6e0               add esi, -0x20
// 007f8815  83f8ff               cmp eax, -1
// 007f8818  750f                 jne 0x7f8829
// 007f881a  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 007f8820  85c9                 test ecx, ecx
// 007f8822  7405                 je 0x7f8829
// 007f8824  e887ddffff           call 0x7f65b0
// 007f8829  85c0                 test eax, eax
// 007f882b  7504                 jne 0x7f8831
// 007f882d  834f0801             or dword ptr [edi + 8], 1
// 007f8831  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 007f8837  83f9ff               cmp ecx, -1
// 007f883a  750f                 jne 0x7f884b
// 007f883c  8b865c010000         mov eax, dword ptr [esi + 0x15c]
// 007f8842  85c0                 test eax, eax
// 007f8844  7405                 je 0x7f884b
// 007f8846  8b4038               mov eax, dword ptr [eax + 0x38]
// 007f8849  eb02                 jmp 0x7f884d
// 007f884b  8bc1                 mov eax, ecx
// 007f884d  85c0                 test eax, eax
// 007f884f  7404                 je 0x7f8855
// 007f8851  834f0810             or dword ptr [edi + 8], 0x10
// 007f8855  8b06                 mov eax, dword ptr [esi]
// 007f8857  8b5078               mov edx, dword ptr [eax + 0x78]
// 007f885a  8bce                 mov ecx, esi
// 007f885c  ffd2                 call edx
// 007f885e  85c0                 test eax, eax
// 007f8860  7404                 je 0x7f8866
// 007f8862  834f0808             or dword ptr [edi + 8], 8
// 007f8866  8b06                 mov eax, dword ptr [esi]
// 007f8868  8b908c000000         mov edx, dword ptr [eax + 0x8c]
// 007f886e  8bce                 mov ecx, esi
// 007f8870  ffd2                 call edx
// 007f8872  85c0                 test eax, eax
// 007f8874  7407                 je 0x7f887d
// 007f8876  814f0800000040       or dword ptr [edi + 8], 0x40000000
// 007f887d  5f                   pop edi
// 007f887e  33c0                 xor eax, eax
// 007f8880  5e                   pop esi
// 007f8881  c21400               ret 0x14
// copied from an identical function in another client (function ?GetAccessibleState@CXTPControl@@MAEJUtagVARIANT@@PAU2@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControl.cpp