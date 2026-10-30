// roc 2010-06 007f44b0  unit: CXTPGroupLine  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f44b0
//
// 007f44b0  6aff                 push -1
// 007f44b2  68c42a9b00           push 0x9b2ac4
// 007f44b7  64a100000000         mov eax, dword ptr fs:[0]
// 007f44bd  50                   push eax
// 007f44be  51                   push ecx
// 007f44bf  56                   push esi
// 007f44c0  57                   push edi
// 007f44c1  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007f44c6  33c4                 xor eax, esp
// 007f44c8  50                   push eax
// 007f44c9  8d442410             lea eax, [esp + 0x10]
// 007f44cd  64a300000000         mov dword ptr fs:[0], eax
// 007f44d3  8bf1                 mov esi, ecx
// 007f44d5  8974240c             mov dword ptr [esp + 0xc], esi
// 007f44d9  6a30                 push 0x30
// 007f44db  6a00                 push 0
// 007f44dd  689e230000           push 0x239e
// 007f44e2  e8418d1800           call 0x97d228
// 007f44e7  8dbe9c000000         lea edi, [esi + 0x9c]
// 007f44ed  8bcf                 mov ecx, edi
// 007f44ef  c744241800000000     mov dword ptr [esp + 0x18], 0
// 007f44f7  c706b4d4a500         mov dword ptr [esi], 0xa5d4b4
// 007f44fd  e8863dfbff           call 0x7a8288
// 007f4502  c7079cd7a500         mov dword ptr [edi], 0xa5d79c
// 007f4508  8d8ef4000000         lea ecx, [esi + 0xf4]
// 007f450e  c644241801           mov byte ptr [esp + 0x18], 1
// 007f4513  e818fcffff           call 0x7f4130
// 007f4518  8d8e54010000         lea ecx, [esi + 0x154]
// 007f451e  c644241802           mov byte ptr [esp + 0x18], 2
// 007f4523  e808fcffff           call 0x7f4130
// 007f4528  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007f452c  8b81b8000000         mov eax, dword ptr [ecx + 0xb8]
// 007f4532  8b4074               mov eax, dword ptr [eax + 0x74]
// 007f4535  8b5020               mov edx, dword ptr [eax + 0x20]
// 007f4538  899688000000         mov dword ptr [esi + 0x88], edx
// 007f453e  8b5024               mov edx, dword ptr [eax + 0x24]
// 007f4541  89968c000000         mov dword ptr [esi + 0x8c], edx
// 007f4547  8b5030               mov edx, dword ptr [eax + 0x30]
// 007f454a  899690000000         mov dword ptr [esi + 0x90], edx
// 007f4550  8b5028               mov edx, dword ptr [eax + 0x28]
// 007f4553  899694000000         mov dword ptr [esi + 0x94], edx
// 007f4559  8b502c               mov edx, dword ptr [eax + 0x2c]
// 007f455c  899698000000         mov dword ptr [esi + 0x98], edx
// 007f4562  8b4054               mov eax, dword ptr [eax + 0x54]
// 007f4565  8986f0000000         mov dword ptr [esi + 0xf0], eax
// 007f456b  898eb4010000         mov dword ptr [esi + 0x1b4], ecx
// 007f4571  8bc6                 mov eax, esi
// 007f4573  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007f4577  64890d00000000       mov dword ptr fs:[0], ecx
// 007f457e  59                   pop ecx
// 007f457f  5f                   pop edi
// 007f4580  5e                   pop esi
// 007f4581  83c410               add esp, 0x10
// 007f4584  c20400               ret 4
// copied from an identical function in another client (function ??0CXTPCustomizeOptionsPage@@QAE@PAVCXTPCustomizeSheet@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPCustomizeOptionsPage.cpp