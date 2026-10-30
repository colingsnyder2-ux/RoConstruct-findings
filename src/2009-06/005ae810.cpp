// roc 2009-06 005ae810  unit: RBX::Mesh  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ae810
//
// 005ae810  55                   push ebp
// 005ae811  8bec                 mov ebp, esp
// 005ae813  51                   push ecx
// 005ae814  894dfc               mov dword ptr [ebp - 4], ecx
// 005ae817  8b45fc               mov eax, dword ptr [ebp - 4]
// 005ae81a  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005ae81d  8908                 mov dword ptr [eax], ecx
// 005ae81f  8b55fc               mov edx, dword ptr [ebp - 4]
// 005ae822  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005ae825  894204               mov dword ptr [edx + 4], eax
// 005ae828  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005ae82b  8b5510               mov edx, dword ptr [ebp + 0x10]
// 005ae82e  895108               mov dword ptr [ecx + 8], edx
// 005ae831  8b4514               mov eax, dword ptr [ebp + 0x14]
// 005ae834  8b08                 mov ecx, dword ptr [eax]
// 005ae836  8b5004               mov edx, dword ptr [eax + 4]
// 005ae839  8b45fc               mov eax, dword ptr [ebp - 4]
// 005ae83c  89480c               mov dword ptr [eax + 0xc], ecx
// 005ae83f  895010               mov dword ptr [eax + 0x10], edx
// 005ae842  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005ae845  8a5518               mov dl, byte ptr [ebp + 0x18]
// 005ae848  885114               mov byte ptr [ecx + 0x14], dl
// 005ae84b  8b45fc               mov eax, dword ptr [ebp - 4]
// 005ae84e  c6401500             mov byte ptr [eax + 0x15], 0
// 005ae852  8b45fc               mov eax, dword ptr [ebp - 4]
// 005ae855  8be5                 mov esp, ebp
// 005ae857  5d                   pop ebp
// 005ae858  c21400               ret 0x14
// copied from an identical function in another client (function ??0_Node@?$_Tree_nod@V?$_Tmap_traits@HHU?$less@H@std@@V?$allocator@U?$pair@$$CBHH@std@@@2@$0A@@std@@@std@@QAE@PAU012@00ABU?$pair@$$CBHH@2@D@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Containment/WmlConvexHull3.cpp