// from server: 100% by auto
// roc 2008-06 006a2810  unit: ActiveDocView  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a2810
//
// 006a2810  8b442404             mov eax, dword ptr [esp + 4]
// 006a2814  33d2                 xor edx, edx
// 006a2816  83f801               cmp eax, 1
// 006a2819  0f95c2               setne dl
// 006a281c  56                   push esi
// 006a281d  8bf1                 mov esi, ecx
// 006a281f  8b8ec8000000         mov ecx, dword ptr [esi + 0xc8]
// 006a2825  8986cc000000         mov dword ptr [esi + 0xcc], eax
// 006a282b  c781c400000000000000 mov dword ptr [ecx + 0xc4], 0
// 006a2835  8b8ec8000000         mov ecx, dword ptr [esi + 0xc8]
// 006a283b  8991b0000000         mov dword ptr [ecx + 0xb0], edx
// 006a2841  83f802               cmp eax, 2
// 006a2844  7547                 jne 0x6a288d
// 006a2846  6a00                 push 0
// 006a2848  8d54240c             lea edx, [esp + 0xc]
// 006a284c  52                   push edx
// 006a284d  6a00                 push 0
// 006a284f  680a100000           push 0x100a
// 006a2854  c744241801000000     mov dword ptr [esp + 0x18], 1
// 006a285c  ff15902c8000         call dword ptr [0x802c90]
// 006a2862  85c0                 test eax, eax
// 006a2864  7427                 je 0x6a288d
// 006a2866  837c240800           cmp dword ptr [esp + 8], 0
// 006a286b  7520                 jne 0x6a288d
// 006a286d  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 006a2873  c780c400000001000000 mov dword ptr [eax + 0xc4], 1
// 006a287d  8b8ec8000000         mov ecx, dword ptr [esi + 0xc8]
// 006a2883  c781b000000000000000 mov dword ptr [ecx + 0xb0], 0
// 006a288d  5e                   pop esi
// 006a288e  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPCommandBars.cpp (function ?ShowKeyboardCues@CXTPCommandBarsOptions@@QAEXW4XTPKeyboardCuesShow@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBars.cpp
