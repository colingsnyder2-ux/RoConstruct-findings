// roc 2011-06 00829b00  unit: CXTPToolBar  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00829b00
//
// 00829b00  8b442404             mov eax, dword ptr [esp + 4]
// 00829b04  33d2                 xor edx, edx
// 00829b06  83f801               cmp eax, 1
// 00829b09  0f95c2               setne dl
// 00829b0c  56                   push esi
// 00829b0d  8bf1                 mov esi, ecx
// 00829b0f  8b8ec8000000         mov ecx, dword ptr [esi + 0xc8]
// 00829b15  8986cc000000         mov dword ptr [esi + 0xcc], eax
// 00829b1b  c781c400000000000000 mov dword ptr [ecx + 0xc4], 0
// 00829b25  8b8ec8000000         mov ecx, dword ptr [esi + 0xc8]
// 00829b2b  8991b0000000         mov dword ptr [ecx + 0xb0], edx
// 00829b31  83f802               cmp eax, 2
// 00829b34  7547                 jne 0x829b7d
// 00829b36  6a00                 push 0
// 00829b38  8d54240c             lea edx, [esp + 0xc]
// 00829b3c  52                   push edx
// 00829b3d  6a00                 push 0
// 00829b3f  680a100000           push 0x100a
// 00829b44  c744241801000000     mov dword ptr [esp + 0x18], 1
// 00829b4c  ff155c1ba400         call dword ptr [0xa41b5c]
// 00829b52  85c0                 test eax, eax
// 00829b54  7427                 je 0x829b7d
// 00829b56  837c240800           cmp dword ptr [esp + 8], 0
// 00829b5b  7520                 jne 0x829b7d
// 00829b5d  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 00829b63  c780c400000001000000 mov dword ptr [eax + 0xc4], 1
// 00829b6d  8b8ec8000000         mov ecx, dword ptr [esi + 0xc8]
// 00829b73  c781b000000000000000 mov dword ptr [ecx + 0xb0], 0
// 00829b7d  5e                   pop esi
// 00829b7e  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPCommandBars.cpp (function ?ShowKeyboardCues@CXTPCommandBarsOptions@@QAEXW4XTPKeyboardCuesShow@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBars.cpp
