// roc 2010-06 0089e8e0  unit: CXTPRibbonGroup  size: 211 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089e8e0
//
// 0089e8e0  83ec1c               sub esp, 0x1c
// 0089e8e3  53                   push ebx
// 0089e8e4  55                   push ebp
// 0089e8e5  56                   push esi
// 0089e8e6  8be9                 mov ebp, ecx
// 0089e8e8  8b4d5c               mov ecx, dword ptr [ebp + 0x5c]
// 0089e8eb  57                   push edi
// 0089e8ec  e80fa5faff           call 0x848e00
// 0089e8f1  8b9860060000         mov ebx, dword ptr [eax + 0x660]
// 0089e8f7  8b7d34               mov edi, dword ptr [ebp + 0x34]
// 0089e8fa  8b454c               mov eax, dword ptr [ebp + 0x4c]
// 0089e8fd  035d38               add ebx, dword ptr [ebp + 0x38]
// 0089e900  33c9                 xor ecx, ecx
// 0089e902  83c704               add edi, 4
// 0089e905  894c2410             mov dword ptr [esp + 0x10], ecx
// 0089e909  85c0                 test eax, eax
// 0089e90b  7f0e                 jg 0x89e91b
// 0089e90d  5f                   pop edi
// 0089e90e  5e                   pop esi
// 0089e90f  5d                   pop ebp
// 0089e910  5b                   pop ebx
// 0089e911  83c41c               add esp, 0x1c
// 0089e914  c20400               ret 4
// 0089e917  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0089e91b  85c9                 test ecx, ecx
// 0089e91d  7c15                 jl 0x89e934
// 0089e91f  3bc8                 cmp ecx, eax
// 0089e921  7d11                 jge 0x89e934
// 0089e923  3b4d4c               cmp ecx, dword ptr [ebp + 0x4c]
// 0089e926  0f8d82000000         jge 0x89e9ae
// 0089e92c  8b4548               mov eax, dword ptr [ebp + 0x48]
// 0089e92f  8b3488               mov esi, dword ptr [eax + ecx*4]
// 0089e932  eb02                 jmp 0x89e936
// 0089e934  33f6                 xor esi, esi
// 0089e936  8b16                 mov edx, dword ptr [esi]
// 0089e938  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 0089e93e  6a00                 push 0
// 0089e940  8bce                 mov ecx, esi
// 0089e942  ffd0                 call eax
// 0089e944  85c0                 test eax, eax
// 0089e946  7448                 je 0x89e990
// 0089e948  8b442430             mov eax, dword ptr [esp + 0x30]
// 0089e94c  8b16                 mov edx, dword ptr [esi]
// 0089e94e  8b929c000000         mov edx, dword ptr [edx + 0x9c]
// 0089e954  50                   push eax
// 0089e955  8d4c2418             lea ecx, [esp + 0x18]
// 0089e959  51                   push ecx
// 0089e95a  8bce                 mov ecx, esi
// 0089e95c  ffd2                 call edx
// 0089e95e  8b442414             mov eax, dword ptr [esp + 0x14]
// 0089e962  8b542418             mov edx, dword ptr [esp + 0x18]
// 0089e966  8d0c38               lea ecx, [eax + edi]
// 0089e969  83ec10               sub esp, 0x10
// 0089e96c  8bc4                 mov eax, esp
// 0089e96e  03d3                 add edx, ebx
// 0089e970  8938                 mov dword ptr [eax], edi
// 0089e972  89542438             mov dword ptr [esp + 0x38], edx
// 0089e976  8b16                 mov edx, dword ptr [esi]
// 0089e978  8b527c               mov edx, dword ptr [edx + 0x7c]
// 0089e97b  895804               mov dword ptr [eax + 4], ebx
// 0089e97e  894808               mov dword ptr [eax + 8], ecx
// 0089e981  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0089e985  89480c               mov dword ptr [eax + 0xc], ecx
// 0089e988  8bce                 mov ecx, esi
// 0089e98a  ffd2                 call edx
// 0089e98c  037c2414             add edi, dword ptr [esp + 0x14]
// 0089e990  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0089e994  8b454c               mov eax, dword ptr [ebp + 0x4c]
// 0089e997  41                   inc ecx
// 0089e998  3bc8                 cmp ecx, eax
// 0089e99a  894c2410             mov dword ptr [esp + 0x10], ecx
// 0089e99e  0f8c73ffffff         jl 0x89e917
// 0089e9a4  5f                   pop edi
// 0089e9a5  5e                   pop esi
// 0089e9a6  5d                   pop ebp
// 0089e9a7  5b                   pop ebx
// 0089e9a8  83c41c               add esp, 0x1c
// 0089e9ab  c20400               ret 4
// 0089e9ae  e89992f0ff           call 0x7a7c4c
// copied from an identical function in another client (function ?RepositionControls@CXTPRibbonGroup@@MAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonGroup.cpp