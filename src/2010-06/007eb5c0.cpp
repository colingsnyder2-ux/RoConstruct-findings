// roc 2010-06 007eb5c0  unit: CXTPMenuBar  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007eb5c0
//
// 007eb5c0  56                   push esi
// 007eb5c1  57                   push edi
// 007eb5c2  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007eb5c6  8bf1                 mov esi, ecx
// 007eb5c8  56                   push esi
// 007eb5c9  8bcf                 mov ecx, edi
// 007eb5cb  e890d5fcff           call 0x7b8b60
// 007eb5d0  85c0                 test eax, eax
// 007eb5d2  7559                 jne 0x7eb62d
// 007eb5d4  53                   push ebx
// 007eb5d5  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 007eb5d9  55                   push ebp
// 007eb5da  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 007eb5de  53                   push ebx
// 007eb5df  57                   push edi
// 007eb5e0  55                   push ebp
// 007eb5e1  8bce                 mov ecx, esi
// 007eb5e3  e868ffffff           call 0x7eb550
// 007eb5e8  8b8ebc010000         mov ecx, dword ptr [esi + 0x1bc]
// 007eb5ee  e83dba0500           call 0x847030
// 007eb5f3  89442418             mov dword ptr [esp + 0x18], eax
// 007eb5f7  85c0                 test eax, eax
// 007eb5f9  7430                 je 0x7eb62b
// 007eb5fb  eb03                 jmp 0x7eb600
// 007eb5fd  8d4900               lea ecx, [ecx]
// 007eb600  8d44241c             lea eax, [esp + 0x1c]
// 007eb604  50                   push eax
// 007eb605  8d4c241c             lea ecx, [esp + 0x1c]
// 007eb609  51                   push ecx
// 007eb60a  8b8ebc010000         mov ecx, dword ptr [esi + 0x1bc]
// 007eb610  e82bba0500           call 0x847040
// 007eb615  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007eb619  8b4a20               mov ecx, dword ptr [edx + 0x20]
// 007eb61c  53                   push ebx
// 007eb61d  57                   push edi
// 007eb61e  55                   push ebp
// 007eb61f  e89ce2ffff           call 0x7e98c0
// 007eb624  837c241800           cmp dword ptr [esp + 0x18], 0
// 007eb629  75d5                 jne 0x7eb600
// 007eb62b  5d                   pop ebp
// 007eb62c  5b                   pop ebx
// 007eb62d  5f                   pop edi
// 007eb62e  5e                   pop esi
// 007eb62f  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPDockState.cpp (function ?GenerateCommandBarList@CXTPMenuBar@@MAEXAAKPAVCXTPCommandBarList@@PAUXTP_COMMANDBARS_PROPEXCHANGE_PARAM@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockState.cpp
