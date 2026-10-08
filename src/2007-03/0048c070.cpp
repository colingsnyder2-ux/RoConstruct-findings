// roc 2007-03 0048c070  unit: seg_00480000  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0048c070
//
// 0048c070  56                   push esi
// 0048c071  6a20                 push 0x20
// 0048c073  8bf1                 mov esi, ecx
// 0048c075  e88e201900           call 0x61e108
// 0048c07a  33d2                 xor edx, edx
// 0048c07c  83c404               add esp, 4
// 0048c07f  3bc2                 cmp eax, edx
// 0048c081  741a                 je 0x48c09d
// 0048c083  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0048c087  8910                 mov dword ptr [eax], edx
// 0048c089  895004               mov dword ptr [eax + 4], edx
// 0048c08c  895008               mov dword ptr [eax + 8], edx
// 0048c08f  89480c               mov dword ptr [eax + 0xc], ecx
// 0048c092  895010               mov dword ptr [eax + 0x10], edx
// 0048c095  895018               mov dword ptr [eax + 0x18], edx
// 0048c098  89501c               mov dword ptr [eax + 0x1c], edx
// 0048c09b  eb02                 jmp 0x48c09f
// 0048c09d  33c0                 xor eax, eax
// 0048c09f  8b4e08               mov ecx, dword ptr [esi + 8]
// 0048c0a2  3bca                 cmp ecx, edx
// 0048c0a4  750a                 jne 0x48c0b0
// 0048c0a6  894604               mov dword ptr [esi + 4], eax
// 0048c0a9  894608               mov dword ptr [esi + 8], eax
// 0048c0ac  5e                   pop esi
// 0048c0ad  c20400               ret 4
// 0048c0b0  8901                 mov dword ptr [ecx], eax
// 0048c0b2  894608               mov dword ptr [esi + 8], eax
// 0048c0b5  5e                   pop esi
// 0048c0b6  c20400               ret 4
// library rbxgs/v8tree\Instance.cpp (function ?addChild@XmlElement@@QAEPAV1@ABVName@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
