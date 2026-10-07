// roc 2007-08 0047b960  unit: G3D::Win32Window  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047b960
//
// 0047b960  8a442404             mov al, byte ptr [esp + 4]
// 0047b964  83ec20               sub esp, 0x20
// 0047b967  56                   push esi
// 0047b968  8bf1                 mov esi, ecx
// 0047b96a  33c9                 xor ecx, ecx
// 0047b96c  84c0                 test al, al
// 0047b96e  0f95c1               setne cl
// 0047b971  3a86ad000000         cmp al, byte ptr [esi + 0xad]
// 0047b977  894e10               mov dword ptr [esi + 0x10], ecx
// 0047b97a  0f8495000000         je 0x47ba15
// 0047b980  84c0                 test al, al
// 0047b982  8886ad000000         mov byte ptr [esi + 0xad], al
// 0047b988  0f848e000000         je 0x47ba1c
// 0047b98e  8b86e8010000         mov eax, dword ptr [esi + 0x1e8]
// 0047b994  53                   push ebx
// 0047b995  57                   push edi
// 0047b996  8d54240c             lea edx, [esp + 0xc]
// 0047b99a  52                   push edx
// 0047b99b  50                   push eax
// 0047b99c  ff15d4ed7700         call dword ptr [0x77edd4]
// 0047b9a2  db44240c             fild dword ptr [esp + 0xc]
// 0047b9a6  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0047b9aa  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0047b9ae  d8461c               fadd dword ptr [esi + 0x1c]
// 0047b9b1  89becc010000         mov dword ptr [esi + 0x1cc], edi
// 0047b9b7  899ed0010000         mov dword ptr [esi + 0x1d0], ebx
// 0047b9bd  e89e531b00           call 0x630d60
// 0047b9c2  db442410             fild dword ptr [esp + 0x10]
// 0047b9c6  8944241c             mov dword ptr [esp + 0x1c], eax
// 0047b9ca  d84620               fadd dword ptr [esi + 0x20]
// 0047b9cd  e88e531b00           call 0x630d60
// 0047b9d2  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 0047b9d5  03cf                 add ecx, edi
// 0047b9d7  894c2430             mov dword ptr [esp + 0x30], ecx
// 0047b9db  db442430             fild dword ptr [esp + 0x30]
// 0047b9df  89442420             mov dword ptr [esp + 0x20], eax
// 0047b9e3  d8461c               fadd dword ptr [esi + 0x1c]
// 0047b9e6  e875531b00           call 0x630d60
// 0047b9eb  8b562c               mov edx, dword ptr [esi + 0x2c]
// 0047b9ee  03d3                 add edx, ebx
// 0047b9f0  89542430             mov dword ptr [esp + 0x30], edx
// 0047b9f4  db442430             fild dword ptr [esp + 0x30]
// 0047b9f8  89442424             mov dword ptr [esp + 0x24], eax
// 0047b9fc  d84620               fadd dword ptr [esi + 0x20]
// 0047b9ff  e85c531b00           call 0x630d60
// 0047ba04  89442428             mov dword ptr [esp + 0x28], eax
// 0047ba08  8d44241c             lea eax, [esp + 0x1c]
// 0047ba0c  50                   push eax
// 0047ba0d  ff1548ed7700         call dword ptr [0x77ed48]
// 0047ba13  5f                   pop edi
// 0047ba14  5b                   pop ebx
// 0047ba15  5e                   pop esi
// 0047ba16  83c420               add esp, 0x20
// 0047ba19  c20400               ret 4
// 0047ba1c  5e                   pop esi
// 0047ba1d  83c420               add esp, 0x20
// 0047ba20  c744240400000000     mov dword ptr [esp + 4], 0
// 0047ba28  ff2548ed7700         jmp dword ptr [0x77ed48]
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?setInputCapture@Win32Window@G3D@@UAEX_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
