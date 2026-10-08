// roc 2007-03 0047ae60  unit: seg_00470000  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047ae60
//
// 0047ae60  53                   push ebx
// 0047ae61  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0047ae65  56                   push esi
// 0047ae66  8bf1                 mov esi, ecx
// 0047ae68  8b06                 mov eax, dword ptr [esi]
// 0047ae6a  57                   push edi
// 0047ae6b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0047ae6f  3bf8                 cmp edi, eax
// 0047ae71  720a                 jb 0x47ae7d
// 0047ae73  8b4e04               mov ecx, dword ptr [esi + 4]
// 0047ae76  8d1488               lea edx, [eax + ecx*4]
// 0047ae79  3bfa                 cmp edi, edx
// 0047ae7b  7268                 jb 0x47aee5
// 0047ae7d  3bd8                 cmp ebx, eax
// 0047ae7f  720a                 jb 0x47ae8b
// 0047ae81  8b4e04               mov ecx, dword ptr [esi + 4]
// 0047ae84  8d1488               lea edx, [eax + ecx*4]
// 0047ae87  3bda                 cmp ebx, edx
// 0047ae89  725a                 jb 0x47aee5
// 0047ae8b  8b4e04               mov ecx, dword ptr [esi + 4]
// 0047ae8e  8d5101               lea edx, [ecx + 1]
// 0047ae91  3b5608               cmp edx, dword ptr [esi + 8]
// 0047ae94  7d26                 jge 0x47aebc
// 0047ae96  8d0488               lea eax, [eax + ecx*4]
// 0047ae99  85c0                 test eax, eax
// 0047ae9b  7404                 je 0x47aea1
// 0047ae9d  d907                 fld dword ptr [edi]
// 0047ae9f  d918                 fstp dword ptr [eax]
// 0047aea1  8b4604               mov eax, dword ptr [esi + 4]
// 0047aea4  8b0e                 mov ecx, dword ptr [esi]
// 0047aea6  8d448104             lea eax, [ecx + eax*4 + 4]
// 0047aeaa  85c0                 test eax, eax
// 0047aeac  7404                 je 0x47aeb2
// 0047aeae  d903                 fld dword ptr [ebx]
// 0047aeb0  d918                 fstp dword ptr [eax]
// 0047aeb2  83460402             add dword ptr [esi + 4], 2
// 0047aeb6  5f                   pop edi
// 0047aeb7  5e                   pop esi
// 0047aeb8  5b                   pop ebx
// 0047aeb9  c20800               ret 8
// 0047aebc  83c102               add ecx, 2
// 0047aebf  6a00                 push 0
// 0047aec1  51                   push ecx
// 0047aec2  8bce                 mov ecx, esi
// 0047aec4  e887feffff           call 0x47ad50
// 0047aec9  d907                 fld dword ptr [edi]
// 0047aecb  8b5604               mov edx, dword ptr [esi + 4]
// 0047aece  8b06                 mov eax, dword ptr [esi]
// 0047aed0  d95c90f8             fstp dword ptr [eax + edx*4 - 8]
// 0047aed4  8b4e04               mov ecx, dword ptr [esi + 4]
// 0047aed7  8b16                 mov edx, dword ptr [esi]
// 0047aed9  d903                 fld dword ptr [ebx]
// 0047aedb  5f                   pop edi
// 0047aedc  d95c8afc             fstp dword ptr [edx + ecx*4 - 4]
// 0047aee0  5e                   pop esi
// 0047aee1  5b                   pop ebx
// 0047aee2  c20800               ret 8
// 0047aee5  d907                 fld dword ptr [edi]
// 0047aee7  8d442410             lea eax, [esp + 0x10]
// 0047aeeb  d95c2414             fstp dword ptr [esp + 0x14]
// 0047aeef  50                   push eax
// 0047aef0  d903                 fld dword ptr [ebx]
// 0047aef2  8d4c2418             lea ecx, [esp + 0x18]
// 0047aef6  51                   push ecx
// 0047aef7  d95c2418             fstp dword ptr [esp + 0x18]
// 0047aefb  8bce                 mov ecx, esi
// 0047aefd  e85effffff           call 0x47ae60
// 0047af02  5f                   pop edi
// 0047af03  5e                   pop esi
// 0047af04  5b                   pop ebx
// 0047af05  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\Win32Window.cpp (function ?append@?$Array@M@G3D@@QAEXABM0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/Win32Window.cpp
