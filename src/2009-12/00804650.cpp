// roc 2009-12 00804650  unit: CXTPCommandBar  size: 213 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00804650
//
// 00804650  56                   push esi
// 00804651  8bf1                 mov esi, ecx
// 00804653  57                   push edi
// 00804654  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00804658  8b87f8000000         mov eax, dword ptr [edi + 0xf8]
// 0080465e  8986f8000000         mov dword ptr [esi + 0xf8], eax
// 00804664  8b8f00010000         mov ecx, dword ptr [edi + 0x100]
// 0080466a  898e00010000         mov dword ptr [esi + 0x100], ecx
// 00804670  8b97d8000000         mov edx, dword ptr [edi + 0xd8]
// 00804676  8996d8000000         mov dword ptr [esi + 0xd8], edx
// 0080467c  8b87ec000000         mov eax, dword ptr [edi + 0xec]
// 00804682  8986ec000000         mov dword ptr [esi + 0xec], eax
// 00804688  8b8ff0000000         mov ecx, dword ptr [edi + 0xf0]
// 0080468e  8d97f4000000         lea edx, [edi + 0xf4]
// 00804694  898ef0000000         mov dword ptr [esi + 0xf0], ecx
// 0080469a  52                   push edx
// 0080469b  8d8ef4000000         lea ecx, [esi + 0xf4]
// 008046a1  ff1538d59800         call dword ptr [0x98d538]
// 008046a7  8b8738010000         mov eax, dword ptr [edi + 0x138]
// 008046ad  898638010000         mov dword ptr [esi + 0x138], eax
// 008046b3  8b8fc8000000         mov ecx, dword ptr [edi + 0xc8]
// 008046b9  898ec8000000         mov dword ptr [esi + 0xc8], ecx
// 008046bf  8b970c010000         mov edx, dword ptr [edi + 0x10c]
// 008046c5  89960c010000         mov dword ptr [esi + 0x10c], edx
// 008046cb  8b8710010000         mov eax, dword ptr [edi + 0x110]
// 008046d1  898610010000         mov dword ptr [esi + 0x110], eax
// 008046d7  8b8f14010000         mov ecx, dword ptr [edi + 0x114]
// 008046dd  898e14010000         mov dword ptr [esi + 0x114], ecx
// 008046e3  8b9718010000         mov edx, dword ptr [edi + 0x118]
// 008046e9  899618010000         mov dword ptr [esi + 0x118], edx
// 008046ef  8b8704010000         mov eax, dword ptr [edi + 0x104]
// 008046f5  898604010000         mov dword ptr [esi + 0x104], eax
// 008046fb  8b8f70010000         mov ecx, dword ptr [edi + 0x170]
// 00804701  8b442410             mov eax, dword ptr [esp + 0x10]
// 00804705  898e70010000         mov dword ptr [esi + 0x170], ecx
// 0080470b  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00804711  8b11                 mov edx, dword ptr [ecx]
// 00804713  8b525c               mov edx, dword ptr [edx + 0x5c]
// 00804716  50                   push eax
// 00804717  8b87fc000000         mov eax, dword ptr [edi + 0xfc]
// 0080471d  50                   push eax
// 0080471e  ffd2                 call edx
// 00804720  5f                   pop edi
// 00804721  5e                   pop esi
// 00804722  c20800               ret 8
// copied from an identical function in another client (function ?Copy@CXTPCommandBar@@MAEXPAV1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp