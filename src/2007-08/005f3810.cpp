// roc 2007-08 005f3810  unit: RBX::VBrickColor::V?$Value::?$SignalDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f3810
//
// 005f3810  64a100000000         mov eax, dword ptr fs:[0]
// 005f3816  6aff                 push -1
// 005f3818  685eb67500           push 0x75b65e
// 005f381d  50                   push eax
// 005f381e  b801000000           mov eax, 1
// 005f3823  64892500000000       mov dword ptr fs:[0], esp
// 005f382a  840520798c00         test byte ptr [0x8c7920], al
// 005f3830  7530                 jne 0x5f3862
// 005f3832  090520798c00         or dword ptr [0x8c7920], eax
// 005f3838  68a4058b00           push 0x8b05a4
// 005f383d  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005f3845  e8464ee2ff           call 0x418690
// 005f384a  50                   push eax
// 005f384b  b998788c00           mov ecx, 0x8c7898
// 005f3850  e8abd3f7ff           call 0x570c00
// 005f3855  6880c57700           push 0x77c580
// 005f385a  e8c4d40300           call 0x630d23
// 005f385f  83c404               add esp, 4
// 005f3862  8b0c24               mov ecx, dword ptr [esp]
// 005f3865  b898788c00           mov eax, 0x8c7898
// 005f386a  64890d00000000       mov dword ptr fs:[0], ecx
// 005f3871  83c40c               add esp, 0xc
// 005f3874  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ?classDescriptor@?$Described@VInstance@RBX@@$1?sInstance@2@3QBDBVDescribedBase@Reflection@2@@Reflection@RBX@@SAAAVClassDescriptor@23@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
