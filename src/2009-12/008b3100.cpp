// roc 2009-12 008b3100  unit: CXTPDockingPaneTabbedContainer  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b3100
//
// 008b3100  56                   push esi
// 008b3101  8bf1                 mov esi, ecx
// 008b3103  33d2                 xor edx, edx
// 008b3105  399604010000         cmp dword ptr [esi + 0x104], edx
// 008b310b  57                   push edi
// 008b310c  7e19                 jle 0x8b3127
// 008b310e  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008b3112  52                   push edx
// 008b3113  8bce                 mov ecx, esi
// 008b3115  e8c6f2ffff           call 0x8b23e0
// 008b311a  3bc7                 cmp eax, edi
// 008b311c  7410                 je 0x8b312e
// 008b311e  42                   inc edx
// 008b311f  3b9604010000         cmp edx, dword ptr [esi + 0x104]
// 008b3125  7ceb                 jl 0x8b3112
// 008b3127  5f                   pop edi
// 008b3128  33c0                 xor eax, eax
// 008b312a  5e                   pop esi
// 008b312b  c20400               ret 4
// 008b312e  85d2                 test edx, edx
// 008b3130  7cf5                 jl 0x8b3127
// 008b3132  3b9604010000         cmp edx, dword ptr [esi + 0x104]
// 008b3138  7ded                 jge 0x8b3127
// 008b313a  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 008b3140  8b0490               mov eax, dword ptr [eax + edx*4]
// 008b3143  5f                   pop edi
// 008b3144  5e                   pop esi
// 008b3145  c20400               ret 4
// copied from an identical function in another client (function ?GetPaneTab@CXTPDockingPaneTabbedContainer@@QBEPAVCXTPTabManagerItem@@PAVCXTPDockingPane@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneTabbedContainer.cpp