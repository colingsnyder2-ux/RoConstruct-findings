// from server: 100% by auto
// roc 2008-06 00717ed0  unit: CXTPPropertyGridItemEnum  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00717ed0
//
// 00717ed0  56                   push esi
// 00717ed1  8bf1                 mov esi, ecx
// 00717ed3  e85801fdff           call 0x6e8030
// 00717ed8  8bc8                 mov ecx, eax
// 00717eda  e82111fdff           call 0x6e9000
// 00717edf  68d0000000           push 0xd0
// 00717ee4  6a00                 push 0
// 00717ee6  56                   push esi
// 00717ee7  8986d4000000         mov dword ptr [esi + 0xd4], eax
// 00717eed  e81298f8ff           call 0x6a1704
// 00717ef2  83c40c               add esp, 0xc
// 00717ef5  6814eb8500           push 0x85eb14
// 00717efa  ff15cc218000         call dword ptr [0x8021cc]
// 00717f00  8986d0000000         mov dword ptr [esi + 0xd0], eax
// 00717f06  8bc6                 mov eax, esi
// 00717f08  5e                   pop esi
// 00717f09  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPWinThemeWrapper.cpp (function ??0CSharedData@CXTPWinThemeWrapper@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPWinThemeWrapper.cpp
