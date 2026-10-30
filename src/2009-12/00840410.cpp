// roc 2009-12 00840410  unit: CXTPGroupLine  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00840410
//
// 00840410  6aff                 push -1
// 00840412  6864cd9500           push 0x95cd64
// 00840417  64a100000000         mov eax, dword ptr fs:[0]
// 0084041d  50                   push eax
// 0084041e  51                   push ecx
// 0084041f  56                   push esi
// 00840420  57                   push edi
// 00840421  a10052b600           mov eax, dword ptr [0xb65200]
// 00840426  33c4                 xor eax, esp
// 00840428  50                   push eax
// 00840429  8d442410             lea eax, [esp + 0x10]
// 0084042d  64a300000000         mov dword ptr fs:[0], eax
// 00840433  8bf1                 mov esi, ecx
// 00840435  8974240c             mov dword ptr [esp + 0xc], esi
// 00840439  6a30                 push 0x30
// 0084043b  6a00                 push 0
// 0084043d  689e230000           push 0x239e
// 00840442  e8a5640e00           call 0x9268ec
// 00840447  8dbe9c000000         lea edi, [esi + 0x9c]
// 0084044d  8bcf                 mov ecx, edi
// 0084044f  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00840457  c706f4919f00         mov dword ptr [esi], 0x9f91f4
// 0084045d  e8e63cfbff           call 0x7f4148
// 00840462  c707dc949f00         mov dword ptr [edi], 0x9f94dc
// 00840468  8d8ef4000000         lea ecx, [esi + 0xf4]
// 0084046e  c644241801           mov byte ptr [esp + 0x18], 1
// 00840473  e818fcffff           call 0x840090
// 00840478  8d8e54010000         lea ecx, [esi + 0x154]
// 0084047e  c644241802           mov byte ptr [esp + 0x18], 2
// 00840483  e808fcffff           call 0x840090
// 00840488  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0084048c  8b81b8000000         mov eax, dword ptr [ecx + 0xb8]
// 00840492  8b4074               mov eax, dword ptr [eax + 0x74]
// 00840495  8b5020               mov edx, dword ptr [eax + 0x20]
// 00840498  899688000000         mov dword ptr [esi + 0x88], edx
// 0084049e  8b5024               mov edx, dword ptr [eax + 0x24]
// 008404a1  89968c000000         mov dword ptr [esi + 0x8c], edx
// 008404a7  8b5030               mov edx, dword ptr [eax + 0x30]
// 008404aa  899690000000         mov dword ptr [esi + 0x90], edx
// 008404b0  8b5028               mov edx, dword ptr [eax + 0x28]
// 008404b3  899694000000         mov dword ptr [esi + 0x94], edx
// 008404b9  8b502c               mov edx, dword ptr [eax + 0x2c]
// 008404bc  899698000000         mov dword ptr [esi + 0x98], edx
// 008404c2  8b4054               mov eax, dword ptr [eax + 0x54]
// 008404c5  8986f0000000         mov dword ptr [esi + 0xf0], eax
// 008404cb  898eb4010000         mov dword ptr [esi + 0x1b4], ecx
// 008404d1  8bc6                 mov eax, esi
// 008404d3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008404d7  64890d00000000       mov dword ptr fs:[0], ecx
// 008404de  59                   pop ecx
// 008404df  5f                   pop edi
// 008404e0  5e                   pop esi
// 008404e1  83c410               add esp, 0x10
// 008404e4  c20400               ret 4
// copied from an identical function in another client (function ??0CXTPCustomizeOptionsPage@@QAE@PAVCXTPCustomizeSheet@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPCustomizeOptionsPage.cpp