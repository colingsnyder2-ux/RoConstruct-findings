// roc 2009-06 007abd80  unit: XTPPaintThemes::CXTPNativeXPTheme  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007abd80
//
// 007abd80  51                   push ecx
// 007abd81  56                   push esi
// 007abd82  8bf1                 mov esi, ecx
// 007abd84  57                   push edi
// 007abd85  8dbe78040000         lea edi, [esi + 0x478]
// 007abd8b  8bcf                 mov ecx, edi
// 007abd8d  e80e4efeff           call 0x790ba0
// 007abd92  85c0                 test eax, eax
// 007abd94  753c                 jne 0x7abdd2
// 007abd96  8b442428             mov eax, dword ptr [esp + 0x28]
// 007abd9a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007abd9e  8b542414             mov edx, dword ptr [esp + 0x14]
// 007abda2  50                   push eax
// 007abda3  51                   push ecx
// 007abda4  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007abda8  83ec10               sub esp, 0x10
// 007abdab  8bc4                 mov eax, esp
// 007abdad  8910                 mov dword ptr [eax], edx
// 007abdaf  8b542434             mov edx, dword ptr [esp + 0x34]
// 007abdb3  894804               mov dword ptr [eax + 4], ecx
// 007abdb6  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 007abdba  895008               mov dword ptr [eax + 8], edx
// 007abdbd  8b542428             mov edx, dword ptr [esp + 0x28]
// 007abdc1  89480c               mov dword ptr [eax + 0xc], ecx
// 007abdc4  52                   push edx
// 007abdc5  8bce                 mov ecx, esi
// 007abdc7  e8645dffff           call 0x7a1b30
// 007abdcc  5f                   pop edi
// 007abdcd  5e                   pop esi
// 007abdce  59                   pop ecx
// 007abdcf  c21c00               ret 0x1c
// 007abdd2  6a10                 push 0x10
// 007abdd4  8bce                 mov ecx, esi
// 007abdd6  e8a569f7ff           call 0x722780
// 007abddb  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007abddf  f7d9                 neg ecx
// 007abde1  1bc9                 sbb ecx, ecx
// 007abde3  89442408             mov dword ptr [esp + 8], eax
// 007abde7  8d442408             lea eax, [esp + 8]
// 007abdeb  50                   push eax
// 007abdec  83e1fd               and ecx, 0xfffffffd
// 007abdef  68d90e0000           push 0xed9
// 007abdf4  83c104               add ecx, 4
// 007abdf7  51                   push ecx
// 007abdf8  6a01                 push 1
// 007abdfa  8bcf                 mov ecx, edi
// 007abdfc  e88f4bfeff           call 0x790990
// 007abe01  8b442408             mov eax, dword ptr [esp + 8]
// 007abe05  8b542414             mov edx, dword ptr [esp + 0x14]
// 007abe09  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007abe0d  50                   push eax
// 007abe0e  50                   push eax
// 007abe0f  83ec10               sub esp, 0x10
// 007abe12  8bc4                 mov eax, esp
// 007abe14  8910                 mov dword ptr [eax], edx
// 007abe16  8b542434             mov edx, dword ptr [esp + 0x34]
// 007abe1a  894804               mov dword ptr [eax + 4], ecx
// 007abe1d  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 007abe21  895008               mov dword ptr [eax + 8], edx
// 007abe24  8b542428             mov edx, dword ptr [esp + 0x28]
// 007abe28  89480c               mov dword ptr [eax + 0xc], ecx
// 007abe2b  52                   push edx
// 007abe2c  8bce                 mov ecx, esi
// 007abe2e  e84d6bf7ff           call 0x722980
// 007abe33  5f                   pop edi
// 007abe34  5e                   pop esi
// 007abe35  59                   pop ecx
// 007abe36  c21c00               ret 0x1c
// library xtp-11.2.2/Source\CommandBars\XTPNativeXPTheme.cpp (function ?DrawControlEditFrame@CXTPNativeXPTheme@XTPPaintThemes@@MAEXPAVCDC@@VCRect@@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPNativeXPTheme.cpp
