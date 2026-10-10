// roc 2008-06 006f1cf0  unit: CXTPControls  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f1cf0
//
// 006f1cf0  56                   push esi
// 006f1cf1  8b742408             mov esi, dword ptr [esp + 8]
// 006f1cf5  57                   push edi
// 006f1cf6  8bf9                 mov edi, ecx
// 006f1cf8  85f6                 test esi, esi
// 006f1cfa  7473                 je 0x6f1d6f
// 006f1cfc  39bef8000000         cmp dword ptr [esi + 0xf8], edi
// 006f1d02  756b                 jne 0x6f1d6f
// 006f1d04  8b06                 mov eax, dword ptr [esi]
// 006f1d06  8b506c               mov edx, dword ptr [eax + 0x6c]
// 006f1d09  8bce                 mov ecx, esi
// 006f1d0b  ffd2                 call edx
// 006f1d0d  85c0                 test eax, eax
// 006f1d0f  7411                 je 0x6f1d22
// 006f1d11  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 006f1d14  8b01                 mov eax, dword ptr [ecx]
// 006f1d16  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 006f1d1c  6a00                 push 0
// 006f1d1e  6aff                 push -1
// 006f1d20  ffd2                 call edx
// 006f1d22  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 006f1d28  85c0                 test eax, eax
// 006f1d2a  7c43                 jl 0x6f1d6f
// 006f1d2c  3b472c               cmp eax, dword ptr [edi + 0x2c]
// 006f1d2f  7d3e                 jge 0x6f1d6f
// 006f1d31  8b07                 mov eax, dword ptr [edi]
// 006f1d33  8b5070               mov edx, dword ptr [eax + 0x70]
// 006f1d36  56                   push esi
// 006f1d37  8bcf                 mov ecx, edi
// 006f1d39  ffd2                 call edx
// 006f1d3b  85c0                 test eax, eax
// 006f1d3d  7530                 jne 0x6f1d6f
// 006f1d3f  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 006f1d45  6a01                 push 1
// 006f1d47  50                   push eax
// 006f1d48  8d4f24               lea ecx, [edi + 0x24]
// 006f1d4b  e820b30200           call 0x71d070
// 006f1d50  8b17                 mov edx, dword ptr [edi]
// 006f1d52  8b426c               mov eax, dword ptr [edx + 0x6c]
// 006f1d55  56                   push esi
// 006f1d56  8bcf                 mov ecx, edi
// 006f1d58  ffd0                 call eax
// 006f1d5a  8b16                 mov edx, dword ptr [esi]
// 006f1d5c  8b82dc000000         mov eax, dword ptr [edx + 0xdc]
// 006f1d62  6a00                 push 0
// 006f1d64  8bce                 mov ecx, esi
// 006f1d66  ffd0                 call eax
// 006f1d68  8bce                 mov ecx, esi
// 006f1d6a  e875eefaff           call 0x6a0be4
// 006f1d6f  5f                   pop edi
// 006f1d70  5e                   pop esi
// 006f1d71  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControls.cpp (function ?Remove@CXTPControls@@UAEXPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControls.cpp
