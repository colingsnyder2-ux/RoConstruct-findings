// roc 2009-12 00804610  unit: CXTPCommandBar  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00804610
//
// 00804610  56                   push esi
// 00804611  8bf1                 mov esi, ecx
// 00804613  8b8668010000         mov eax, dword ptr [esi + 0x168]
// 00804619  85c0                 test eax, eax
// 0080461b  7528                 jne 0x804645
// 0080461d  e8aefeffff           call 0x8044d0
// 00804622  85c0                 test eax, eax
// 00804624  7408                 je 0x80462e
// 00804626  8bc8                 mov ecx, eax
// 00804628  5e                   pop esi
// 00804629  e9d2000100           jmp 0x814700
// 0080462e  8bce                 mov ecx, esi
// 00804630  e86bfeffff           call 0x8044a0
// 00804635  8b8068010000         mov eax, dword ptr [eax + 0x168]
// 0080463b  85c0                 test eax, eax
// 0080463d  7506                 jne 0x804645
// 0080463f  5e                   pop esi
// 00804640  e96bbe0000           jmp 0x8104b0
// 00804645  5e                   pop esi
// 00804646  c3                   ret 
// copied from an identical function in another client (function ?GetImageManager@CXTPCommandBar@@QBEPAVCXTPImageManager@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp