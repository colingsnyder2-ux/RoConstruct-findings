// roc 2009-12 00804f90  unit: CXTPCommandBar  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00804f90
//
// 00804f90  56                   push esi
// 00804f91  8bf1                 mov esi, ecx
// 00804f93  e868f5ffff           call 0x804500
// 00804f98  85c0                 test eax, eax
// 00804f9a  752f                 jne 0x804fcb
// 00804f9c  8b442410             mov eax, dword ptr [esp + 0x10]
// 00804fa0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00804fa4  50                   push eax
// 00804fa5  51                   push ecx
// 00804fa6  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00804fac  e86f060400           call 0x845620
// 00804fb1  85c0                 test eax, eax
// 00804fb3  7416                 je 0x804fcb
// 00804fb5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00804fb9  8b10                 mov edx, dword ptr [eax]
// 00804fbb  8b92f8000000         mov edx, dword ptr [edx + 0xf8]
// 00804fc1  51                   push ecx
// 00804fc2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00804fc6  51                   push ecx
// 00804fc7  8bc8                 mov ecx, eax
// 00804fc9  ffd2                 call edx
// 00804fcb  5e                   pop esi
// 00804fcc  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnLButtonDblClk@CXTPCommandBar@@QAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp