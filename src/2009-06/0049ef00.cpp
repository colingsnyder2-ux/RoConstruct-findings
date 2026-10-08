// roc 2009-06 0049ef00  unit: G3D::VARArea  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049ef00
//
// 0049ef00  53                   push ebx
// 0049ef01  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0049ef05  55                   push ebp
// 0049ef06  8be9                 mov ebp, ecx
// 0049ef08  ff4578               inc dword ptr [ebp + 0x78]
// 0049ef0b  57                   push edi
// 0049ef0c  8dbd38080000         lea edi, [ebp + 0x838]
// 0049ef12  53                   push ebx
// 0049ef13  8bcf                 mov ecx, edi
// 0049ef15  e8b68b0d00           call 0x577ad0
// 0049ef1a  84c0                 test al, al
// 0049ef1c  7432                 je 0x49ef50
// 0049ef1e  56                   push esi
// 0049ef1f  b910000000           mov ecx, 0x10
// 0049ef24  8bf3                 mov esi, ebx
// 0049ef26  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0049ef28  8b3544eb8900         mov esi, dword ptr [0x89eb44]
// 0049ef2e  6801170000           push 0x1701
// 0049ef33  c6857808000001       mov byte ptr [ebp + 0x878], 1
// 0049ef3a  ffd6                 call esi
// 0049ef3c  53                   push ebx
// 0049ef3d  e87ee40000           call 0x4ad3c0
// 0049ef42  83c404               add esp, 4
// 0049ef45  6800170000           push 0x1700
// 0049ef4a  ffd6                 call esi
// 0049ef4c  ff4570               inc dword ptr [ebp + 0x70]
// 0049ef4f  5e                   pop esi
// 0049ef50  5f                   pop edi
// 0049ef51  5d                   pop ebp
// 0049ef52  5b                   pop ebx
// 0049ef53  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setProjectionMatrix@RenderDevice@G3D@@QAEXABVMatrix4@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
