// roc 2009-12 0084f040  unit: CXTPPropertyGrid  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084f040
//
// 0084f040  56                   push esi
// 0084f041  8bf1                 mov esi, ecx
// 0084f043  8b8644010000         mov eax, dword ptr [esi + 0x144]
// 0084f049  57                   push edi
// 0084f04a  8b7874               mov edi, dword ptr [eax + 0x74]
// 0084f04d  c7407400000000       mov dword ptr [eax + 0x74], 0
// 0084f054  8b8e44010000         mov ecx, dword ptr [esi + 0x144]
// 0084f05a  85c9                 test ecx, ecx
// 0084f05c  7408                 je 0x84f066
// 0084f05e  8b01                 mov eax, dword ptr [ecx]
// 0084f060  8b10                 mov edx, dword ptr [eax]
// 0084f062  6a01                 push 1
// 0084f064  ffd2                 call edx
// 0084f066  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0084f06a  898644010000         mov dword ptr [esi + 0x144], eax
// 0084f070  8b4874               mov ecx, dword ptr [eax + 0x74]
// 0084f073  85c9                 test ecx, ecx
// 0084f075  7412                 je 0x84f089
// 0084f077  e8604dfaff           call 0x7f3ddc
// 0084f07c  8b8644010000         mov eax, dword ptr [esi + 0x144]
// 0084f082  c7407400000000       mov dword ptr [eax + 0x74], 0
// 0084f089  8b8e44010000         mov ecx, dword ptr [esi + 0x144]
// 0084f08f  897974               mov dword ptr [ecx + 0x74], edi
// 0084f092  8b8e44010000         mov ecx, dword ptr [esi + 0x144]
// 0084f098  8b11                 mov edx, dword ptr [ecx]
// 0084f09a  8b4234               mov eax, dword ptr [edx + 0x34]
// 0084f09d  ffd0                 call eax
// 0084f09f  8bce                 mov ecx, esi
// 0084f0a1  e82affffff           call 0x84efd0
// 0084f0a6  5f                   pop edi
// 0084f0a7  5e                   pop esi
// 0084f0a8  c20400               ret 4
// copied from an identical function in another client (function ?SetCustomTheme@CXTPPropertyGrid@@QAEXPAVCXTPPropertyGridPaintManager@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGrid.cpp