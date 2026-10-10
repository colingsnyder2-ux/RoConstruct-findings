// roc 2008-06 0079ddb0  unit: CXTPTabPaintManager::CColorSetWinXP  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079ddb0
//
// 0079ddb0  56                   push esi
// 0079ddb1  8bf1                 mov esi, ecx
// 0079ddb3  57                   push edi
// 0079ddb4  8dbe14020000         lea edi, [esi + 0x214]
// 0079ddba  8bcf                 mov ecx, edi
// 0079ddbc  e86fa6f7ff           call 0x718430
// 0079ddc1  85c0                 test eax, eax
// 0079ddc3  751b                 jne 0x79dde0
// 0079ddc5  8b442414             mov eax, dword ptr [esp + 0x14]
// 0079ddc9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0079ddcd  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0079ddd1  50                   push eax
// 0079ddd2  51                   push ecx
// 0079ddd3  52                   push edx
// 0079ddd4  8bce                 mov ecx, esi
// 0079ddd6  e885ebffff           call 0x79c960
// 0079dddb  5f                   pop edi
// 0079dddc  5e                   pop esi
// 0079dddd  c20c00               ret 0xc
// 0079dde0  8b442410             mov eax, dword ptr [esp + 0x10]
// 0079dde4  83782000             cmp dword ptr [eax + 0x20], 0
// 0079dde8  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0079ddec  7438                 je 0x79de26
// 0079ddee  83782400             cmp dword ptr [eax + 0x24], 0
// 0079ddf2  7407                 je 0x79ddfb
// 0079ddf4  b903000000           mov ecx, 3
// 0079ddf9  eb0e                 jmp 0x79de09
// 0079ddfb  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0079ddfe  33d2                 xor edx, edx
// 0079de00  394110               cmp dword ptr [ecx + 0x10], eax
// 0079de03  0f94c2               sete dl
// 0079de06  42                   inc edx
// 0079de07  8bca                 mov ecx, edx
// 0079de09  85f6                 test esi, esi
// 0079de0b  7504                 jne 0x79de11
// 0079de0d  33c0                 xor eax, eax
// 0079de0f  eb03                 jmp 0x79de14
// 0079de11  8b4604               mov eax, dword ptr [esi + 4]
// 0079de14  8b542414             mov edx, dword ptr [esp + 0x14]
// 0079de18  6a00                 push 0
// 0079de1a  52                   push edx
// 0079de1b  51                   push ecx
// 0079de1c  6a01                 push 1
// 0079de1e  50                   push eax
// 0079de1f  8bcf                 mov ecx, edi
// 0079de21  e88aa2f7ff           call 0x7180b0
// 0079de26  e8151ff4ff           call 0x6dfd40
// 0079de2b  6a12                 push 0x12
// 0079de2d  8bc8                 mov ecx, eax
// 0079de2f  e8ec16f4ff           call 0x6df520
// 0079de34  8b16                 mov edx, dword ptr [esi]
// 0079de36  50                   push eax
// 0079de37  8b4238               mov eax, dword ptr [edx + 0x38]
// 0079de3a  8bce                 mov ecx, esi
// 0079de3c  ffd0                 call eax
// 0079de3e  5f                   pop edi
// 0079de3f  5e                   pop esi
// 0079de40  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?FillNavigateButton@CColorSetWinXP@CXTPTabPaintManager@@UAEXPAVCDC@@PAVCXTPTabManagerNavigateButton@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManagerColors.cpp
