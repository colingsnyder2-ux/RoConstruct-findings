// roc 2007-08 00631b60  unit: _com_error  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00631b60
//
// 00631b60  8b442404             mov eax, dword ptr [esp + 4]
// 00631b64  33d2                 xor edx, edx
// 00631b66  83f801               cmp eax, 1
// 00631b69  0f95c2               setne dl
// 00631b6c  83f802               cmp eax, 2
// 00631b6f  56                   push esi
// 00631b70  8bf1                 mov esi, ecx
// 00631b72  8b8ec8000000         mov ecx, dword ptr [esi + 0xc8]
// 00631b78  8986cc000000         mov dword ptr [esi + 0xcc], eax
// 00631b7e  c781c400000000000000 mov dword ptr [ecx + 0xc4], 0
// 00631b88  8b8ec8000000         mov ecx, dword ptr [esi + 0xc8]
// 00631b8e  8991b0000000         mov dword ptr [ecx + 0xb0], edx
// 00631b94  7547                 jne 0x631bdd
// 00631b96  6a00                 push 0
// 00631b98  8d54240c             lea edx, [esp + 0xc]
// 00631b9c  52                   push edx
// 00631b9d  6a00                 push 0
// 00631b9f  680a100000           push 0x100a
// 00631ba4  c744241801000000     mov dword ptr [esp + 0x18], 1
// 00631bac  ff150cee7700         call dword ptr [0x77ee0c]
// 00631bb2  85c0                 test eax, eax
// 00631bb4  7427                 je 0x631bdd
// 00631bb6  837c240800           cmp dword ptr [esp + 8], 0
// 00631bbb  7520                 jne 0x631bdd
// 00631bbd  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 00631bc3  c780c400000001000000 mov dword ptr [eax + 0xc4], 1
// 00631bcd  8b8ec8000000         mov ecx, dword ptr [esi + 0xc8]
// 00631bd3  c781b000000000000000 mov dword ptr [ecx + 0xb0], 0
// 00631bdd  5e                   pop esi
// 00631bde  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPCommandBars.cpp (function ?ShowKeyboardCues@CXTPCommandBarsOptions@@QAEXW4XTPKeyboardCuesShow@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPCommandBars.cpp
