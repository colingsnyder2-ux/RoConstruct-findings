// roc 2009-12 0085da10  unit: CXTSplitterWnd  size: 353 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085da10
//
// 0085da10  83ec0c               sub esp, 0xc
// 0085da13  55                   push ebp
// 0085da14  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0085da18  56                   push esi
// 0085da19  8bf1                 mov esi, ecx
// 0085da1b  8b86f4000000         mov eax, dword ptr [esi + 0xf4]
// 0085da21  83f8ff               cmp eax, -1
// 0085da24  7412                 je 0x85da38
// 0085da26  3bc5                 cmp eax, ebp
// 0085da28  0f843b010000         je 0x85db69
// 0085da2e  8b06                 mov eax, dword ptr [esi]
// 0085da30  8b90b4010000         mov edx, dword ptr [eax + 0x1b4]
// 0085da36  ffd2                 call edx
// 0085da38  8b06                 mov eax, dword ptr [esi]
// 0085da3a  8b8074010000         mov eax, dword ptr [eax + 0x174]
// 0085da40  8d4c240c             lea ecx, [esp + 0xc]
// 0085da44  51                   push ecx
// 0085da45  8d542414             lea edx, [esp + 0x14]
// 0085da49  52                   push edx
// 0085da4a  8bce                 mov ecx, esi
// 0085da4c  89aef4000000         mov dword ptr [esi + 0xf4], ebp
// 0085da52  ffd0                 call eax
// 0085da54  85c0                 test eax, eax
// 0085da56  742f                 je 0x85da87
// 0085da58  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0085da5c  3bc5                 cmp eax, ebp
// 0085da5e  7527                 jne 0x85da87
// 0085da60  40                   inc eax
// 0085da61  3b8684000000         cmp eax, dword ptr [esi + 0x84]
// 0085da67  8944240c             mov dword ptr [esp + 0xc], eax
// 0085da6b  7c06                 jl 0x85da73
// 0085da6d  33c0                 xor eax, eax
// 0085da6f  8944240c             mov dword ptr [esp + 0xc], eax
// 0085da73  8b16                 mov edx, dword ptr [esi]
// 0085da75  8b9278010000         mov edx, dword ptr [edx + 0x178]
// 0085da7b  6a00                 push 0
// 0085da7d  50                   push eax
// 0085da7e  8b442418             mov eax, dword ptr [esp + 0x18]
// 0085da82  50                   push eax
// 0085da83  8bce                 mov ecx, esi
// 0085da85  ffd2                 call edx
// 0085da87  53                   push ebx
// 0085da88  33db                 xor ebx, ebx
// 0085da8a  399e80000000         cmp dword ptr [esi + 0x80], ebx
// 0085da90  57                   push edi
// 0085da91  0f8ea3000000         jle 0x85db3a
// 0085da97  895c2410             mov dword ptr [esp + 0x10], ebx
// 0085da9b  eb03                 jmp 0x85daa0
// 0085da9d  8d4900               lea ecx, [ecx]
// 0085daa0  55                   push ebp
// 0085daa1  53                   push ebx
// 0085daa2  8bce                 mov ecx, esi
// 0085daa4  e8df68f9ff           call 0x7f4388
// 0085daa9  8bf8                 mov edi, eax
// 0085daab  85ff                 test edi, edi
// 0085daad  0f84b4000000         je 0x85db67
// 0085dab3  6a00                 push 0
// 0085dab5  8bcf                 mov ecx, edi
// 0085dab7  e88c60f9ff           call 0x7f3b48
// 0085dabc  8b86f8000000         mov eax, dword ptr [esi + 0xf8]
// 0085dac2  83f8ff               cmp eax, -1
// 0085dac5  740d                 je 0x85dad4
// 0085dac7  3bc3                 cmp eax, ebx
// 0085dac9  7f09                 jg 0x85dad4
// 0085dacb  8b442410             mov eax, dword ptr [esp + 0x10]
// 0085dacf  83c010               add eax, 0x10
// 0085dad2  eb04                 jmp 0x85dad8
// 0085dad4  8b442410             mov eax, dword ptr [esp + 0x10]
// 0085dad8  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 0085dade  0500e90000           add eax, 0xe900
// 0085dae3  03c8                 add ecx, eax
// 0085dae5  51                   push ecx
// 0085dae6  8bcf                 mov ecx, edi
// 0085dae8  e8e1900c00           call 0x926bce
// 0085daed  8d7d01               lea edi, [ebp + 1]
// 0085daf0  3bbe84000000         cmp edi, dword ptr [esi + 0x84]
// 0085daf6  7d30                 jge 0x85db28
// 0085daf8  57                   push edi
// 0085daf9  53                   push ebx
// 0085dafa  8bce                 mov ecx, esi
// 0085dafc  e88768f9ff           call 0x7f4388
// 0085db01  8be8                 mov ebp, eax
// 0085db03  85ed                 test ebp, ebp
// 0085db05  7460                 je 0x85db67
// 0085db07  8d57ff               lea edx, [edi - 1]
// 0085db0a  52                   push edx
// 0085db0b  53                   push ebx
// 0085db0c  8bce                 mov ecx, esi
// 0085db0e  e8d967f9ff           call 0x7f42ec
// 0085db13  50                   push eax
// 0085db14  8bcd                 mov ecx, ebp
// 0085db16  e8b3900c00           call 0x926bce
// 0085db1b  47                   inc edi
// 0085db1c  3bbe84000000         cmp edi, dword ptr [esi + 0x84]
// 0085db22  7cd4                 jl 0x85daf8
// 0085db24  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0085db28  8344241010           add dword ptr [esp + 0x10], 0x10
// 0085db2d  43                   inc ebx
// 0085db2e  3b9e80000000         cmp ebx, dword ptr [esi + 0x80]
// 0085db34  0f8c66ffffff         jl 0x85daa0
// 0085db3a  ff8e84000000         dec dword ptr [esi + 0x84]
// 0085db40  8b8e90000000         mov ecx, dword ptr [esi + 0x90]
// 0085db46  8b8684000000         mov eax, dword ptr [esi + 0x84]
// 0085db4c  8d546d00             lea edx, [ebp + ebp*2]
// 0085db50  8b549108             mov edx, dword ptr [ecx + edx*4 + 8]
// 0085db54  8d0440               lea eax, [eax + eax*2]
// 0085db57  89548108             mov dword ptr [ecx + eax*4 + 8], edx
// 0085db5b  8b06                 mov eax, dword ptr [esi]
// 0085db5d  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 0085db63  8bce                 mov ecx, esi
// 0085db65  ffd2                 call edx
// 0085db67  5f                   pop edi
// 0085db68  5b                   pop ebx
// 0085db69  5e                   pop esi
// 0085db6a  5d                   pop ebp
// 0085db6b  83c40c               add esp, 0xc
// 0085db6e  c20400               ret 4
// copied from an identical function in another client (function ?HideColumn@CXTSplitterWnd@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1