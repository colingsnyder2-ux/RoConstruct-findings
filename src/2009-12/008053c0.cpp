// roc 2009-12 008053c0  unit: CXTPCommandBar  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008053c0
//
// 008053c0  56                   push esi
// 008053c1  8bf1                 mov esi, ecx
// 008053c3  e8c8f1ffff           call 0x804590
// 008053c8  8b10                 mov edx, dword ptr [eax]
// 008053ca  56                   push esi
// 008053cb  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008053cf  8bc8                 mov ecx, eax
// 008053d1  8b82b4000000         mov eax, dword ptr [edx + 0xb4]
// 008053d7  56                   push esi
// 008053d8  ffd0                 call eax
// 008053da  8bc6                 mov eax, esi
// 008053dc  5e                   pop esi
// 008053dd  c20400               ret 4
// copied from an identical function in another client (function ?GetBorders@CXTPCommandBar@@UAE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp