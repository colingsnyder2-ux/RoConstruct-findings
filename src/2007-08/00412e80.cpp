// roc 2007-08 00412e80  unit: std::runtime_error  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00412e80
//
// 00412e80  6aff                 push -1
// 00412e82  687a997300           push 0x73997a
// 00412e87  64a100000000         mov eax, dword ptr fs:[0]
// 00412e8d  50                   push eax
// 00412e8e  51                   push ecx
// 00412e8f  53                   push ebx
// 00412e90  56                   push esi
// 00412e91  57                   push edi
// 00412e92  a188518b00           mov eax, dword ptr [0x8b5188]
// 00412e97  33c4                 xor eax, esp
// 00412e99  50                   push eax
// 00412e9a  8d442414             lea eax, [esp + 0x14]
// 00412e9e  64a300000000         mov dword ptr fs:[0], eax
// 00412ea4  8b742428             mov esi, dword ptr [esp + 0x28]
// 00412ea8  33db                 xor ebx, ebx
// 00412eaa  8bce                 mov ecx, esi
// 00412eac  895c2410             mov dword ptr [esp + 0x10], ebx
// 00412eb0  ff15bcdc7700         call dword ptr [0x77dcbc]
// 00412eb6  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00412eba  50                   push eax
// 00412ebb  8bcf                 mov ecx, edi
// 00412ebd  ff15c0dc7700         call dword ptr [0x77dcc0]
// 00412ec3  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00412ec7  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 00412ecb  8bcb                 mov ecx, ebx
// 00412ecd  c744241001000000     mov dword ptr [esp + 0x10], 1
// 00412ed5  ff15c8dc7700         call dword ptr [0x77dcc8]
// 00412edb  50                   push eax
// 00412edc  8bcb                 mov ecx, ebx
// 00412ede  ff1598dd7700         call dword ptr [0x77dd98]
// 00412ee4  50                   push eax
// 00412ee5  8bce                 mov ecx, esi
// 00412ee7  ff15c8dc7700         call dword ptr [0x77dcc8]
// 00412eed  50                   push eax
// 00412eee  8bce                 mov ecx, esi
// 00412ef0  ff1598dd7700         call dword ptr [0x77dd98]
// 00412ef6  50                   push eax
// 00412ef7  57                   push edi
// 00412ef8  ff15ccdc7700         call dword ptr [0x77dccc]
// 00412efe  83c414               add esp, 0x14
// 00412f01  8bc7                 mov eax, edi
// 00412f03  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00412f07  64890d00000000       mov dword ptr fs:[0], ecx
// 00412f0e  59                   pop ecx
// 00412f0f  5f                   pop edi
// 00412f10  5e                   pop esi
// 00412f11  5b                   pop ebx
// 00412f12  83c410               add esp, 0x10
// 00412f15  c3                   ret 
// copied from an identical function in another client (function ??HATL@@YA?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@0@ABV10@0@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp