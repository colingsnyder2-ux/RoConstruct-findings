// roc 2009-12 0088ffe0  unit: CBitmap  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088ffe0
//
// 0088ffe0  6aff                 push -1
// 0088ffe2  6848129600           push 0x961248
// 0088ffe7  64a100000000         mov eax, dword ptr fs:[0]
// 0088ffed  50                   push eax
// 0088ffee  83ec10               sub esp, 0x10
// 0088fff1  56                   push esi
// 0088fff2  a10052b600           mov eax, dword ptr [0xb65200]
// 0088fff7  33c4                 xor eax, esp
// 0088fff9  50                   push eax
// 0088fffa  8d442418             lea eax, [esp + 0x18]
// 0088fffe  64a300000000         mov dword ptr fs:[0], eax
// 00890004  8bf1                 mov esi, ecx
// 00890006  c7460800000000       mov dword ptr [esi + 8], 0
// 0089000d  e80c3ef6ff           call 0x7f3e1e
// 00890012  8d4c2408             lea ecx, [esp + 8]
// 00890016  e88d670900           call 0x9267a8
// 0089001b  8b442428             mov eax, dword ptr [esp + 0x28]
// 0089001f  6a00                 push 0
// 00890021  6a00                 push 0
// 00890023  50                   push eax
// 00890024  8d4c2414             lea ecx, [esp + 0x14]
// 00890028  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 00890030  e861670900           call 0x926796
// 00890035  8d4c2408             lea ecx, [esp + 8]
// 00890039  85c0                 test eax, eax
// 0089003b  7522                 jne 0x89005f
// 0089003d  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 00890045  e82046f6ff           call 0x7f466a
// 0089004a  33c0                 xor eax, eax
// 0089004c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00890050  64890d00000000       mov dword ptr fs:[0], ecx
// 00890057  59                   pop ecx
// 00890058  5e                   pop esi
// 00890059  83c41c               add esp, 0x1c
// 0089005c  c20400               ret 4
// 0089005f  51                   push ecx
// 00890060  8bce                 mov ecx, esi
// 00890062  e869feffff           call 0x88fed0
// 00890067  8d4c2408             lea ecx, [esp + 8]
// 0089006b  8bf0                 mov esi, eax
// 0089006d  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 00890075  e8f045f6ff           call 0x7f466a
// 0089007a  8bc6                 mov eax, esi
// 0089007c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00890080  64890d00000000       mov dword ptr fs:[0], ecx
// 00890087  59                   pop ecx
// 00890088  5e                   pop esi
// 00890089  83c41c               add esp, 0x1c
// 0089008c  c20400               ret 4
// copied from an identical function in another client (function ?LoadFromFile@CXTPGraphicBitmapPng@@QAEHPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\GraphicLibrary\XTPGraphicBitmapPng.cpp