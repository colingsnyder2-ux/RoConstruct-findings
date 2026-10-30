// roc 2009-12 008ebc80  unit: CXTPDialogBar::CCaptionPopupBar  size: 230 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ebc80
//
// 008ebc80  6aff                 push -1
// 008ebc82  68e0689600           push 0x9668e0
// 008ebc87  64a100000000         mov eax, dword ptr fs:[0]
// 008ebc8d  50                   push eax
// 008ebc8e  83ec2c               sub esp, 0x2c
// 008ebc91  56                   push esi
// 008ebc92  57                   push edi
// 008ebc93  a10052b600           mov eax, dword ptr [0xb65200]
// 008ebc98  33c4                 xor eax, esp
// 008ebc9a  50                   push eax
// 008ebc9b  8d442438             lea eax, [esp + 0x38]
// 008ebc9f  64a300000000         mov dword ptr fs:[0], eax
// 008ebca5  8bf1                 mov esi, ecx
// 008ebca7  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 008ebcab  8b86a8010000         mov eax, dword ptr [esi + 0x1a8]
// 008ebcb1  8b8eac010000         mov ecx, dword ptr [esi + 0x1ac]
// 008ebcb7  8b96b0010000         mov edx, dword ptr [esi + 0x1b0]
// 008ebcbd  8907                 mov dword ptr [edi], eax
// 008ebcbf  8b86b4010000         mov eax, dword ptr [esi + 0x1b4]
// 008ebcc5  894f04               mov dword ptr [edi + 4], ecx
// 008ebcc8  895708               mov dword ptr [edi + 8], edx
// 008ebccb  56                   push esi
// 008ebccc  8d4c2428             lea ecx, [esp + 0x28]
// 008ebcd0  89470c               mov dword ptr [edi + 0xc], eax
// 008ebcd3  e8fe89f0ff           call 0x7f46d6
// 008ebcd8  8bce                 mov ecx, esi
// 008ebcda  c744244000000000     mov dword ptr [esp + 0x40], 0
// 008ebce2  e8a988f1ff           call 0x804590
// 008ebce7  8b10                 mov edx, dword ptr [eax]
// 008ebce9  6a00                 push 0
// 008ebceb  8bc8                 mov ecx, eax
// 008ebced  8b82e0000000         mov eax, dword ptr [edx + 0xe0]
// 008ebcf3  56                   push esi
// 008ebcf4  ffd0                 call eax
// 008ebcf6  50                   push eax
// 008ebcf7  8d4c2428             lea ecx, [esp + 0x28]
// 008ebcfb  51                   push ecx
// 008ebcfc  8d4c241c             lea ecx, [esp + 0x1c]
// 008ebd00  e85bf9f5ff           call 0x84b660
// 008ebd05  8bce                 mov ecx, esi
// 008ebd07  c644244001           mov byte ptr [esp + 0x40], 1
// 008ebd0c  e87f88f1ff           call 0x804590
// 008ebd11  8b10                 mov edx, dword ptr [eax]
// 008ebd13  8b9288000000         mov edx, dword ptr [edx + 0x88]
// 008ebd19  6a00                 push 0
// 008ebd1b  56                   push esi
// 008ebd1c  8d4c242c             lea ecx, [esp + 0x2c]
// 008ebd20  51                   push ecx
// 008ebd21  8d4c2418             lea ecx, [esp + 0x18]
// 008ebd25  51                   push ecx
// 008ebd26  8bc8                 mov ecx, eax
// 008ebd28  ffd2                 call edx
// 008ebd2a  8b442410             mov eax, dword ptr [esp + 0x10]
// 008ebd2e  014704               add dword ptr [edi + 4], eax
// 008ebd31  8d4c2414             lea ecx, [esp + 0x14]
// 008ebd35  c644244000           mov byte ptr [esp + 0x40], 0
// 008ebd3a  e8a1f9f5ff           call 0x84b6e0
// 008ebd3f  8d4c2424             lea ecx, [esp + 0x24]
// 008ebd43  c7442440ffffffff     mov dword ptr [esp + 0x40], 0xffffffff
// 008ebd4b  e88089f0ff           call 0x7f46d0
// 008ebd50  8bc7                 mov eax, edi
// 008ebd52  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008ebd56  64890d00000000       mov dword ptr fs:[0], ecx
// 008ebd5d  59                   pop ecx
// 008ebd5e  5f                   pop edi
// 008ebd5f  5e                   pop esi
// 008ebd60  83c438               add esp, 0x38
// 008ebd63  c20400               ret 4
// copied from an identical function in another client (function ?GetMargins@CXTPDialogBar@@IAE?AVCRect@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source/CommandBars/XTPDialogBar.cpp