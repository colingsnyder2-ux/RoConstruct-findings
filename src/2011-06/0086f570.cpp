// roc 2011-06 0086f570  unit: CXTSplitterWnd  size: 340 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086f570
//
// 0086f570  83ec08               sub esp, 8
// 0086f573  55                   push ebp
// 0086f574  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0086f578  56                   push esi
// 0086f579  8bf1                 mov esi, ecx
// 0086f57b  8b86f8000000         mov eax, dword ptr [esi + 0xf8]
// 0086f581  83f8ff               cmp eax, -1
// 0086f584  7412                 je 0x86f598
// 0086f586  3bc5                 cmp eax, ebp
// 0086f588  0f842e010000         je 0x86f6bc
// 0086f58e  8b06                 mov eax, dword ptr [esi]
// 0086f590  8b90bc010000         mov edx, dword ptr [eax + 0x1bc]
// 0086f596  ffd2                 call edx
// 0086f598  8b06                 mov eax, dword ptr [esi]
// 0086f59a  8b8074010000         mov eax, dword ptr [eax + 0x174]
// 0086f5a0  8d4c240c             lea ecx, [esp + 0xc]
// 0086f5a4  51                   push ecx
// 0086f5a5  8d54240c             lea edx, [esp + 0xc]
// 0086f5a9  52                   push edx
// 0086f5aa  8bce                 mov ecx, esi
// 0086f5ac  89aef8000000         mov dword ptr [esi + 0xf8], ebp
// 0086f5b2  ffd0                 call eax
// 0086f5b4  85c0                 test eax, eax
// 0086f5b6  742f                 je 0x86f5e7
// 0086f5b8  8b442408             mov eax, dword ptr [esp + 8]
// 0086f5bc  3bc5                 cmp eax, ebp
// 0086f5be  7527                 jne 0x86f5e7
// 0086f5c0  40                   inc eax
// 0086f5c1  3b8680000000         cmp eax, dword ptr [esi + 0x80]
// 0086f5c7  89442408             mov dword ptr [esp + 8], eax
// 0086f5cb  7c06                 jl 0x86f5d3
// 0086f5cd  33c0                 xor eax, eax
// 0086f5cf  89442408             mov dword ptr [esp + 8], eax
// 0086f5d3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0086f5d7  8b16                 mov edx, dword ptr [esi]
// 0086f5d9  8b9278010000         mov edx, dword ptr [edx + 0x178]
// 0086f5df  6a00                 push 0
// 0086f5e1  51                   push ecx
// 0086f5e2  50                   push eax
// 0086f5e3  8bce                 mov ecx, esi
// 0086f5e5  ffd2                 call edx
// 0086f5e7  53                   push ebx
// 0086f5e8  33db                 xor ebx, ebx
// 0086f5ea  399e84000000         cmp dword ptr [esi + 0x84], ebx
// 0086f5f0  57                   push edi
// 0086f5f1  0f8e96000000         jle 0x86f68d
// 0086f5f7  53                   push ebx
// 0086f5f8  55                   push ebp
// 0086f5f9  8bce                 mov ecx, esi
// 0086f5fb  e88cb5f9ff           call 0x80ab8c
// 0086f600  8bf8                 mov edi, eax
// 0086f602  85ff                 test edi, edi
// 0086f604  0f84b0000000         je 0x86f6ba
// 0086f60a  6a00                 push 0
// 0086f60c  8bcf                 mov ecx, edi
// 0086f60e  e833adf9ff           call 0x80a346
// 0086f613  8b86f4000000         mov eax, dword ptr [esi + 0xf4]
// 0086f619  83f8ff               cmp eax, -1
// 0086f61c  7407                 je 0x86f625
// 0086f61e  3bc3                 cmp eax, ebx
// 0086f620  8d4301               lea eax, [ebx + 1]
// 0086f623  7e02                 jle 0x86f627
// 0086f625  8bc3                 mov eax, ebx
// 0086f627  8b8e80000000         mov ecx, dword ptr [esi + 0x80]
// 0086f62d  81c1900e0000         add ecx, 0xe90
// 0086f633  c1e104               shl ecx, 4
// 0086f636  03c8                 add ecx, eax
// 0086f638  51                   push ecx
// 0086f639  8bcf                 mov ecx, edi
// 0086f63b  e878d51500           call 0x9ccbb8
// 0086f640  8d7d01               lea edi, [ebp + 1]
// 0086f643  3bbe80000000         cmp edi, dword ptr [esi + 0x80]
// 0086f649  7d35                 jge 0x86f680
// 0086f64b  eb03                 jmp 0x86f650
// 0086f64d  8d4900               lea ecx, [ecx]
// 0086f650  53                   push ebx
// 0086f651  57                   push edi
// 0086f652  8bce                 mov ecx, esi
// 0086f654  e833b5f9ff           call 0x80ab8c
// 0086f659  8be8                 mov ebp, eax
// 0086f65b  85ed                 test ebp, ebp
// 0086f65d  745b                 je 0x86f6ba
// 0086f65f  53                   push ebx
// 0086f660  8d57ff               lea edx, [edi - 1]
// 0086f663  52                   push edx
// 0086f664  8bce                 mov ecx, esi
// 0086f666  e885b4f9ff           call 0x80aaf0
// 0086f66b  50                   push eax
// 0086f66c  8bcd                 mov ecx, ebp
// 0086f66e  e845d51500           call 0x9ccbb8
// 0086f673  47                   inc edi
// 0086f674  3bbe80000000         cmp edi, dword ptr [esi + 0x80]
// 0086f67a  7cd4                 jl 0x86f650
// 0086f67c  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0086f680  43                   inc ebx
// 0086f681  3b9e84000000         cmp ebx, dword ptr [esi + 0x84]
// 0086f687  0f8c6affffff         jl 0x86f5f7
// 0086f68d  ff8e80000000         dec dword ptr [esi + 0x80]
// 0086f693  8b8e94000000         mov ecx, dword ptr [esi + 0x94]
// 0086f699  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 0086f69f  8d546d00             lea edx, [ebp + ebp*2]
// 0086f6a3  8b549108             mov edx, dword ptr [ecx + edx*4 + 8]
// 0086f6a7  8d0440               lea eax, [eax + eax*2]
// 0086f6aa  89548108             mov dword ptr [ecx + eax*4 + 8], edx
// 0086f6ae  8b06                 mov eax, dword ptr [esi]
// 0086f6b0  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 0086f6b6  8bce                 mov ecx, esi
// 0086f6b8  ffd2                 call edx
// 0086f6ba  5f                   pop edi
// 0086f6bb  5b                   pop ebx
// 0086f6bc  5e                   pop esi
// 0086f6bd  5d                   pop ebp
// 0086f6be  83c408               add esp, 8
// 0086f6c1  c20400               ret 4
// copied from an identical function in another client (function ?HideRow@CXTSplitterWnd@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1