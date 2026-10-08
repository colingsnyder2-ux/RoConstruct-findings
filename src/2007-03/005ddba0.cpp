// roc 2007-03 005ddba0  unit: seg_005d0000  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ddba0
//
// 005ddba0  53                   push ebx
// 005ddba1  56                   push esi
// 005ddba2  57                   push edi
// 005ddba3  8bf9                 mov edi, ecx
// 005ddba5  85ff                 test edi, edi
// 005ddba7  7408                 je 0x5ddbb1
// 005ddba9  8d9ff8000000         lea ebx, [edi + 0xf8]
// 005ddbaf  eb02                 jmp 0x5ddbb3
// 005ddbb1  33db                 xor ebx, ebx
// 005ddbb3  8b742410             mov esi, dword ptr [esp + 0x10]
// 005ddbb7  85f6                 test esi, esi
// 005ddbb9  7417                 je 0x5ddbd2
// 005ddbbb  8bce                 mov ecx, esi
// 005ddbbd  e8ae13e7ff           call 0x44ef70
// 005ddbc2  85c0                 test eax, eax
// 005ddbc4  740c                 je 0x5ddbd2
// 005ddbc6  53                   push ebx
// 005ddbc7  8d8808010000         lea ecx, [eax + 0x108]
// 005ddbcd  e83e55e4ff           call 0x423110
// 005ddbd2  8b442414             mov eax, dword ptr [esp + 0x14]
// 005ddbd6  50                   push eax
// 005ddbd7  56                   push esi
// 005ddbd8  8bcf                 mov ecx, edi
// 005ddbda  e84113f6ff           call 0x53ef20
// 005ddbdf  8bcf                 mov ecx, edi
// 005ddbe1  e81affffff           call 0x5ddb00
// 005ddbe6  5f                   pop edi
// 005ddbe7  5e                   pop esi
// 005ddbe8  5b                   pop ebx
// 005ddbe9  c20800               ret 8
// library rbxgs/v8datamodel\Gyro.cpp (function ?onServiceProvider@BodyMover@RBX@@MAEXPBVServiceProvider@2@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Gyro.cpp
