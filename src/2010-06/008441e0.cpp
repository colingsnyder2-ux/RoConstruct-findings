// roc 2010-06 008441e0  unit: CBitmap  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008441e0
//
// 008441e0  6aff                 push -1
// 008441e2  6868719b00           push 0x9b7168
// 008441e7  64a100000000         mov eax, dword ptr fs:[0]
// 008441ed  50                   push eax
// 008441ee  83ec10               sub esp, 0x10
// 008441f1  56                   push esi
// 008441f2  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 008441f7  33c4                 xor eax, esp
// 008441f9  50                   push eax
// 008441fa  8d442418             lea eax, [esp + 0x18]
// 008441fe  64a300000000         mov dword ptr fs:[0], eax
// 00844204  8bf1                 mov esi, ecx
// 00844206  c7460800000000       mov dword ptr [esi + 8], 0
// 0084420d  e84c3df6ff           call 0x7a7f5e
// 00844212  8d4c2408             lea ecx, [esp + 8]
// 00844216  e8c98e1300           call 0x97d0e4
// 0084421b  8b442428             mov eax, dword ptr [esp + 0x28]
// 0084421f  6a00                 push 0
// 00844221  6a00                 push 0
// 00844223  50                   push eax
// 00844224  8d4c2414             lea ecx, [esp + 0x14]
// 00844228  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 00844230  e89d8e1300           call 0x97d0d2
// 00844235  8d4c2408             lea ecx, [esp + 8]
// 00844239  85c0                 test eax, eax
// 0084423b  7522                 jne 0x84425f
// 0084423d  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 00844245  e86045f6ff           call 0x7a87aa
// 0084424a  33c0                 xor eax, eax
// 0084424c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00844250  64890d00000000       mov dword ptr fs:[0], ecx
// 00844257  59                   pop ecx
// 00844258  5e                   pop esi
// 00844259  83c41c               add esp, 0x1c
// 0084425c  c20400               ret 4
// 0084425f  51                   push ecx
// 00844260  8bce                 mov ecx, esi
// 00844262  e869feffff           call 0x8440d0
// 00844267  8d4c2408             lea ecx, [esp + 8]
// 0084426b  8bf0                 mov esi, eax
// 0084426d  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 00844275  e83045f6ff           call 0x7a87aa
// 0084427a  8bc6                 mov eax, esi
// 0084427c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00844280  64890d00000000       mov dword ptr fs:[0], ecx
// 00844287  59                   pop ecx
// 00844288  5e                   pop esi
// 00844289  83c41c               add esp, 0x1c
// 0084428c  c20400               ret 4
// copied from an identical function in another client (function ?LoadFromFile@CXTPGraphicBitmapPng@@QAEHPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\GraphicLibrary\XTPGraphicBitmapPng.cpp