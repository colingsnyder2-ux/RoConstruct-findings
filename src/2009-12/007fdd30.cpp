// roc 2009-12 007fdd30  unit: CXTPPaintManager  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fdd30
//
// 007fdd30  56                   push esi
// 007fdd31  8bf1                 mov esi, ecx
// 007fdd33  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007fdd37  8b819c000000         mov eax, dword ptr [ecx + 0x9c]
// 007fdd3d  83f8ff               cmp eax, -1
// 007fdd40  750f                 jne 0x7fdd51
// 007fdd42  8b895c010000         mov ecx, dword ptr [ecx + 0x15c]
// 007fdd48  85c9                 test ecx, ecx
// 007fdd4a  7405                 je 0x7fdd51
// 007fdd4c  e85f88ffff           call 0x7f65b0
// 007fdd51  f7d8                 neg eax
// 007fdd53  1bc0                 sbb eax, eax
// 007fdd55  83e0f6               and eax, 0xfffffff6
// 007fdd58  83c00f               add eax, 0xf
// 007fdd5b  50                   push eax
// 007fdd5c  8bce                 mov ecx, esi
// 007fdd5e  e8ddf8ffff           call 0x7fd640
// 007fdd63  5e                   pop esi
// 007fdd64  c20400               ret 4
// copied from an identical function in another client (function ?GetControlEditBackColor@CXTPPaintManager@@UAEKPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPPaintManager.cpp