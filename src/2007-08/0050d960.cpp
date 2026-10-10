// from server: 100% by tester
// roc 2007-03 00502000  unit: seg_00500000  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00502000
//
// 00502000  6aff                 push -1
// 00502002  68a1f67400           push 0x74f6a1
// 00502007  64a100000000         mov eax, dword ptr fs:[0]
// 0050200d  50                   push eax
// 0050200e  51                   push ecx
// 0050200f  56                   push esi
// 00502010  57                   push edi
// 00502011  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00502016  33c4                 xor eax, esp
// 00502018  50                   push eax
// 00502019  8d442410             lea eax, [esp + 0x10]
// 0050201d  64a300000000         mov dword ptr fs:[0], eax
// 00502023  8b742420             mov esi, dword ptr [esp + 0x20]
// 00502027  89742420             mov dword ptr [esp + 0x20], esi
// 0050202b  8974240c             mov dword ptr [esp + 0xc], esi
// 0050202f  85f6                 test esi, esi
// 00502031  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00502039  7425                 je 0x502060
// 0050203b  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0050203f  57                   push edi
// 00502040  8bce                 mov ecx, esi
// 00502042  ff157ce77700         call dword ptr [0x77e77c]
// 00502048  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0050204b  89461c               mov dword ptr [esi + 0x1c], eax
// 0050204e  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00502051  894e20               mov dword ptr [esi + 0x20], ecx
// 00502054  8b5724               mov edx, dword ptr [edi + 0x24]
// 00502057  895624               mov dword ptr [esi + 0x24], edx
// 0050205a  8b4728               mov eax, dword ptr [edi + 0x28]
// 0050205d  894628               mov dword ptr [esi + 0x28], eax
// 00502060  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00502064  64890d00000000       mov dword ptr fs:[0], ecx
// 0050206b  59                   pop ecx
// 0050206c  5f                   pop edi
// 0050206d  5e                   pop esi
// 0050206e  83c410               add esp, 0x10
// 00502071  c3                   ret 
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??$_Construct@VToken@G3D@@V12@@std@@YAXPAVToken@G3D@@ABV12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
