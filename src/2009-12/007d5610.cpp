// roc 2009-12 007d5610  unit: seg_007d0000  size: 567 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007d5610
//
// 007d5610  83ec50               sub esp, 0x50
// 007d5613  53                   push ebx
// 007d5614  55                   push ebp
// 007d5615  57                   push edi
// 007d5616  8b7e3c               mov edi, dword ptr [esi + 0x3c]
// 007d5619  8b4f04               mov ecx, dword ptr [edi + 4]
// 007d561c  8b4708               mov eax, dword ptr [edi + 8]
// 007d561f  8b1e                 mov ebx, dword ptr [esi]
// 007d5621  41                   inc ecx
// 007d5622  3bc8                 cmp ecx, eax
// 007d5624  7676                 jbe 0x7d569c
// 007d5626  3dfeffff7f           cmp eax, 0x7ffffffe
// 007d562b  723d                 jb 0x7d566a
// 007d562d  8b5640               mov edx, dword ptr [esi + 0x40]
// 007d5630  6a50                 push 0x50
// 007d5632  83c210               add edx, 0x10
// 007d5635  52                   push edx
// 007d5636  8d442414             lea eax, [esp + 0x14]
// 007d563a  50                   push eax
// 007d563b  e8604ffcff           call 0x79a5a0
// 007d5640  8b4e04               mov ecx, dword ptr [esi + 4]
// 007d5643  8b4634               mov eax, dword ptr [esi + 0x34]
// 007d5646  68b8f39e00           push 0x9ef3b8
// 007d564b  51                   push ecx
// 007d564c  8d542420             lea edx, [esp + 0x20]
// 007d5650  52                   push edx
// 007d5651  68b4ab9e00           push 0x9eabb4
// 007d5656  50                   push eax
// 007d5657  e8244ffcff           call 0x79a580
// 007d565c  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 007d565f  6a03                 push 3
// 007d5661  51                   push ecx
// 007d5662  e8e921fcff           call 0x797850
// 007d5667  83c428               add esp, 0x28
// 007d566a  8b4708               mov eax, dword ptr [edi + 8]
// 007d566d  8d2c00               lea ebp, [eax + eax]
// 007d5670  8d5501               lea edx, [ebp + 1]
// 007d5673  83fafd               cmp edx, -3
// 007d5676  7713                 ja 0x7d568b
// 007d5678  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 007d567b  55                   push ebp
// 007d567c  50                   push eax
// 007d567d  8b07                 mov eax, dword ptr [edi]
// 007d567f  50                   push eax
// 007d5680  51                   push ecx
// 007d5681  e82ac1ffff           call 0x7d17b0
// 007d5686  83c410               add esp, 0x10
// 007d5689  eb0c                 jmp 0x7d5697
// 007d568b  8b5634               mov edx, dword ptr [esi + 0x34]
// 007d568e  52                   push edx
// 007d568f  e8fcc0ffff           call 0x7d1790
// 007d5694  83c404               add esp, 4
// 007d5697  8907                 mov dword ptr [edi], eax
// 007d5699  896f08               mov dword ptr [edi + 8], ebp
// 007d569c  8b4f04               mov ecx, dword ptr [edi + 4]
// 007d569f  8b07                 mov eax, dword ptr [edi]
// 007d56a1  881c08               mov byte ptr [eax + ecx], bl
// 007d56a4  ff4704               inc dword ptr [edi + 4]
// 007d56a7  8b4638               mov eax, dword ptr [esi + 0x38]
// 007d56aa  8b08                 mov ecx, dword ptr [eax]
// 007d56ac  8d51ff               lea edx, [ecx - 1]
// 007d56af  8910                 mov dword ptr [eax], edx
// 007d56b1  85c9                 test ecx, ecx
// 007d56b3  760f                 jbe 0x7d56c4
// 007d56b5  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 007d56b8  8b5104               mov edx, dword ptr [ecx + 4]
// 007d56bb  0fb602               movzx eax, byte ptr [edx]
// 007d56be  42                   inc edx
// 007d56bf  895104               mov dword ptr [ecx + 4], edx
// 007d56c2  eb0c                 jmp 0x7d56d0
// 007d56c4  8b4638               mov eax, dword ptr [esi + 0x38]
// 007d56c7  50                   push eax
// 007d56c8  e803baffff           call 0x7d10d0
// 007d56cd  83c404               add esp, 4
// 007d56d0  50                   push eax
// 007d56d1  8906                 mov dword ptr [esi], eax
// 007d56d3  ff15dcb89800         call dword ptr [0x98b8dc]
// 007d56d9  83c404               add esp, 4
// 007d56dc  85c0                 test eax, eax
// 007d56de  0f8532ffffff         jne 0x7d5616
// 007d56e4  833e2e               cmp dword ptr [esi], 0x2e
// 007d56e7  0f8429ffffff         je 0x7d5616
// 007d56ed  b928f49e00           mov ecx, 0x9ef428
// 007d56f2  8bc6                 mov eax, esi
// 007d56f4  e8d7fdffff           call 0x7d54d0
// 007d56f9  85c0                 test eax, eax
// 007d56fb  7413                 je 0x7d5710
// 007d56fd  b924f49e00           mov ecx, 0x9ef424
// 007d5702  8bc6                 mov eax, esi
// 007d5704  e8c7fdffff           call 0x7d54d0
// 007d5709  8da42400000000       lea esp, [esp]
// 007d5710  8b0e                 mov ecx, dword ptr [esi]
// 007d5712  51                   push ecx
// 007d5713  ff1554b99800         call dword ptr [0x98b954]
// 007d5719  83c404               add esp, 4
// 007d571c  85c0                 test eax, eax
// 007d571e  7509                 jne 0x7d5729
// 007d5720  833e5f               cmp dword ptr [esi], 0x5f
// 007d5723  0f85c6000000         jne 0x7d57ef
// 007d5729  8b7e3c               mov edi, dword ptr [esi + 0x3c]
// 007d572c  8b5704               mov edx, dword ptr [edi + 4]
// 007d572f  8b4708               mov eax, dword ptr [edi + 8]
// 007d5732  8b1e                 mov ebx, dword ptr [esi]
// 007d5734  42                   inc edx
// 007d5735  3bd0                 cmp edx, eax
// 007d5737  7676                 jbe 0x7d57af
// 007d5739  3dfeffff7f           cmp eax, 0x7ffffffe
// 007d573e  723d                 jb 0x7d577d
// 007d5740  8b4640               mov eax, dword ptr [esi + 0x40]
// 007d5743  6a50                 push 0x50
// 007d5745  83c010               add eax, 0x10
// 007d5748  50                   push eax
// 007d5749  8d4c2414             lea ecx, [esp + 0x14]
// 007d574d  51                   push ecx
// 007d574e  e84d4efcff           call 0x79a5a0
// 007d5753  8b5604               mov edx, dword ptr [esi + 4]
// 007d5756  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 007d5759  68b8f39e00           push 0x9ef3b8
// 007d575e  52                   push edx
// 007d575f  8d442420             lea eax, [esp + 0x20]
// 007d5763  50                   push eax
// 007d5764  68b4ab9e00           push 0x9eabb4
// 007d5769  51                   push ecx
// 007d576a  e8114efcff           call 0x79a580
// 007d576f  8b5634               mov edx, dword ptr [esi + 0x34]
// 007d5772  6a03                 push 3
// 007d5774  52                   push edx
// 007d5775  e8d620fcff           call 0x797850
// 007d577a  83c428               add esp, 0x28
// 007d577d  8b4708               mov eax, dword ptr [edi + 8]
// 007d5780  8d2c00               lea ebp, [eax + eax]
// 007d5783  8d4d01               lea ecx, [ebp + 1]
// 007d5786  83f9fd               cmp ecx, -3
// 007d5789  7713                 ja 0x7d579e
// 007d578b  8b17                 mov edx, dword ptr [edi]
// 007d578d  55                   push ebp
// 007d578e  50                   push eax
// 007d578f  8b4634               mov eax, dword ptr [esi + 0x34]
// 007d5792  52                   push edx
// 007d5793  50                   push eax
// 007d5794  e817c0ffff           call 0x7d17b0
// 007d5799  83c410               add esp, 0x10
// 007d579c  eb0c                 jmp 0x7d57aa
// 007d579e  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 007d57a1  51                   push ecx
// 007d57a2  e8e9bfffff           call 0x7d1790
// 007d57a7  83c404               add esp, 4
// 007d57aa  8907                 mov dword ptr [edi], eax
// 007d57ac  896f08               mov dword ptr [edi + 8], ebp
// 007d57af  8b5704               mov edx, dword ptr [edi + 4]
// 007d57b2  8b07                 mov eax, dword ptr [edi]
// 007d57b4  881c02               mov byte ptr [edx + eax], bl
// 007d57b7  ff4704               inc dword ptr [edi + 4]
// 007d57ba  8b4638               mov eax, dword ptr [esi + 0x38]
// 007d57bd  8b08                 mov ecx, dword ptr [eax]
// 007d57bf  8d51ff               lea edx, [ecx - 1]
// 007d57c2  8910                 mov dword ptr [eax], edx
// 007d57c4  85c9                 test ecx, ecx
// 007d57c6  7614                 jbe 0x7d57dc
// 007d57c8  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 007d57cb  8b5104               mov edx, dword ptr [ecx + 4]
// 007d57ce  0fb602               movzx eax, byte ptr [edx]
// 007d57d1  42                   inc edx
// 007d57d2  895104               mov dword ptr [ecx + 4], edx
// 007d57d5  8906                 mov dword ptr [esi], eax
// 007d57d7  e934ffffff           jmp 0x7d5710
// 007d57dc  8b4638               mov eax, dword ptr [esi + 0x38]
// 007d57df  50                   push eax
// 007d57e0  e8ebb8ffff           call 0x7d10d0
// 007d57e5  83c404               add esp, 4
// 007d57e8  8906                 mov dword ptr [esi], eax
// 007d57ea  e921ffffff           jmp 0x7d5710
// 007d57ef  6a00                 push 0
// 007d57f1  8bde                 mov ebx, esi
// 007d57f3  e888f9ffff           call 0x7d5180
// 007d57f8  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 007d57fb  8b4104               mov eax, dword ptr [ecx + 4]
// 007d57fe  8a5644               mov dl, byte ptr [esi + 0x44]
// 007d5801  8b09                 mov ecx, dword ptr [ecx]
// 007d5803  83c404               add esp, 4
// 007d5806  85c0                 test eax, eax
// 007d5808  7414                 je 0x7d581e
// 007d580a  8d9b00000000         lea ebx, [ebx]
// 007d5810  48                   dec eax
// 007d5811  803c012e             cmp byte ptr [ecx + eax], 0x2e
// 007d5815  7503                 jne 0x7d581a
// 007d5817  881401               mov byte ptr [ecx + eax], dl
// 007d581a  85c0                 test eax, eax
// 007d581c  75f2                 jne 0x7d5810
// 007d581e  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 007d5821  8b7c2460             mov edi, dword ptr [esp + 0x60]
// 007d5825  8b11                 mov edx, dword ptr [ecx]
// 007d5827  57                   push edi
// 007d5828  52                   push edx
// 007d5829  e86249fcff           call 0x79a190
// 007d582e  83c408               add esp, 8
// 007d5831  85c0                 test eax, eax
// 007d5833  750b                 jne 0x7d5840
// 007d5835  57                   push edi
// 007d5836  8bc6                 mov eax, esi
// 007d5838  e8f3fcffff           call 0x7d5530
// 007d583d  83c404               add esp, 4
// 007d5840  5f                   pop edi
// 007d5841  5d                   pop ebp
// 007d5842  5b                   pop ebx
// 007d5843  83c450               add esp, 0x50
// 007d5846  c3                   ret 
// copied from an identical function in another client (function _read_numeral)

// from server: 100% by tester
// roc-lang: c
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4-dll llex.c