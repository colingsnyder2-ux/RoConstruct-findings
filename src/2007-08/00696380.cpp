// roc 2007-08 00696380  unit: CXTPToolTipContext  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00696380
//
// 00696380  837c240400           cmp dword ptr [esp + 4], 0
// 00696385  56                   push esi
// 00696386  8bf1                 mov esi, ecx
// 00696388  7437                 je 0x6963c1
// 0069638a  833d788f8c0000       cmp dword ptr [0x8c8f78], 0
// 00696391  755a                 jne 0x6963ed
// 00696393  833d7c8f8c0000       cmp dword ptr [0x8c8f7c], 0
// 0069639a  7551                 jne 0x6963ed
// 0069639c  ff15c4d27700         call dword ptr [0x77d2c4]
// 006963a2  50                   push eax
// 006963a3  6a00                 push 0
// 006963a5  68d0626900           push 0x6962d0
// 006963aa  6a07                 push 7
// 006963ac  ff153cee7700         call dword ptr [0x77ee3c]
// 006963b2  89357c8f8c00         mov dword ptr [0x8c8f7c], esi
// 006963b8  a3788f8c00           mov dword ptr [0x8c8f78], eax
// 006963bd  5e                   pop esi
// 006963be  c20400               ret 4
// 006963c1  a1788f8c00           mov eax, dword ptr [0x8c8f78]
// 006963c6  85c0                 test eax, eax
// 006963c8  7423                 je 0x6963ed
// 006963ca  39357c8f8c00         cmp dword ptr [0x8c8f7c], esi
// 006963d0  751b                 jne 0x6963ed
// 006963d2  50                   push eax
// 006963d3  ff1538ee7700         call dword ptr [0x77ee38]
// 006963d9  c705788f8c0000000000 mov dword ptr [0x8c8f78], 0
// 006963e3  c7057c8f8c0000000000 mov dword ptr [0x8c8f7c], 0
// 006963ed  5e                   pop esi
// 006963ee  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Common\XTPToolTipContext.cpp (function ?HookMouseMove@CXTPToolTipContextToolTip@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPToolTipContext.cpp
