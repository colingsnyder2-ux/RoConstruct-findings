// roc 2008-06 0073b000  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0073b000
//
// 0073b000  56                   push esi
// 0073b001  57                   push edi
// 0073b002  8bf9                 mov edi, ecx
// 0073b004  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0073b008  8b4118               mov eax, dword ptr [ecx + 0x18]
// 0073b00b  83f8ff               cmp eax, -1
// 0073b00e  7505                 jne 0x73b015
// 0073b010  8b5114               mov edx, dword ptr [ecx + 0x14]
// 0073b013  eb02                 jmp 0x73b017
// 0073b015  8bd0                 mov edx, eax
// 0073b017  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0073b01a  83f8ff               cmp eax, -1
// 0073b01d  7503                 jne 0x73b022
// 0073b01f  8b4108               mov eax, dword ptr [ecx + 8]
// 0073b022  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0073b026  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0073b02a  6a00                 push 0
// 0073b02c  51                   push ecx
// 0073b02d  52                   push edx
// 0073b02e  50                   push eax
// 0073b02f  8d542420             lea edx, [esp + 0x20]
// 0073b033  52                   push edx
// 0073b034  56                   push esi
// 0073b035  8bcf                 mov ecx, edi
// 0073b037  e86439f7ff           call 0x6ae9a0
// 0073b03c  8b442420             mov eax, dword ptr [esp + 0x20]
// 0073b040  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0073b044  8b542414             mov edx, dword ptr [esp + 0x14]
// 0073b048  50                   push eax
// 0073b049  50                   push eax
// 0073b04a  83ec10               sub esp, 0x10
// 0073b04d  8bc4                 mov eax, esp
// 0073b04f  8908                 mov dword ptr [eax], ecx
// 0073b051  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0073b055  895004               mov dword ptr [eax + 4], edx
// 0073b058  8b542434             mov edx, dword ptr [esp + 0x34]
// 0073b05c  894808               mov dword ptr [eax + 8], ecx
// 0073b05f  56                   push esi
// 0073b060  8bcf                 mov ecx, edi
// 0073b062  89500c               mov dword ptr [eax + 0xc], edx
// 0073b065  e80632f7ff           call 0x6ae270
// 0073b06a  5f                   pop edi
// 0073b06b  5e                   pop esi
// 0073b06c  c22000               ret 0x20
// library xtp-11.2.2/Source\CommandBars\XTPOffice2003Theme.cpp (function ?RectangleEx@CXTPOffice2003Theme@XTPPaintThemes@@IAEXPAVCDC@@VCRect@@HHAAVCXTPPaintManagerColorGradient@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2003Theme.cpp
