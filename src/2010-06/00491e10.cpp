// roc 2010-06 00491e10  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00491e10
//
// 00491e10  53                   push ebx
// 00491e11  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00491e15  55                   push ebp
// 00491e16  8be9                 mov ebp, ecx
// 00491e18  ff4578               inc dword ptr [ebp + 0x78]
// 00491e1b  57                   push edi
// 00491e1c  8dbd38080000         lea edi, [ebp + 0x838]
// 00491e22  53                   push ebx
// 00491e23  8bcf                 mov ecx, edi
// 00491e25  e8066a0c00           call 0x558830
// 00491e2a  84c0                 test al, al
// 00491e2c  7432                 je 0x491e60
// 00491e2e  56                   push esi
// 00491e2f  b910000000           mov ecx, 0x10
// 00491e34  8bf3                 mov esi, ebx
// 00491e36  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00491e38  8b3538ab9e00         mov esi, dword ptr [0x9eab38]
// 00491e3e  6801170000           push 0x1701
// 00491e43  c6857808000001       mov byte ptr [ebp + 0x878], 1
// 00491e4a  ffd6                 call esi
// 00491e4c  53                   push ebx
// 00491e4d  e89eceffff           call 0x48ecf0
// 00491e52  83c404               add esp, 4
// 00491e55  6800170000           push 0x1700
// 00491e5a  ffd6                 call esi
// 00491e5c  ff4570               inc dword ptr [ebp + 0x70]
// 00491e5f  5e                   pop esi
// 00491e60  5f                   pop edi
// 00491e61  5d                   pop ebp
// 00491e62  5b                   pop ebx
// 00491e63  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setProjectionMatrix@RenderDevice@G3D@@QAEXABVMatrix4@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
