// from server: 100% by auto
// roc 2007-08 00668930  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00668930
//
// 00668930  8b442404             mov eax, dword ptr [esp + 4]
// 00668934  85c0                 test eax, eax
// 00668936  741b                 je 0x668953
// 00668938  6a0c                 push 0xc
// 0066893a  50                   push eax
// 0066893b  ff15c0d07700         call dword ptr [0x77d0c0]
// 00668941  83c0ff               add eax, -1
// 00668944  b907000000           mov ecx, 7
// 00668949  3bc8                 cmp ecx, eax
// 0066894b  1bc0                 sbb eax, eax
// 0066894d  83c001               add eax, 1
// 00668950  c20400               ret 4
// 00668953  53                   push ebx
// 00668954  8b1d4cee7700         mov ebx, dword ptr [0x77ee4c]
// 0066895a  56                   push esi
// 0066895b  ffd3                 call ebx
// 0066895d  50                   push eax
// 0066895e  ff1530ed7700         call dword ptr [0x77ed30]
// 00668964  8bf0                 mov esi, eax
// 00668966  85f6                 test esi, esi
// 00668968  742b                 je 0x668995
// 0066896a  57                   push edi
// 0066896b  6a0c                 push 0xc
// 0066896d  56                   push esi
// 0066896e  ff15c0d07700         call dword ptr [0x77d0c0]
// 00668974  56                   push esi
// 00668975  8bf8                 mov edi, eax
// 00668977  ffd3                 call ebx
// 00668979  50                   push eax
// 0066897a  ff1524ed7700         call dword ptr [0x77ed24]
// 00668980  83c7ff               add edi, -1
// 00668983  ba07000000           mov edx, 7
// 00668988  3bd7                 cmp edx, edi
// 0066898a  5f                   pop edi
// 0066898b  1bc0                 sbb eax, eax
// 0066898d  5e                   pop esi
// 0066898e  83c001               add eax, 1
// 00668991  5b                   pop ebx
// 00668992  c20400               ret 4
// 00668995  5e                   pop esi
// 00668996  33c0                 xor eax, eax
// 00668998  5b                   pop ebx
// 00668999  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Common\XTPColorManager.cpp (function ?IsLowResolution@CXTPColorManager@@QAEHPAUHDC__@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPColorManager.cpp
