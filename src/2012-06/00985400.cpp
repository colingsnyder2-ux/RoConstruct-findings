// roc 2012-06 00985400  unit: CRobloxControlColorSelector  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00985400
//
// 00985400  83ec10               sub esp, 0x10
// 00985403  8b442418             mov eax, dword ptr [esp + 0x18]
// 00985407  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0098540b  890424               mov dword ptr [esp], eax
// 0098540e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00985412  56                   push esi
// 00985413  8b742418             mov esi, dword ptr [esp + 0x18]
// 00985417  89442408             mov dword ptr [esp + 8], eax
// 0098541b  57                   push edi
// 0098541c  8b3dc03cb200         mov edi, dword ptr [0xb23cc0]
// 00985422  83c002               add eax, 2
// 00985425  8d542408             lea edx, [esp + 8]
// 00985429  89442414             mov dword ptr [esp + 0x14], eax
// 0098542d  8b4604               mov eax, dword ptr [esi + 4]
// 00985430  52                   push edx
// 00985431  50                   push eax
// 00985432  894c2418             mov dword ptr [esp + 0x18], ecx
// 00985436  ffd7                 call edi
// 00985438  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0098543c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00985440  8d50fe               lea edx, [eax - 2]
// 00985443  8954240c             mov dword ptr [esp + 0xc], edx
// 00985447  8d542408             lea edx, [esp + 8]
// 0098544b  89442414             mov dword ptr [esp + 0x14], eax
// 0098544f  8b4604               mov eax, dword ptr [esi + 4]
// 00985452  894c2408             mov dword ptr [esp + 8], ecx
// 00985456  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0098545a  52                   push edx
// 0098545b  50                   push eax
// 0098545c  894c2418             mov dword ptr [esp + 0x18], ecx
// 00985460  ffd7                 call edi
// 00985462  8b442420             mov eax, dword ptr [esp + 0x20]
// 00985466  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0098546a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0098546e  89442408             mov dword ptr [esp + 8], eax
// 00985472  83c002               add eax, 2
// 00985475  83c102               add ecx, 2
// 00985478  89442410             mov dword ptr [esp + 0x10], eax
// 0098547c  8d442408             lea eax, [esp + 8]
// 00985480  894c240c             mov dword ptr [esp + 0xc], ecx
// 00985484  8b4e04               mov ecx, dword ptr [esi + 4]
// 00985487  50                   push eax
// 00985488  83c2fe               add edx, -2
// 0098548b  51                   push ecx
// 0098548c  8954241c             mov dword ptr [esp + 0x1c], edx
// 00985490  ffd7                 call edi
// 00985492  8b442428             mov eax, dword ptr [esp + 0x28]
// 00985496  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0098549a  8d50fe               lea edx, [eax - 2]
// 0098549d  83c102               add ecx, 2
// 009854a0  89542408             mov dword ptr [esp + 8], edx
// 009854a4  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 009854a8  89442410             mov dword ptr [esp + 0x10], eax
// 009854ac  8d442408             lea eax, [esp + 8]
// 009854b0  894c240c             mov dword ptr [esp + 0xc], ecx
// 009854b4  8b4e04               mov ecx, dword ptr [esi + 4]
// 009854b7  50                   push eax
// 009854b8  83c2fe               add edx, -2
// 009854bb  51                   push ecx
// 009854bc  8954241c             mov dword ptr [esp + 0x1c], edx
// 009854c0  ffd7                 call edi
// 009854c2  5f                   pop edi
// 009854c3  5e                   pop esi
// 009854c4  83c410               add esp, 0x10
// 009854c7  c21400               ret 0x14
// library xtp-15.2.1/Source\CommandBars\XTPControl.cpp (function ?OnInvertTracker@CXTPControl@@AAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControl.cpp
