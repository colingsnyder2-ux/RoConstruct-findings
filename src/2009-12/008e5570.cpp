// roc 2009-12 008e5570  unit: CXTCaptionButton  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e5570
//
// 008e5570  6aff                 push -1
// 008e5572  68f85f9600           push 0x965ff8
// 008e5577  64a100000000         mov eax, dword ptr fs:[0]
// 008e557d  50                   push eax
// 008e557e  56                   push esi
// 008e557f  a10052b600           mov eax, dword ptr [0xb65200]
// 008e5584  33c4                 xor eax, esp
// 008e5586  50                   push eax
// 008e5587  8d442408             lea eax, [esp + 8]
// 008e558b  64a300000000         mov dword ptr fs:[0], eax
// 008e5591  8bf1                 mov esi, ecx
// 008e5593  8b442428             mov eax, dword ptr [esp + 0x28]
// 008e5597  8b542424             mov edx, dword ptr [esp + 0x24]
// 008e559b  50                   push eax
// 008e559c  83ec24               sub esp, 0x24
// 008e559f  8bcc                 mov ecx, esp
// 008e55a1  89642450             mov dword ptr [esp + 0x50], esp
// 008e55a5  6a01                 push 1
// 008e55a7  52                   push edx
// 008e55a8  e8e376f2ff           call 0x80cc90
// 008e55ad  8b442448             mov eax, dword ptr [esp + 0x48]
// 008e55b1  83ec24               sub esp, 0x24
// 008e55b4  8bcc                 mov ecx, esp
// 008e55b6  89642470             mov dword ptr [esp + 0x70], esp
// 008e55ba  6a01                 push 1
// 008e55bc  50                   push eax
// 008e55bd  c744246400000000     mov dword ptr [esp + 0x64], 0
// 008e55c5  e8c676f2ff           call 0x80cc90
// 008e55ca  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 008e55ce  8b06                 mov eax, dword ptr [esi]
// 008e55d0  8b542464             mov edx, dword ptr [esp + 0x64]
// 008e55d4  8b804c010000         mov eax, dword ptr [eax + 0x14c]
// 008e55da  51                   push ecx
// 008e55db  52                   push edx
// 008e55dc  8bce                 mov ecx, esi
// 008e55de  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 008e55e6  ffd0                 call eax
// 008e55e8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008e55ec  64890d00000000       mov dword ptr fs:[0], ecx
// 008e55f3  59                   pop ecx
// 008e55f4  5e                   pop esi
// 008e55f5  83c40c               add esp, 0xc
// 008e55f8  c21400               ret 0x14
// copied from an identical function in another client (function ?SetIcon@CXTButton@@UAEHVCSize@@PAUHICON__@@1H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTButton.cpp