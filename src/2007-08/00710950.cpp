// roc 2007-08 00710950  unit: CXTPOffice2007Image  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00710950
//
// 00710950  6aff                 push -1
// 00710952  68cba47600           push 0x76a4cb
// 00710957  64a100000000         mov eax, dword ptr fs:[0]
// 0071095d  50                   push eax
// 0071095e  83ec08               sub esp, 8
// 00710961  56                   push esi
// 00710962  57                   push edi
// 00710963  a188518b00           mov eax, dword ptr [0x8b5188]
// 00710968  33c4                 xor eax, esp
// 0071096a  50                   push eax
// 0071096b  8d442414             lea eax, [esp + 0x14]
// 0071096f  64a300000000         mov dword ptr fs:[0], eax
// 00710975  8bf1                 mov esi, ecx
// 00710977  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0071097f  51                   push ecx
// 00710980  8d442430             lea eax, [esp + 0x30]
// 00710984  8bcc                 mov ecx, esp
// 00710986  89642410             mov dword ptr [esp + 0x10], esp
// 0071098a  50                   push eax
// 0071098b  c744242401000000     mov dword ptr [esp + 0x24], 1
// 00710993  ff1574dd7700         call dword ptr [0x77dd74]
// 00710999  51                   push ecx
// 0071099a  8d542430             lea edx, [esp + 0x30]
// 0071099e  8bcc                 mov ecx, esp
// 007109a0  89642418             mov dword ptr [esp + 0x18], esp
// 007109a4  52                   push edx
// 007109a5  c644242802           mov byte ptr [esp + 0x28], 2
// 007109aa  ff1574dd7700         call dword ptr [0x77dd74]
// 007109b0  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 007109b4  57                   push edi
// 007109b5  8bce                 mov ecx, esi
// 007109b7  c644242801           mov byte ptr [esp + 0x28], 1
// 007109bc  e8dff8ffff           call 0x7102a0
// 007109c1  8d4c2428             lea ecx, [esp + 0x28]
// 007109c5  ff15bcdd7700         call dword ptr [0x77ddbc]
// 007109cb  8d4c242c             lea ecx, [esp + 0x2c]
// 007109cf  ff15bcdd7700         call dword ptr [0x77ddbc]
// 007109d5  8bc7                 mov eax, edi
// 007109d7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007109db  64890d00000000       mov dword ptr fs:[0], ecx
// 007109e2  59                   pop ecx
// 007109e3  5f                   pop edi
// 007109e4  5e                   pop esi
// 007109e5  83c414               add esp, 0x14
// 007109e8  c20c00               ret 0xc
// copied from an identical function in another client (function ?GetImageString@CXTPOffice2007Images@@QAE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@V23@0@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPOffice2007Image.cpp