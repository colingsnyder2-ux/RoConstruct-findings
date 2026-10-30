// roc 2009-12 008b3200  unit: CXTPDockingPaneTabbedContainer  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b3200
//
// 008b3200  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008b3204  56                   push esi
// 008b3205  8bf1                 mov esi, ecx
// 008b3207  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008b320b  50                   push eax
// 008b320c  51                   push ecx
// 008b320d  8bce                 mov ecx, esi
// 008b320f  e8cce6ffff           call 0x8b18e0
// 008b3214  85c0                 test eax, eax
// 008b3216  7c2b                 jl 0x8b3243
// 008b3218  8b16                 mov edx, dword ptr [esi]
// 008b321a  6a01                 push 1
// 008b321c  6a01                 push 1
// 008b321e  50                   push eax
// 008b321f  8bce                 mov ecx, esi
// 008b3221  e8baf1ffff           call 0x8b23e0
// 008b3226  8b9244010000         mov edx, dword ptr [edx + 0x144]
// 008b322c  50                   push eax
// 008b322d  8bce                 mov ecx, esi
// 008b322f  ffd2                 call edx
// 008b3231  8d4e54               lea ecx, [esi + 0x54]
// 008b3234  6a00                 push 0
// 008b3236  51                   push ecx
// 008b3237  e804d6ffff           call 0x8b0840
// 008b323c  8bc8                 mov ecx, eax
// 008b323e  e88d60f8ff           call 0x8392d0
// 008b3243  8b8ea4010000         mov ecx, dword ptr [esi + 0x1a4]
// 008b3249  85c9                 test ecx, ecx
// 008b324b  7409                 je 0x8b3256
// 008b324d  8b01                 mov eax, dword ptr [ecx]
// 008b324f  8b5058               mov edx, dword ptr [eax + 0x58]
// 008b3252  ffd2                 call edx
// 008b3254  eb07                 jmp 0x8b325d
// 008b3256  8bce                 mov ecx, esi
// 008b3258  e8a509f4ff           call 0x7f3c02
// 008b325d  83c654               add esi, 0x54
// 008b3260  8bce                 mov ecx, esi
// 008b3262  e8d9d5ffff           call 0x8b0840
// 008b3267  8bc8                 mov ecx, eax
// 008b3269  e84257f8ff           call 0x8389b0
// 008b326e  8bce                 mov ecx, esi
// 008b3270  e8cbd5ffff           call 0x8b0840
// 008b3275  8b10                 mov edx, dword ptr [eax]
// 008b3277  56                   push esi
// 008b3278  8bc8                 mov ecx, eax
// 008b327a  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 008b3280  6a02                 push 2
// 008b3282  ffd0                 call eax
// 008b3284  5e                   pop esi
// 008b3285  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnRButtonDown@CXTPDockingPaneTabbedContainer@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneTabbedContainer.cpp