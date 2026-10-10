// roc 2008-06 00750cd0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00750cd0
//
// 00750cd0  56                   push esi
// 00750cd1  57                   push edi
// 00750cd2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00750cd6  8bf1                 mov esi, ecx
// 00750cd8  3b7e64               cmp edi, dword ptr [esi + 0x64]
// 00750cdb  745e                 je 0x750d3b
// 00750cdd  8b06                 mov eax, dword ptr [esi]
// 00750cdf  8b90c0000000         mov edx, dword ptr [eax + 0xc0]
// 00750ce5  ffd2                 call edx
// 00750ce7  85c0                 test eax, eax
// 00750ce9  7450                 je 0x750d3b
// 00750ceb  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00750cee  8b01                 mov eax, dword ptr [ecx]
// 00750cf0  56                   push esi
// 00750cf1  85ff                 test edi, edi
// 00750cf3  7408                 je 0x750cfd
// 00750cf5  8b90c8010000         mov edx, dword ptr [eax + 0x1c8]
// 00750cfb  eb06                 jmp 0x750d03
// 00750cfd  8b90c4010000         mov edx, dword ptr [eax + 0x1c4]
// 00750d03  ffd2                 call edx
// 00750d05  8b4620               mov eax, dword ptr [esi + 0x20]
// 00750d08  85c0                 test eax, eax
// 00750d0a  7403                 je 0x750d0f
// 00750d0c  897844               mov dword ptr [eax + 0x44], edi
// 00750d0f  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00750d12  897e64               mov dword ptr [esi + 0x64], edi
// 00750d15  8b01                 mov eax, dword ptr [ecx]
// 00750d17  8b90d4010000         mov edx, dword ptr [eax + 0x1d4]
// 00750d1d  6a00                 push 0
// 00750d1f  6a01                 push 1
// 00750d21  ffd2                 call edx
// 00750d23  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00750d26  6aff                 push -1
// 00750d28  6a00                 push 0
// 00750d2a  6ac5                 push -0x3b
// 00750d2c  6a00                 push 0
// 00750d2e  6a00                 push 0
// 00750d30  56                   push esi
// 00750d31  e87af0f7ff           call 0x6cfdb0
// 00750d36  5f                   pop edi
// 00750d37  5e                   pop esi
// 00750d38  c20400               ret 4
// 00750d3b  897e64               mov dword ptr [esi + 0x64], edi
// 00750d3e  5f                   pop edi
// 00750d3f  5e                   pop esi
// 00750d40  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportRow.cpp (function ?SetExpanded@CXTPReportRow@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRow.cpp
