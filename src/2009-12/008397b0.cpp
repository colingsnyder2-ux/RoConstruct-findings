// roc 2009-12 008397b0  unit: PAVCXTPDockingPaneBase::?$CList  size: 198 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008397b0
//
// 008397b0  55                   push ebp
// 008397b1  8be9                 mov ebp, ecx
// 008397b3  8b8dcc000000         mov ecx, dword ptr [ebp + 0xcc]
// 008397b9  56                   push esi
// 008397ba  85c9                 test ecx, ecx
// 008397bc  7428                 je 0x8397e6
// 008397be  8b01                 mov eax, dword ptr [ecx]
// 008397c0  8b9030010000         mov edx, dword ptr [eax + 0x130]
// 008397c6  ffd2                 call edx
// 008397c8  85c0                 test eax, eax
// 008397ca  741a                 je 0x8397e6
// 008397cc  8b85cc000000         mov eax, dword ptr [ebp + 0xcc]
// 008397d2  f680e400000008       test byte ptr [eax + 0xe4], 8
// 008397d9  740b                 je 0x8397e6
// 008397db  6a00                 push 0
// 008397dd  6a00                 push 0
// 008397df  8bcd                 mov ecx, ebp
// 008397e1  e8eafaffff           call 0x8392d0
// 008397e6  6a00                 push 0
// 008397e8  be01000000           mov esi, 1
// 008397ed  56                   push esi
// 008397ee  8bcd                 mov ecx, ebp
// 008397f0  e80bf2ffff           call 0x838a00
// 008397f5  8b85d0000000         mov eax, dword ptr [ebp + 0xd0]
// 008397fb  85c0                 test eax, eax
// 008397fd  746e                 je 0x83986d
// 008397ff  57                   push edi
// 00839800  8b7848               mov edi, dword ptr [eax + 0x48]
// 00839803  85ff                 test edi, edi
// 00839805  745c                 je 0x839863
// 00839807  8bc7                 mov eax, edi
// 00839809  8b4008               mov eax, dword ptr [eax + 8]
// 0083980c  83781803             cmp dword ptr [eax + 0x18], 3
// 00839810  8b3f                 mov edi, dword ptr [edi]
// 00839812  753d                 jne 0x839851
// 00839814  8db008ffffff         lea esi, [eax - 0xf8]
// 0083981a  85f6                 test esi, esi
// 0083981c  7433                 je 0x839851
// 0083981e  837e2000             cmp dword ptr [esi + 0x20], 0
// 00839822  742d                 je 0x839851
// 00839824  f686e400000008       test byte ptr [esi + 0xe4], 8
// 0083982b  740e                 je 0x83983b
// 0083982d  8b16                 mov edx, dword ptr [esi]
// 0083982f  8b8258010000         mov eax, dword ptr [edx + 0x158]
// 00839835  6a01                 push 1
// 00839837  8bce                 mov ecx, esi
// 00839839  ffd0                 call eax
// 0083983b  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0083983e  6a01                 push 1
// 00839840  6a01                 push 1
// 00839842  6a00                 push 0
// 00839844  6a00                 push 0
// 00839846  6864030000           push 0x364
// 0083984b  51                   push ecx
// 0083984c  e875cf0e00           call 0x9267c6
// 00839851  85ff                 test edi, edi
// 00839853  75b2                 jne 0x839807
// 00839855  5f                   pop edi
// 00839856  5e                   pop esi
// 00839857  c7854401000001000000 mov dword ptr [ebp + 0x144], 1
// 00839861  5d                   pop ebp
// 00839862  c3                   ret 
// 00839863  5f                   pop edi
// 00839864  89b544010000         mov dword ptr [ebp + 0x144], esi
// 0083986a  5e                   pop esi
// 0083986b  5d                   pop ebp
// 0083986c  c3                   ret 
// 0083986d  89b544010000         mov dword ptr [ebp + 0x144], esi
// 00839873  5e                   pop esi
// 00839874  5d                   pop ebp
// 00839875  c3                   ret 
// copied from an identical function in another client (function ?OnInitialUpdate@CXTPDockingPaneManager@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneManager.cpp