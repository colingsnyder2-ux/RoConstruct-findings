// roc 2012-06 009a2120  unit: CXTPToolBar  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a2120
//
// 009a2120  8b442404             mov eax, dword ptr [esp + 4]
// 009a2124  33d2                 xor edx, edx
// 009a2126  83f801               cmp eax, 1
// 009a2129  0f95c2               setne dl
// 009a212c  56                   push esi
// 009a212d  8bf1                 mov esi, ecx
// 009a212f  8b8ec8000000         mov ecx, dword ptr [esi + 0xc8]
// 009a2135  8986cc000000         mov dword ptr [esi + 0xcc], eax
// 009a213b  c781c400000000000000 mov dword ptr [ecx + 0xc4], 0
// 009a2145  8b8ec8000000         mov ecx, dword ptr [esi + 0xc8]
// 009a214b  8991b0000000         mov dword ptr [ecx + 0xb0], edx
// 009a2151  83f802               cmp eax, 2
// 009a2154  7547                 jne 0x9a219d
// 009a2156  6a00                 push 0
// 009a2158  8d54240c             lea edx, [esp + 0xc]
// 009a215c  52                   push edx
// 009a215d  6a00                 push 0
// 009a215f  680a100000           push 0x100a
// 009a2164  c744241801000000     mov dword ptr [esp + 0x18], 1
// 009a216c  ff15543ab200         call dword ptr [0xb23a54]
// 009a2172  85c0                 test eax, eax
// 009a2174  7427                 je 0x9a219d
// 009a2176  837c240800           cmp dword ptr [esp + 8], 0
// 009a217b  7520                 jne 0x9a219d
// 009a217d  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 009a2183  c780c400000001000000 mov dword ptr [eax + 0xc4], 1
// 009a218d  8b8ec8000000         mov ecx, dword ptr [esi + 0xc8]
// 009a2193  c781b000000000000000 mov dword ptr [ecx + 0xb0], 0
// 009a219d  5e                   pop esi
// 009a219e  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPCommandBars.cpp (function ?ShowKeyboardCues@CXTPCommandBarsOptions@@QAEXW4XTPKeyboardCuesShow@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBars.cpp
