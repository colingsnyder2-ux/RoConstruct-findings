// roc 2008-06 006e3d50  unit: CXTPMenuBar  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e3d50
//
// 006e3d50  56                   push esi
// 006e3d51  57                   push edi
// 006e3d52  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006e3d56  8bf1                 mov esi, ecx
// 006e3d58  56                   push esi
// 006e3d59  8bcf                 mov ecx, edi
// 006e3d5b  e8e015fdff           call 0x6b5340
// 006e3d60  85c0                 test eax, eax
// 006e3d62  7559                 jne 0x6e3dbd
// 006e3d64  53                   push ebx
// 006e3d65  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 006e3d69  55                   push ebp
// 006e3d6a  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 006e3d6e  53                   push ebx
// 006e3d6f  57                   push edi
// 006e3d70  55                   push ebp
// 006e3d71  8bce                 mov ecx, esi
// 006e3d73  e868ffffff           call 0x6e3ce0
// 006e3d78  8b8ebc010000         mov ecx, dword ptr [esi + 0x1bc]
// 006e3d7e  e8bdc40300           call 0x720240
// 006e3d83  89442418             mov dword ptr [esp + 0x18], eax
// 006e3d87  85c0                 test eax, eax
// 006e3d89  7430                 je 0x6e3dbb
// 006e3d8b  eb03                 jmp 0x6e3d90
// 006e3d8d  8d4900               lea ecx, [ecx]
// 006e3d90  8d44241c             lea eax, [esp + 0x1c]
// 006e3d94  50                   push eax
// 006e3d95  8d4c241c             lea ecx, [esp + 0x1c]
// 006e3d99  51                   push ecx
// 006e3d9a  8b8ebc010000         mov ecx, dword ptr [esi + 0x1bc]
// 006e3da0  e8abc40300           call 0x720250
// 006e3da5  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006e3da9  8b4a20               mov ecx, dword ptr [edx + 0x20]
// 006e3dac  53                   push ebx
// 006e3dad  57                   push edi
// 006e3dae  55                   push ebp
// 006e3daf  e83ce2ffff           call 0x6e1ff0
// 006e3db4  837c241800           cmp dword ptr [esp + 0x18], 0
// 006e3db9  75d5                 jne 0x6e3d90
// 006e3dbb  5d                   pop ebp
// 006e3dbc  5b                   pop ebx
// 006e3dbd  5f                   pop edi
// 006e3dbe  5e                   pop esi
// 006e3dbf  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPDockState.cpp (function ?GenerateCommandBarList@CXTPMenuBar@@MAEXAAKPAVCXTPCommandBarList@@PAUXTP_COMMANDBARS_PROPEXCHANGE_PARAM@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockState.cpp
