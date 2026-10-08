// roc 2007-08 005a4700  unit: RBX::TimerService  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a4700
//
// 005a4700  b801000000           mov eax, 1
// 005a4705  840544578c00         test byte ptr [0x8c5744], al
// 005a470b  7513                 jne 0x5a4720
// 005a470d  090544578c00         or dword ptr [0x8c5744], eax
// 005a4713  a19ce47700           mov eax, dword ptr [0x77e49c]
// 005a4718  d900                 fld dword ptr [eax]
// 005a471a  d91d40578c00         fstp dword ptr [0x8c5740]
// 005a4720  b840578c00           mov eax, 0x8c5740
// 005a4725  c3                   ret 
// library rbxgs/util\Extents.cpp (function ?inf@Math@RBX@@SAABMXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Extents.cpp
