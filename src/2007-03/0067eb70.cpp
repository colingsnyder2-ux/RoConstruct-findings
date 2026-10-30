// roc 2007-03 0067eb70  unit: seg_00670000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0067eb70
//
// 0067eb70  8b442404             mov eax, dword ptr [esp + 4]
// 0067eb74  85c0                 test eax, eax
// 0067eb76  56                   push esi
// 0067eb77  8bf1                 mov esi, ecx
// 0067eb79  894668               mov dword ptr [esi + 0x68], eax
// 0067eb7c  7549                 jne 0x67ebc7
// 0067eb7e  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0067eb81  85c9                 test ecx, ecx
// 0067eb83  7427                 je 0x67ebac
// 0067eb85  8b8618010000         mov eax, dword ptr [esi + 0x118]
// 0067eb8b  85c0                 test eax, eax
// 0067eb8d  741d                 je 0x67ebac
// 0067eb8f  50                   push eax
// 0067eb90  51                   push ecx
// 0067eb91  ff155cee7700         call dword ptr [0x77ee5c]
// 0067eb97  8d8ee0000000         lea ecx, [esi + 0xe0]
// 0067eb9d  c7861801000000000000 mov dword ptr [esi + 0x118], 0
// 0067eba7  e804f0ffff           call 0x67dbb0
// 0067ebac  8b4620               mov eax, dword ptr [esi + 0x20]
// 0067ebaf  85c0                 test eax, eax
// 0067ebb1  7414                 je 0x67ebc7
// 0067ebb3  50                   push eax
// 0067ebb4  ff158ced7700         call dword ptr [0x77ed8c]
// 0067ebba  85c0                 test eax, eax
// 0067ebbc  7409                 je 0x67ebc7
// 0067ebbe  6a00                 push 0
// 0067ebc0  8bce                 mov ecx, esi
// 0067ebc2  e8d9f1ffff           call 0x67dda0
// 0067ebc7  5e                   pop esi
// 0067ebc8  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Common\XTPToolTipContext.cpp (function ?Activate@CXTPToolTipContextToolTip@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPToolTipContext.cpp
