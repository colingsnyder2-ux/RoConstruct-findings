// roc 2011-06 00874d00  unit: CXTPToolTipContext  size: 460 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00874d00
//
// 00874d00  6aff                 push -1
// 00874d02  68bc7ba000           push 0xa07bbc
// 00874d07  64a100000000         mov eax, dword ptr fs:[0]
// 00874d0d  50                   push eax
// 00874d0e  51                   push ecx
// 00874d0f  56                   push esi
// 00874d10  a12058c900           mov eax, dword ptr [0xc95820]
// 00874d15  33c4                 xor eax, esp
// 00874d17  50                   push eax
// 00874d18  8d44240c             lea eax, [esp + 0xc]
// 00874d1c  64a300000000         mov dword ptr fs:[0], eax
// 00874d22  8bf1                 mov esi, ecx
// 00874d24  8b4630               mov eax, dword ptr [esi + 0x30]
// 00874d27  83c0fe               add eax, -2
// 00874d2a  83f804               cmp eax, 4
// 00874d2d  0f872f010000         ja 0x874e62
// 00874d33  ff2485b84e8700       jmp dword ptr [eax*4 + 0x874eb8]
// 00874d3a  6830010000           push 0x130
// 00874d3f  e81a53f9ff           call 0x80a05e
// 00874d44  83c404               add esp, 4
// 00874d47  89442408             mov dword ptr [esp + 8], eax
// 00874d4b  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00874d53  85c0                 test eax, eax
// 00874d55  0f8445010000         je 0x874ea0
// 00874d5b  56                   push esi
// 00874d5c  8bc8                 mov ecx, eax
// 00874d5e  e8ade8ffff           call 0x873610
// 00874d63  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00874d67  64890d00000000       mov dword ptr fs:[0], ecx
// 00874d6e  59                   pop ecx
// 00874d6f  5e                   pop esi
// 00874d70  83c410               add esp, 0x10
// 00874d73  c20400               ret 4
// 00874d76  685c020000           push 0x25c
// 00874d7b  e8de52f9ff           call 0x80a05e
// 00874d80  83c404               add esp, 4
// 00874d83  89442408             mov dword ptr [esp + 8], eax
// 00874d87  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00874d8f  85c0                 test eax, eax
// 00874d91  0f8409010000         je 0x874ea0
// 00874d97  56                   push esi
// 00874d98  8bc8                 mov ecx, eax
// 00874d9a  e801fdffff           call 0x874aa0
// 00874d9f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00874da3  64890d00000000       mov dword ptr fs:[0], ecx
// 00874daa  59                   pop ecx
// 00874dab  5e                   pop esi
// 00874dac  83c410               add esp, 0x10
// 00874daf  c20400               ret 4
// 00874db2  6830010000           push 0x130
// 00874db7  e8a252f9ff           call 0x80a05e
// 00874dbc  83c404               add esp, 4
// 00874dbf  89442408             mov dword ptr [esp + 8], eax
// 00874dc3  c744241402000000     mov dword ptr [esp + 0x14], 2
// 00874dcb  85c0                 test eax, eax
// 00874dcd  0f84cd000000         je 0x874ea0
// 00874dd3  56                   push esi
// 00874dd4  8bc8                 mov ecx, eax
// 00874dd6  e8f5f9ffff           call 0x8747d0
// 00874ddb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00874ddf  64890d00000000       mov dword ptr fs:[0], ecx
// 00874de6  59                   pop ecx
// 00874de7  5e                   pop esi
// 00874de8  83c410               add esp, 0x10
// 00874deb  c20400               ret 4
// 00874dee  6830010000           push 0x130
// 00874df3  e86652f9ff           call 0x80a05e
// 00874df8  83c404               add esp, 4
// 00874dfb  89442408             mov dword ptr [esp + 8], eax
// 00874dff  c744241403000000     mov dword ptr [esp + 0x14], 3
// 00874e07  85c0                 test eax, eax
// 00874e09  0f8491000000         je 0x874ea0
// 00874e0f  56                   push esi
// 00874e10  8bc8                 mov ecx, eax
// 00874e12  e809fbffff           call 0x874920
// 00874e17  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00874e1b  64890d00000000       mov dword ptr fs:[0], ecx
// 00874e22  59                   pop ecx
// 00874e23  5e                   pop esi
// 00874e24  83c410               add esp, 0x10
// 00874e27  c20400               ret 4
// 00874e2a  6898010000           push 0x198
// 00874e2f  e82a52f9ff           call 0x80a05e
// 00874e34  83c404               add esp, 4
// 00874e37  89442408             mov dword ptr [esp + 8], eax
// 00874e3b  c744241404000000     mov dword ptr [esp + 0x14], 4
// 00874e43  85c0                 test eax, eax
// 00874e45  7459                 je 0x874ea0
// 00874e47  56                   push esi
// 00874e48  8bc8                 mov ecx, eax
// 00874e4a  e811fdffff           call 0x874b60
// 00874e4f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00874e53  64890d00000000       mov dword ptr fs:[0], ecx
// 00874e5a  59                   pop ecx
// 00874e5b  5e                   pop esi
// 00874e5c  83c410               add esp, 0x10
// 00874e5f  c20400               ret 4
// 00874e62  6a70                 push 0x70
// 00874e64  e8f551f9ff           call 0x80a05e
// 00874e69  8bf0                 mov esi, eax
// 00874e6b  83c404               add esp, 4
// 00874e6e  89742408             mov dword ptr [esp + 8], esi
// 00874e72  c744241405000000     mov dword ptr [esp + 0x14], 5
// 00874e7a  85f6                 test esi, esi
// 00874e7c  7422                 je 0x874ea0
// 00874e7e  8bce                 mov ecx, esi
// 00874e80  e8ed7d1500           call 0x9ccc72
// 00874e85  c706f4c8ac00         mov dword ptr [esi], 0xacc8f4
// 00874e8b  8bc6                 mov eax, esi
// 00874e8d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00874e91  64890d00000000       mov dword ptr fs:[0], ecx
// 00874e98  59                   pop ecx
// 00874e99  5e                   pop esi
// 00874e9a  83c410               add esp, 0x10
// 00874e9d  c20400               ret 4
// 00874ea0  33c0                 xor eax, eax
// 00874ea2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00874ea6  64890d00000000       mov dword ptr fs:[0], ecx
// 00874ead  59                   pop ecx
// 00874eae  5e                   pop esi
// 00874eaf  83c410               add esp, 0x10
// 00874eb2  c20400               ret 4
// 00874eb5  8d4900               lea ecx, [ecx]
// 00874eb8  3a4d87               cmp cl, byte ptr [ebp - 0x79]
// 00874ebb  00764d               add byte ptr [esi + 0x4d], dh
// 00874ebe  8700                 xchg dword ptr [eax], eax
// 00874ec0  b24d                 mov dl, 0x4d
// 00874ec2  8700                 xchg dword ptr [eax], eax
// 00874ec4  ee                   out dx, al
// 00874ec5  4d                   dec ebp
// 00874ec6  8700                 xchg dword ptr [eax], eax
// 00874ec8  2a4e87               sub cl, byte ptr [esi - 0x79]
// copied from an identical function in another client (function ?CreateToolTip@CXTPToolTipContext@@MAEPAVCWnd@@PAV2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPToolTipContext.cpp