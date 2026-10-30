// roc 2009-12 007fdee0  unit: CXTPPaintManager  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fdee0
//
// 007fdee0  83ec10               sub esp, 0x10
// 007fdee3  56                   push esi
// 007fdee4  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 007fdee8  8bce                 mov ecx, esi
// 007fdeea  e8a17dffff           call 0x7f5c90
// 007fdeef  83f804               cmp eax, 4
// 007fdef2  751d                 jne 0x7fdf11
// 007fdef4  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 007fdefa  83b9f800000002       cmp dword ptr [ecx + 0xf8], 2
// 007fdf01  740e                 je 0x7fdf11
// 007fdf03  6a01                 push 1
// 007fdf05  8d442408             lea eax, [esp + 8]
// 007fdf09  50                   push eax
// 007fdf0a  e8a1530100           call 0x8132b0
// 007fdf0f  eb11                 jmp 0x7fdf22
// 007fdf11  8b16                 mov edx, dword ptr [esi]
// 007fdf13  8b92cc000000         mov edx, dword ptr [edx + 0xcc]
// 007fdf19  8d44240c             lea eax, [esp + 0xc]
// 007fdf1d  50                   push eax
// 007fdf1e  8bce                 mov ecx, esi
// 007fdf20  ffd2                 call edx
// 007fdf22  8b10                 mov edx, dword ptr [eax]
// 007fdf24  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007fdf28  8b4004               mov eax, dword ptr [eax + 4]
// 007fdf2b  894104               mov dword ptr [ecx + 4], eax
// 007fdf2e  8911                 mov dword ptr [ecx], edx
// 007fdf30  8bc1                 mov eax, ecx
// 007fdf32  5e                   pop esi
// 007fdf33  83c410               add esp, 0x10
// 007fdf36  c20800               ret 8
// copied from an identical function in another client (function ?GetIconSize@CXTPPaintManager@@IAE?AVCSize@@PAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPaintManager.cpp