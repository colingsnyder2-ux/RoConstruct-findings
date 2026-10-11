// from server: 100% by auto
// roc 2007-08 004c08f0  unit: RakPeer  size: 205 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c08f0
//
// 004c08f0  81ec80000000         sub esp, 0x80
// 004c08f6  53                   push ebx
// 004c08f7  8b9c248c000000       mov ebx, dword ptr [esp + 0x8c]
// 004c08fe  55                   push ebp
// 004c08ff  8bac248c000000       mov ebp, dword ptr [esp + 0x8c]
// 004c0906  56                   push esi
// 004c0907  57                   push edi
// 004c0908  53                   push ebx
// 004c0909  55                   push ebp
// 004c090a  e8b1d4ffff           call 0x4bddc0
// 004c090f  33c0                 xor eax, eax
// 004c0911  b908000000           mov ecx, 8
// 004c0916  8bf3                 mov esi, ebx
// 004c0918  8d7c2438             lea edi, [esp + 0x38]
// 004c091c  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004c091e  89442418             mov dword ptr [esp + 0x18], eax
// 004c0922  8944241c             mov dword ptr [esp + 0x1c], eax
// 004c0926  89442420             mov dword ptr [esp + 0x20], eax
// 004c092a  89442424             mov dword ptr [esp + 0x24], eax
// 004c092e  89442428             mov dword ptr [esp + 0x28], eax
// 004c0932  8944242c             mov dword ptr [esp + 0x2c], eax
// 004c0936  89442430             mov dword ptr [esp + 0x30], eax
// 004c093a  89442434             mov dword ptr [esp + 0x34], eax
// 004c093e  8d442418             lea eax, [esp + 0x18]
// 004c0942  50                   push eax
// 004c0943  e8e88effff           call 0x4b9830
// 004c0948  33c0                 xor eax, eax
// 004c094a  b908000000           mov ecx, 8
// 004c094f  8bf5                 mov esi, ebp
// 004c0951  8d7c245c             lea edi, [esp + 0x5c]
// 004c0955  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004c0957  8d4c241c             lea ecx, [esp + 0x1c]
// 004c095b  51                   push ecx
// 004c095c  8d542460             lea edx, [esp + 0x60]
// 004c0960  89842480000000       mov dword ptr [esp + 0x80], eax
// 004c0967  89842484000000       mov dword ptr [esp + 0x84], eax
// 004c096e  89842488000000       mov dword ptr [esp + 0x88], eax
// 004c0975  8984248c000000       mov dword ptr [esp + 0x8c], eax
// 004c097c  89842490000000       mov dword ptr [esp + 0x90], eax
// 004c0983  89842494000000       mov dword ptr [esp + 0x94], eax
// 004c098a  89842498000000       mov dword ptr [esp + 0x98], eax
// 004c0991  8984249c000000       mov dword ptr [esp + 0x9c], eax
// 004c0998  52                   push edx
// 004c0999  8bc2                 mov eax, edx
// 004c099b  50                   push eax
// 004c099c  51                   push ecx
// 004c099d  e84ea5ffff           call 0x4baef0
// 004c09a2  83c41c               add esp, 0x1c
// 004c09a5  8bfb                 mov edi, ebx
// 004c09a7  b908000000           mov ecx, 8
// 004c09ac  8d742450             lea esi, [esp + 0x50]
// 004c09b0  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004c09b2  5f                   pop edi
// 004c09b3  5e                   pop esi
// 004c09b4  5d                   pop ebp
// 004c09b5  5b                   pop ebx
// 004c09b6  81c480000000         add esp, 0x80
// 004c09bc  c3                   ret 

// from server: 40% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreAutoParamDataSource.cpp