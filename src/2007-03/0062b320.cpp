// roc 2007-03 0062b320  unit: seg_00620000  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0062b320
//
// 0062b320  8b442404             mov eax, dword ptr [esp + 4]
// 0062b324  33d2                 xor edx, edx
// 0062b326  83f801               cmp eax, 1
// 0062b329  0f95c2               setne dl
// 0062b32c  83f802               cmp eax, 2
// 0062b32f  56                   push esi
// 0062b330  8bf1                 mov esi, ecx
// 0062b332  8b8ec8000000         mov ecx, dword ptr [esi + 0xc8]
// 0062b338  8986cc000000         mov dword ptr [esi + 0xcc], eax
// 0062b33e  c781c400000000000000 mov dword ptr [ecx + 0xc4], 0
// 0062b348  8b8ec8000000         mov ecx, dword ptr [esi + 0xc8]
// 0062b34e  8991b0000000         mov dword ptr [ecx + 0xb0], edx
// 0062b354  7547                 jne 0x62b39d
// 0062b356  6a00                 push 0
// 0062b358  8d54240c             lea edx, [esp + 0xc]
// 0062b35c  52                   push edx
// 0062b35d  6a00                 push 0
// 0062b35f  680a100000           push 0x100a
// 0062b364  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0062b36c  ff150cef7700         call dword ptr [0x77ef0c]
// 0062b372  85c0                 test eax, eax
// 0062b374  7427                 je 0x62b39d
// 0062b376  837c240800           cmp dword ptr [esp + 8], 0
// 0062b37b  7520                 jne 0x62b39d
// 0062b37d  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 0062b383  c780c400000001000000 mov dword ptr [eax + 0xc4], 1
// 0062b38d  8b8ec8000000         mov ecx, dword ptr [esi + 0xc8]
// 0062b393  c781b000000000000000 mov dword ptr [ecx + 0xb0], 0
// 0062b39d  5e                   pop esi
// 0062b39e  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPCommandBars.cpp (function ?ShowKeyboardCues@CXTPCommandBarsOptions@@QAEXW4XTPKeyboardCuesShow@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPCommandBars.cpp
