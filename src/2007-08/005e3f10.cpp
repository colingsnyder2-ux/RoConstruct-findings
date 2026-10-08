// roc 2007-08 005e3f10  unit: RBX::ArrowTool  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e3f10
//
// 005e3f10  6aff                 push -1
// 005e3f12  6808ac7500           push 0x75ac08
// 005e3f17  64a100000000         mov eax, dword ptr fs:[0]
// 005e3f1d  50                   push eax
// 005e3f1e  64892500000000       mov dword ptr fs:[0], esp
// 005e3f25  83ec14               sub esp, 0x14
// 005e3f28  56                   push esi
// 005e3f29  8bf1                 mov esi, ecx
// 005e3f2b  8b4618               mov eax, dword ptr [esi + 0x18]
// 005e3f2e  50                   push eax
// 005e3f2f  8d4c2408             lea ecx, [esp + 8]
// 005e3f33  e818130400           call 0x625250
// 005e3f38  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005e3f3c  8b442428             mov eax, dword ptr [esp + 0x28]
// 005e3f40  51                   push ecx
// 005e3f41  8d542408             lea edx, [esp + 8]
// 005e3f45  52                   push edx
// 005e3f46  50                   push eax
// 005e3f47  8bce                 mov ecx, esi
// 005e3f49  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 005e3f51  e86afeffff           call 0x5e3dc0
// 005e3f56  8d4c2404             lea ecx, [esp + 4]
// 005e3f5a  8bf0                 mov esi, eax
// 005e3f5c  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 005e3f64  e8a7faffff           call 0x5e3a10
// 005e3f69  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005e3f6d  8bc6                 mov eax, esi
// 005e3f6f  5e                   pop esi
// 005e3f70  64890d00000000       mov dword ptr fs:[0], ecx
// 005e3f77  83c420               add esp, 0x20
// 005e3f7a  c20800               ret 8
// library rbxgs/v8datamodel\MouseCommand.cpp (function ?getPartByLocalCharacter@MouseCommand@RBX@@QAEPAVPartInstance@2@ABVUIEvent@2@AAVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/MouseCommand.cpp
