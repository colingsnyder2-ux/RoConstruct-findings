// roc 2011-06 0084cde0  unit: CXTPMenuBar  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084cde0
//
// 0084cde0  56                   push esi
// 0084cde1  57                   push edi
// 0084cde2  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0084cde6  8bf1                 mov esi, ecx
// 0084cde8  56                   push esi
// 0084cde9  8bcf                 mov ecx, edi
// 0084cdeb  e8c0e1fcff           call 0x81afb0
// 0084cdf0  85c0                 test eax, eax
// 0084cdf2  7559                 jne 0x84ce4d
// 0084cdf4  53                   push ebx
// 0084cdf5  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0084cdf9  55                   push ebp
// 0084cdfa  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0084cdfe  53                   push ebx
// 0084cdff  57                   push edi
// 0084ce00  55                   push ebp
// 0084ce01  8bce                 mov ecx, esi
// 0084ce03  e868ffffff           call 0x84cd70
// 0084ce08  8b8ebc010000         mov ecx, dword ptr [esi + 0x1bc]
// 0084ce0e  e8cd730500           call 0x8a41e0
// 0084ce13  89442418             mov dword ptr [esp + 0x18], eax
// 0084ce17  85c0                 test eax, eax
// 0084ce19  7430                 je 0x84ce4b
// 0084ce1b  eb03                 jmp 0x84ce20
// 0084ce1d  8d4900               lea ecx, [ecx]
// 0084ce20  8d44241c             lea eax, [esp + 0x1c]
// 0084ce24  50                   push eax
// 0084ce25  8d4c241c             lea ecx, [esp + 0x1c]
// 0084ce29  51                   push ecx
// 0084ce2a  8b8ebc010000         mov ecx, dword ptr [esi + 0x1bc]
// 0084ce30  e8bb730500           call 0x8a41f0
// 0084ce35  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0084ce39  8b4a20               mov ecx, dword ptr [edx + 0x20]
// 0084ce3c  53                   push ebx
// 0084ce3d  57                   push edi
// 0084ce3e  55                   push ebp
// 0084ce3f  e89ce2ffff           call 0x84b0e0
// 0084ce44  837c241800           cmp dword ptr [esp + 0x18], 0
// 0084ce49  75d5                 jne 0x84ce20
// 0084ce4b  5d                   pop ebp
// 0084ce4c  5b                   pop ebx
// 0084ce4d  5f                   pop edi
// 0084ce4e  5e                   pop esi
// 0084ce4f  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPDockState.cpp (function ?GenerateCommandBarList@CXTPMenuBar@@MAEXAAKPAVCXTPCommandBarList@@PAUXTP_COMMANDBARS_PROPEXCHANGE_PARAM@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockState.cpp
