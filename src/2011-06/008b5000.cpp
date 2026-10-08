// roc 2011-06 008b5000  unit: CXTPReportTip  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b5000
//
// 008b5000  83ec10               sub esp, 0x10
// 008b5003  56                   push esi
// 008b5004  8bf1                 mov esi, ecx
// 008b5006  837e2000             cmp dword ptr [esi + 0x20], 0
// 008b500a  740c                 je 0x8b5018
// 008b500c  b801000000           mov eax, 1
// 008b5011  5e                   pop esi
// 008b5012  83c410               add esp, 0x10
// 008b5015  c20400               ret 4
// 008b5018  8b442418             mov eax, dword ptr [esp + 0x18]
// 008b501c  57                   push edi
// 008b501d  894664               mov dword ptr [esi + 0x64], eax
// 008b5020  e8f752f5ff           call 0x80a31c
// 008b5025  68007f0000           push 0x7f00
// 008b502a  6a00                 push 0
// 008b502c  ff15081aa400         call dword ptr [0xa41a08]
// 008b5032  6a00                 push 0
// 008b5034  6a00                 push 0
// 008b5036  6a00                 push 0
// 008b5038  8d4c2414             lea ecx, [esp + 0x14]
// 008b503c  8bf8                 mov edi, eax
// 008b503e  e8ad7cfaff           call 0x85ccf0
// 008b5043  50                   push eax
// 008b5044  6800000080           push 0x80000000
// 008b5049  6a00                 push 0
// 008b504b  6a00                 push 0
// 008b504d  6a00                 push 0
// 008b504f  57                   push edi
// 008b5050  6a00                 push 0
// 008b5052  e8d359f5ff           call 0x80aa2a
// 008b5057  50                   push eax
// 008b5058  6880000000           push 0x80
// 008b505d  8bce                 mov ecx, esi
// 008b505f  e86c50f5ff           call 0x80a0d0
// 008b5064  5f                   pop edi
// 008b5065  5e                   pop esi
// 008b5066  83c410               add esp, 0x10
// 008b5069  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportTip.cpp (function ?Create@CXTPReportTip@@UAEHPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportTip.cpp
