// roc 2009-06 007ea360  unit: CXTPCustomizeToolbarsPageCheckListBox  size: 208 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007ea360
//
// 007ea360  6aff                 push -1
// 007ea362  6810038800           push 0x880310
// 007ea367  64a100000000         mov eax, dword ptr fs:[0]
// 007ea36d  50                   push eax
// 007ea36e  51                   push ecx
// 007ea36f  56                   push esi
// 007ea370  57                   push edi
// 007ea371  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007ea376  33c4                 xor eax, esp
// 007ea378  50                   push eax
// 007ea379  8d442410             lea eax, [esp + 0x10]
// 007ea37d  64a300000000         mov dword ptr fs:[0], eax
// 007ea383  8bf1                 mov esi, ecx
// 007ea385  8974240c             mov dword ptr [esp + 0xc], esi
// 007ea389  6a30                 push 0x30
// 007ea38b  6a00                 push 0
// 007ea38d  689d230000           push 0x239d
// 007ea392  e8e91f0600           call 0x84c380
// 007ea397  8b442420             mov eax, dword ptr [esp + 0x20]
// 007ea39b  8d8e8c000000         lea ecx, [esi + 0x8c]
// 007ea3a1  c744241800000000     mov dword ptr [esp + 0x18], 0
// 007ea3a9  c706b4919000         mov dword ptr [esi], 0x9091b4
// 007ea3af  898688000000         mov dword ptr [esi + 0x88], eax
// 007ea3b5  e826faffff           call 0x7e9de0
// 007ea3ba  8dbefc000000         lea edi, [esi + 0xfc]
// 007ea3c0  8bcf                 mov ecx, edi
// 007ea3c2  c644241801           mov byte ptr [esp + 0x18], 1
// 007ea3c7  e854eff2ff           call 0x719320
// 007ea3cc  c707943e8f00         mov dword ptr [edi], 0x8f3e94
// 007ea3d2  8dbe50010000         lea edi, [esi + 0x150]
// 007ea3d8  8bcf                 mov ecx, edi
// 007ea3da  c644241802           mov byte ptr [esp + 0x18], 2
// 007ea3df  e83ceff2ff           call 0x719320
// 007ea3e4  c707943e8f00         mov dword ptr [edi], 0x8f3e94
// 007ea3ea  8dbea4010000         lea edi, [esi + 0x1a4]
// 007ea3f0  8bcf                 mov ecx, edi
// 007ea3f2  c644241803           mov byte ptr [esp + 0x18], 3
// 007ea3f7  e824eff2ff           call 0x719320
// 007ea3fc  c707943e8f00         mov dword ptr [edi], 0x8f3e94
// 007ea402  8dbef8010000         lea edi, [esi + 0x1f8]
// 007ea408  8bcf                 mov ecx, edi
// 007ea40a  c644241804           mov byte ptr [esp + 0x18], 4
// 007ea40f  e80ceff2ff           call 0x719320
// 007ea414  c707943e8f00         mov dword ptr [edi], 0x8f3e94
// 007ea41a  8bc6                 mov eax, esi
// 007ea41c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007ea420  64890d00000000       mov dword ptr fs:[0], ecx
// 007ea427  59                   pop ecx
// 007ea428  5f                   pop edi
// 007ea429  5e                   pop esi
// 007ea42a  83c410               add esp, 0x10
// 007ea42d  c20400               ret 4
// copied from an identical function in another client (function ??0CXTPCustomizeToolbarsPage@@QAE@PAVCXTPCustomizeSheet@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPCustomizeToolbarsPage.cpp