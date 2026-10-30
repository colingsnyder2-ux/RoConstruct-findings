// roc 2009-12 008873e0  unit: XTPPaintThemes::CXTPNativeXPTheme  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008873e0
//
// 008873e0  83ec10               sub esp, 0x10
// 008873e3  56                   push esi
// 008873e4  57                   push edi
// 008873e5  8bf9                 mov edi, ecx
// 008873e7  e824f8ffff           call 0x886c10
// 008873ec  85c0                 test eax, eax
// 008873ee  7525                 jne 0x887415
// 008873f0  8b442428             mov eax, dword ptr [esp + 0x28]
// 008873f4  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008873f8  8b542420             mov edx, dword ptr [esp + 0x20]
// 008873fc  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00887400  50                   push eax
// 00887401  51                   push ecx
// 00887402  52                   push edx
// 00887403  56                   push esi
// 00887404  8bcf                 mov ecx, edi
// 00887406  e8456affff           call 0x87de50
// 0088740b  5f                   pop edi
// 0088740c  8bc6                 mov eax, esi
// 0088740e  5e                   pop esi
// 0088740f  83c410               add esp, 0x10
// 00887412  c21000               ret 0x10
// 00887415  8b8710010000         mov eax, dword ptr [edi + 0x110]
// 0088741b  8d7004               lea esi, [eax + 4]
// 0088741e  83fe16               cmp esi, 0x16
// 00887421  7d05                 jge 0x887428
// 00887423  be16000000           mov esi, 0x16
// 00887428  8b442420             mov eax, dword ptr [esp + 0x20]
// 0088742c  53                   push ebx
// 0088742d  bb08000000           mov ebx, 8
// 00887432  85c0                 test eax, eax
// 00887434  7439                 je 0x88746f
// 00887436  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 0088743b  7432                 je 0x88746f
// 0088743d  8b4004               mov eax, dword ptr [eax + 4]
// 00887440  6a00                 push 0
// 00887442  8d4c2410             lea ecx, [esp + 0x10]
// 00887446  51                   push ecx
// 00887447  6a01                 push 1
// 00887449  6a01                 push 1
// 0088744b  50                   push eax
// 0088744c  8d8f60040000         lea ecx, [edi + 0x460]
// 00887452  c744242002000000     mov dword ptr [esp + 0x20], 2
// 0088745a  c744242403000000     mov dword ptr [esp + 0x24], 3
// 00887462  895c2428             mov dword ptr [esp + 0x28], ebx
// 00887466  8974242c             mov dword ptr [esp + 0x2c], esi
// 0088746a  e8d143feff           call 0x86b840
// 0088746f  8b442420             mov eax, dword ptr [esp + 0x20]
// 00887473  8918                 mov dword ptr [eax], ebx
// 00887475  5b                   pop ebx
// 00887476  5f                   pop edi
// 00887477  897004               mov dword ptr [eax + 4], esi
// 0088747a  5e                   pop esi
// 0088747b  83c410               add esp, 0x10
// 0088747e  c21000               ret 0x10
// copied from an identical function in another client (function ?DrawDialogBarGripper@CXTPNativeXPTheme@XTPPaintThemes@@MAE?AVCSize@@PAVCDC@@PAVCXTPDialogBar@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPNativeXPTheme.cpp