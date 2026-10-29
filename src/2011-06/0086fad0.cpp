// roc 2011-06 0086fad0  unit: CXTSplitterWnd  size: 264 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086fad0
//
// 0086fad0  8b442404             mov eax, dword ptr [esp + 4]
// 0086fad4  83ec30               sub esp, 0x30
// 0086fad7  56                   push esi
// 0086fad8  57                   push edi
// 0086fad9  50                   push eax
// 0086fada  8bf1                 mov esi, ecx
// 0086fadc  e8d7ca1500           call 0x9cc5b8
// 0086fae1  8bf8                 mov edi, eax
// 0086fae3  85ff                 test edi, edi
// 0086fae5  0f84e0000000         je 0x86fbcb
// 0086faeb  8b5620               mov edx, dword ptr [esi + 0x20]
// 0086faee  8d4c2408             lea ecx, [esp + 8]
// 0086faf2  51                   push ecx
// 0086faf3  52                   push edx
// 0086faf4  ff157c1ca400         call dword ptr [0xa41c7c]
// 0086fafa  8b467c               mov eax, dword ptr [esi + 0x7c]
// 0086fafd  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 0086fb00  f7d8                 neg eax
// 0086fb02  50                   push eax
// 0086fb03  f7d9                 neg ecx
// 0086fb05  51                   push ecx
// 0086fb06  8d542410             lea edx, [esp + 0x10]
// 0086fb0a  52                   push edx
// 0086fb0b  ff15e41ba400         call dword ptr [0xa41be4]
// 0086fb11  8b06                 mov eax, dword ptr [esi]
// 0086fb13  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 0086fb19  8d4c2428             lea ecx, [esp + 0x28]
// 0086fb1d  51                   push ecx
// 0086fb1e  8bce                 mov ecx, esi
// 0086fb20  ffd2                 call edx
// 0086fb22  83be8c00000000       cmp dword ptr [esi + 0x8c], 0
// 0086fb29  7440                 je 0x86fb6b
// 0086fb2b  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 0086fb31  3b4658               cmp eax, dword ptr [esi + 0x58]
// 0086fb34  7d35                 jge 0x86fb6b
// 0086fb36  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0086fb3a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0086fb3e  8b542410             mov edx, dword ptr [esp + 0x10]
// 0086fb42  894c2418             mov dword ptr [esp + 0x18], ecx
// 0086fb46  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 0086fb49  03c8                 add ecx, eax
// 0086fb4b  8944241c             mov dword ptr [esp + 0x1c], eax
// 0086fb4f  8d442418             lea eax, [esp + 0x18]
// 0086fb53  50                   push eax
// 0086fb54  89542424             mov dword ptr [esp + 0x24], edx
// 0086fb58  8b16                 mov edx, dword ptr [esi]
// 0086fb5a  8b9254010000         mov edx, dword ptr [edx + 0x154]
// 0086fb60  6a00                 push 0
// 0086fb62  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0086fb66  57                   push edi
// 0086fb67  8bce                 mov ecx, esi
// 0086fb69  ffd2                 call edx
// 0086fb6b  83be8800000000       cmp dword ptr [esi + 0x88], 0
// 0086fb72  7440                 je 0x86fbb4
// 0086fb74  8b8684000000         mov eax, dword ptr [esi + 0x84]
// 0086fb7a  3b465c               cmp eax, dword ptr [esi + 0x5c]
// 0086fb7d  7d35                 jge 0x86fbb4
// 0086fb7f  8b442408             mov eax, dword ptr [esp + 8]
// 0086fb83  8b5660               mov edx, dword ptr [esi + 0x60]
// 0086fb86  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0086fb8a  03d0                 add edx, eax
// 0086fb8c  89442418             mov dword ptr [esp + 0x18], eax
// 0086fb90  8b442414             mov eax, dword ptr [esp + 0x14]
// 0086fb94  89442424             mov dword ptr [esp + 0x24], eax
// 0086fb98  8d442418             lea eax, [esp + 0x18]
// 0086fb9c  50                   push eax
// 0086fb9d  89542424             mov dword ptr [esp + 0x24], edx
// 0086fba1  8b16                 mov edx, dword ptr [esi]
// 0086fba3  8b9254010000         mov edx, dword ptr [edx + 0x154]
// 0086fba9  6a00                 push 0
// 0086fbab  894c2424             mov dword ptr [esp + 0x24], ecx
// 0086fbaf  57                   push edi
// 0086fbb0  8bce                 mov ecx, esi
// 0086fbb2  ffd2                 call edx
// 0086fbb4  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0086fbb8  8b542430             mov edx, dword ptr [esp + 0x30]
// 0086fbbc  8b06                 mov eax, dword ptr [esi]
// 0086fbbe  8b80a4010000         mov eax, dword ptr [eax + 0x1a4]
// 0086fbc4  51                   push ecx
// 0086fbc5  52                   push edx
// 0086fbc6  57                   push edi
// 0086fbc7  8bce                 mov ecx, esi
// 0086fbc9  ffd0                 call eax
// 0086fbcb  5f                   pop edi
// 0086fbcc  b801000000           mov eax, 1
// 0086fbd1  5e                   pop esi
// 0086fbd2  83c430               add esp, 0x30
// 0086fbd5  c20800               ret 8
// copied from an identical function in another client (function ?OnPrintClient@CXTSplitterWnd@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1