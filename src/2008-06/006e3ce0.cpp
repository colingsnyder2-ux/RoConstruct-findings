// roc 2008-06 006e3ce0  unit: CXTPCommandBar  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e3ce0
//
// 006e3ce0  56                   push esi
// 006e3ce1  57                   push edi
// 006e3ce2  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006e3ce6  8bf1                 mov esi, ecx
// 006e3ce8  56                   push esi
// 006e3ce9  8bcf                 mov ecx, edi
// 006e3ceb  e85016fdff           call 0x6b5340
// 006e3cf0  85c0                 test eax, eax
// 006e3cf2  7557                 jne 0x6e3d4b
// 006e3cf4  8b07                 mov eax, dword ptr [edi]
// 006e3cf6  8b5058               mov edx, dword ptr [eax + 0x58]
// 006e3cf9  56                   push esi
// 006e3cfa  8bcf                 mov ecx, edi
// 006e3cfc  ffd2                 call edx
// 006e3cfe  8d4604               lea eax, [esi + 4]
// 006e3d01  50                   push eax
// 006e3d02  ff15b0218000         call dword ptr [0x8021b0]
// 006e3d08  e803defdff           call 0x6c1b10
// 006e3d0d  50                   push eax
// 006e3d0e  8bce                 mov ecx, esi
// 006e3d10  e8dbcefbff           call 0x6a0bf0
// 006e3d15  85c0                 test eax, eax
// 006e3d17  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006e3d1b  751c                 jne 0x6e3d39
// 006e3d1d  8b8ed8000000         mov ecx, dword ptr [esi + 0xd8]
// 006e3d23  85c9                 test ecx, ecx
// 006e3d25  7408                 je 0x6e3d2f
// 006e3d27  81f900000001         cmp ecx, 0x1000000
// 006e3d2d  720a                 jb 0x6e3d39
// 006e3d2f  8b08                 mov ecx, dword ptr [eax]
// 006e3d31  898ed8000000         mov dword ptr [esi + 0xd8], ecx
// 006e3d37  ff00                 inc dword ptr [eax]
// 006e3d39  8b542414             mov edx, dword ptr [esp + 0x14]
// 006e3d3d  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 006e3d43  52                   push edx
// 006e3d44  57                   push edi
// 006e3d45  50                   push eax
// 006e3d46  e8a5e2ffff           call 0x6e1ff0
// 006e3d4b  5f                   pop edi
// 006e3d4c  5e                   pop esi
// 006e3d4d  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPDockState.cpp (function ?GenerateCommandBarList@CXTPCommandBar@@MAEXAAKPAVCXTPCommandBarList@@PAUXTP_COMMANDBARS_PROPEXCHANGE_PARAM@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPDockState.cpp
