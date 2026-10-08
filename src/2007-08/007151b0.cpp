// from server: 100% by auto
// roc 2007-08 007151b0  unit: CXTCaptionButton  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007151b0
//
// 007151b0  8b442408             mov eax, dword ptr [esp + 8]
// 007151b4  56                   push esi
// 007151b5  57                   push edi
// 007151b6  8bf1                 mov esi, ecx
// 007151b8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007151bc  8b5620               mov edx, dword ptr [esi + 0x20]
// 007151bf  50                   push eax
// 007151c0  51                   push ecx
// 007151c1  6a0c                 push 0xc
// 007151c3  52                   push edx
// 007151c4  ff152cec7700         call dword ptr [0x77ec2c]
// 007151ca  6a00                 push 0
// 007151cc  8bf8                 mov edi, eax
// 007151ce  8b4620               mov eax, dword ptr [esi + 0x20]
// 007151d1  6a00                 push 0
// 007151d3  50                   push eax
// 007151d4  ff15dcec7700         call dword ptr [0x77ecdc]
// 007151da  8bc7                 mov eax, edi
// 007151dc  5f                   pop edi
// 007151dd  5e                   pop esi
// 007151de  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Controls\XTButton.cpp (function ?OnSetText@CXTButton@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTButton.cpp
