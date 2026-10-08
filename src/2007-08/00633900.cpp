// from server: 100% by auto
// roc 2007-08 00633900  unit: CXTPCommandBar  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00633900
//
// 00633900  56                   push esi
// 00633901  8bf1                 mov esi, ecx
// 00633903  85f6                 test esi, esi
// 00633905  7518                 jne 0x63391f
// 00633907  6880226300           push 0x632280
// 0063390c  b914938c00           mov ecx, 0x8c9314
// 00633911  e8544a1000           call 0x73836a
// 00633916  85c0                 test eax, eax
// 00633918  752d                 jne 0x633947
// 0063391a  e901c6ffff           jmp 0x62ff20
// 0063391f  8b86a8000000         mov eax, dword ptr [esi + 0xa8]
// 00633925  85c0                 test eax, eax
// 00633927  751e                 jne 0x633947
// 00633929  6880226300           push 0x632280
// 0063392e  b914938c00           mov ecx, 0x8c9314
// 00633933  e8324a1000           call 0x73836a
// 00633938  85c0                 test eax, eax
// 0063393a  7505                 jne 0x633941
// 0063393c  e9dfc5ffff           jmp 0x62ff20
// 00633941  8986a8000000         mov dword ptr [esi + 0xa8], eax
// 00633947  5e                   pop esi
// 00633948  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPCommandBars.cpp (function ?GetMouseManager@CXTPCommandBars@@QBEPAVCXTPMouseManager@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPCommandBars.cpp
