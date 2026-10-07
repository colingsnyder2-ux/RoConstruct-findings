// roc 2008-06 006ece70  unit: CXTPCustomizeOptionsPage  size: 201 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ece70
//
// 006ece70  56                   push esi
// 006ece71  8bf1                 mov esi, ecx
// 006ece73  e81240fbff           call 0x6a0e8a
// 006ece78  33c0                 xor eax, eax
// 006ece7a  398688000000         cmp dword ptr [esi + 0x88], eax
// 006ece80  8bce                 mov ecx, esi
// 006ece82  0f94c0               sete al
// 006ece85  50                   push eax
// 006ece86  6a65                 push 0x65
// 006ece88  e88b45fbff           call 0x6a1418
// 006ece8d  8bc8                 mov ecx, eax
// 006ece8f  e8823efbff           call 0x6a0d16
// 006ece94  8b8e94000000         mov ecx, dword ptr [esi + 0x94]
// 006ece9a  51                   push ecx
// 006ece9b  6a69                 push 0x69
// 006ece9d  8bce                 mov ecx, esi
// 006ece9f  e87445fbff           call 0x6a1418
// 006ecea4  8bc8                 mov ecx, eax
// 006ecea6  e86b3efbff           call 0x6a0d16
// 006eceab  6a6c                 push 0x6c
// 006ecead  8bce                 mov ecx, esi
// 006eceaf  e86445fbff           call 0x6a1418
// 006eceb4  85c0                 test eax, eax
// 006eceb6  740e                 je 0x6ecec6
// 006eceb8  56                   push esi
// 006eceb9  6a6c                 push 0x6c
// 006ecebb  8d8ef4000000         lea ecx, [esi + 0xf4]
// 006ecec1  e8faf20c00           call 0x7bc1c0
// 006ecec6  6a6b                 push 0x6b
// 006ecec8  8bce                 mov ecx, esi
// 006ececa  e84945fbff           call 0x6a1418
// 006ececf  85c0                 test eax, eax
// 006eced1  740e                 je 0x6ecee1
// 006eced3  56                   push esi
// 006eced4  6a6b                 push 0x6b
// 006eced6  8d8e54010000         lea ecx, [esi + 0x154]
// 006ecedc  e8dff20c00           call 0x7bc1c0
// 006ecee1  68db230000           push 0x23db
// 006ecee6  8bce                 mov ecx, esi
// 006ecee8  e8f3feffff           call 0x6ecde0
// 006eceed  68dc230000           push 0x23dc
// 006ecef2  8bce                 mov ecx, esi
// 006ecef4  e8e7feffff           call 0x6ecde0
// 006ecef9  68dd230000           push 0x23dd
// 006ecefe  8bce                 mov ecx, esi
// 006ecf00  e8dbfeffff           call 0x6ecde0
// 006ecf05  68de230000           push 0x23de
// 006ecf0a  8bce                 mov ecx, esi
// 006ecf0c  e8cffeffff           call 0x6ecde0
// 006ecf11  68df230000           push 0x23df
// 006ecf16  8bce                 mov ecx, esi
// 006ecf18  e8c3feffff           call 0x6ecde0
// 006ecf1d  68e0230000           push 0x23e0
// 006ecf22  8bce                 mov ecx, esi
// 006ecf24  e8b7feffff           call 0x6ecde0
// 006ecf29  6a00                 push 0
// 006ecf2b  8bce                 mov ecx, esi
// 006ecf2d  e8dc39fbff           call 0x6a090e
// 006ecf32  b801000000           mov eax, 1
// 006ecf37  5e                   pop esi
// 006ecf38  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPCustomizeOptionsPage.cpp (function ?OnInitDialog@CXTPCustomizeOptionsPage@@MAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCustomizeOptionsPage.cpp
