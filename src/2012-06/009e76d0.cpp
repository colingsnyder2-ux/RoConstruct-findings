// roc 2012-06 009e76d0  unit: CXTPStatusBar  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e76d0
//
// 009e76d0  83ec10               sub esp, 0x10
// 009e76d3  56                   push esi
// 009e76d4  8d442404             lea eax, [esp + 4]
// 009e76d8  50                   push eax
// 009e76d9  8bf1                 mov esi, ecx
// 009e76db  ff15903ab200         call dword ptr [0xb23a90]
// 009e76e1  6a01                 push 1
// 009e76e3  8d4c2408             lea ecx, [esp + 8]
// 009e76e7  51                   push ecx
// 009e76e8  8bce                 mov ecx, esi
// 009e76ea  e809230b00           call 0xa999f8
// 009e76ef  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 009e76f3  8b542404             mov edx, dword ptr [esp + 4]
// 009e76f7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 009e76fb  0110                 add dword ptr [eax], edx
// 009e76fd  8b54240c             mov edx, dword ptr [esp + 0xc]
// 009e7701  015008               add dword ptr [eax + 8], edx
// 009e7704  83c1fe               add ecx, -2
// 009e7707  014804               add dword ptr [eax + 4], ecx
// 009e770a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009e770e  01480c               add dword ptr [eax + 0xc], ecx
// 009e7711  5e                   pop esi
// 009e7712  83c410               add esp, 0x10
// 009e7715  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPStatusBar.cpp (function ?OnNcCalcSize@CXTPStatusBar@@IAEXHPAUtagNCCALCSIZE_PARAMS@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPStatusBar.cpp
