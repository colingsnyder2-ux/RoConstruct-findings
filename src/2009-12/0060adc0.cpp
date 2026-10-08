// roc 2009-12 0060adc0  unit: seg_00600000  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0060adc0
//
// 0060adc0  56                   push esi
// 0060adc1  8b742408             mov esi, dword ptr [esp + 8]
// 0060adc5  837e1464             cmp dword ptr [esi + 0x14], 0x64
// 0060adc9  741b                 je 0x60ade6
// 0060adcb  8b06                 mov eax, dword ptr [esi]
// 0060adcd  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 0060add4  8b0e                 mov ecx, dword ptr [esi]
// 0060add6  8b5614               mov edx, dword ptr [esi + 0x14]
// 0060add9  895118               mov dword ptr [ecx + 0x18], edx
// 0060addc  8b06                 mov eax, dword ptr [esi]
// 0060adde  8b08                 mov ecx, dword ptr [eax]
// 0060ade0  56                   push esi
// 0060ade1  ffd1                 call ecx
// 0060ade3  83c404               add esp, 4
// 0060ade6  807c240c00           cmp byte ptr [esp + 0xc], 0
// 0060adeb  740b                 je 0x60adf8
// 0060aded  6a00                 push 0
// 0060adef  56                   push esi
// 0060adf0  e83bfeffff           call 0x60ac30
// 0060adf5  83c408               add esp, 8
// 0060adf8  8b16                 mov edx, dword ptr [esi]
// 0060adfa  8b4210               mov eax, dword ptr [edx + 0x10]
// 0060adfd  56                   push esi
// 0060adfe  ffd0                 call eax
// 0060ae00  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0060ae03  8b5108               mov edx, dword ptr [ecx + 8]
// 0060ae06  56                   push esi
// 0060ae07  ffd2                 call edx
// 0060ae09  56                   push esi
// 0060ae0a  e881f50000           call 0x61a390
// 0060ae0f  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 0060ae15  8b08                 mov ecx, dword ptr [eax]
// 0060ae17  56                   push esi
// 0060ae18  ffd1                 call ecx
// 0060ae1a  33d2                 xor edx, edx
// 0060ae1c  83c410               add esp, 0x10
// 0060ae1f  3896b0000000         cmp byte ptr [esi + 0xb0], dl
// 0060ae25  c786d000000000000000 mov dword ptr [esi + 0xd0], 0
// 0060ae2f  0f95c2               setne dl
// 0060ae32  83c265               add edx, 0x65
// 0060ae35  895614               mov dword ptr [esi + 0x14], edx
// 0060ae38  5e                   pop esi
// 0060ae39  c3                   ret 
// library jpeg-6b/jcapistd.c (function _jpeg_start_compress)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcapistd.c
