// roc 2008-06 006c2c50  unit: CXTPCommandBar  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c2c50
//
// 006c2c50  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006c2c54  56                   push esi
// 006c2c55  8bf1                 mov esi, ecx
// 006c2c57  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006c2c5b  50                   push eax
// 006c2c5c  51                   push ecx
// 006c2c5d  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 006c2c63  e898f20200           call 0x6f1f00
// 006c2c68  85c0                 test eax, eax
// 006c2c6a  741e                 je 0x6c2c8a
// 006c2c6c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006c2c70  8b10                 mov edx, dword ptr [eax]
// 006c2c72  8b92f0000000         mov edx, dword ptr [edx + 0xf0]
// 006c2c78  51                   push ecx
// 006c2c79  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006c2c7d  51                   push ecx
// 006c2c7e  8bc8                 mov ecx, eax
// 006c2c80  ffd2                 call edx
// 006c2c82  85c0                 test eax, eax
// 006c2c84  0f858a000000         jne 0x6c2d14
// 006c2c8a  57                   push edi
// 006c2c8b  8bce                 mov ecx, esi
// 006c2c8d  e87e21ffff           call 0x6b4e10
// 006c2c92  8bf8                 mov edi, eax
// 006c2c94  85ff                 test edi, edi
// 006c2c96  747b                 je 0x6c2d13
// 006c2c98  8bce                 mov ecx, esi
// 006c2c9a  e8a121ffff           call 0x6b4e40
// 006c2c9f  85c0                 test eax, eax
// 006c2ca1  741b                 je 0x6c2cbe
// 006c2ca3  8b442414             mov eax, dword ptr [esp + 0x14]
// 006c2ca7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006c2cab  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006c2caf  50                   push eax
// 006c2cb0  51                   push ecx
// 006c2cb1  52                   push edx
// 006c2cb2  8bce                 mov ecx, esi
// 006c2cb4  e84750ffff           call 0x6b7d00
// 006c2cb9  5f                   pop edi
// 006c2cba  5e                   pop esi
// 006c2cbb  c20c00               ret 0xc
// 006c2cbe  8b06                 mov eax, dword ptr [esi]
// 006c2cc0  8b9048010000         mov edx, dword ptr [eax + 0x148]
// 006c2cc6  6a00                 push 0
// 006c2cc8  6a01                 push 1
// 006c2cca  6a00                 push 0
// 006c2ccc  8bce                 mov ecx, esi
// 006c2cce  ffd2                 call edx
// 006c2cd0  8b06                 mov eax, dword ptr [esi]
// 006c2cd2  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 006c2cd8  6a00                 push 0
// 006c2cda  6aff                 push -1
// 006c2cdc  8bce                 mov ecx, esi
// 006c2cde  ffd2                 call edx
// 006c2ce0  8b06                 mov eax, dword ptr [esi]
// 006c2ce2  8b90ac010000         mov edx, dword ptr [eax + 0x1ac]
// 006c2ce8  6a01                 push 1
// 006c2cea  6a00                 push 0
// 006c2cec  8bce                 mov ecx, esi
// 006c2cee  ffd2                 call edx
// 006c2cf0  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006c2cf3  8d442410             lea eax, [esp + 0x10]
// 006c2cf7  50                   push eax
// 006c2cf8  51                   push ecx
// 006c2cf9  ff15802d8000         call dword ptr [0x802d80]
// 006c2cff  8b442414             mov eax, dword ptr [esp + 0x14]
// 006c2d03  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006c2d07  8b17                 mov edx, dword ptr [edi]
// 006c2d09  8b5268               mov edx, dword ptr [edx + 0x68]
// 006c2d0c  50                   push eax
// 006c2d0d  51                   push ecx
// 006c2d0e  56                   push esi
// 006c2d0f  8bcf                 mov ecx, edi
// 006c2d11  ffd2                 call edx
// 006c2d13  5f                   pop edi
// 006c2d14  5e                   pop esi
// 006c2d15  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPToolBar.cpp (function ?OnRButtonDown@CXTPToolBar@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPToolBar.cpp
