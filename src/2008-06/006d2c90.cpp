// roc 2008-06 006d2c90  unit: CXTPReportControl  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d2c90
//
// 006d2c90  56                   push esi
// 006d2c91  57                   push edi
// 006d2c92  8bf1                 mov esi, ecx
// 006d2c94  e8cfdffcff           call 0x6a0c68
// 006d2c99  8b06                 mov eax, dword ptr [esi]
// 006d2c9b  8b9014020000         mov edx, dword ptr [eax + 0x214]
// 006d2ca1  8bce                 mov ecx, esi
// 006d2ca3  c7864002000000000000 mov dword ptr [esi + 0x240], 0
// 006d2cad  ffd2                 call edx
// 006d2caf  8b8e88020000         mov ecx, dword ptr [esi + 0x288]
// 006d2cb5  85c9                 test ecx, ecx
// 006d2cb7  7416                 je 0x6d2ccf
// 006d2cb9  8b542414             mov edx, dword ptr [esp + 0x14]
// 006d2cbd  8b01                 mov eax, dword ptr [ecx]
// 006d2cbf  8b406c               mov eax, dword ptr [eax + 0x6c]
// 006d2cc2  52                   push edx
// 006d2cc3  8b542414             mov edx, dword ptr [esp + 0x14]
// 006d2cc7  52                   push edx
// 006d2cc8  8b542414             mov edx, dword ptr [esp + 0x14]
// 006d2ccc  52                   push edx
// 006d2ccd  ffd0                 call eax
// 006d2ccf  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006d2cd3  8b542410             mov edx, dword ptr [esp + 0x10]
// 006d2cd7  51                   push ecx
// 006d2cd8  52                   push edx
// 006d2cd9  8bce                 mov ecx, esi
// 006d2cdb  e85074ffff           call 0x6ca130
// 006d2ce0  8bf8                 mov edi, eax
// 006d2ce2  85ff                 test edi, edi
// 006d2ce4  7414                 je 0x6d2cfa
// 006d2ce6  3bbea4020000         cmp edi, dword ptr [esi + 0x2a4]
// 006d2cec  750c                 jne 0x6d2cfa
// 006d2cee  6a00                 push 0
// 006d2cf0  6a00                 push 0
// 006d2cf2  57                   push edi
// 006d2cf3  8bce                 mov ecx, esi
// 006d2cf5  e8b6f8ffff           call 0x6d25b0
// 006d2cfa  83bec401000000       cmp dword ptr [esi + 0x1c4], 0
// 006d2d01  c786a402000000000000 mov dword ptr [esi + 0x2a4], 0
// 006d2d0b  7418                 je 0x6d2d25
// 006d2d0d  8b35a42d8000         mov esi, dword ptr [0x802da4]
// 006d2d13  6a10                 push 0x10
// 006d2d15  ffd6                 call esi
// 006d2d17  6685c0               test ax, ax
// 006d2d1a  7c30                 jl 0x6d2d4c
// 006d2d1c  6a11                 push 0x11
// 006d2d1e  ffd6                 call esi
// 006d2d20  6685c0               test ax, ax
// 006d2d23  7c27                 jl 0x6d2d4c
// 006d2d25  85ff                 test edi, edi
// 006d2d27  7423                 je 0x6d2d4c
// 006d2d29  8b07                 mov eax, dword ptr [edi]
// 006d2d2b  8b5070               mov edx, dword ptr [eax + 0x70]
// 006d2d2e  8bcf                 mov ecx, edi
// 006d2d30  ffd2                 call edx
// 006d2d32  85c0                 test eax, eax
// 006d2d34  7416                 je 0x6d2d4c
// 006d2d36  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006d2d3a  8b07                 mov eax, dword ptr [edi]
// 006d2d3c  8b542410             mov edx, dword ptr [esp + 0x10]
// 006d2d40  8b8090000000         mov eax, dword ptr [eax + 0x90]
// 006d2d46  51                   push ecx
// 006d2d47  52                   push edx
// 006d2d48  8bcf                 mov ecx, edi
// 006d2d4a  ffd0                 call eax
// 006d2d4c  5f                   pop edi
// 006d2d4d  5e                   pop esi
// 006d2d4e  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportControl.cpp (function ?OnLButtonUp@CXTPReportControl@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp
