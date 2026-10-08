// roc 2007-03 005307d0  unit: seg_00530000  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005307d0
//
// 005307d0  6aff                 push -1
// 005307d2  68a8d57400           push 0x74d5a8
// 005307d7  64a100000000         mov eax, dword ptr fs:[0]
// 005307dd  50                   push eax
// 005307de  64892500000000       mov dword ptr fs:[0], esp
// 005307e5  51                   push ecx
// 005307e6  56                   push esi
// 005307e7  8bc1                 mov eax, ecx
// 005307e9  8b742420             mov esi, dword ptr [esp + 0x20]
// 005307ed  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005307f1  83ec08               sub esp, 8
// 005307f4  85f6                 test esi, esi
// 005307f6  8bcc                 mov ecx, esp
// 005307f8  8911                 mov dword ptr [ecx], edx
// 005307fa  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00530802  8964240c             mov dword ptr [esp + 0xc], esp
// 00530806  897104               mov dword ptr [ecx + 4], esi
// 00530809  740c                 je 0x530817
// 0053080b  8d4e04               lea ecx, [esi + 4]
// 0053080e  ba01000000           mov edx, 1
// 00530813  f00fc111             lock xadd dword ptr [ecx], edx
// 00530817  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0053081b  8b11                 mov edx, dword ptr [ecx]
// 0053081d  8b4804               mov ecx, dword ptr [eax + 4]
// 00530820  03ca                 add ecx, edx
// 00530822  8b10                 mov edx, dword ptr [eax]
// 00530824  ffd2                 call edx
// 00530826  85f6                 test esi, esi
// 00530828  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00530830  742a                 je 0x53085c
// 00530832  8d4604               lea eax, [esi + 4]
// 00530835  83c9ff               or ecx, 0xffffffff
// 00530838  f00fc108             lock xadd dword ptr [eax], ecx
// 0053083c  751e                 jne 0x53085c
// 0053083e  8b16                 mov edx, dword ptr [esi]
// 00530840  8b4204               mov eax, dword ptr [edx + 4]
// 00530843  8bce                 mov ecx, esi
// 00530845  ffd0                 call eax
// 00530847  8d4e08               lea ecx, [esi + 8]
// 0053084a  83caff               or edx, 0xffffffff
// 0053084d  f00fc111             lock xadd dword ptr [ecx], edx
// 00530851  7509                 jne 0x53085c
// 00530853  8b06                 mov eax, dword ptr [esi]
// 00530855  8b5008               mov edx, dword ptr [eax + 8]
// 00530858  8bce                 mov ecx, esi
// 0053085a  ffd2                 call edx
// 0053085c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00530860  64890d00000000       mov dword ptr fs:[0], ecx
// 00530867  5e                   pop esi
// 00530868  83c410               add esp, 0x10
// 0053086b  c20c00               ret 0xc
// library rbxgs/util\RunStateOwner.cpp (function ??$?RV?$shared_ptr@VRunService@RBX@@@boost@@@?$mf1@XVRunService@RBX@@V?$shared_ptr@VDataModel@RBX@@@boost@@@_mfi@boost@@QBEXAAV?$shared_ptr@VRunService@RBX@@@2@V?$shared_ptr@VDataModel@RBX@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
