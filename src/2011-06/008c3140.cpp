// roc 2011-06 008c3140  unit: CXTPDockingPaneTabbedContainer  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c3140
//
// 008c3140  53                   push ebx
// 008c3141  55                   push ebp
// 008c3142  56                   push esi
// 008c3143  57                   push edi
// 008c3144  8bd9                 mov ebx, ecx
// 008c3146  e8e5f1ffff           call 0x8c2330
// 008c314b  85c0                 test eax, eax
// 008c314d  743f                 je 0x8c318e
// 008c314f  8b8380000000         mov eax, dword ptr [ebx + 0x80]
// 008c3155  33f6                 xor esi, esi
// 008c3157  397008               cmp dword ptr [eax + 8], esi
// 008c315a  7e32                 jle 0x8c318e
// 008c315c  8b2d101ca400         mov ebp, dword ptr [0xa41c10]
// 008c3162  85f6                 test esi, esi
// 008c3164  7c45                 jl 0x8c31ab
// 008c3166  3b7008               cmp esi, dword ptr [eax + 8]
// 008c3169  7d40                 jge 0x8c31ab
// 008c316b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008c316f  8b4004               mov eax, dword ptr [eax + 4]
// 008c3172  8b542414             mov edx, dword ptr [esp + 0x14]
// 008c3176  8b3cb0               mov edi, dword ptr [eax + esi*4]
// 008c3179  51                   push ecx
// 008c317a  52                   push edx
// 008c317b  57                   push edi
// 008c317c  ffd5                 call ebp
// 008c317e  85c0                 test eax, eax
// 008c3180  7515                 jne 0x8c3197
// 008c3182  8b8380000000         mov eax, dword ptr [ebx + 0x80]
// 008c3188  46                   inc esi
// 008c3189  3b7008               cmp esi, dword ptr [eax + 8]
// 008c318c  7cd4                 jl 0x8c3162
// 008c318e  5f                   pop edi
// 008c318f  5e                   pop esi
// 008c3190  5d                   pop ebp
// 008c3191  33c0                 xor eax, eax
// 008c3193  5b                   pop ebx
// 008c3194  c20800               ret 8
// 008c3197  8bcf                 mov ecx, edi
// 008c3199  e8b28d0000           call 0x8cbf50
// 008c319e  f7d8                 neg eax
// 008c31a0  1bc0                 sbb eax, eax
// 008c31a2  23c7                 and eax, edi
// 008c31a4  5f                   pop edi
// 008c31a5  5e                   pop esi
// 008c31a6  5d                   pop ebp
// 008c31a7  5b                   pop ebx
// 008c31a8  c20800               ret 8
// 008c31ab  e85a71f4ff           call 0x80a30a
// copied from an identical function in another client (function ?HitTestCaptionButton@CXTPDockingPaneTabbedContainer@@IBEPAVCXTPDockingPaneCaptionButton@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneTabbedContainer.cpp