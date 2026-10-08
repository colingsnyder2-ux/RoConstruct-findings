// from server: 100% by auto
// roc 2011-06 0082b6f0  unit: CXTPCommandBar  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0082b6f0
//
// 0082b6f0  56                   push esi
// 0082b6f1  8bf1                 mov esi, ecx
// 0082b6f3  85f6                 test esi, esi
// 0082b6f5  7518                 jne 0x82b70f
// 0082b6f7  68b0cb8000           push 0x80cbb0
// 0082b6fc  b9e88ed100           mov ecx, 0xd18ee8
// 0082b701  e8be0e1a00           call 0x9cc5c4
// 0082b706  85c0                 test eax, eax
// 0082b708  752d                 jne 0x82b737
// 0082b70a  e8fbebfdff           call 0x80a30a
// 0082b70f  8b86a8000000         mov eax, dword ptr [esi + 0xa8]
// 0082b715  85c0                 test eax, eax
// 0082b717  751e                 jne 0x82b737
// 0082b719  68b0cb8000           push 0x80cbb0
// 0082b71e  b9e88ed100           mov ecx, 0xd18ee8
// 0082b723  e89c0e1a00           call 0x9cc5c4
// 0082b728  85c0                 test eax, eax
// 0082b72a  7505                 jne 0x82b731
// 0082b72c  e8d9ebfdff           call 0x80a30a
// 0082b731  8986a8000000         mov dword ptr [esi + 0xa8], eax
// 0082b737  5e                   pop esi
// 0082b738  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPCommandBars.cpp (function ?GetMouseManager@CXTPCommandBars@@QBEPAVCXTPMouseManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPCommandBars.cpp
