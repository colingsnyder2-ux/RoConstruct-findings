// roc 2009-12 008373a0  unit: CXTPMenuBar  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008373a0
//
// 008373a0  56                   push esi
// 008373a1  57                   push edi
// 008373a2  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008373a6  8bf1                 mov esi, ecx
// 008373a8  56                   push esi
// 008373a9  8bcf                 mov ecx, edi
// 008373ab  e840d6fcff           call 0x8049f0
// 008373b0  85c0                 test eax, eax
// 008373b2  7559                 jne 0x83740d
// 008373b4  53                   push ebx
// 008373b5  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 008373b9  55                   push ebp
// 008373ba  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 008373be  53                   push ebx
// 008373bf  57                   push edi
// 008373c0  55                   push ebp
// 008373c1  8bce                 mov ecx, esi
// 008373c3  e868ffffff           call 0x837330
// 008373c8  8b8ebc010000         mov ecx, dword ptr [esi + 0x1bc]
// 008373ce  e8adba0500           call 0x892e80
// 008373d3  89442418             mov dword ptr [esp + 0x18], eax
// 008373d7  85c0                 test eax, eax
// 008373d9  7430                 je 0x83740b
// 008373db  eb03                 jmp 0x8373e0
// 008373dd  8d4900               lea ecx, [ecx]
// 008373e0  8d44241c             lea eax, [esp + 0x1c]
// 008373e4  50                   push eax
// 008373e5  8d4c241c             lea ecx, [esp + 0x1c]
// 008373e9  51                   push ecx
// 008373ea  8b8ebc010000         mov ecx, dword ptr [esi + 0x1bc]
// 008373f0  e89bba0500           call 0x892e90
// 008373f5  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008373f9  8b4a20               mov ecx, dword ptr [edx + 0x20]
// 008373fc  53                   push ebx
// 008373fd  57                   push edi
// 008373fe  55                   push ebp
// 008373ff  e89ce2ffff           call 0x8356a0
// 00837404  837c241800           cmp dword ptr [esp + 0x18], 0
// 00837409  75d5                 jne 0x8373e0
// 0083740b  5d                   pop ebp
// 0083740c  5b                   pop ebx
// 0083740d  5f                   pop edi
// 0083740e  5e                   pop esi
// 0083740f  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPDockState.cpp (function ?GenerateCommandBarList@CXTPMenuBar@@MAEXAAKPAVCXTPCommandBarList@@PAUXTP_COMMANDBARS_PROPEXCHANGE_PARAM@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockState.cpp
