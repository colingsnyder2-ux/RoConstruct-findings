// from server: 100% by auto
// roc 2008-06 006a45e0  unit: CXTPCommandBar  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a45e0
//
// 006a45e0  56                   push esi
// 006a45e1  8bf1                 mov esi, ecx
// 006a45e3  85f6                 test esi, esi
// 006a45e5  7518                 jne 0x6a45ff
// 006a45e7  6810306a00           push 0x6a3010
// 006a45ec  b99ced9700           mov ecx, 0x97ed9c
// 006a45f1  e8e4791100           call 0x7bbfda
// 006a45f6  85c0                 test eax, eax
// 006a45f8  752d                 jne 0x6a4627
// 006a45fa  e845c3ffff           call 0x6a0944
// 006a45ff  8b86a8000000         mov eax, dword ptr [esi + 0xa8]
// 006a4605  85c0                 test eax, eax
// 006a4607  751e                 jne 0x6a4627
// 006a4609  6810306a00           push 0x6a3010
// 006a460e  b99ced9700           mov ecx, 0x97ed9c
// 006a4613  e8c2791100           call 0x7bbfda
// 006a4618  85c0                 test eax, eax
// 006a461a  7505                 jne 0x6a4621
// 006a461c  e823c3ffff           call 0x6a0944
// 006a4621  8986a8000000         mov dword ptr [esi + 0xa8], eax
// 006a4627  5e                   pop esi
// 006a4628  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPCommandBars.cpp (function ?GetMouseManager@CXTPCommandBars@@QBEPAVCXTPMouseManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBars.cpp
