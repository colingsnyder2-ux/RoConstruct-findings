// roc 2007-03 00611840  unit: seg_00610000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00611840
//
// 00611840  64a100000000         mov eax, dword ptr fs:[0]
// 00611846  6aff                 push -1
// 00611848  686ed67500           push 0x75d66e
// 0061184d  50                   push eax
// 0061184e  b801000000           mov eax, 1
// 00611853  64892500000000       mov dword ptr fs:[0], esp
// 0061185a  840500138c00         test byte ptr [0x8c1300], al
// 00611860  7530                 jne 0x611892
// 00611862  090500138c00         or dword ptr [0x8c1300], eax
// 00611868  6aff                 push -1
// 0061186a  68801f7c00           push 0x7c1f80
// 0061186f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00611877  e864c0f1ff           call 0x52d8e0
// 0061187c  83c408               add esp, 8
// 0061187f  a3fc128c00           mov dword ptr [0x8c12fc], eax
// 00611884  8b0c24               mov ecx, dword ptr [esp]
// 00611887  64890d00000000       mov dword ptr fs:[0], ecx
// 0061188e  83c40c               add esp, 0xc
// 00611891  c3                   ret 
// 00611892  8b0c24               mov ecx, dword ptr [esp]
// 00611895  a1fc128c00           mov eax, dword ptr [0x8c12fc]
// 0061189a  64890d00000000       mov dword ptr fs:[0], ecx
// 006118a1  83c40c               add esp, 0xc
// 006118a4  c3                   ret 
// library openrbx-client/App\humanoid\GettingUp.cpp (function ??$doDeclare@$1?sGettingUp@RBX@@3QBDB@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/GettingUp.cpp
