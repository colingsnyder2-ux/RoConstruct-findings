// roc 2009-12 00815580  unit: CXTPCommandBars  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00815580
//
// 00815580  57                   push edi
// 00815581  8bf9                 mov edi, ecx
// 00815583  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00815587  85c9                 test ecx, ecx
// 00815589  7510                 jne 0x81559b
// 0081558b  8b0d3caeb900         mov ecx, dword ptr [0xb9ae3c]
// 00815591  85c9                 test ecx, ecx
// 00815593  7506                 jne 0x81559b
// 00815595  33c0                 xor eax, eax
// 00815597  5f                   pop edi
// 00815598  c20c00               ret 0xc
// 0081559b  56                   push esi
// 0081559c  e8c1ecfdff           call 0x7f4262
// 008155a1  8bf0                 mov esi, eax
// 008155a3  85f6                 test esi, esi
// 008155a5  7437                 je 0x8155de
// 008155a7  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008155ab  50                   push eax
// 008155ac  8d8ef4000000         lea ecx, [esi + 0xf4]
// 008155b2  89be04010000         mov dword ptr [esi + 0x104], edi
// 008155b8  ff155cde9800         call dword ptr [0x98de5c]
// 008155be  8b16                 mov edx, dword ptr [esi]
// 008155c0  8b442410             mov eax, dword ptr [esp + 0x10]
// 008155c4  8b926c010000         mov edx, dword ptr [edx + 0x16c]
// 008155ca  50                   push eax
// 008155cb  8bce                 mov ecx, esi
// 008155cd  ffd2                 call edx
// 008155cf  85c0                 test eax, eax
// 008155d1  7512                 jne 0x8155e5
// 008155d3  8b06                 mov eax, dword ptr [esi]
// 008155d5  8b5004               mov edx, dword ptr [eax + 4]
// 008155d8  6a01                 push 1
// 008155da  8bce                 mov ecx, esi
// 008155dc  ffd2                 call edx
// 008155de  5e                   pop esi
// 008155df  33c0                 xor eax, eax
// 008155e1  5f                   pop edi
// 008155e2  c20c00               ret 0xc
// 008155e5  8b8784000000         mov eax, dword ptr [edi + 0x84]
// 008155eb  8d4f7c               lea ecx, [edi + 0x7c]
// 008155ee  56                   push esi
// 008155ef  50                   push eax
// 008155f0  e87b560500           call 0x86ac70
// 008155f5  8bc6                 mov eax, esi
// 008155f7  5e                   pop esi
// 008155f8  5f                   pop edi
// 008155f9  c20c00               ret 0xc
// copied from an identical function in another client (function ?Add@CXTPCommandBars@@QAEPAVCXTPToolBar@@PBDW4XTPBarPosition@@PAUCRuntimeClass@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBars.cpp