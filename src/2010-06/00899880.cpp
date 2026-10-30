// roc 2010-06 00899880  unit: CXTCaptionButton  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00899880
//
// 00899880  6aff                 push -1
// 00899882  6818bf9b00           push 0x9bbf18
// 00899887  64a100000000         mov eax, dword ptr fs:[0]
// 0089988d  50                   push eax
// 0089988e  56                   push esi
// 0089988f  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 00899894  33c4                 xor eax, esp
// 00899896  50                   push eax
// 00899897  8d442408             lea eax, [esp + 8]
// 0089989b  64a300000000         mov dword ptr fs:[0], eax
// 008998a1  8bf1                 mov esi, ecx
// 008998a3  8b442428             mov eax, dword ptr [esp + 0x28]
// 008998a7  8b542424             mov edx, dword ptr [esp + 0x24]
// 008998ab  50                   push eax
// 008998ac  83ec24               sub esp, 0x24
// 008998af  8bcc                 mov ecx, esp
// 008998b1  89642450             mov dword ptr [esp + 0x50], esp
// 008998b5  6a01                 push 1
// 008998b7  52                   push edx
// 008998b8  e87374f2ff           call 0x7c0d30
// 008998bd  8b442448             mov eax, dword ptr [esp + 0x48]
// 008998c1  83ec24               sub esp, 0x24
// 008998c4  8bcc                 mov ecx, esp
// 008998c6  89642470             mov dword ptr [esp + 0x70], esp
// 008998ca  6a01                 push 1
// 008998cc  50                   push eax
// 008998cd  c744246400000000     mov dword ptr [esp + 0x64], 0
// 008998d5  e85674f2ff           call 0x7c0d30
// 008998da  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 008998de  8b06                 mov eax, dword ptr [esi]
// 008998e0  8b542464             mov edx, dword ptr [esp + 0x64]
// 008998e4  8b804c010000         mov eax, dword ptr [eax + 0x14c]
// 008998ea  51                   push ecx
// 008998eb  52                   push edx
// 008998ec  8bce                 mov ecx, esi
// 008998ee  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 008998f6  ffd0                 call eax
// 008998f8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008998fc  64890d00000000       mov dword ptr fs:[0], ecx
// 00899903  59                   pop ecx
// 00899904  5e                   pop esi
// 00899905  83c40c               add esp, 0xc
// 00899908  c21400               ret 0x14
// copied from an identical function in another client (function ?SetIcon@CXTButton@@UAEHVCSize@@PAUHICON__@@1H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp