// roc 2011-06 0081f630  unit: CXTPCommandBar  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0081f630
//
// 0081f630  8b442408             mov eax, dword ptr [esp + 8]
// 0081f634  56                   push esi
// 0081f635  8b742408             mov esi, dword ptr [esp + 8]
// 0081f639  6a02                 push 2
// 0081f63b  50                   push eax
// 0081f63c  56                   push esi
// 0081f63d  ff153803a400         call dword ptr [0xa40338]
// 0081f643  85c0                 test eax, eax
// 0081f645  7504                 jne 0x81f64b
// 0081f647  33c0                 xor eax, eax
// 0081f649  5e                   pop esi
// 0081f64a  c3                   ret 
// 0081f64b  50                   push eax
// 0081f64c  56                   push esi
// 0081f64d  ff153c03a400         call dword ptr [0xa4033c]
// 0081f653  8bf0                 mov esi, eax
// 0081f655  85f6                 test esi, esi
// 0081f657  74ee                 je 0x81f647
// 0081f659  56                   push esi
// 0081f65a  ff15d001a400         call dword ptr [0xa401d0]
// 0081f660  85c0                 test eax, eax
// 0081f662  74e3                 je 0x81f647
// 0081f664  33c9                 xor ecx, ecx
// 0081f666  6683780e20           cmp word ptr [eax + 0xe], 0x20
// 0081f66b  57                   push edi
// 0081f66c  0f94c1               sete cl
// 0081f66f  56                   push esi
// 0081f670  8bf9                 mov edi, ecx
// 0081f672  ff15cc01a400         call dword ptr [0xa401cc]
// 0081f678  8bc7                 mov eax, edi
// 0081f67a  5f                   pop edi
// 0081f67b  5e                   pop esi
// 0081f67c  c3                   ret 
// copied from an identical function in another client (function ?IsAlphaBitmapResource@CXTPImageManagerIcon@@SAHPAUHINSTANCE__@@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob0
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPImageManager.cpp