// roc 2008-06 0047ef40  unit: G3D::Win32Window  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047ef40
//
// 0047ef40  8a442404             mov al, byte ptr [esp + 4]
// 0047ef44  83ec20               sub esp, 0x20
// 0047ef47  56                   push esi
// 0047ef48  8bf1                 mov esi, ecx
// 0047ef4a  33c9                 xor ecx, ecx
// 0047ef4c  84c0                 test al, al
// 0047ef4e  0f95c1               setne cl
// 0047ef51  894e10               mov dword ptr [esi + 0x10], ecx
// 0047ef54  3a86ad000000         cmp al, byte ptr [esi + 0xad]
// 0047ef5a  0f8495000000         je 0x47eff5
// 0047ef60  8886ad000000         mov byte ptr [esi + 0xad], al
// 0047ef66  84c0                 test al, al
// 0047ef68  0f848e000000         je 0x47effc
// 0047ef6e  8b86e8010000         mov eax, dword ptr [esi + 0x1e8]
// 0047ef74  53                   push ebx
// 0047ef75  57                   push edi
// 0047ef76  8d54240c             lea edx, [esp + 0xc]
// 0047ef7a  52                   push edx
// 0047ef7b  50                   push eax
// 0047ef7c  ff15342e8000         call dword ptr [0x802e34]
// 0047ef82  db44240c             fild dword ptr [esp + 0xc]
// 0047ef86  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0047ef8a  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0047ef8e  d8461c               fadd dword ptr [esi + 0x1c]
// 0047ef91  89becc010000         mov dword ptr [esi + 0x1cc], edi
// 0047ef97  899ed0010000         mov dword ptr [esi + 0x1d0], ebx
// 0047ef9d  e84e282200           call 0x6a17f0
// 0047efa2  db442410             fild dword ptr [esp + 0x10]
// 0047efa6  8944241c             mov dword ptr [esp + 0x1c], eax
// 0047efaa  d84620               fadd dword ptr [esi + 0x20]
// 0047efad  e83e282200           call 0x6a17f0
// 0047efb2  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 0047efb5  03cf                 add ecx, edi
// 0047efb7  894c2430             mov dword ptr [esp + 0x30], ecx
// 0047efbb  db442430             fild dword ptr [esp + 0x30]
// 0047efbf  89442420             mov dword ptr [esp + 0x20], eax
// 0047efc3  d8461c               fadd dword ptr [esi + 0x1c]
// 0047efc6  e825282200           call 0x6a17f0
// 0047efcb  8b562c               mov edx, dword ptr [esi + 0x2c]
// 0047efce  03d3                 add edx, ebx
// 0047efd0  89542430             mov dword ptr [esp + 0x30], edx
// 0047efd4  db442430             fild dword ptr [esp + 0x30]
// 0047efd8  89442424             mov dword ptr [esp + 0x24], eax
// 0047efdc  d84620               fadd dword ptr [esi + 0x20]
// 0047efdf  e80c282200           call 0x6a17f0
// 0047efe4  89442428             mov dword ptr [esp + 0x28], eax
// 0047efe8  8d44241c             lea eax, [esp + 0x1c]
// 0047efec  50                   push eax
// 0047efed  ff15e42c8000         call dword ptr [0x802ce4]
// 0047eff3  5f                   pop edi
// 0047eff4  5b                   pop ebx
// 0047eff5  5e                   pop esi
// 0047eff6  83c420               add esp, 0x20
// 0047eff9  c20400               ret 4
// 0047effc  5e                   pop esi
// 0047effd  83c420               add esp, 0x20
// 0047f000  c744240400000000     mov dword ptr [esp + 4], 0
// 0047f008  ff25e42c8000         jmp dword ptr [0x802ce4]
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?setInputCapture@Win32Window@G3D@@UAEX_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
