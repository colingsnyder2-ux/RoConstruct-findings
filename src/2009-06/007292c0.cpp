// roc 2009-06 007292c0  unit: CXTPPaintManager  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007292c0
//
// 007292c0  8b442404             mov eax, dword ptr [esp + 4]
// 007292c4  33d2                 xor edx, edx
// 007292c6  83f801               cmp eax, 1
// 007292c9  0f95c2               setne dl
// 007292cc  56                   push esi
// 007292cd  8bf1                 mov esi, ecx
// 007292cf  8b8ec8000000         mov ecx, dword ptr [esi + 0xc8]
// 007292d5  8986cc000000         mov dword ptr [esi + 0xcc], eax
// 007292db  c781c400000000000000 mov dword ptr [ecx + 0xc4], 0
// 007292e5  8b8ec8000000         mov ecx, dword ptr [esi + 0xc8]
// 007292eb  8991b0000000         mov dword ptr [ecx + 0xb0], edx
// 007292f1  83f802               cmp eax, 2
// 007292f4  7547                 jne 0x72933d
// 007292f6  6a00                 push 0
// 007292f8  8d54240c             lea edx, [esp + 0xc]
// 007292fc  52                   push edx
// 007292fd  6a00                 push 0
// 007292ff  680a100000           push 0x100a
// 00729304  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0072930c  ff1564ee8900         call dword ptr [0x89ee64]
// 00729312  85c0                 test eax, eax
// 00729314  7427                 je 0x72933d
// 00729316  837c240800           cmp dword ptr [esp + 8], 0
// 0072931b  7520                 jne 0x72933d
// 0072931d  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 00729323  c780c400000001000000 mov dword ptr [eax + 0xc4], 1
// 0072932d  8b8ec8000000         mov ecx, dword ptr [esi + 0xc8]
// 00729333  c781b000000000000000 mov dword ptr [ecx + 0xb0], 0
// 0072933d  5e                   pop esi
// 0072933e  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPCommandBars.cpp (function ?ShowKeyboardCues@CXTPCommandBarsOptions@@QAEXW4XTPKeyboardCuesShow@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBars.cpp
