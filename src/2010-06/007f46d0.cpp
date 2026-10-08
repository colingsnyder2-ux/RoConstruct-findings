// roc 2010-06 007f46d0  unit: CXTPCustomizeOptionsPage  size: 201 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f46d0
//
// 007f46d0  56                   push esi
// 007f46d1  8bf1                 mov esi, ecx
// 007f46d3  e8ec3bfbff           call 0x7a82c4
// 007f46d8  33c0                 xor eax, eax
// 007f46da  398688000000         cmp dword ptr [esi + 0x88], eax
// 007f46e0  8bce                 mov ecx, esi
// 007f46e2  0f94c0               sete al
// 007f46e5  50                   push eax
// 007f46e6  6a65                 push 0x65
// 007f46e8  e87d41fbff           call 0x7a886a
// 007f46ed  8bc8                 mov ecx, eax
// 007f46ef  e82a39fbff           call 0x7a801e
// 007f46f4  8b8e94000000         mov ecx, dword ptr [esi + 0x94]
// 007f46fa  51                   push ecx
// 007f46fb  6a69                 push 0x69
// 007f46fd  8bce                 mov ecx, esi
// 007f46ff  e86641fbff           call 0x7a886a
// 007f4704  8bc8                 mov ecx, eax
// 007f4706  e81339fbff           call 0x7a801e
// 007f470b  6a6c                 push 0x6c
// 007f470d  8bce                 mov ecx, esi
// 007f470f  e85641fbff           call 0x7a886a
// 007f4714  85c0                 test eax, eax
// 007f4716  740e                 je 0x7f4726
// 007f4718  56                   push esi
// 007f4719  6a6c                 push 0x6c
// 007f471b  8d8ef4000000         lea ecx, [esi + 0xf4]
// 007f4721  e850881800           call 0x97cf76
// 007f4726  6a6b                 push 0x6b
// 007f4728  8bce                 mov ecx, esi
// 007f472a  e83b41fbff           call 0x7a886a
// 007f472f  85c0                 test eax, eax
// 007f4731  740e                 je 0x7f4741
// 007f4733  56                   push esi
// 007f4734  6a6b                 push 0x6b
// 007f4736  8d8e54010000         lea ecx, [esi + 0x154]
// 007f473c  e835881800           call 0x97cf76
// 007f4741  68db230000           push 0x23db
// 007f4746  8bce                 mov ecx, esi
// 007f4748  e8f3feffff           call 0x7f4640
// 007f474d  68dc230000           push 0x23dc
// 007f4752  8bce                 mov ecx, esi
// 007f4754  e8e7feffff           call 0x7f4640
// 007f4759  68dd230000           push 0x23dd
// 007f475e  8bce                 mov ecx, esi
// 007f4760  e8dbfeffff           call 0x7f4640
// 007f4765  68de230000           push 0x23de
// 007f476a  8bce                 mov ecx, esi
// 007f476c  e8cffeffff           call 0x7f4640
// 007f4771  68df230000           push 0x23df
// 007f4776  8bce                 mov ecx, esi
// 007f4778  e8c3feffff           call 0x7f4640
// 007f477d  68e0230000           push 0x23e0
// 007f4782  8bce                 mov ecx, esi
// 007f4784  e8b7feffff           call 0x7f4640
// 007f4789  6a00                 push 0
// 007f478b  8bce                 mov ecx, esi
// 007f478d  e89634fbff           call 0x7a7c28
// 007f4792  b801000000           mov eax, 1
// 007f4797  5e                   pop esi
// 007f4798  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPCustomizeOptionsPage.cpp (function ?OnInitDialog@CXTPCustomizeOptionsPage@@MAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCustomizeOptionsPage.cpp
