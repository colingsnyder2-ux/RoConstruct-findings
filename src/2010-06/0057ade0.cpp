// from server: 100% by auto
// roc 2010-06 0057ade0  unit: seg_00570000  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0057ade0
//
// 0057ade0  8b4618               mov eax, dword ptr [esi + 0x18]
// 0057ade3  8b08                 mov ecx, dword ptr [eax]
// 0057ade5  c601ff               mov byte ptr [ecx], 0xff
// 0057ade8  ff00                 inc dword ptr [eax]
// 0057adea  834004ff             add dword ptr [eax + 4], -1
// 0057adee  7520                 jne 0x57ae10
// 0057adf0  8b500c               mov edx, dword ptr [eax + 0xc]
// 0057adf3  56                   push esi
// 0057adf4  ffd2                 call edx
// 0057adf6  83c404               add esp, 4
// 0057adf9  84c0                 test al, al
// 0057adfb  7513                 jne 0x57ae10
// 0057adfd  8b06                 mov eax, dword ptr [esi]
// 0057adff  c7401418000000       mov dword ptr [eax + 0x14], 0x18
// 0057ae06  8b0e                 mov ecx, dword ptr [esi]
// 0057ae08  8b11                 mov edx, dword ptr [ecx]
// 0057ae0a  56                   push esi
// 0057ae0b  ffd2                 call edx
// 0057ae0d  83c404               add esp, 4
// 0057ae10  8b4618               mov eax, dword ptr [esi + 0x18]
// 0057ae13  8b08                 mov ecx, dword ptr [eax]
// 0057ae15  8a542404             mov dl, byte ptr [esp + 4]
// 0057ae19  8811                 mov byte ptr [ecx], dl
// 0057ae1b  ff00                 inc dword ptr [eax]
// 0057ae1d  834004ff             add dword ptr [eax + 4], -1
// 0057ae21  7520                 jne 0x57ae43
// 0057ae23  8b400c               mov eax, dword ptr [eax + 0xc]
// 0057ae26  56                   push esi
// 0057ae27  ffd0                 call eax
// 0057ae29  83c404               add esp, 4
// 0057ae2c  84c0                 test al, al
// 0057ae2e  7513                 jne 0x57ae43
// 0057ae30  8b0e                 mov ecx, dword ptr [esi]
// 0057ae32  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 0057ae39  8b16                 mov edx, dword ptr [esi]
// 0057ae3b  8b02                 mov eax, dword ptr [edx]
// 0057ae3d  89742404             mov dword ptr [esp + 4], esi
// 0057ae41  ffe0                 jmp eax
// 0057ae43  c3                   ret 
// library jpeg-6b/jcmarker.c (function _emit_marker)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
