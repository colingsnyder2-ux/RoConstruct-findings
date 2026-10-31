// roc 2009-12 00406990  unit: VCApp::?$CComObject  size: 191 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00406990
//
// 00406990  55                   push ebp
// 00406991  8bec                 mov ebp, esp
// 00406993  6aff                 push -1
// 00406995  6830729200           push 0x927230
// 0040699a  64a100000000         mov eax, dword ptr fs:[0]
// 004069a0  50                   push eax
// 004069a1  64892500000000       mov dword ptr fs:[0], esp
// 004069a8  83ec08               sub esp, 8
// 004069ab  53                   push ebx
// 004069ac  8b5d08               mov ebx, dword ptr [ebp + 8]
// 004069af  56                   push esi
// 004069b0  57                   push edi
// 004069b1  8965f0               mov dword ptr [ebp - 0x10], esp
// 004069b4  85db                 test ebx, ebx
// 004069b6  7518                 jne 0x4069d0
// 004069b8  b857000780           mov eax, 0x80070057
// 004069bd  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004069c0  64890d00000000       mov dword ptr fs:[0], ecx
// 004069c7  5f                   pop edi
// 004069c8  5e                   pop esi
// 004069c9  5b                   pop ebx
// 004069ca  8be5                 mov esp, ebp
// 004069cc  5d                   pop ebp
// 004069cd  c20c00               ret 0xc
// 004069d0  6a0c                 push 0xc
// 004069d2  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004069d9  e882ce3e00           call 0x7f3860
// 004069de  8bf0                 mov esi, eax
// 004069e0  83c404               add esp, 4
// 004069e3  85f6                 test esi, esi
// 004069e5  7526                 jne 0x406a0d
// 004069e7  b80e000780           mov eax, 0x8007000e
// 004069ec  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004069ef  64890d00000000       mov dword ptr fs:[0], ecx
// 004069f6  5f                   pop edi
// 004069f7  5e                   pop esi
// 004069f8  5b                   pop ebx
// 004069f9  8be5                 mov esp, ebp
// 004069fb  5d                   pop ebp
// 004069fc  c20c00               ret 0xc
// 004069ff  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 00406a02  e835d13e00           call 0x7f3b3c
// 00406a07  b8e7694000           mov eax, 0x4069e7
// 00406a0c  c3                   ret 
// 00406a0d  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00406a10  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 00406a13  8d7b0c               lea edi, [ebx + 0xc]
// 00406a16  57                   push edi
// 00406a17  8906                 mov dword ptr [esi], eax
// 00406a19  894e04               mov dword ptr [esi + 4], ecx
// 00406a1c  ff1504b29800         call dword ptr [0x98b204]
// 00406a22  8b5308               mov edx, dword ptr [ebx + 8]
// 00406a25  895608               mov dword ptr [esi + 8], edx
// 00406a28  57                   push edi
// 00406a29  c7450800000000       mov dword ptr [ebp + 8], 0
// 00406a30  897308               mov dword ptr [ebx + 8], esi
// 00406a33  ff1500b29800         call dword ptr [0x98b200]
// 00406a39  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00406a3c  8b4508               mov eax, dword ptr [ebp + 8]
// 00406a3f  5f                   pop edi
// 00406a40  5e                   pop esi
// 00406a41  64890d00000000       mov dword ptr fs:[0], ecx
// 00406a48  5b                   pop ebx
// 00406a49  8be5                 mov esp, ebp
// 00406a4b  5d                   pop ebp
// 00406a4c  c20c00               ret 0xc
// copied from an identical function in another client (function ?AtlModuleAddTermFunc@ATL@@YGJPAU_ATL_MODULE70@1@P6GXK@ZK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_13551b6034a59a28.cpp