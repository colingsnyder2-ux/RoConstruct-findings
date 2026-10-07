// roc 2007-08 0066ae50  unit: CXTPToolBar::CControlButtonExpand  size: 272 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066ae50
//
// 0066ae50  837c240800           cmp dword ptr [esp + 8], 0
// 0066ae55  53                   push ebx
// 0066ae56  55                   push ebp
// 0066ae57  56                   push esi
// 0066ae58  57                   push edi
// 0066ae59  8bf1                 mov esi, ecx
// 0066ae5b  0f84f8000000         je 0x66af59
// 0066ae61  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0066ae65  6a00                 push 0
// 0066ae67  56                   push esi
// 0066ae68  68a4ad7c00           push 0x7cada4
// 0066ae6d  57                   push edi
// 0066ae6e  e8ada80100           call 0x685720
// 0066ae73  6a01                 push 1
// 0066ae75  8d4604               lea eax, [esi + 4]
// 0066ae78  50                   push eax
// 0066ae79  68bc7c7900           push 0x797cbc
// 0066ae7e  57                   push edi
// 0066ae7f  e8fca80100           call 0x685780
// 0066ae84  6a00                 push 0
// 0066ae86  8d4e08               lea ecx, [esi + 8]
// 0066ae89  51                   push ecx
// 0066ae8a  6898ad7c00           push 0x7cad98
// 0066ae8f  57                   push edi
// 0066ae90  e8eba80100           call 0x685780
// 0066ae95  8d5614               lea edx, [esi + 0x14]
// 0066ae98  52                   push edx
// 0066ae99  688cad7c00           push 0x7cad8c
// 0066ae9e  57                   push edi
// 0066ae9f  e89ca80100           call 0x685740
// 0066aea4  6a00                 push 0
// 0066aea6  8d4618               lea eax, [esi + 0x18]
// 0066aea9  50                   push eax
// 0066aeaa  687cad7c00           push 0x7cad7c
// 0066aeaf  57                   push edi
// 0066aeb0  e86ba80100           call 0x685720
// 0066aeb5  83c44c               add esp, 0x4c
// 0066aeb8  33c9                 xor ecx, ecx
// 0066aeba  51                   push ecx
// 0066aebb  33c0                 xor eax, eax
// 0066aebd  50                   push eax
// 0066aebe  8d4e0c               lea ecx, [esi + 0xc]
// 0066aec1  51                   push ecx
// 0066aec2  6870ad7c00           push 0x7cad70
// 0066aec7  57                   push edi
// 0066aec8  e853a90100           call 0x685820
// 0066aecd  83c404               add esp, 4
// 0066aed0  8bc4                 mov eax, esp
// 0066aed2  33c9                 xor ecx, ecx
// 0066aed4  33d2                 xor edx, edx
// 0066aed6  8908                 mov dword ptr [eax], ecx
// 0066aed8  895004               mov dword ptr [eax + 4], edx
// 0066aedb  8d561c               lea edx, [esi + 0x1c]
// 0066aede  52                   push edx
// 0066aedf  33db                 xor ebx, ebx
// 0066aee1  6864ad7c00           push 0x7cad64
// 0066aee6  33ed                 xor ebp, ebp
// 0066aee8  895808               mov dword ptr [eax + 8], ebx
// 0066aeeb  57                   push edi
// 0066aeec  89680c               mov dword ptr [eax + 0xc], ebp
// 0066aeef  e84ca90100           call 0x685840
// 0066aef4  33c9                 xor ecx, ecx
// 0066aef6  51                   push ecx
// 0066aef7  33c0                 xor eax, eax
// 0066aef9  50                   push eax
// 0066aefa  8d4630               lea eax, [esi + 0x30]
// 0066aefd  50                   push eax
// 0066aefe  6858ad7c00           push 0x7cad58
// 0066af03  57                   push edi
// 0066af04  e817a90100           call 0x685820
// 0066af09  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0066af0d  83c430               add esp, 0x30
// 0066af10  833906               cmp dword ptr [ecx], 6
// 0066af13  7644                 jbe 0x66af59
// 0066af15  55                   push ebp
// 0066af16  8d5e3c               lea ebx, [esi + 0x3c]
// 0066af19  53                   push ebx
// 0066af1a  684cad7c00           push 0x7cad4c
// 0066af1f  57                   push edi
// 0066af20  e85ba80100           call 0x685780
// 0066af25  83c410               add esp, 0x10
// 0066af28  392b                 cmp dword ptr [ebx], ebp
// 0066af2a  742d                 je 0x66af59
// 0066af2c  33c9                 xor ecx, ecx
// 0066af2e  51                   push ecx
// 0066af2f  33c0                 xor eax, eax
// 0066af31  50                   push eax
// 0066af32  8d5640               lea edx, [esi + 0x40]
// 0066af35  52                   push edx
// 0066af36  6830ad7c00           push 0x7cad30
// 0066af3b  57                   push edi
// 0066af3c  e8dfa80100           call 0x685820
// 0066af41  33c9                 xor ecx, ecx
// 0066af43  51                   push ecx
// 0066af44  33c0                 xor eax, eax
// 0066af46  50                   push eax
// 0066af47  83c648               add esi, 0x48
// 0066af4a  56                   push esi
// 0066af4b  6814ad7c00           push 0x7cad14
// 0066af50  57                   push edi
// 0066af51  e8caa80100           call 0x685820
// 0066af56  83c428               add esp, 0x28
// 0066af59  5f                   pop edi
// 0066af5a  5e                   pop esi
// 0066af5b  5d                   pop ebp
// 0066af5c  5b                   pop ebx
// 0066af5d  c20800               ret 8
// library xtp-11.2.2-vc8/Source\CommandBars\XTPDockState.cpp (function ?DoPropExchange@CToolBarInfo@CXTPToolBar@@QAEXPAVCXTPPropExchange@@PAVCXTPDockState@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPDockState.cpp
