// roc 2007-03 0047a2f0  unit: seg_00470000  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047a2f0
//
// 0047a2f0  8a442404             mov al, byte ptr [esp + 4]
// 0047a2f4  83ec20               sub esp, 0x20
// 0047a2f7  56                   push esi
// 0047a2f8  8bf1                 mov esi, ecx
// 0047a2fa  33c9                 xor ecx, ecx
// 0047a2fc  84c0                 test al, al
// 0047a2fe  0f95c1               setne cl
// 0047a301  3a86ad000000         cmp al, byte ptr [esi + 0xad]
// 0047a307  894e10               mov dword ptr [esi + 0x10], ecx
// 0047a30a  0f8495000000         je 0x47a3a5
// 0047a310  84c0                 test al, al
// 0047a312  8886ad000000         mov byte ptr [esi + 0xad], al
// 0047a318  0f848e000000         je 0x47a3ac
// 0047a31e  8b86e8010000         mov eax, dword ptr [esi + 0x1e8]
// 0047a324  53                   push ebx
// 0047a325  57                   push edi
// 0047a326  8d54240c             lea edx, [esp + 0xc]
// 0047a32a  52                   push edx
// 0047a32b  50                   push eax
// 0047a32c  ff155ced7700         call dword ptr [0x77ed5c]
// 0047a332  db44240c             fild dword ptr [esp + 0xc]
// 0047a336  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0047a33a  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0047a33e  d8461c               fadd dword ptr [esi + 0x1c]
// 0047a341  89becc010000         mov dword ptr [esi + 0x1cc], edi
// 0047a347  899ed0010000         mov dword ptr [esi + 0x1d0], ebx
// 0047a34d  e8ae4e1a00           call 0x61f200
// 0047a352  db442410             fild dword ptr [esp + 0x10]
// 0047a356  8944241c             mov dword ptr [esp + 0x1c], eax
// 0047a35a  d84620               fadd dword ptr [esi + 0x20]
// 0047a35d  e89e4e1a00           call 0x61f200
// 0047a362  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 0047a365  03cf                 add ecx, edi
// 0047a367  894c2430             mov dword ptr [esp + 0x30], ecx
// 0047a36b  db442430             fild dword ptr [esp + 0x30]
// 0047a36f  89442420             mov dword ptr [esp + 0x20], eax
// 0047a373  d8461c               fadd dword ptr [esi + 0x1c]
// 0047a376  e8854e1a00           call 0x61f200
// 0047a37b  8b562c               mov edx, dword ptr [esi + 0x2c]
// 0047a37e  03d3                 add edx, ebx
// 0047a380  89542430             mov dword ptr [esp + 0x30], edx
// 0047a384  db442430             fild dword ptr [esp + 0x30]
// 0047a388  89442424             mov dword ptr [esp + 0x24], eax
// 0047a38c  d84620               fadd dword ptr [esi + 0x20]
// 0047a38f  e86c4e1a00           call 0x61f200
// 0047a394  89442428             mov dword ptr [esp + 0x28], eax
// 0047a398  8d44241c             lea eax, [esp + 0x1c]
// 0047a39c  50                   push eax
// 0047a39d  ff15e8ed7700         call dword ptr [0x77ede8]
// 0047a3a3  5f                   pop edi
// 0047a3a4  5b                   pop ebx
// 0047a3a5  5e                   pop esi
// 0047a3a6  83c420               add esp, 0x20
// 0047a3a9  c20400               ret 4
// 0047a3ac  5e                   pop esi
// 0047a3ad  83c420               add esp, 0x20
// 0047a3b0  c744240400000000     mov dword ptr [esp + 4], 0
// 0047a3b8  ff25e8ed7700         jmp dword ptr [0x77ede8]
// library rbxgs-g3d/GLG3Dcpp\Win32Window.cpp (function ?setInputCapture@Win32Window@G3D@@UAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/Win32Window.cpp
