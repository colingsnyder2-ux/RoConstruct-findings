// from server: 100% by auto
// roc 2012-06 0072f340  unit: RBX::GameSettings::W4UploadSetting::?$EnumDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0072f340
//
// 0072f340  64a100000000         mov eax, dword ptr fs:[0]
// 0072f346  6aff                 push -1
// 0072f348  688e03ac00           push 0xac038e
// 0072f34d  50                   push eax
// 0072f34e  b801000000           mov eax, 1
// 0072f353  64892500000000       mov dword ptr fs:[0], esp
// 0072f35a  8405ec2fe300         test byte ptr [0xe32fec], al
// 0072f360  7525                 jne 0x72f387
// 0072f362  0905ec2fe300         or dword ptr [0xe32fec], eax
// 0072f368  b9402fe300           mov ecx, 0xe32f40
// 0072f36d  c744240800000000     mov dword ptr [esp + 8], 0
// 0072f375  e8a6fdffff           call 0x72f120
// 0072f37a  68e07bb100           push 0xb17be0
// 0072f37f  e8713e2500           call 0x9831f5
// 0072f384  83c404               add esp, 4
// 0072f387  8b0c24               mov ecx, dword ptr [esp]
// 0072f38a  b8402fe300           mov eax, 0xe32f40
// 0072f38f  64890d00000000       mov dword ptr fs:[0], ecx
// 0072f396  83c40c               add esp, 0xc
// 0072f399  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?axes@Shape@G3D@@UAEAAVCoordinateFrame@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
