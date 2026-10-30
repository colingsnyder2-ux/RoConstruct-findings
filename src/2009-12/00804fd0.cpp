// roc 2009-12 00804fd0  unit: CXTPCommandBar  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00804fd0
//
// 00804fd0  56                   push esi
// 00804fd1  8bf1                 mov esi, ecx
// 00804fd3  e828f5ffff           call 0x804500
// 00804fd8  85c0                 test eax, eax
// 00804fda  753a                 jne 0x805016
// 00804fdc  8b442410             mov eax, dword ptr [esp + 0x10]
// 00804fe0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00804fe4  50                   push eax
// 00804fe5  51                   push ecx
// 00804fe6  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00804fec  e82f060400           call 0x845620
// 00804ff1  85c0                 test eax, eax
// 00804ff3  741a                 je 0x80500f
// 00804ff5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00804ff9  8b10                 mov edx, dword ptr [eax]
// 00804ffb  8b92ec000000         mov edx, dword ptr [edx + 0xec]
// 00805001  51                   push ecx
// 00805002  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00805006  51                   push ecx
// 00805007  8bc8                 mov ecx, eax
// 00805009  ffd2                 call edx
// 0080500b  5e                   pop esi
// 0080500c  c20c00               ret 0xc
// 0080500f  8bce                 mov ecx, esi
// 00805011  e81aeefeff           call 0x7f3e30
// 00805016  5e                   pop esi
// 00805017  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnLButtonUp@CXTPCommandBar@@QAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp