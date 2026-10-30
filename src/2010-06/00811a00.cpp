// roc 2010-06 00811a00  unit: CXTSplitterWnd  size: 353 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00811a00
//
// 00811a00  83ec0c               sub esp, 0xc
// 00811a03  55                   push ebp
// 00811a04  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00811a08  56                   push esi
// 00811a09  8bf1                 mov esi, ecx
// 00811a0b  8b86f4000000         mov eax, dword ptr [esi + 0xf4]
// 00811a11  83f8ff               cmp eax, -1
// 00811a14  7412                 je 0x811a28
// 00811a16  3bc5                 cmp eax, ebp
// 00811a18  0f843b010000         je 0x811b59
// 00811a1e  8b06                 mov eax, dword ptr [esi]
// 00811a20  8b90b4010000         mov edx, dword ptr [eax + 0x1b4]
// 00811a26  ffd2                 call edx
// 00811a28  8b06                 mov eax, dword ptr [esi]
// 00811a2a  8b8074010000         mov eax, dword ptr [eax + 0x174]
// 00811a30  8d4c240c             lea ecx, [esp + 0xc]
// 00811a34  51                   push ecx
// 00811a35  8d542414             lea edx, [esp + 0x14]
// 00811a39  52                   push edx
// 00811a3a  8bce                 mov ecx, esi
// 00811a3c  89aef4000000         mov dword ptr [esi + 0xf4], ebp
// 00811a42  ffd0                 call eax
// 00811a44  85c0                 test eax, eax
// 00811a46  742f                 je 0x811a77
// 00811a48  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00811a4c  3bc5                 cmp eax, ebp
// 00811a4e  7527                 jne 0x811a77
// 00811a50  40                   inc eax
// 00811a51  3b8684000000         cmp eax, dword ptr [esi + 0x84]
// 00811a57  8944240c             mov dword ptr [esp + 0xc], eax
// 00811a5b  7c06                 jl 0x811a63
// 00811a5d  33c0                 xor eax, eax
// 00811a5f  8944240c             mov dword ptr [esp + 0xc], eax
// 00811a63  8b16                 mov edx, dword ptr [esi]
// 00811a65  8b9278010000         mov edx, dword ptr [edx + 0x178]
// 00811a6b  6a00                 push 0
// 00811a6d  50                   push eax
// 00811a6e  8b442418             mov eax, dword ptr [esp + 0x18]
// 00811a72  50                   push eax
// 00811a73  8bce                 mov ecx, esi
// 00811a75  ffd2                 call edx
// 00811a77  53                   push ebx
// 00811a78  33db                 xor ebx, ebx
// 00811a7a  399e80000000         cmp dword ptr [esi + 0x80], ebx
// 00811a80  57                   push edi
// 00811a81  0f8ea3000000         jle 0x811b2a
// 00811a87  895c2410             mov dword ptr [esp + 0x10], ebx
// 00811a8b  eb03                 jmp 0x811a90
// 00811a8d  8d4900               lea ecx, [ecx]
// 00811a90  55                   push ebp
// 00811a91  53                   push ebx
// 00811a92  8bce                 mov ecx, esi
// 00811a94  e82f6af9ff           call 0x7a84c8
// 00811a99  8bf8                 mov edi, eax
// 00811a9b  85ff                 test edi, edi
// 00811a9d  0f84b4000000         je 0x811b57
// 00811aa3  6a00                 push 0
// 00811aa5  8bcf                 mov ecx, edi
// 00811aa7  e8dc61f9ff           call 0x7a7c88
// 00811aac  8b86f8000000         mov eax, dword ptr [esi + 0xf8]
// 00811ab2  83f8ff               cmp eax, -1
// 00811ab5  740d                 je 0x811ac4
// 00811ab7  3bc3                 cmp eax, ebx
// 00811ab9  7f09                 jg 0x811ac4
// 00811abb  8b442410             mov eax, dword ptr [esp + 0x10]
// 00811abf  83c010               add eax, 0x10
// 00811ac2  eb04                 jmp 0x811ac8
// 00811ac4  8b442410             mov eax, dword ptr [esp + 0x10]
// 00811ac8  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 00811ace  0500e90000           add eax, 0xe900
// 00811ad3  03c8                 add ecx, eax
// 00811ad5  51                   push ecx
// 00811ad6  8bcf                 mov ecx, edi
// 00811ad8  e833ba1600           call 0x97d510
// 00811add  8d7d01               lea edi, [ebp + 1]
// 00811ae0  3bbe84000000         cmp edi, dword ptr [esi + 0x84]
// 00811ae6  7d30                 jge 0x811b18
// 00811ae8  57                   push edi
// 00811ae9  53                   push ebx
// 00811aea  8bce                 mov ecx, esi
// 00811aec  e8d769f9ff           call 0x7a84c8
// 00811af1  8be8                 mov ebp, eax
// 00811af3  85ed                 test ebp, ebp
// 00811af5  7460                 je 0x811b57
// 00811af7  8d57ff               lea edx, [edi - 1]
// 00811afa  52                   push edx
// 00811afb  53                   push ebx
// 00811afc  8bce                 mov ecx, esi
// 00811afe  e82969f9ff           call 0x7a842c
// 00811b03  50                   push eax
// 00811b04  8bcd                 mov ecx, ebp
// 00811b06  e805ba1600           call 0x97d510
// 00811b0b  47                   inc edi
// 00811b0c  3bbe84000000         cmp edi, dword ptr [esi + 0x84]
// 00811b12  7cd4                 jl 0x811ae8
// 00811b14  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00811b18  8344241010           add dword ptr [esp + 0x10], 0x10
// 00811b1d  43                   inc ebx
// 00811b1e  3b9e80000000         cmp ebx, dword ptr [esi + 0x80]
// 00811b24  0f8c66ffffff         jl 0x811a90
// 00811b2a  ff8e84000000         dec dword ptr [esi + 0x84]
// 00811b30  8b8e90000000         mov ecx, dword ptr [esi + 0x90]
// 00811b36  8b8684000000         mov eax, dword ptr [esi + 0x84]
// 00811b3c  8d546d00             lea edx, [ebp + ebp*2]
// 00811b40  8b549108             mov edx, dword ptr [ecx + edx*4 + 8]
// 00811b44  8d0440               lea eax, [eax + eax*2]
// 00811b47  89548108             mov dword ptr [ecx + eax*4 + 8], edx
// 00811b4b  8b06                 mov eax, dword ptr [esi]
// 00811b4d  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 00811b53  8bce                 mov ecx, esi
// 00811b55  ffd2                 call edx
// 00811b57  5f                   pop edi
// 00811b58  5b                   pop ebx
// 00811b59  5e                   pop esi
// 00811b5a  5d                   pop ebp
// 00811b5b  83c40c               add esp, 0xc
// 00811b5e  c20400               ret 4
// copied from an identical function in another client (function ?HideColumn@CXTSplitterWnd@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1