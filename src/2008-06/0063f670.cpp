// roc 2008-06 0063f670  unit: RBX::ResizeTool  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063f670
//
// 0063f670  56                   push esi
// 0063f671  57                   push edi
// 0063f672  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0063f676  57                   push edi
// 0063f677  8bf1                 mov esi, ecx
// 0063f679  e8c2f9ffff           call 0x63f040
// 0063f67e  8b4624               mov eax, dword ptr [esi + 0x24]
// 0063f681  33c9                 xor ecx, ecx
// 0063f683  3bc1                 cmp eax, ecx
// 0063f685  7405                 je 0x63f68c
// 0063f687  394804               cmp dword ptr [eax + 4], ecx
// 0063f68a  750d                 jne 0x63f699
// 0063f68c  57                   push edi
// 0063f68d  8bce                 mov ecx, esi
// 0063f68f  e8ec80fdff           call 0x617780
// 0063f694  5f                   pop edi
// 0063f695  5e                   pop esi
// 0063f696  c20400               ret 4
// 0063f699  8b4708               mov eax, dword ptr [edi + 8]
// 0063f69c  8b16                 mov edx, dword ptr [esi]
// 0063f69e  89463c               mov dword ptr [esi + 0x3c], eax
// 0063f6a1  8b4224               mov eax, dword ptr [edx + 0x24]
// 0063f6a4  894e40               mov dword ptr [esi + 0x40], ecx
// 0063f6a7  894e44               mov dword ptr [esi + 0x44], ecx
// 0063f6aa  8bce                 mov ecx, esi
// 0063f6ac  c6462801             mov byte ptr [esi + 0x28], 1
// 0063f6b0  ffd0                 call eax
// 0063f6b2  5f                   pop edi
// 0063f6b3  8bc6                 mov eax, esi
// 0063f6b5  5e                   pop esi
// 0063f6b6  c20400               ret 4
// library rbxgs/roc_unit_4329760619cd676f.cpp (function ?onMouseDown@ResizeTool@RBX@@MAEPAVMouseCommand@2@ABVUIEvent@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_4329760619cd676f.cpp
