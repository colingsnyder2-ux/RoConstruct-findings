// roc 2009-12 008a40e0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a40e0
//
// 008a40e0  56                   push esi
// 008a40e1  57                   push edi
// 008a40e2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008a40e6  8bf1                 mov esi, ecx
// 008a40e8  3b7e64               cmp edi, dword ptr [esi + 0x64]
// 008a40eb  745e                 je 0x8a414b
// 008a40ed  8b06                 mov eax, dword ptr [esi]
// 008a40ef  8b90c0000000         mov edx, dword ptr [eax + 0xc0]
// 008a40f5  ffd2                 call edx
// 008a40f7  85c0                 test eax, eax
// 008a40f9  7450                 je 0x8a414b
// 008a40fb  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 008a40fe  8b01                 mov eax, dword ptr [ecx]
// 008a4100  56                   push esi
// 008a4101  85ff                 test edi, edi
// 008a4103  7408                 je 0x8a410d
// 008a4105  8b90c8010000         mov edx, dword ptr [eax + 0x1c8]
// 008a410b  eb06                 jmp 0x8a4113
// 008a410d  8b90c4010000         mov edx, dword ptr [eax + 0x1c4]
// 008a4113  ffd2                 call edx
// 008a4115  8b4620               mov eax, dword ptr [esi + 0x20]
// 008a4118  85c0                 test eax, eax
// 008a411a  7403                 je 0x8a411f
// 008a411c  897844               mov dword ptr [eax + 0x44], edi
// 008a411f  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 008a4122  897e64               mov dword ptr [esi + 0x64], edi
// 008a4125  8b01                 mov eax, dword ptr [ecx]
// 008a4127  8b90d4010000         mov edx, dword ptr [eax + 0x1d4]
// 008a412d  6a00                 push 0
// 008a412f  6a01                 push 1
// 008a4131  ffd2                 call edx
// 008a4133  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 008a4136  6aff                 push -1
// 008a4138  6a00                 push 0
// 008a413a  6ac5                 push -0x3b
// 008a413c  6a00                 push 0
// 008a413e  6a00                 push 0
// 008a4140  56                   push esi
// 008a4141  e8baf1f7ff           call 0x823300
// 008a4146  5f                   pop edi
// 008a4147  5e                   pop esi
// 008a4148  c20400               ret 4
// 008a414b  897e64               mov dword ptr [esi + 0x64], edi
// 008a414e  5f                   pop edi
// 008a414f  5e                   pop esi
// 008a4150  c20400               ret 4
// copied from an identical function in another client (function ?SetExpanded@CXTPReportRow@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRow.cpp