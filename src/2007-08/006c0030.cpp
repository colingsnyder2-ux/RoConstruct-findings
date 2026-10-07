// roc 2007-08 006c0030  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006c0030
//
// 006c0030  56                   push esi
// 006c0031  57                   push edi
// 006c0032  8bf9                 mov edi, ecx
// 006c0034  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006c0038  8b4118               mov eax, dword ptr [ecx + 0x18]
// 006c003b  83f8ff               cmp eax, -1
// 006c003e  7505                 jne 0x6c0045
// 006c0040  8b5114               mov edx, dword ptr [ecx + 0x14]
// 006c0043  eb02                 jmp 0x6c0047
// 006c0045  8bd0                 mov edx, eax
// 006c0047  8b410c               mov eax, dword ptr [ecx + 0xc]
// 006c004a  83f8ff               cmp eax, -1
// 006c004d  7503                 jne 0x6c0052
// 006c004f  8b4108               mov eax, dword ptr [ecx + 8]
// 006c0052  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006c0056  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006c005a  6a00                 push 0
// 006c005c  51                   push ecx
// 006c005d  52                   push edx
// 006c005e  50                   push eax
// 006c005f  8d542420             lea edx, [esp + 0x20]
// 006c0063  52                   push edx
// 006c0064  56                   push esi
// 006c0065  8bcf                 mov ecx, edi
// 006c0067  e8e4d5f7ff           call 0x63d650
// 006c006c  8b442420             mov eax, dword ptr [esp + 0x20]
// 006c0070  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006c0074  8b542414             mov edx, dword ptr [esp + 0x14]
// 006c0078  50                   push eax
// 006c0079  50                   push eax
// 006c007a  83ec10               sub esp, 0x10
// 006c007d  8bc4                 mov eax, esp
// 006c007f  8908                 mov dword ptr [eax], ecx
// 006c0081  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006c0085  895004               mov dword ptr [eax + 4], edx
// 006c0088  8b542434             mov edx, dword ptr [esp + 0x34]
// 006c008c  894808               mov dword ptr [eax + 8], ecx
// 006c008f  56                   push esi
// 006c0090  8bcf                 mov ecx, edi
// 006c0092  89500c               mov dword ptr [eax + 0xc], edx
// 006c0095  e8d6cef7ff           call 0x63cf70
// 006c009a  5f                   pop edi
// 006c009b  5e                   pop esi
// 006c009c  c22000               ret 0x20
// library xtp-11.2.2-vc8/Source\CommandBars\XTPOffice2003Theme.cpp (function ?RectangleEx@CXTPOffice2003Theme@XTPPaintThemes@@IAEXPAVCDC@@VCRect@@HHAAVCXTPPaintManagerColorGradient@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPOffice2003Theme.cpp
