// roc 2009-06 0075c630  unit: CXTPMenuBar  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0075c630
//
// 0075c630  56                   push esi
// 0075c631  57                   push edi
// 0075c632  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0075c636  8bf1                 mov esi, ecx
// 0075c638  56                   push esi
// 0075c639  8bcf                 mov ecx, edi
// 0075c63b  e87012fdff           call 0x72d8b0
// 0075c640  85c0                 test eax, eax
// 0075c642  7559                 jne 0x75c69d
// 0075c644  53                   push ebx
// 0075c645  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0075c649  55                   push ebp
// 0075c64a  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0075c64e  53                   push ebx
// 0075c64f  57                   push edi
// 0075c650  55                   push ebp
// 0075c651  8bce                 mov ecx, esi
// 0075c653  e868ffffff           call 0x75c5c0
// 0075c658  8b8ebc010000         mov ecx, dword ptr [esi + 0x1bc]
// 0075c65e  e83d960500           call 0x7b5ca0
// 0075c663  89442418             mov dword ptr [esp + 0x18], eax
// 0075c667  85c0                 test eax, eax
// 0075c669  7430                 je 0x75c69b
// 0075c66b  eb03                 jmp 0x75c670
// 0075c66d  8d4900               lea ecx, [ecx]
// 0075c670  8d44241c             lea eax, [esp + 0x1c]
// 0075c674  50                   push eax
// 0075c675  8d4c241c             lea ecx, [esp + 0x1c]
// 0075c679  51                   push ecx
// 0075c67a  8b8ebc010000         mov ecx, dword ptr [esi + 0x1bc]
// 0075c680  e82b960500           call 0x7b5cb0
// 0075c685  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0075c689  8b4a20               mov ecx, dword ptr [edx + 0x20]
// 0075c68c  53                   push ebx
// 0075c68d  57                   push edi
// 0075c68e  55                   push ebp
// 0075c68f  e8ece1ffff           call 0x75a880
// 0075c694  837c241800           cmp dword ptr [esp + 0x18], 0
// 0075c699  75d5                 jne 0x75c670
// 0075c69b  5d                   pop ebp
// 0075c69c  5b                   pop ebx
// 0075c69d  5f                   pop edi
// 0075c69e  5e                   pop esi
// 0075c69f  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPDockState.cpp (function ?GenerateCommandBarList@CXTPMenuBar@@MAEXAAKPAVCXTPCommandBarList@@PAUXTP_COMMANDBARS_PROPEXCHANGE_PARAM@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockState.cpp
