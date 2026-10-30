// roc 2012-06 00404780  unit: RBX::Soundscape::VSoundChannel::?$FactoryProduct::Creator  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00404780
//
// 00404780  56                   push esi
// 00404781  57                   push edi
// 00404782  8b3d183cb200         mov edi, dword ptr [0xb23c18]
// 00404788  8bf1                 mov esi, ecx
// 0040478a  8d9b00000000         lea ebx, [ebx]
// 00404790  8b06                 mov eax, dword ptr [esi]
// 00404792  0fbe08               movsx ecx, byte ptr [eax]
// 00404795  83c1f7               add ecx, -9
// 00404798  83f917               cmp ecx, 0x17
// 0040479b  7715                 ja 0x4047b2
// 0040479d  0fb689c0474000       movzx ecx, byte ptr [ecx + 0x4047c0]
// 004047a4  ff248db8474000       jmp dword ptr [ecx*4 + 0x4047b8]
// 004047ab  50                   push eax
// 004047ac  ffd7                 call edi
// 004047ae  8906                 mov dword ptr [esi], eax
// 004047b0  ebde                 jmp 0x404790
// 004047b2  5f                   pop edi
// 004047b3  5e                   pop esi
// 004047b4  c3                   ret 
// 004047b5  8d4900               lea ecx, [ecx]
// 004047b8  ab                   stosd dword ptr es:[edi], eax
// 004047b9  47                   inc edi
// 004047ba  40                   inc eax
// 004047bb  00b247400000         add byte ptr [edx + 0x4047], dh
// 004047c1  0001                 add byte ptr [ecx], al
// 004047c3  0100                 add dword ptr [eax], eax
// 004047c5  0101                 add dword ptr [ecx], eax
// 004047c7  0101                 add dword ptr [ecx], eax
// 004047c9  0101                 add dword ptr [ecx], eax
// 004047cb  0101                 add dword ptr [ecx], eax
// 004047cd  0101                 add dword ptr [ecx], eax
// 004047cf  0101                 add dword ptr [ecx], eax
// 004047d1  0101                 add dword ptr [ecx], eax
// 004047d3  0101                 add dword ptr [ecx], eax
// 004047d5  0101                 add dword ptr [ecx], eax
// copied from an identical function in another client (function ?SkipWhiteSpace@CRegParser@ATL@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: atl-8.0 atl.cpp