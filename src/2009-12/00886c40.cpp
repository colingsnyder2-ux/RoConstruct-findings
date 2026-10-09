// roc 2009-12 00886c40  unit: XTPPaintThemes::CXTPNativeXPTheme  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00886c40
//
// 00886c40  51                   push ecx
// 00886c41  56                   push esi
// 00886c42  8bf1                 mov esi, ecx
// 00886c44  57                   push edi
// 00886c45  8dbe78040000         lea edi, [esi + 0x478]
// 00886c4b  8bcf                 mov ecx, edi
// 00886c4d  e86e4ffeff           call 0x86bbc0
// 00886c52  85c0                 test eax, eax
// 00886c54  753c                 jne 0x886c92
// 00886c56  8b442428             mov eax, dword ptr [esp + 0x28]
// 00886c5a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00886c5e  8b542414             mov edx, dword ptr [esp + 0x14]
// 00886c62  50                   push eax
// 00886c63  51                   push ecx
// 00886c64  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00886c68  83ec10               sub esp, 0x10
// 00886c6b  8bc4                 mov eax, esp
// 00886c6d  8910                 mov dword ptr [eax], edx
// 00886c6f  8b542434             mov edx, dword ptr [esp + 0x34]
// 00886c73  894804               mov dword ptr [eax + 4], ecx
// 00886c76  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00886c7a  895008               mov dword ptr [eax + 8], edx
// 00886c7d  8b542428             mov edx, dword ptr [esp + 0x28]
// 00886c81  89480c               mov dword ptr [eax + 0xc], ecx
// 00886c84  52                   push edx
// 00886c85  8bce                 mov ecx, esi
// 00886c87  e8e45dffff           call 0x87ca70
// 00886c8c  5f                   pop edi
// 00886c8d  5e                   pop esi
// 00886c8e  59                   pop ecx
// 00886c8f  c21c00               ret 0x1c
// 00886c92  6a10                 push 0x10
// 00886c94  8bce                 mov ecx, esi
// 00886c96  e8a569f7ff           call 0x7fd640
// 00886c9b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00886c9f  f7d9                 neg ecx
// 00886ca1  1bc9                 sbb ecx, ecx
// 00886ca3  89442408             mov dword ptr [esp + 8], eax
// 00886ca7  8d442408             lea eax, [esp + 8]
// 00886cab  50                   push eax
// 00886cac  83e1fd               and ecx, 0xfffffffd
// 00886caf  68d90e0000           push 0xed9
// 00886cb4  83c104               add ecx, 4
// 00886cb7  51                   push ecx
// 00886cb8  6a01                 push 1
// 00886cba  8bcf                 mov ecx, edi
// 00886cbc  e8ef4cfeff           call 0x86b9b0
// 00886cc1  8b442408             mov eax, dword ptr [esp + 8]
// 00886cc5  8b542414             mov edx, dword ptr [esp + 0x14]
// 00886cc9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00886ccd  50                   push eax
// 00886cce  50                   push eax
// 00886ccf  83ec10               sub esp, 0x10
// 00886cd2  8bc4                 mov eax, esp
// 00886cd4  8910                 mov dword ptr [eax], edx
// 00886cd6  8b542434             mov edx, dword ptr [esp + 0x34]
// 00886cda  894804               mov dword ptr [eax + 4], ecx
// 00886cdd  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00886ce1  895008               mov dword ptr [eax + 8], edx
// 00886ce4  8b542428             mov edx, dword ptr [esp + 0x28]
// 00886ce8  89480c               mov dword ptr [eax + 0xc], ecx
// 00886ceb  52                   push edx
// 00886cec  8bce                 mov ecx, esi
// 00886cee  e84d6bf7ff           call 0x7fd840
// 00886cf3  5f                   pop edi
// 00886cf4  5e                   pop esi
// 00886cf5  59                   pop ecx
// 00886cf6  c21c00               ret 0x1c
// library xtp-11.2.2/Source\CommandBars\XTPNativeXPTheme.cpp (function ?DrawControlEditFrame@CXTPNativeXPTheme@XTPPaintThemes@@MAEXPAVCDC@@VCRect@@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPNativeXPTheme.cpp
