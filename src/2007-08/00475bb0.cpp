// roc 2007-08 00475bb0  unit: CInstanceRecord::CNameItem  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00475bb0
//
// 00475bb0  56                   push esi
// 00475bb1  8b742408             mov esi, dword ptr [esp + 8]
// 00475bb5  b801000000           mov eax, 1
// 00475bba  014174               add dword ptr [ecx + 0x74], eax
// 00475bbd  8b16                 mov edx, dword ptr [esi]
// 00475bbf  3b91e8030000         cmp edx, dword ptr [ecx + 0x3e8]
// 00475bc5  57                   push edi
// 00475bc6  8db9e8030000         lea edi, [ecx + 0x3e8]
// 00475bcc  743b                 je 0x475c09
// 00475bce  01416c               add dword ptr [ecx + 0x6c], eax
// 00475bd1  833e00               cmp dword ptr [esi], 0
// 00475bd4  750e                 jne 0x475be4
// 00475bd6  c781e403000006000000 mov dword ptr [ecx + 0x3e4], 6
// 00475be0  6a00                 push 0
// 00475be2  eb10                 jmp 0x475bf4
// 00475be4  c781e40300000b000000 mov dword ptr [ecx + 0x3e4], 0xb
// 00475bee  8b06                 mov eax, dword ptr [esi]
// 00475bf0  8b481c               mov ecx, dword ptr [eax + 0x1c]
// 00475bf3  51                   push ecx
// 00475bf4  68408d0000           push 0x8d40
// 00475bf9  ff15ccda8b00         call dword ptr [0x8bdacc]
// 00475bff  8b16                 mov edx, dword ptr [esi]
// 00475c01  52                   push edx
// 00475c02  8bcf                 mov ecx, edi
// 00475c04  e867f3ffff           call 0x474f70
// 00475c09  5f                   pop edi
// 00475c0a  5e                   pop esi
// 00475c0b  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setFramebuffer@RenderDevice@G3D@@QAEXABV?$ReferenceCountedPointer@VFramebuffer@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
