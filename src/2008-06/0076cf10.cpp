// from server: 100% by auto
// roc 2008-06 0076cf10  unit: CXTPShadowsManager::CShadowWnd  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0076cf10
//
// 0076cf10  83ec30               sub esp, 0x30
// 0076cf13  53                   push ebx
// 0076cf14  8bd9                 mov ebx, ecx
// 0076cf16  53                   push ebx
// 0076cf17  8d4c2408             lea ecx, [esp + 8]
// 0076cf1b  e8b0abf8ff           call 0x6f7ad0
// 0076cf20  8d442438             lea eax, [esp + 0x38]
// 0076cf24  50                   push eax
// 0076cf25  8d4c2408             lea ecx, [esp + 8]
// 0076cf29  51                   push ecx
// 0076cf2a  8d54241c             lea edx, [esp + 0x1c]
// 0076cf2e  52                   push edx
// 0076cf2f  ff155c2b8000         call dword ptr [0x802b5c]
// 0076cf35  85c0                 test eax, eax
// 0076cf37  7476                 je 0x76cfaf
// 0076cf39  56                   push esi
// 0076cf3a  57                   push edi
// 0076cf3b  53                   push ebx
// 0076cf3c  8d4c2430             lea ecx, [esp + 0x30]
// 0076cf40  e8ebabf8ff           call 0x6f7b30
// 0076cf45  8b3d0c218000         mov edi, dword ptr [0x80210c]
// 0076cf4b  8d44242c             lea eax, [esp + 0x2c]
// 0076cf4f  50                   push eax
// 0076cf50  ffd7                 call edi
// 0076cf52  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0076cf56  8bf0                 mov esi, eax
// 0076cf58  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0076cf5c  f7d9                 neg ecx
// 0076cf5e  51                   push ecx
// 0076cf5f  f7d8                 neg eax
// 0076cf61  50                   push eax
// 0076cf62  8d4c2424             lea ecx, [esp + 0x24]
// 0076cf66  51                   push ecx
// 0076cf67  ff15682d8000         call dword ptr [0x802d68]
// 0076cf6d  8d54241c             lea edx, [esp + 0x1c]
// 0076cf71  52                   push edx
// 0076cf72  ffd7                 call edi
// 0076cf74  6a04                 push 4
// 0076cf76  8bf8                 mov edi, eax
// 0076cf78  57                   push edi
// 0076cf79  56                   push esi
// 0076cf7a  56                   push esi
// 0076cf7b  ff15f4208000         call dword ptr [0x8020f4]
// 0076cf81  57                   push edi
// 0076cf82  8b3d50218000         mov edi, dword ptr [0x802150]
// 0076cf88  ffd7                 call edi
// 0076cf8a  8b4320               mov eax, dword ptr [ebx + 0x20]
// 0076cf8d  6a00                 push 0
// 0076cf8f  56                   push esi
// 0076cf90  50                   push eax
// 0076cf91  ff15d42b8000         call dword ptr [0x802bd4]
// 0076cf97  85c0                 test eax, eax
// 0076cf99  7503                 jne 0x76cf9e
// 0076cf9b  56                   push esi
// 0076cf9c  ffd7                 call edi
// 0076cf9e  5f                   pop edi
// 0076cf9f  b801000000           mov eax, 1
// 0076cfa4  5e                   pop esi
// 0076cfa5  894360               mov dword ptr [ebx + 0x60], eax
// 0076cfa8  5b                   pop ebx
// 0076cfa9  83c430               add esp, 0x30
// 0076cfac  c21000               ret 0x10
// 0076cfaf  b801000000           mov eax, 1
// 0076cfb4  5b                   pop ebx
// 0076cfb5  83c430               add esp, 0x30
// 0076cfb8  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPShadowsManager.cpp (function ?ExcludeRect@CShadowWnd@CXTPShadowsManager@@QAEHVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShadowsManager.cpp
