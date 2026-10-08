// roc 2010-06 0083a1a0  unit: XTPPaintThemes::CXTPNativeXPTheme  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0083a1a0
//
// 0083a1a0  51                   push ecx
// 0083a1a1  56                   push esi
// 0083a1a2  8bf1                 mov esi, ecx
// 0083a1a4  57                   push edi
// 0083a1a5  8dbe78040000         lea edi, [esi + 0x478]
// 0083a1ab  8bcf                 mov ecx, edi
// 0083a1ad  e80e5afeff           call 0x81fbc0
// 0083a1b2  85c0                 test eax, eax
// 0083a1b4  753c                 jne 0x83a1f2
// 0083a1b6  8b442428             mov eax, dword ptr [esp + 0x28]
// 0083a1ba  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0083a1be  8b542414             mov edx, dword ptr [esp + 0x14]
// 0083a1c2  50                   push eax
// 0083a1c3  51                   push ecx
// 0083a1c4  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0083a1c8  83ec10               sub esp, 0x10
// 0083a1cb  8bc4                 mov eax, esp
// 0083a1cd  8910                 mov dword ptr [eax], edx
// 0083a1cf  8b542434             mov edx, dword ptr [esp + 0x34]
// 0083a1d3  894804               mov dword ptr [eax + 4], ecx
// 0083a1d6  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0083a1da  895008               mov dword ptr [eax + 8], edx
// 0083a1dd  8b542428             mov edx, dword ptr [esp + 0x28]
// 0083a1e1  89480c               mov dword ptr [eax + 0xc], ecx
// 0083a1e4  52                   push edx
// 0083a1e5  8bce                 mov ecx, esi
// 0083a1e7  e8e4fafeff           call 0x829cd0
// 0083a1ec  5f                   pop edi
// 0083a1ed  5e                   pop esi
// 0083a1ee  59                   pop ecx
// 0083a1ef  c21c00               ret 0x1c
// 0083a1f2  6a10                 push 0x10
// 0083a1f4  8bce                 mov ecx, esi
// 0083a1f6  e8152ff7ff           call 0x7ad110
// 0083a1fb  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0083a1ff  f7d9                 neg ecx
// 0083a201  1bc9                 sbb ecx, ecx
// 0083a203  89442408             mov dword ptr [esp + 8], eax
// 0083a207  8d442408             lea eax, [esp + 8]
// 0083a20b  50                   push eax
// 0083a20c  83e1fd               and ecx, 0xfffffffd
// 0083a20f  68d90e0000           push 0xed9
// 0083a214  83c104               add ecx, 4
// 0083a217  51                   push ecx
// 0083a218  6a01                 push 1
// 0083a21a  8bcf                 mov ecx, edi
// 0083a21c  e88f57feff           call 0x81f9b0
// 0083a221  8b442408             mov eax, dword ptr [esp + 8]
// 0083a225  8b542414             mov edx, dword ptr [esp + 0x14]
// 0083a229  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0083a22d  50                   push eax
// 0083a22e  50                   push eax
// 0083a22f  83ec10               sub esp, 0x10
// 0083a232  8bc4                 mov eax, esp
// 0083a234  8910                 mov dword ptr [eax], edx
// 0083a236  8b542434             mov edx, dword ptr [esp + 0x34]
// 0083a23a  894804               mov dword ptr [eax + 4], ecx
// 0083a23d  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0083a241  895008               mov dword ptr [eax + 8], edx
// 0083a244  8b542428             mov edx, dword ptr [esp + 0x28]
// 0083a248  89480c               mov dword ptr [eax + 0xc], ecx
// 0083a24b  52                   push edx
// 0083a24c  8bce                 mov ecx, esi
// 0083a24e  e8bd30f7ff           call 0x7ad310
// 0083a253  5f                   pop edi
// 0083a254  5e                   pop esi
// 0083a255  59                   pop ecx
// 0083a256  c21c00               ret 0x1c
// library xtp-11.2.2/Source\CommandBars\XTPNativeXPTheme.cpp (function ?DrawControlEditFrame@CXTPNativeXPTheme@XTPPaintThemes@@MAEXPAVCDC@@VCRect@@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPNativeXPTheme.cpp
