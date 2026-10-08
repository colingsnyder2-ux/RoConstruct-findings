// from server: 100% by auto
// roc 2007-08 0066ce90  unit: CXTPMenuBar  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066ce90
//
// 0066ce90  56                   push esi
// 0066ce91  57                   push edi
// 0066ce92  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0066ce96  8bf1                 mov esi, ecx
// 0066ce98  56                   push esi
// 0066ce99  8bcf                 mov ecx, edi
// 0066ce9b  e80070fdff           call 0x643ea0
// 0066cea0  85c0                 test eax, eax
// 0066cea2  7559                 jne 0x66cefd
// 0066cea4  53                   push ebx
// 0066cea5  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0066cea9  55                   push ebp
// 0066ceaa  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0066ceae  53                   push ebx
// 0066ceaf  57                   push edi
// 0066ceb0  55                   push ebp
// 0066ceb1  8bce                 mov ecx, esi
// 0066ceb3  e858ffffff           call 0x66ce10
// 0066ceb8  8b8ebc010000         mov ecx, dword ptr [esi + 0x1bc]
// 0066cebe  e8fd8c0300           call 0x6a5bc0
// 0066cec3  85c0                 test eax, eax
// 0066cec5  89442418             mov dword ptr [esp + 0x18], eax
// 0066cec9  7430                 je 0x66cefb
// 0066cecb  eb03                 jmp 0x66ced0
// 0066cecd  8d4900               lea ecx, [ecx]
// 0066ced0  8d44241c             lea eax, [esp + 0x1c]
// 0066ced4  50                   push eax
// 0066ced5  8d4c241c             lea ecx, [esp + 0x1c]
// 0066ced9  51                   push ecx
// 0066ceda  8b8ebc010000         mov ecx, dword ptr [esi + 0x1bc]
// 0066cee0  e8eb8c0300           call 0x6a5bd0
// 0066cee5  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0066cee9  8b4a20               mov ecx, dword ptr [edx + 0x20]
// 0066ceec  53                   push ebx
// 0066ceed  57                   push edi
// 0066ceee  55                   push ebp
// 0066ceef  e89ce2ffff           call 0x66b190
// 0066cef4  837c241800           cmp dword ptr [esp + 0x18], 0
// 0066cef9  75d5                 jne 0x66ced0
// 0066cefb  5d                   pop ebp
// 0066cefc  5b                   pop ebx
// 0066cefd  5f                   pop edi
// 0066cefe  5e                   pop esi
// 0066ceff  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\CommandBars\XTPDockState.cpp (function ?GenerateCommandBarList@CXTPMenuBar@@MAEXAAKPAVCXTPCommandBarList@@PAUXTP_COMMANDBARS_PROPEXCHANGE_PARAM@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPDockState.cpp
