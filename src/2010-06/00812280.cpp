// roc 2010-06 00812280  unit: CXTSplitterWnd  size: 264 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00812280
//
// 00812280  8b442404             mov eax, dword ptr [esp + 4]
// 00812284  83ec30               sub esp, 0x30
// 00812287  56                   push esi
// 00812288  57                   push edi
// 00812289  50                   push eax
// 0081228a  8bf1                 mov esi, ecx
// 0081228c  e8dbaa1600           call 0x97cd6c
// 00812291  8bf8                 mov edi, eax
// 00812293  85ff                 test edi, edi
// 00812295  0f84e0000000         je 0x81237b
// 0081229b  8b5620               mov edx, dword ptr [esi + 0x20]
// 0081229e  8d4c2408             lea ecx, [esp + 8]
// 008122a2  51                   push ecx
// 008122a3  52                   push edx
// 008122a4  ff155cbc9e00         call dword ptr [0x9ebc5c]
// 008122aa  8b467c               mov eax, dword ptr [esi + 0x7c]
// 008122ad  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 008122b0  f7d8                 neg eax
// 008122b2  50                   push eax
// 008122b3  f7d9                 neg ecx
// 008122b5  51                   push ecx
// 008122b6  8d542410             lea edx, [esp + 0x10]
// 008122ba  52                   push edx
// 008122bb  ff15dcbb9e00         call dword ptr [0x9ebbdc]
// 008122c1  8b06                 mov eax, dword ptr [esi]
// 008122c3  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 008122c9  8d4c2428             lea ecx, [esp + 0x28]
// 008122cd  51                   push ecx
// 008122ce  8bce                 mov ecx, esi
// 008122d0  ffd2                 call edx
// 008122d2  83be8c00000000       cmp dword ptr [esi + 0x8c], 0
// 008122d9  7440                 je 0x81231b
// 008122db  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 008122e1  3b4658               cmp eax, dword ptr [esi + 0x58]
// 008122e4  7d35                 jge 0x81231b
// 008122e6  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008122ea  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008122ee  8b542410             mov edx, dword ptr [esp + 0x10]
// 008122f2  894c2418             mov dword ptr [esp + 0x18], ecx
// 008122f6  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 008122f9  03c8                 add ecx, eax
// 008122fb  8944241c             mov dword ptr [esp + 0x1c], eax
// 008122ff  8d442418             lea eax, [esp + 0x18]
// 00812303  50                   push eax
// 00812304  89542424             mov dword ptr [esp + 0x24], edx
// 00812308  8b16                 mov edx, dword ptr [esi]
// 0081230a  8b9254010000         mov edx, dword ptr [edx + 0x154]
// 00812310  6a00                 push 0
// 00812312  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00812316  57                   push edi
// 00812317  8bce                 mov ecx, esi
// 00812319  ffd2                 call edx
// 0081231b  83be8800000000       cmp dword ptr [esi + 0x88], 0
// 00812322  7440                 je 0x812364
// 00812324  8b8684000000         mov eax, dword ptr [esi + 0x84]
// 0081232a  3b465c               cmp eax, dword ptr [esi + 0x5c]
// 0081232d  7d35                 jge 0x812364
// 0081232f  8b442408             mov eax, dword ptr [esp + 8]
// 00812333  8b5660               mov edx, dword ptr [esi + 0x60]
// 00812336  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0081233a  03d0                 add edx, eax
// 0081233c  89442418             mov dword ptr [esp + 0x18], eax
// 00812340  8b442414             mov eax, dword ptr [esp + 0x14]
// 00812344  89442424             mov dword ptr [esp + 0x24], eax
// 00812348  8d442418             lea eax, [esp + 0x18]
// 0081234c  50                   push eax
// 0081234d  89542424             mov dword ptr [esp + 0x24], edx
// 00812351  8b16                 mov edx, dword ptr [esi]
// 00812353  8b9254010000         mov edx, dword ptr [edx + 0x154]
// 00812359  6a00                 push 0
// 0081235b  894c2424             mov dword ptr [esp + 0x24], ecx
// 0081235f  57                   push edi
// 00812360  8bce                 mov ecx, esi
// 00812362  ffd2                 call edx
// 00812364  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00812368  8b542430             mov edx, dword ptr [esp + 0x30]
// 0081236c  8b06                 mov eax, dword ptr [esi]
// 0081236e  8b80a4010000         mov eax, dword ptr [eax + 0x1a4]
// 00812374  51                   push ecx
// 00812375  52                   push edx
// 00812376  57                   push edi
// 00812377  8bce                 mov ecx, esi
// 00812379  ffd0                 call eax
// 0081237b  5f                   pop edi
// 0081237c  b801000000           mov eax, 1
// 00812381  5e                   pop esi
// 00812382  83c430               add esp, 0x30
// 00812385  c20800               ret 8
// copied from an identical function in another client (function ?OnPrintClient@CXTSplitterWnd@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1