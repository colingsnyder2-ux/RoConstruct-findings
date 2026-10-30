// roc 2009-12 007fdd70  unit: CXTPPaintManager  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fdd70
//
// 007fdd70  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007fdd74  8b90fc000000         mov edx, dword ptr [eax + 0xfc]
// 007fdd7a  83ec10               sub esp, 0x10
// 007fdd7d  56                   push esi
// 007fdd7e  8b742424             mov esi, dword ptr [esp + 0x24]
// 007fdd82  56                   push esi
// 007fdd83  50                   push eax
// 007fdd84  83fa06               cmp edx, 6
// 007fdd87  751a                 jne 0x7fdda3
// 007fdd89  8b442424             mov eax, dword ptr [esp + 0x24]
// 007fdd8d  8b11                 mov edx, dword ptr [ecx]
// 007fdd8f  8b742420             mov esi, dword ptr [esp + 0x20]
// 007fdd93  8b526c               mov edx, dword ptr [edx + 0x6c]
// 007fdd96  50                   push eax
// 007fdd97  56                   push esi
// 007fdd98  ffd2                 call edx
// 007fdd9a  8bc6                 mov eax, esi
// 007fdd9c  5e                   pop esi
// 007fdd9d  83c410               add esp, 0x10
// 007fdda0  c21000               ret 0x10
// 007fdda3  83fa05               cmp edx, 5
// 007fdda6  751a                 jne 0x7fddc2
// 007fdda8  8b442424             mov eax, dword ptr [esp + 0x24]
// 007fddac  8b11                 mov edx, dword ptr [ecx]
// 007fddae  8b742420             mov esi, dword ptr [esp + 0x20]
// 007fddb2  8b5264               mov edx, dword ptr [edx + 0x64]
// 007fddb5  50                   push eax
// 007fddb6  56                   push esi
// 007fddb7  ffd2                 call edx
// 007fddb9  8bc6                 mov eax, esi
// 007fddbb  5e                   pop esi
// 007fddbc  83c410               add esp, 0x10
// 007fddbf  c21000               ret 0x10
// 007fddc2  8b9000010000         mov edx, dword ptr [eax + 0x100]
// 007fddc8  8b442424             mov eax, dword ptr [esp + 0x24]
// 007fddcc  83baf800000002       cmp dword ptr [edx + 0xf8], 2
// 007fddd3  8b11                 mov edx, dword ptr [ecx]
// 007fddd5  50                   push eax
// 007fddd6  7509                 jne 0x7fdde1
// 007fddd8  8b5258               mov edx, dword ptr [edx + 0x58]
// 007fdddb  8d442410             lea eax, [esp + 0x10]
// 007fdddf  eb07                 jmp 0x7fdde8
// 007fdde1  8b525c               mov edx, dword ptr [edx + 0x5c]
// 007fdde4  8d442418             lea eax, [esp + 0x18]
// 007fdde8  50                   push eax
// 007fdde9  ffd2                 call edx
// 007fddeb  8b10                 mov edx, dword ptr [eax]
// 007fdded  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007fddf1  8911                 mov dword ptr [ecx], edx
// 007fddf3  8b4004               mov eax, dword ptr [eax + 4]
// 007fddf6  894104               mov dword ptr [ecx + 4], eax
// 007fddf9  8bc1                 mov eax, ecx
// 007fddfb  5e                   pop esi
// 007fddfc  83c410               add esp, 0x10
// 007fddff  c21000               ret 0x10
// copied from an identical function in another client (function ?DrawControl@CXTPPaintManager@@QAE?AVCSize@@PAVCDC@@PAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPaintManager.cpp