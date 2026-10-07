// roc 2007-08 00631e80  unit: CXTPCommandBar  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00631e80
//
// 00631e80  56                   push esi
// 00631e81  8bf1                 mov esi, ecx
// 00631e83  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 00631e89  e894641000           call 0x738322
// 00631e8e  a900004000           test eax, 0x400000
// 00631e93  b801000000           mov eax, 1
// 00631e98  7506                 jne 0x631ea0
// 00631e9a  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 00631ea0  5e                   pop esi
// 00631ea1  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPCommandBars.cpp (function ?IsLayoutRTL@CXTPCommandBars@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPCommandBars.cpp
