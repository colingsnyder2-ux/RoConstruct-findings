// roc 2010-06 00483a00  unit: RBX::LDraw2Lua::LuaWriter  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00483a00
//
// 00483a00  6aff                 push -1
// 00483a02  68a45b9800           push 0x985ba4
// 00483a07  64a100000000         mov eax, dword ptr fs:[0]
// 00483a0d  50                   push eax
// 00483a0e  64892500000000       mov dword ptr fs:[0], esp
// 00483a15  51                   push ecx
// 00483a16  56                   push esi
// 00483a17  57                   push edi
// 00483a18  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00483a1c  8bf1                 mov esi, ecx
// 00483a1e  57                   push edi
// 00483a1f  8974240c             mov dword ptr [esp + 0xc], esi
// 00483a23  e88859f8ff           call 0x4093b0
// 00483a28  57                   push edi
// 00483a29  8d4e28               lea ecx, [esi + 0x28]
// 00483a2c  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00483a34  c7063c32a100         mov dword ptr [esi], 0xa1323c
// 00483a3a  ff150ca49e00         call dword ptr [0x9ea40c]
// 00483a40  8b442420             mov eax, dword ptr [esp + 0x20]
// 00483a44  50                   push eax
// 00483a45  8d4e44               lea ecx, [esi + 0x44]
// 00483a48  c644241801           mov byte ptr [esp + 0x18], 1
// 00483a4d  ff150ca49e00         call dword ptr [0x9ea40c]
// 00483a53  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00483a57  5f                   pop edi
// 00483a58  8bc6                 mov eax, esi
// 00483a5a  5e                   pop esi
// 00483a5b  64890d00000000       mov dword ptr fs:[0], ecx
// 00483a62  83c410               add esp, 0x10
// 00483a65  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\GImage.cpp (function ??0Error@GImage@G3D@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GImage.cpp
