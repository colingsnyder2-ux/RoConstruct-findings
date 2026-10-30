// roc 2009-12 007cdf30  unit: RBX::PartDropTool  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007cdf30
//
// 007cdf30  83ec20               sub esp, 0x20
// 007cdf33  56                   push esi
// 007cdf34  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 007cdf38  837e0803             cmp dword ptr [esi + 8], 3
// 007cdf3c  7407                 je 0x7cdf45
// 007cdf3e  33c0                 xor eax, eax
// 007cdf40  5e                   pop esi
// 007cdf41  83c420               add esp, 0x20
// 007cdf44  c3                   ret 
// 007cdf45  dd06                 fld qword ptr [esi]
// 007cdf47  83ec08               sub esp, 8
// 007cdf4a  dd1c24               fstp qword ptr [esp]
// 007cdf4d  8d44240c             lea eax, [esp + 0xc]
// 007cdf51  6850ec9e00           push 0x9eec50
// 007cdf56  50                   push eax
// 007cdf57  ff15dcb79800         call dword ptr [0x98b7dc]
// 007cdf5d  8d442414             lea eax, [esp + 0x14]
// 007cdf61  83c410               add esp, 0x10
// 007cdf64  8d5001               lea edx, [eax + 1]
// 007cdf67  8a08                 mov cl, byte ptr [eax]
// 007cdf69  40                   inc eax
// 007cdf6a  84c9                 test cl, cl
// 007cdf6c  75f9                 jne 0x7cdf67
// 007cdf6e  2bc2                 sub eax, edx
// 007cdf70  8b542428             mov edx, dword ptr [esp + 0x28]
// 007cdf74  50                   push eax
// 007cdf75  8d4c2408             lea ecx, [esp + 8]
// 007cdf79  51                   push ecx
// 007cdf7a  52                   push edx
// 007cdf7b  e8102c0000           call 0x7d0b90
// 007cdf80  83c40c               add esp, 0xc
// 007cdf83  8906                 mov dword ptr [esi], eax
// 007cdf85  c7460804000000       mov dword ptr [esi + 8], 4
// 007cdf8c  b801000000           mov eax, 1
// 007cdf91  5e                   pop esi
// 007cdf92  83c420               add esp, 0x20
// 007cdf95  c3                   ret 
// copied from an identical function in another client (function _luaV_tostring)

// from server: 100% by tester
// roc-lang: c
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4-dll lvm.c