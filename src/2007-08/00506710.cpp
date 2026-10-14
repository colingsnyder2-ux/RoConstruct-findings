// roc 2007-08 00506710  unit: seg_00500000  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00506710
//
// 00506710  8b442408             mov eax, dword ptr [esp + 8]
// 00506714  83f807               cmp eax, 7
// 00506717  776c                 ja 0x506785
// 00506719  ff248588675000       jmp dword ptr [eax*4 + 0x506788]
// 00506720  8b442404             mov eax, dword ptr [esp + 4]
// 00506724  50                   push eax
// 00506725  e886fbffff           call 0x5062b0
// 0050672a  c20800               ret 8
// 0050672d  8b542404             mov edx, dword ptr [esp + 4]
// 00506731  52                   push edx
// 00506732  e8c9edffff           call 0x505500
// 00506737  c20800               ret 8
// 0050673a  8b442404             mov eax, dword ptr [esp + 4]
// 0050673e  50                   push eax
// 0050673f  e81cd9ffff           call 0x504060
// 00506744  c20800               ret 8
// 00506747  8b542404             mov edx, dword ptr [esp + 4]
// 0050674b  52                   push edx
// 0050674c  e83fd6ffff           call 0x503d90
// 00506751  c20800               ret 8
// 00506754  8b442404             mov eax, dword ptr [esp + 4]
// 00506758  50                   push eax
// 00506759  e8b2c5ffff           call 0x502d10
// 0050675e  c20800               ret 8
// 00506761  8b542404             mov edx, dword ptr [esp + 4]
// 00506765  52                   push edx
// 00506766  e8f5caffff           call 0x503260
// 0050676b  c20800               ret 8
// 0050676e  8b442404             mov eax, dword ptr [esp + 4]
// 00506772  50                   push eax
// 00506773  e8e8f0ffff           call 0x505860
// 00506778  c20800               ret 8
// 0050677b  8b542404             mov edx, dword ptr [esp + 4]
// 0050677f  52                   push edx
// 00506780  e8cbe0ffff           call 0x504850
// 00506785  c20800               ret 8
// 00506788  47                   inc edi
// 00506789  6750                 push eax
// 0050678b  006167               add byte ptr [ecx + 0x67], ah
// 0050678e  50                   push eax
// 0050678f  00546750             add byte ptr [edi + 0x50], dl
// 00506793  007b67               add byte ptr [ebx + 0x67], bh
// 00506796  50                   push eax
// 00506797  006e67               add byte ptr [esi + 0x67], ch
// 0050679a  50                   push eax
// 0050679b  003a                 add byte ptr [edx], bh
// 0050679d  6750                 push eax
// 0050679f  0020                 add byte ptr [eax], ah
// 005067a1  6750                 push eax
// library g3d-6.09-rbx2008/G3Dcpp\GImage.cpp (function ?decode@GImage@G3D@@AAEXAAVBinaryInput@2@W4Format@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GImage.cpp
