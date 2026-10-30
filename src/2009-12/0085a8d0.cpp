// roc 2009-12 0085a8d0  unit: CXTPStatusBar  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085a8d0
//
// 0085a8d0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0085a8d4  8b542404             mov edx, dword ptr [esp + 4]
// 0085a8d8  56                   push esi
// 0085a8d9  8bf1                 mov esi, ecx
// 0085a8db  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0085a8df  50                   push eax
// 0085a8e0  51                   push ecx
// 0085a8e1  52                   push edx
// 0085a8e2  8bce                 mov ecx, esi
// 0085a8e4  e819c20c00           call 0x926b02
// 0085a8e9  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 0085a8ef  5e                   pop esi
// 0085a8f0  85c9                 test ecx, ecx
// 0085a8f2  7411                 je 0x85a905
// 0085a8f4  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0085a8f8  8b01                 mov eax, dword ptr [ecx]
// 0085a8fa  8b4064               mov eax, dword ptr [eax + 0x64]
// 0085a8fd  52                   push edx
// 0085a8fe  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0085a902  52                   push edx
// 0085a903  ffd0                 call eax
// 0085a905  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnLButtonDown@CXTPStatusBar@@IAEXIVCPoint@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/CommandBars/XTPStatusBar.cpp