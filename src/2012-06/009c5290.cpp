// roc 2012-06 009c5290  unit: CXTPMenuBar  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c5290
//
// 009c5290  56                   push esi
// 009c5291  57                   push edi
// 009c5292  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 009c5296  8bf1                 mov esi, ecx
// 009c5298  56                   push esi
// 009c5299  8bcf                 mov ecx, edi
// 009c529b  e800e0fcff           call 0x9932a0
// 009c52a0  85c0                 test eax, eax
// 009c52a2  7559                 jne 0x9c52fd
// 009c52a4  53                   push ebx
// 009c52a5  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 009c52a9  55                   push ebp
// 009c52aa  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 009c52ae  53                   push ebx
// 009c52af  57                   push edi
// 009c52b0  55                   push ebp
// 009c52b1  8bce                 mov ecx, esi
// 009c52b3  e868ffffff           call 0x9c5220
// 009c52b8  8b8ebc010000         mov ecx, dword ptr [esi + 0x1bc]
// 009c52be  e85d730500           call 0xa1c620
// 009c52c3  89442418             mov dword ptr [esp + 0x18], eax
// 009c52c7  85c0                 test eax, eax
// 009c52c9  7430                 je 0x9c52fb
// 009c52cb  eb03                 jmp 0x9c52d0
// 009c52cd  8d4900               lea ecx, [ecx]
// 009c52d0  8d44241c             lea eax, [esp + 0x1c]
// 009c52d4  50                   push eax
// 009c52d5  8d4c241c             lea ecx, [esp + 0x1c]
// 009c52d9  51                   push ecx
// 009c52da  8b8ebc010000         mov ecx, dword ptr [esi + 0x1bc]
// 009c52e0  e84b730500           call 0xa1c630
// 009c52e5  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 009c52e9  8b4a20               mov ecx, dword ptr [edx + 0x20]
// 009c52ec  53                   push ebx
// 009c52ed  57                   push edi
// 009c52ee  55                   push ebp
// 009c52ef  e83ce3ffff           call 0x9c3630
// 009c52f4  837c241800           cmp dword ptr [esp + 0x18], 0
// 009c52f9  75d5                 jne 0x9c52d0
// 009c52fb  5d                   pop ebp
// 009c52fc  5b                   pop ebx
// 009c52fd  5f                   pop edi
// 009c52fe  5e                   pop esi
// 009c52ff  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPDockState.cpp (function ?GenerateCommandBarList@CXTPMenuBar@@MAEXAAKPAVCXTPCommandBarList@@PAUXTP_COMMANDBARS_PROPEXCHANGE_PARAM@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockState.cpp
