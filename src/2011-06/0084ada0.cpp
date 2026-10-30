// from server: 100% by auto
// roc 2011-06 0084ada0  unit: CXTPControls  size: 272 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084ada0
//
// 0084ada0  837c240800           cmp dword ptr [esp + 8], 0
// 0084ada5  53                   push ebx
// 0084ada6  55                   push ebp
// 0084ada7  56                   push esi
// 0084ada8  57                   push edi
// 0084ada9  8bf1                 mov esi, ecx
// 0084adab  0f84f8000000         je 0x84aea9
// 0084adb1  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0084adb5  6a00                 push 0
// 0084adb7  56                   push esi
// 0084adb8  68a479ac00           push 0xac79a4
// 0084adbd  57                   push edi
// 0084adbe  e88d510100           call 0x85ff50
// 0084adc3  6a01                 push 1
// 0084adc5  8d4604               lea eax, [esi + 4]
// 0084adc8  50                   push eax
// 0084adc9  689c3eaa00           push 0xaa3e9c
// 0084adce  57                   push edi
// 0084adcf  e8dc510100           call 0x85ffb0
// 0084add4  6a00                 push 0
// 0084add6  8d4e08               lea ecx, [esi + 8]
// 0084add9  51                   push ecx
// 0084adda  689879ac00           push 0xac7998
// 0084addf  57                   push edi
// 0084ade0  e8cb510100           call 0x85ffb0
// 0084ade5  8d5614               lea edx, [esi + 0x14]
// 0084ade8  52                   push edx
// 0084ade9  688c79ac00           push 0xac798c
// 0084adee  57                   push edi
// 0084adef  e82c510100           call 0x85ff20
// 0084adf4  6a00                 push 0
// 0084adf6  8d4618               lea eax, [esi + 0x18]
// 0084adf9  50                   push eax
// 0084adfa  687c79ac00           push 0xac797c
// 0084adff  57                   push edi
// 0084ae00  e84b510100           call 0x85ff50
// 0084ae05  83c44c               add esp, 0x4c
// 0084ae08  33c9                 xor ecx, ecx
// 0084ae0a  51                   push ecx
// 0084ae0b  33c0                 xor eax, eax
// 0084ae0d  50                   push eax
// 0084ae0e  8d4e0c               lea ecx, [esi + 0xc]
// 0084ae11  51                   push ecx
// 0084ae12  687079ac00           push 0xac7970
// 0084ae17  57                   push edi
// 0084ae18  e883520100           call 0x8600a0
// 0084ae1d  83c404               add esp, 4
// 0084ae20  8bc4                 mov eax, esp
// 0084ae22  33c9                 xor ecx, ecx
// 0084ae24  33d2                 xor edx, edx
// 0084ae26  8908                 mov dword ptr [eax], ecx
// 0084ae28  895004               mov dword ptr [eax + 4], edx
// 0084ae2b  8d561c               lea edx, [esi + 0x1c]
// 0084ae2e  52                   push edx
// 0084ae2f  33db                 xor ebx, ebx
// 0084ae31  686479ac00           push 0xac7964
// 0084ae36  33ed                 xor ebp, ebp
// 0084ae38  895808               mov dword ptr [eax + 8], ebx
// 0084ae3b  57                   push edi
// 0084ae3c  89680c               mov dword ptr [eax + 0xc], ebp
// 0084ae3f  e88c520100           call 0x8600d0
// 0084ae44  33c9                 xor ecx, ecx
// 0084ae46  51                   push ecx
// 0084ae47  33c0                 xor eax, eax
// 0084ae49  50                   push eax
// 0084ae4a  8d4630               lea eax, [esi + 0x30]
// 0084ae4d  50                   push eax
// 0084ae4e  685879ac00           push 0xac7958
// 0084ae53  57                   push edi
// 0084ae54  e847520100           call 0x8600a0
// 0084ae59  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0084ae5d  83c430               add esp, 0x30
// 0084ae60  833906               cmp dword ptr [ecx], 6
// 0084ae63  7644                 jbe 0x84aea9
// 0084ae65  55                   push ebp
// 0084ae66  8d5e3c               lea ebx, [esi + 0x3c]
// 0084ae69  53                   push ebx
// 0084ae6a  684c79ac00           push 0xac794c
// 0084ae6f  57                   push edi
// 0084ae70  e83b510100           call 0x85ffb0
// 0084ae75  83c410               add esp, 0x10
// 0084ae78  392b                 cmp dword ptr [ebx], ebp
// 0084ae7a  742d                 je 0x84aea9
// 0084ae7c  33c9                 xor ecx, ecx
// 0084ae7e  51                   push ecx
// 0084ae7f  33c0                 xor eax, eax
// 0084ae81  50                   push eax
// 0084ae82  8d5640               lea edx, [esi + 0x40]
// 0084ae85  52                   push edx
// 0084ae86  683079ac00           push 0xac7930
// 0084ae8b  57                   push edi
// 0084ae8c  e80f520100           call 0x8600a0
// 0084ae91  33c9                 xor ecx, ecx
// 0084ae93  51                   push ecx
// 0084ae94  33c0                 xor eax, eax
// 0084ae96  50                   push eax
// 0084ae97  83c648               add esi, 0x48
// 0084ae9a  56                   push esi
// 0084ae9b  681479ac00           push 0xac7914
// 0084aea0  57                   push edi
// 0084aea1  e8fa510100           call 0x8600a0
// 0084aea6  83c428               add esp, 0x28
// 0084aea9  5f                   pop edi
// 0084aeaa  5e                   pop esi
// 0084aeab  5d                   pop ebp
// 0084aeac  5b                   pop ebx
// 0084aead  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPDockState.cpp (function ?DoPropExchange@CToolBarInfo@CXTPToolBar@@QAEXPAVCXTPPropExchange@@PAVCXTPDockState@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPDockState.cpp
