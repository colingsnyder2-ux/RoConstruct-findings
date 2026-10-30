// from server: 100% by auto
// roc 2007-08 00715170  unit: CXTCaptionButton  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00715170
//
// 00715170  8b442408             mov eax, dword ptr [esp + 8]
// 00715174  56                   push esi
// 00715175  57                   push edi
// 00715176  8bf1                 mov esi, ecx
// 00715178  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0071517c  8b5620               mov edx, dword ptr [esi + 0x20]
// 0071517f  50                   push eax
// 00715180  51                   push ecx
// 00715181  6828010000           push 0x128
// 00715186  52                   push edx
// 00715187  ff152cec7700         call dword ptr [0x77ec2c]
// 0071518d  6a00                 push 0
// 0071518f  8bf8                 mov edi, eax
// 00715191  8b4620               mov eax, dword ptr [esi + 0x20]
// 00715194  6a00                 push 0
// 00715196  50                   push eax
// 00715197  ff15dcec7700         call dword ptr [0x77ecdc]
// 0071519d  8bc7                 mov eax, edi
// 0071519f  5f                   pop edi
// 007151a0  5e                   pop esi
// 007151a1  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Controls\XTButton.cpp (function ?OnUpdateUIState@CXTButton@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTButton.cpp
