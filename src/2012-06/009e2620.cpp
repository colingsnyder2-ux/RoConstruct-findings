// roc 2012-06 009e2620  unit: CXTPPropertyGrid  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e2620
//
// 009e2620  56                   push esi
// 009e2621  8bf1                 mov esi, ecx
// 009e2623  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 009e2626  8d44240c             lea eax, [esp + 0xc]
// 009e262a  50                   push eax
// 009e262b  51                   push ecx
// 009e262c  ff15dc3ab200         call dword ptr [0xb23adc]
// 009e2632  8b8638010000         mov eax, dword ptr [esi + 0x138]
// 009e2638  8b4c2408             mov ecx, dword ptr [esp + 8]
// 009e263c  83c020               add eax, 0x20
// 009e263f  85c9                 test ecx, ecx
// 009e2641  7c2c                 jl 0x9e266f
// 009e2643  3b4808               cmp ecx, dword ptr [eax + 8]
// 009e2646  7d27                 jge 0x9e266f
// 009e2648  8b5004               mov edx, dword ptr [eax + 4]
// 009e264b  8b048a               mov eax, dword ptr [edx + ecx*4]
// 009e264e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 009e2652  89483c               mov dword ptr [eax + 0x3c], ecx
// 009e2655  8b542410             mov edx, dword ptr [esp + 0x10]
// 009e2659  895040               mov dword ptr [eax + 0x40], edx
// 009e265c  8b16                 mov edx, dword ptr [esi]
// 009e265e  50                   push eax
// 009e265f  8b8254010000         mov eax, dword ptr [edx + 0x154]
// 009e2665  6a0a                 push 0xa
// 009e2667  8bce                 mov ecx, esi
// 009e2669  ffd0                 call eax
// 009e266b  5e                   pop esi
// 009e266c  c20c00               ret 0xc
// 009e266f  e84cfdf9ff           call 0x9823c0
// copied from an identical function in another client (function ?OnVerbClick@CXTPPropertyGrid@@UAEXHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGrid.cpp