// roc 2009-12 0081dcb0  unit: CXTPReportControl  size: 860 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081dcb0
//
// 0081dcb0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0081dcb4  83ec78               sub esp, 0x78
// 0081dcb7  57                   push edi
// 0081dcb8  8bf9                 mov edi, ecx
// 0081dcba  33c9                 xor ecx, ecx
// 0081dcbc  3bc1                 cmp eax, ecx
// 0081dcbe  741f                 je 0x81dcdf
// 0081dcc0  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 0081dcc7  50                   push eax
// 0081dcc8  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 0081dccf  50                   push eax
// 0081dcd0  51                   push ecx
// 0081dcd1  8bcf                 mov ecx, edi
// 0081dcd3  e8b6891000           call 0x92668e
// 0081dcd8  5f                   pop edi
// 0081dcd9  83c478               add esp, 0x78
// 0081dcdc  c20c00               ret 0xc
// 0081dcdf  53                   push ebx
// 0081dce0  55                   push ebp
// 0081dce1  8baf0c010000         mov ebp, dword ptr [edi + 0x10c]
// 0081dce7  33db                 xor ebx, ebx
// 0081dce9  56                   push esi
// 0081dcea  896c2414             mov dword ptr [esp + 0x14], ebp
// 0081dcee  8bf5                 mov esi, ebp
// 0081dcf0  894c2420             mov dword ptr [esp + 0x20], ecx
// 0081dcf4  894c2424             mov dword ptr [esp + 0x24], ecx
// 0081dcf8  894c2418             mov dword ptr [esp + 0x18], ecx
// 0081dcfc  894c2410             mov dword ptr [esp + 0x10], ecx
// 0081dd00  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0081dd04  398f18010000         cmp dword ptr [edi + 0x118], ecx
// 0081dd0a  742a                 je 0x81dd36
// 0081dd0c  8b8f88020000         mov ecx, dword ptr [edi + 0x288]
// 0081dd12  8d54241c             lea edx, [esp + 0x1c]
// 0081dd16  52                   push edx
// 0081dd17  8d442414             lea eax, [esp + 0x14]
// 0081dd1b  50                   push eax
// 0081dd1c  8d542420             lea edx, [esp + 0x20]
// 0081dd20  52                   push edx
// 0081dd21  8d442430             lea eax, [esp + 0x30]
// 0081dd25  50                   push eax
// 0081dd26  8d542430             lea edx, [esp + 0x30]
// 0081dd2a  52                   push edx
// 0081dd2b  e8d0af0000           call 0x828d00
// 0081dd30  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0081dd34  8bd8                 mov ebx, eax
// 0081dd36  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 0081dd3d  83f807               cmp eax, 7
// 0081dd40  0f8762020000         ja 0x81dfa8
// 0081dd46  ff2485ecdf8100       jmp dword ptr [eax*4 + 0x81dfec]
// 0081dd4d  33f6                 xor esi, esi
// 0081dd4f  89742414             mov dword ptr [esp + 0x14], esi
// 0081dd53  89742410             mov dword ptr [esp + 0x10], esi
// 0081dd57  e94c020000           jmp 0x81dfa8
// 0081dd5c  6a00                 push 0
// 0081dd5e  8bcf                 mov ecx, edi
// 0081dd60  e823891000           call 0x926688
// 0081dd65  83bf1801000000       cmp dword ptr [edi + 0x118], 0
// 0081dd6c  89442414             mov dword ptr [esp + 0x14], eax
// 0081dd70  0f845d020000         je 0x81dfd3
// 0081dd76  8b8fec000000         mov ecx, dword ptr [edi + 0xec]
// 0081dd7c  e87ff60400           call 0x86d400
// 0081dd81  48                   dec eax
// 0081dd82  33c9                 xor ecx, ecx
// 0081dd84  85c0                 test eax, eax
// 0081dd86  0f9ec1               setle cl
// 0081dd89  49                   dec ecx
// 0081dd8a  23c1                 and eax, ecx
// 0081dd8c  8b8fec000000         mov ecx, dword ptr [edi + 0xec]
// 0081dd92  50                   push eax
// 0081dd93  e868f70400           call 0x86d500
// 0081dd98  85c0                 test eax, eax
// 0081dd9a  0f843f020000         je 0x81dfdf
// 0081dda0  8bb788020000         mov esi, dword ptr [edi + 0x288]
// 0081dda6  8d542428             lea edx, [esp + 0x28]
// 0081ddaa  52                   push edx
// 0081ddab  8bc8                 mov ecx, eax
// 0081ddad  e81e9d0000           call 0x827ad0
// 0081ddb2  8bc8                 mov ecx, eax
// 0081ddb4  8b4660               mov eax, dword ptr [esi + 0x60]
// 0081ddb7  2b01                 sub eax, dword ptr [ecx]
// 0081ddb9  33c9                 xor ecx, ecx
// 0081ddbb  99                   cdq 
// 0081ddbc  8bf0                 mov esi, eax
// 0081ddbe  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0081ddc2  33f2                 xor esi, edx
// 0081ddc4  2bf2                 sub esi, edx
// 0081ddc6  48                   dec eax
// 0081ddc7  2bf3                 sub esi, ebx
// 0081ddc9  85c0                 test eax, eax
// 0081ddcb  0f9ec1               setle cl
// 0081ddce  49                   dec ecx
// 0081ddcf  23c8                 and ecx, eax
// 0081ddd1  894c2410             mov dword ptr [esp + 0x10], ecx
// 0081ddd5  e9ce010000           jmp 0x81dfa8
// 0081ddda  2baf14010000         sub ebp, dword ptr [edi + 0x114]
// 0081dde0  33d2                 xor edx, edx
// 0081dde2  85ed                 test ebp, ebp
// 0081dde4  0f9ec2               setle dl
// 0081dde7  4a                   dec edx
// 0081dde8  23d5                 and edx, ebp
// 0081ddea  83bf1801000000       cmp dword ptr [edi + 0x118], 0
// 0081ddf1  89542414             mov dword ptr [esp + 0x14], edx
// 0081ddf5  0f84d8010000         je 0x81dfd3
// 0081ddfb  85c9                 test ecx, ecx
// 0081ddfd  0f84a5010000         je 0x81dfa8
// 0081de03  8d442438             lea eax, [esp + 0x38]
// 0081de07  50                   push eax
// 0081de08  8bb788020000         mov esi, dword ptr [edi + 0x288]
// 0081de0e  e8bd9c0000           call 0x827ad0
// 0081de13  8bc8                 mov ecx, eax
// 0081de15  8b4660               mov eax, dword ptr [esi + 0x60]
// 0081de18  2b01                 sub eax, dword ptr [ecx]
// 0081de1a  33c9                 xor ecx, ecx
// 0081de1c  99                   cdq 
// 0081de1d  8bf0                 mov esi, eax
// 0081de1f  8b442410             mov eax, dword ptr [esp + 0x10]
// 0081de23  33f2                 xor esi, edx
// 0081de25  2bf2                 sub esi, edx
// 0081de27  48                   dec eax
// 0081de28  2bf3                 sub esi, ebx
// 0081de2a  85c0                 test eax, eax
// 0081de2c  0f9ec1               setle cl
// 0081de2f  49                   dec ecx
// 0081de30  23c8                 and ecx, eax
// 0081de32  894c2410             mov dword ptr [esp + 0x10], ecx
// 0081de36  e96d010000           jmp 0x81dfa8
// 0081de3b  8b9714010000         mov edx, dword ptr [edi + 0x114]
// 0081de41  6a00                 push 0
// 0081de43  8bcf                 mov ecx, edi
// 0081de45  03ea                 add ebp, edx
// 0081de47  e83c881000           call 0x926688
// 0081de4c  3be8                 cmp ebp, eax
// 0081de4e  7d06                 jge 0x81de56
// 0081de50  896c2414             mov dword ptr [esp + 0x14], ebp
// 0081de54  eb0d                 jmp 0x81de63
// 0081de56  6a00                 push 0
// 0081de58  8bcf                 mov ecx, edi
// 0081de5a  e829881000           call 0x926688
// 0081de5f  89442414             mov dword ptr [esp + 0x14], eax
// 0081de63  83bf1801000000       cmp dword ptr [edi + 0x118], 0
// 0081de6a  0f8463010000         je 0x81dfd3
// 0081de70  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0081de74  85c9                 test ecx, ecx
// 0081de76  0f842c010000         je 0x81dfa8
// 0081de7c  8d442448             lea eax, [esp + 0x48]
// 0081de80  50                   push eax
// 0081de81  8bb788020000         mov esi, dword ptr [edi + 0x288]
// 0081de87  e8449c0000           call 0x827ad0
// 0081de8c  8bc8                 mov ecx, eax
// 0081de8e  8b4660               mov eax, dword ptr [esi + 0x60]
// 0081de91  2b01                 sub eax, dword ptr [ecx]
// 0081de93  99                   cdq 
// 0081de94  8bf0                 mov esi, eax
// 0081de96  33f2                 xor esi, edx
// 0081de98  2bf2                 sub esi, edx
// 0081de9a  2bf3                 sub esi, ebx
// 0081de9c  ff442410             inc dword ptr [esp + 0x10]
// 0081dea0  e903010000           jmp 0x81dfa8
// 0081dea5  8b9790000000         mov edx, dword ptr [edi + 0x90]
// 0081deab  2b9798000000         sub edx, dword ptr [edi + 0x98]
// 0081deb1  03d5                 add edx, ebp
// 0081deb3  85d2                 test edx, edx
// 0081deb5  7e14                 jle 0x81decb
// 0081deb7  8b8790000000         mov eax, dword ptr [edi + 0x90]
// 0081debd  2b8798000000         sub eax, dword ptr [edi + 0x98]
// 0081dec3  03e8                 add ebp, eax
// 0081dec5  896c2414             mov dword ptr [esp + 0x14], ebp
// 0081dec9  eb08                 jmp 0x81ded3
// 0081decb  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0081ded3  83bf1801000000       cmp dword ptr [edi + 0x118], 0
// 0081deda  0f84f3000000         je 0x81dfd3
// 0081dee0  85c9                 test ecx, ecx
// 0081dee2  0f84c0000000         je 0x81dfa8
// 0081dee8  8d542458             lea edx, [esp + 0x58]
// 0081deec  52                   push edx
// 0081deed  e916ffffff           jmp 0x81de08
// 0081def2  8baf98000000         mov ebp, dword ptr [edi + 0x98]
// 0081def8  2baf90000000         sub ebp, dword ptr [edi + 0x90]
// 0081defe  6a00                 push 0
// 0081df00  8bcf                 mov ecx, edi
// 0081df02  e881871000           call 0x926688
// 0081df07  8bd6                 mov edx, esi
// 0081df09  03ea                 add ebp, edx
// 0081df0b  3be8                 cmp ebp, eax
// 0081df0d  7d12                 jge 0x81df21
// 0081df0f  8b8798000000         mov eax, dword ptr [edi + 0x98]
// 0081df15  2b8790000000         sub eax, dword ptr [edi + 0x90]
// 0081df1b  01442414             add dword ptr [esp + 0x14], eax
// 0081df1f  eb0d                 jmp 0x81df2e
// 0081df21  6a00                 push 0
// 0081df23  8bcf                 mov ecx, edi
// 0081df25  e85e871000           call 0x926688
// 0081df2a  89442414             mov dword ptr [esp + 0x14], eax
// 0081df2e  83bf1801000000       cmp dword ptr [edi + 0x118], 0
// 0081df35  0f8498000000         je 0x81dfd3
// 0081df3b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0081df3f  85c9                 test ecx, ecx
// 0081df41  7465                 je 0x81dfa8
// 0081df43  8d542468             lea edx, [esp + 0x68]
// 0081df47  52                   push edx
// 0081df48  e934ffffff           jmp 0x81de81
// 0081df4d  83bf1801000000       cmp dword ptr [edi + 0x118], 0
// 0081df54  8bac2490000000       mov ebp, dword ptr [esp + 0x90]
// 0081df5b  896c2414             mov dword ptr [esp + 0x14], ebp
// 0081df5f  7472                 je 0x81dfd3
// 0081df61  8b8fec000000         mov ecx, dword ptr [edi + 0xec]
// 0081df67  e894f40400           call 0x86d400
// 0081df6c  2b44241c             sub eax, dword ptr [esp + 0x1c]
// 0081df70  8b8fec000000         mov ecx, dword ptr [edi + 0xec]
// 0081df76  03c5                 add eax, ebp
// 0081df78  50                   push eax
// 0081df79  e882f50400           call 0x86d500
// 0081df7e  85c0                 test eax, eax
// 0081df80  745d                 je 0x81dfdf
// 0081df82  8bb788020000         mov esi, dword ptr [edi + 0x288]
// 0081df88  8d4c2478             lea ecx, [esp + 0x78]
// 0081df8c  51                   push ecx
// 0081df8d  8bc8                 mov ecx, eax
// 0081df8f  e83c9b0000           call 0x827ad0
// 0081df94  8bc8                 mov ecx, eax
// 0081df96  8b4660               mov eax, dword ptr [esi + 0x60]
// 0081df99  2b01                 sub eax, dword ptr [ecx]
// 0081df9b  896c2410             mov dword ptr [esp + 0x10], ebp
// 0081df9f  99                   cdq 
// 0081dfa0  8bf0                 mov esi, eax
// 0081dfa2  33f2                 xor esi, edx
// 0081dfa4  2bf2                 sub esi, edx
// 0081dfa6  2bf3                 sub esi, ebx
// 0081dfa8  83bf1801000000       cmp dword ptr [edi + 0x118], 0
// 0081dfaf  7422                 je 0x81dfd3
// 0081dfb1  56                   push esi
// 0081dfb2  8bcf                 mov ecx, edi
// 0081dfb4  e8a7f5ffff           call 0x81d560
// 0081dfb9  8b542410             mov edx, dword ptr [esp + 0x10]
// 0081dfbd  6a01                 push 1
// 0081dfbf  52                   push edx
// 0081dfc0  6a00                 push 0
// 0081dfc2  8bcf                 mov ecx, edi
// 0081dfc4  e8a7861000           call 0x926670
// 0081dfc9  5e                   pop esi
// 0081dfca  5d                   pop ebp
// 0081dfcb  5b                   pop ebx
// 0081dfcc  5f                   pop edi
// 0081dfcd  83c478               add esp, 0x78
// 0081dfd0  c20c00               ret 0xc
// 0081dfd3  8b442414             mov eax, dword ptr [esp + 0x14]
// 0081dfd7  50                   push eax
// 0081dfd8  8bcf                 mov ecx, edi
// 0081dfda  e881f5ffff           call 0x81d560
// 0081dfdf  5e                   pop esi
// 0081dfe0  5d                   pop ebp
// 0081dfe1  5b                   pop ebx
// 0081dfe2  5f                   pop edi
// 0081dfe3  83c478               add esp, 0x78
// 0081dfe6  c20c00               ret 0xc
// 0081dfe9  8d4900               lea ecx, [ecx]
// 0081dfec  dadd                 fcmovu st(0), st(5)
// 0081dfee  81003bde8100         add dword ptr [eax], 0x81de3b
// 0081dff4  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 0081dff5  de8100f2de81         fiadd word ptr [ecx - 0x7e210e00]
// 0081dffb  004ddf               add byte ptr [ebp - 0x21], cl
// 0081dffe  81004ddf8100         add dword ptr [eax], 0x81df4d
// 0081e004  4d                   dec ebp
// 0081e005  dd81005cdd81         fld qword ptr [ecx - 0x7e22a400]
// copied from an identical function in another client (function ?OnHScroll@CXTPReportControl@@IAEXIIPAVCScrollBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp