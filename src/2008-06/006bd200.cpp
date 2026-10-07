// roc 2008-06 006bd200  unit: KKPAVCXTPImageManagerResource::?$CMap  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006bd200
//
// 006bd200  83ec0c               sub esp, 0xc
// 006bd203  53                   push ebx
// 006bd204  8bd9                 mov ebx, ecx
// 006bd206  8b432c               mov eax, dword ptr [ebx + 0x2c]
// 006bd209  f7d8                 neg eax
// 006bd20b  1bc0                 sbb eax, eax
// 006bd20d  89442404             mov dword ptr [esp + 4], eax
// 006bd211  7440                 je 0x6bd253
// 006bd213  56                   push esi
// 006bd214  57                   push edi
// 006bd215  8d7b20               lea edi, [ebx + 0x20]
// 006bd218  eb06                 jmp 0x6bd220
// 006bd21a  8d9b00000000         lea ebx, [ebx]
// 006bd220  8d442410             lea eax, [esp + 0x10]
// 006bd224  50                   push eax
// 006bd225  8d4c2418             lea ecx, [esp + 0x18]
// 006bd229  51                   push ecx
// 006bd22a  8d542414             lea edx, [esp + 0x14]
// 006bd22e  52                   push edx
// 006bd22f  8bcf                 mov ecx, edi
// 006bd231  e81abc0a00           call 0x768e50
// 006bd236  8b742410             mov esi, dword ptr [esp + 0x10]
// 006bd23a  6a01                 push 1
// 006bd23c  8bce                 mov ecx, esi
// 006bd23e  e8bdfeffff           call 0x6bd100
// 006bd243  8bce                 mov ecx, esi
// 006bd245  e89a39feff           call 0x6a0be4
// 006bd24a  837c240c00           cmp dword ptr [esp + 0xc], 0
// 006bd24f  75cf                 jne 0x6bd220
// 006bd251  5f                   pop edi
// 006bd252  5e                   pop esi
// 006bd253  8d4b20               lea ecx, [ebx + 0x20]
// 006bd256  5b                   pop ebx
// 006bd257  83c40c               add esp, 0xc
// 006bd25a  e9d15efeff           jmp 0x6a3130
// library xtp-11.2.2/Source\Common\XTPImageManager.cpp (function ?RemoveAll@CXTPImageManagerIconSet@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPImageManager.cpp
