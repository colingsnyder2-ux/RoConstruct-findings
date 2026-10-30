// roc 2009-06 00765620  unit: CXTPGroupLine  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00765620
//
// 00765620  6aff                 push -1
// 00765622  68148a8700           push 0x878a14
// 00765627  64a100000000         mov eax, dword ptr fs:[0]
// 0076562d  50                   push eax
// 0076562e  51                   push ecx
// 0076562f  56                   push esi
// 00765630  57                   push edi
// 00765631  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00765636  33c4                 xor eax, esp
// 00765638  50                   push eax
// 00765639  8d442410             lea eax, [esp + 0x10]
// 0076563d  64a300000000         mov dword ptr fs:[0], eax
// 00765643  8bf1                 mov esi, ecx
// 00765645  8974240c             mov dword ptr [esp + 0xc], esi
// 00765649  6a30                 push 0x30
// 0076564b  6a00                 push 0
// 0076564d  689e230000           push 0x239e
// 00765652  e8296d0e00           call 0x84c380
// 00765657  8dbe9c000000         lea edi, [esi + 0x9c]
// 0076565d  8bcf                 mov ecx, edi
// 0076565f  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00765667  c7064c8d8f00         mov dword ptr [esi], 0x8f8d4c
// 0076566d  e8ae3cfbff           call 0x719320
// 00765672  c70734908f00         mov dword ptr [edi], 0x8f9034
// 00765678  8d8ef4000000         lea ecx, [esi + 0xf4]
// 0076567e  c644241801           mov byte ptr [esp + 0x18], 1
// 00765683  e818fcffff           call 0x7652a0
// 00765688  8d8e54010000         lea ecx, [esi + 0x154]
// 0076568e  c644241802           mov byte ptr [esp + 0x18], 2
// 00765693  e808fcffff           call 0x7652a0
// 00765698  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0076569c  8b81b8000000         mov eax, dword ptr [ecx + 0xb8]
// 007656a2  8b4074               mov eax, dword ptr [eax + 0x74]
// 007656a5  8b5020               mov edx, dword ptr [eax + 0x20]
// 007656a8  899688000000         mov dword ptr [esi + 0x88], edx
// 007656ae  8b5024               mov edx, dword ptr [eax + 0x24]
// 007656b1  89968c000000         mov dword ptr [esi + 0x8c], edx
// 007656b7  8b5030               mov edx, dword ptr [eax + 0x30]
// 007656ba  899690000000         mov dword ptr [esi + 0x90], edx
// 007656c0  8b5028               mov edx, dword ptr [eax + 0x28]
// 007656c3  899694000000         mov dword ptr [esi + 0x94], edx
// 007656c9  8b502c               mov edx, dword ptr [eax + 0x2c]
// 007656cc  899698000000         mov dword ptr [esi + 0x98], edx
// 007656d2  8b4054               mov eax, dword ptr [eax + 0x54]
// 007656d5  8986f0000000         mov dword ptr [esi + 0xf0], eax
// 007656db  898eb4010000         mov dword ptr [esi + 0x1b4], ecx
// 007656e1  8bc6                 mov eax, esi
// 007656e3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007656e7  64890d00000000       mov dword ptr fs:[0], ecx
// 007656ee  59                   pop ecx
// 007656ef  5f                   pop edi
// 007656f0  5e                   pop esi
// 007656f1  83c410               add esp, 0x10
// 007656f4  c20400               ret 4
// copied from an identical function in another client (function ??0CXTPCustomizeOptionsPage@@QAE@PAVCXTPCustomizeSheet@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPCustomizeOptionsPage.cpp