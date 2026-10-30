// roc 2009-12 0085b030  unit: CXTPStatusBar  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085b030
//
// 0085b030  56                   push esi
// 0085b031  8bf1                 mov esi, ecx
// 0085b033  e8f88df9ff           call 0x7f3e30
// 0085b038  8bce                 mov ecx, esi
// 0085b03a  e861f9ffff           call 0x85a9a0
// 0085b03f  85c0                 test eax, eax
// 0085b041  7435                 je 0x85b078
// 0085b043  8b10                 mov edx, dword ptr [eax]
// 0085b045  8bc8                 mov ecx, eax
// 0085b047  8b82dc000000         mov eax, dword ptr [edx + 0xdc]
// 0085b04d  ffd0                 call eax
// 0085b04f  83f806               cmp eax, 6
// 0085b052  7524                 jne 0x85b078
// 0085b054  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0085b058  f64118c0             test byte ptr [ecx + 0x18], 0xc0
// 0085b05c  741a                 je 0x85b078
// 0085b05e  6a27                 push 0x27
// 0085b060  6a00                 push 0
// 0085b062  6a00                 push 0
// 0085b064  6a00                 push 0
// 0085b066  6a00                 push 0
// 0085b068  6a00                 push 0
// 0085b06a  8bce                 mov ecx, esi
// 0085b06c  e8dd8af9ff           call 0x7f3b4e
// 0085b071  8bc8                 mov ecx, eax
// 0085b073  e8b48bf9ff           call 0x7f3c2c
// 0085b078  5e                   pop esi
// 0085b079  c20400               ret 4
// copied from an identical function in another client (function ?OnWindowPosChanged@CXTPStatusBar@@IAEXPAUtagWINDOWPOS@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/CommandBars/XTPStatusBar.cpp