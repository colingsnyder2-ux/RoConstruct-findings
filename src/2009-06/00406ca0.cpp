// roc 2009-06 00406ca0  unit: VCApp::?$CComObject  size: 191 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00406ca0
//
// 00406ca0  55                   push ebp
// 00406ca1  8bec                 mov ebp, esp
// 00406ca3  6aff                 push -1
// 00406ca5  68e0cc8400           push 0x84cce0
// 00406caa  64a100000000         mov eax, dword ptr fs:[0]
// 00406cb0  50                   push eax
// 00406cb1  64892500000000       mov dword ptr fs:[0], esp
// 00406cb8  83ec08               sub esp, 8
// 00406cbb  53                   push ebx
// 00406cbc  8b5d08               mov ebx, dword ptr [ebp + 8]
// 00406cbf  56                   push esi
// 00406cc0  57                   push edi
// 00406cc1  8965f0               mov dword ptr [ebp - 0x10], esp
// 00406cc4  85db                 test ebx, ebx
// 00406cc6  7518                 jne 0x406ce0
// 00406cc8  b857000780           mov eax, 0x80070057
// 00406ccd  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00406cd0  64890d00000000       mov dword ptr fs:[0], ecx
// 00406cd7  5f                   pop edi
// 00406cd8  5e                   pop esi
// 00406cd9  5b                   pop ebx
// 00406cda  8be5                 mov esp, ebp
// 00406cdc  5d                   pop ebp
// 00406cdd  c20c00               ret 0xc
// 00406ce0  6a0c                 push 0xc
// 00406ce2  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00406ce9  e84a1d3100           call 0x718a38
// 00406cee  8bf0                 mov esi, eax
// 00406cf0  83c404               add esp, 4
// 00406cf3  85f6                 test esi, esi
// 00406cf5  7526                 jne 0x406d1d
// 00406cf7  b80e000780           mov eax, 0x8007000e
// 00406cfc  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00406cff  64890d00000000       mov dword ptr fs:[0], ecx
// 00406d06  5f                   pop edi
// 00406d07  5e                   pop esi
// 00406d08  5b                   pop ebx
// 00406d09  8be5                 mov esp, ebp
// 00406d0b  5d                   pop ebp
// 00406d0c  c20c00               ret 0xc
// 00406d0f  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 00406d12  e8fd1f3100           call 0x718d14
// 00406d17  b8f76c4000           mov eax, 0x406cf7
// 00406d1c  c3                   ret 
// 00406d1d  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00406d20  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 00406d23  8d7b0c               lea edi, [ebx + 0xc]
// 00406d26  57                   push edi
// 00406d27  8906                 mov dword ptr [esi], eax
// 00406d29  894e04               mov dword ptr [esi + 4], ecx
// 00406d2c  ff15a8e18900         call dword ptr [0x89e1a8]
// 00406d32  8b5308               mov edx, dword ptr [ebx + 8]
// 00406d35  895608               mov dword ptr [esi + 8], edx
// 00406d38  57                   push edi
// 00406d39  c7450800000000       mov dword ptr [ebp + 8], 0
// 00406d40  897308               mov dword ptr [ebx + 8], esi
// 00406d43  ff15ace18900         call dword ptr [0x89e1ac]
// 00406d49  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00406d4c  8b4508               mov eax, dword ptr [ebp + 8]
// 00406d4f  5f                   pop edi
// 00406d50  5e                   pop esi
// 00406d51  64890d00000000       mov dword ptr fs:[0], ecx
// 00406d58  5b                   pop ebx
// 00406d59  8be5                 mov esp, ebp
// 00406d5b  5d                   pop ebp
// 00406d5c  c20c00               ret 0xc
// copied from an identical function in another client (function ?AtlModuleAddTermFunc@ATL@@YGJPAU_ATL_MODULE70@1@P6GXK@ZK@Z)

// from server: 100% by EspClaude
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_13551b6034a59a28.cpp