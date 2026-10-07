// roc 2007-08 006482a0  unit: CXTPCommandBar  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006482a0
//
// 006482a0  8b442404             mov eax, dword ptr [esp + 4]
// 006482a4  83ec3c               sub esp, 0x3c
// 006482a7  56                   push esi
// 006482a8  6a00                 push 0
// 006482aa  6880000000           push 0x80
// 006482af  6a03                 push 3
// 006482b1  6a00                 push 0
// 006482b3  6a00                 push 0
// 006482b5  6800000080           push 0x80000000
// 006482ba  50                   push eax
// 006482bb  ff1534d27700         call dword ptr [0x77d234]
// 006482c1  8bf0                 mov esi, eax
// 006482c3  83feff               cmp esi, -1
// 006482c6  7507                 jne 0x6482cf
// 006482c8  33c0                 xor eax, eax
// 006482ca  5e                   pop esi
// 006482cb  83c43c               add esp, 0x3c
// 006482ce  c3                   ret 
// 006482cf  57                   push edi
// 006482d0  8b3db8d17700         mov edi, dword ptr [0x77d1b8]
// 006482d6  6a00                 push 0
// 006482d8  8d4c240c             lea ecx, [esp + 0xc]
// 006482dc  51                   push ecx
// 006482dd  6a0e                 push 0xe
// 006482df  8d542418             lea edx, [esp + 0x18]
// 006482e3  52                   push edx
// 006482e4  56                   push esi
// 006482e5  ffd7                 call edi
// 006482e7  85c0                 test eax, eax
// 006482e9  743f                 je 0x64832a
// 006482eb  837c24080e           cmp dword ptr [esp + 8], 0xe
// 006482f0  7538                 jne 0x64832a
// 006482f2  6a00                 push 0
// 006482f4  8d44240c             lea eax, [esp + 0xc]
// 006482f8  50                   push eax
// 006482f9  6a28                 push 0x28
// 006482fb  8d4c2428             lea ecx, [esp + 0x28]
// 006482ff  51                   push ecx
// 00648300  56                   push esi
// 00648301  ffd7                 call edi
// 00648303  85c0                 test eax, eax
// 00648305  7423                 je 0x64832a
// 00648307  837c240828           cmp dword ptr [esp + 8], 0x28
// 0064830c  751c                 jne 0x64832a
// 0064830e  33d2                 xor edx, edx
// 00648310  66837c242a20         cmp word ptr [esp + 0x2a], 0x20
// 00648316  56                   push esi
// 00648317  0f94c2               sete dl
// 0064831a  8bfa                 mov edi, edx
// 0064831c  ff153cd27700         call dword ptr [0x77d23c]
// 00648322  8bc7                 mov eax, edi
// 00648324  5f                   pop edi
// 00648325  5e                   pop esi
// 00648326  83c43c               add esp, 0x3c
// 00648329  c3                   ret 
// 0064832a  56                   push esi
// 0064832b  ff153cd27700         call dword ptr [0x77d23c]
// 00648331  5f                   pop edi
// 00648332  33c0                 xor eax, eax
// 00648334  5e                   pop esi
// 00648335  83c43c               add esp, 0x3c
// 00648338  c3                   ret 
// library xtp-11.2.2-vc8/Source\Common\XTPImageManager.cpp (function ?IsAlphaBitmapFile@CXTPImageManagerIcon@@SAHPBD@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPImageManager.cpp
