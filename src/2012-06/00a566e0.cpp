// roc 2012-06 00a566e0  unit: CXTPPropertyGridInplaceButton  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a566e0
//
// 00a566e0  83ec10               sub esp, 0x10
// 00a566e3  57                   push edi
// 00a566e4  8bf9                 mov edi, ecx
// 00a566e6  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 00a566e9  8b01                 mov eax, dword ptr [ecx]
// 00a566eb  8b908c000000         mov edx, dword ptr [eax + 0x8c]
// 00a566f1  ffd2                 call edx
// 00a566f3  85c0                 test eax, eax
// 00a566f5  7507                 jne 0xa566fe
// 00a566f7  5f                   pop edi
// 00a566f8  83c410               add esp, 0x10
// 00a566fb  c20800               ret 8
// 00a566fe  53                   push ebx
// 00a566ff  56                   push esi
// 00a56700  33f6                 xor esi, esi
// 00a56702  397728               cmp dword ptr [edi + 0x28], esi
// 00a56705  7e4f                 jle 0xa56756
// 00a56707  8b1d483bb200         mov ebx, dword ptr [0xb23b48]
// 00a5670d  8d4900               lea ecx, [ecx]
// 00a56710  85f6                 test esi, esi
// 00a56712  7c61                 jl 0xa56775
// 00a56714  3b7728               cmp esi, dword ptr [edi + 0x28]
// 00a56717  7d5c                 jge 0xa56775
// 00a56719  8b4724               mov eax, dword ptr [edi + 0x24]
// 00a5671c  8b04b0               mov eax, dword ptr [eax + esi*4]
// 00a5671f  8b4834               mov ecx, dword ptr [eax + 0x34]
// 00a56722  894c240c             mov dword ptr [esp + 0xc], ecx
// 00a56726  8b5038               mov edx, dword ptr [eax + 0x38]
// 00a56729  89542410             mov dword ptr [esp + 0x10], edx
// 00a5672d  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 00a56730  894c2414             mov dword ptr [esp + 0x14], ecx
// 00a56734  8b5040               mov edx, dword ptr [eax + 0x40]
// 00a56737  8b442424             mov eax, dword ptr [esp + 0x24]
// 00a5673b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a5673f  50                   push eax
// 00a56740  8954241c             mov dword ptr [esp + 0x1c], edx
// 00a56744  51                   push ecx
// 00a56745  8d542414             lea edx, [esp + 0x14]
// 00a56749  52                   push edx
// 00a5674a  ffd3                 call ebx
// 00a5674c  85c0                 test eax, eax
// 00a5674e  7511                 jne 0xa56761
// 00a56750  46                   inc esi
// 00a56751  3b7728               cmp esi, dword ptr [edi + 0x28]
// 00a56754  7cba                 jl 0xa56710
// 00a56756  5e                   pop esi
// 00a56757  5b                   pop ebx
// 00a56758  33c0                 xor eax, eax
// 00a5675a  5f                   pop edi
// 00a5675b  83c410               add esp, 0x10
// 00a5675e  c20800               ret 8
// 00a56761  3b7728               cmp esi, dword ptr [edi + 0x28]
// 00a56764  7d0f                 jge 0xa56775
// 00a56766  8b4724               mov eax, dword ptr [edi + 0x24]
// 00a56769  8b04b0               mov eax, dword ptr [eax + esi*4]
// 00a5676c  5e                   pop esi
// 00a5676d  5b                   pop ebx
// 00a5676e  5f                   pop edi
// 00a5676f  83c410               add esp, 0x10
// 00a56772  c20800               ret 8
// 00a56775  e846bcf2ff           call 0x9823c0
// copied from an identical function in another client (function ?HitTest@CXTPPropertyGridInplaceButtons@@QBEPAVCXTPPropertyGridInplaceButton@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridInplaceButton.cpp