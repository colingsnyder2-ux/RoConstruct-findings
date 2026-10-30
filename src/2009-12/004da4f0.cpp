// roc 2009-12 004da4f0  unit: G3D::Win32Window  size: 5268 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004da4f0
//
// 004da4f0  8b442404             mov eax, dword ptr [esp + 4]
// 004da4f4  3d00010000           cmp eax, 0x100
// 004da4f9  7775                 ja 0x4da570
// 004da4fb  746d                 je 0x4da56a
// 004da4fd  3d80000000           cmp eax, 0x80
// 004da502  0f87010d0000         ja 0x4db209
// 004da508  0fb68860b24d00       movzx ecx, byte ptr [eax + 0x4db260]
// 004da50f  ff248d24b24d00       jmp dword ptr [ecx*4 + 0x4db224]
// 004da516  b8e4949b00           mov eax, 0x9b94e4
// 004da51b  c3                   ret 
// 004da51c  b8d4949b00           mov eax, 0x9b94d4
// 004da521  c3                   ret 
// 004da522  b8bc949b00           mov eax, 0x9b94bc
// 004da527  c3                   ret 
// 004da528  b8a8949b00           mov eax, 0x9b94a8
// 004da52d  c3                   ret 
// 004da52e  b898949b00           mov eax, 0x9b9498
// 004da533  c3                   ret 
// 004da534  b88c949b00           mov eax, 0x9b948c
// 004da539  c3                   ret 
// 004da53a  b87c949b00           mov eax, 0x9b947c
// 004da53f  c3                   ret 
// 004da540  b86c949b00           mov eax, 0x9b946c
// 004da545  c3                   ret 
// 004da546  b858949b00           mov eax, 0x9b9458
// 004da54b  c3                   ret 
// 004da54c  b848949b00           mov eax, 0x9b9448
// 004da551  c3                   ret 
// 004da552  b83c949b00           mov eax, 0x9b943c
// 004da557  c3                   ret 
// 004da558  b830949b00           mov eax, 0x9b9430
// 004da55d  c3                   ret 
// 004da55e  b828949b00           mov eax, 0x9b9428
// 004da563  c3                   ret 
// 004da564  b820949b00           mov eax, 0x9b9420
// 004da569  c3                   ret 
// 004da56a  b814949b00           mov eax, 0x9b9414
// 004da56f  c3                   ret 
// 004da570  3d00020000           cmp eax, 0x200
// 004da575  7736                 ja 0x4da5ad
// 004da577  742e                 je 0x4da5a7
// 004da579  8d88fffeffff         lea ecx, [eax - 0x101]
// 004da57f  83f903               cmp ecx, 3
// 004da582  0f87810c0000         ja 0x4db209
// 004da588  ff248de4b24d00       jmp dword ptr [ecx*4 + 0x4db2e4]
// 004da58f  b80c949b00           mov eax, 0x9b940c
// 004da594  c3                   ret 
// 004da595  b800949b00           mov eax, 0x9b9400
// 004da59a  c3                   ret 
// 004da59b  b8f8939b00           mov eax, 0x9b93f8
// 004da5a0  c3                   ret 
// 004da5a1  b8f0939b00           mov eax, 0x9b93f0
// 004da5a6  c3                   ret 
// 004da5a7  b8e4939b00           mov eax, 0x9b93e4
// 004da5ac  c3                   ret 
// 004da5ad  3d00030000           cmp eax, 0x300
// 004da5b2  7748                 ja 0x4da5fc
// 004da5b4  7440                 je 0x4da5f6
// 004da5b6  8d88fffdffff         lea ecx, [eax - 0x201]
// 004da5bc  83f906               cmp ecx, 6
// 004da5bf  0f87440c0000         ja 0x4db209
// 004da5c5  ff248df4b24d00       jmp dword ptr [ecx*4 + 0x4db2f4]
// 004da5cc  b8dc939b00           mov eax, 0x9b93dc
// 004da5d1  c3                   ret 
// 004da5d2  b8d0939b00           mov eax, 0x9b93d0
// 004da5d7  c3                   ret 
// 004da5d8  b8c4939b00           mov eax, 0x9b93c4
// 004da5dd  c3                   ret 
// 004da5de  b8b8939b00           mov eax, 0x9b93b8
// 004da5e3  c3                   ret 
// 004da5e4  b8ac939b00           mov eax, 0x9b93ac
// 004da5e9  c3                   ret 
// 004da5ea  b8a0939b00           mov eax, 0x9b93a0
// 004da5ef  c3                   ret 
// 004da5f0  b894939b00           mov eax, 0x9b9394
// 004da5f5  c3                   ret 
// 004da5f6  b884939b00           mov eax, 0x9b9384
// 004da5fb  c3                   ret 
// 004da5fc  3d00160000           cmp eax, 0x1600
// 004da601  0f8778050000         ja 0x4dab7f
// 004da607  0f846c050000         je 0x4dab79
// 004da60d  3d600c0000           cmp eax, 0xc60
// 004da612  0f8759020000         ja 0x4da871
// 004da618  0f844d020000         je 0x4da86b
// 004da61e  3d000b0000           cmp eax, 0xb00
// 004da623  0f874b010000         ja 0x4da774
// 004da629  0f843f010000         je 0x4da76e
// 004da62f  3d00050000           cmp eax, 0x500
// 004da634  0f8787000000         ja 0x4da6c1
// 004da63a  747f                 je 0x4da6bb
// 004da63c  3d00040000           cmp eax, 0x400
// 004da641  7732                 ja 0x4da675
// 004da643  742a                 je 0x4da66f
// 004da645  8bc8                 mov ecx, eax
// 004da647  81e901030000         sub ecx, 0x301
// 004da64d  741a                 je 0x4da669
// 004da64f  83e901               sub ecx, 1
// 004da652  740f                 je 0x4da663
// 004da654  83e901               sub ecx, 1
// 004da657  0f85ac0b0000         jne 0x4db209
// 004da65d  b86c939b00           mov eax, 0x9b936c
// 004da662  c3                   ret 
// 004da663  b85c939b00           mov eax, 0x9b935c
// 004da668  c3                   ret 
// 004da669  b844939b00           mov eax, 0x9b9344
// 004da66e  c3                   ret 
// 004da66f  b82c939b00           mov eax, 0x9b932c
// 004da674  c3                   ret 
// 004da675  8d88fffbffff         lea ecx, [eax - 0x401]
// 004da67b  83f907               cmp ecx, 7
// 004da67e  0f87850b0000         ja 0x4db209
// 004da684  ff248d10b34d00       jmp dword ptr [ecx*4 + 0x4db310]
// 004da68b  b81c939b00           mov eax, 0x9b931c
// 004da690  c3                   ret 
// 004da691  b80c939b00           mov eax, 0x9b930c
// 004da696  c3                   ret 
// 004da697  b8fc929b00           mov eax, 0x9b92fc
// 004da69c  c3                   ret 
// 004da69d  b8f0929b00           mov eax, 0x9b92f0
// 004da6a2  c3                   ret 
// 004da6a3  b8e8929b00           mov eax, 0x9b92e8
// 004da6a8  c3                   ret 
// 004da6a9  b8e0929b00           mov eax, 0x9b92e0
// 004da6ae  c3                   ret 
// 004da6af  b8d4929b00           mov eax, 0x9b92d4
// 004da6b4  c3                   ret 
// 004da6b5  b8c0929b00           mov eax, 0x9b92c0
// 004da6ba  c3                   ret 
// 004da6bb  b8b0929b00           mov eax, 0x9b92b0
// 004da6c0  c3                   ret 
// 004da6c1  3d00060000           cmp eax, 0x600
// 004da6c6  773c                 ja 0x4da704
// 004da6c8  7434                 je 0x4da6fe
// 004da6ca  8d88fffaffff         lea ecx, [eax - 0x501]
// 004da6d0  83f904               cmp ecx, 4
// 004da6d3  0f87300b0000         ja 0x4db209
// 004da6d9  ff248d30b34d00       jmp dword ptr [ecx*4 + 0x4db330]
// 004da6e0  b89c929b00           mov eax, 0x9b929c
// 004da6e5  c3                   ret 
// 004da6e6  b884929b00           mov eax, 0x9b9284
// 004da6eb  c3                   ret 
// 004da6ec  b870929b00           mov eax, 0x9b9270
// 004da6f1  c3                   ret 
// 004da6f2  b85c929b00           mov eax, 0x9b925c
// 004da6f7  c3                   ret 
// 004da6f8  b848929b00           mov eax, 0x9b9248
// 004da6fd  c3                   ret 
// 004da6fe  b840929b00           mov eax, 0x9b9240
// 004da703  c3                   ret 
// 004da704  3d00080000           cmp eax, 0x800
// 004da709  7736                 ja 0x4da741
// 004da70b  742e                 je 0x4da73b
// 004da70d  8d88fff9ffff         lea ecx, [eax - 0x601]
// 004da713  83f903               cmp ecx, 3
// 004da716  0f87ed0a0000         ja 0x4db209
// 004da71c  ff248d44b34d00       jmp dword ptr [ecx*4 + 0x4db344]
// 004da723  b838929b00           mov eax, 0x9b9238
// 004da728  c3                   ret 
// 004da729  b82c929b00           mov eax, 0x9b922c
// 004da72e  c3                   ret 
// 004da72f  b818929b00           mov eax, 0x9b9218
// 004da734  c3                   ret 
// 004da735  b804929b00           mov eax, 0x9b9204
// 004da73a  c3                   ret 
// 004da73b  b8f4919b00           mov eax, 0x9b91f4
// 004da740  c3                   ret 
// 004da741  8bc8                 mov ecx, eax
// 004da743  81e901080000         sub ecx, 0x801
// 004da749  741d                 je 0x4da768
// 004da74b  81e9ff000000         sub ecx, 0xff
// 004da751  740f                 je 0x4da762
// 004da753  83e901               sub ecx, 1
// 004da756  0f85ad0a0000         jne 0x4db209
// 004da75c  b8ec919b00           mov eax, 0x9b91ec
// 004da761  c3                   ret 
// 004da762  b8e4919b00           mov eax, 0x9b91e4
// 004da767  c3                   ret 
// 004da768  b8dc919b00           mov eax, 0x9b91dc
// 004da76d  c3                   ret 
// 004da76e  b8c8919b00           mov eax, 0x9b91c8
// 004da773  c3                   ret 
// 004da774  3d110c0000           cmp eax, 0xc11
// 004da779  0f878a0a0000         ja 0x4db209
// 004da77f  0f84e0000000         je 0x4da865
// 004da785  8d88fff4ffff         lea ecx, [eax - 0xb01]
// 004da78b  81f9f1000000         cmp ecx, 0xf1
// 004da791  0f87720a0000         ja 0x4db209
// 004da797  0fb691d8b34d00       movzx edx, byte ptr [ecx + 0x4db3d8]
// 004da79e  ff249554b34d00       jmp dword ptr [edx*4 + 0x4db354]
// 004da7a5  b8bc919b00           mov eax, 0x9b91bc
// 004da7aa  c3                   ret 
// 004da7ab  b8a8919b00           mov eax, 0x9b91a8
// 004da7b0  c3                   ret 
// 004da7b1  b894919b00           mov eax, 0x9b9194
// 004da7b6  c3                   ret 
// 004da7b7  b878919b00           mov eax, 0x9b9178
// 004da7bc  c3                   ret 
// 004da7bd  b860919b00           mov eax, 0x9b9160
// 004da7c2  c3                   ret 
// 004da7c3  b848919b00           mov eax, 0x9b9148
// 004da7c8  c3                   ret 
// 004da7c9  b824919b00           mov eax, 0x9b9124
// 004da7ce  c3                   ret 
// 004da7cf  b808919b00           mov eax, 0x9b9108
// 004da7d4  c3                   ret 
// 004da7d5  b8e4909b00           mov eax, 0x9b90e4
// 004da7da  c3                   ret 
// 004da7db  b8c8909b00           mov eax, 0x9b90c8
// 004da7e0  c3                   ret 
// 004da7e1  b8b8909b00           mov eax, 0x9b90b8
// 004da7e6  c3                   ret 
// 004da7e7  b8a8909b00           mov eax, 0x9b90a8
// 004da7ec  c3                   ret 
// 004da7ed  b894909b00           mov eax, 0x9b9094
// 004da7f2  c3                   ret 
// 004da7f3  b878909b00           mov eax, 0x9b9078
// 004da7f8  c3                   ret 
// 004da7f9  b868909b00           mov eax, 0x9b9068
// 004da7fe  c3                   ret 
// 004da7ff  b858909b00           mov eax, 0x9b9058
// 004da804  c3                   ret 
// 004da805  b844909b00           mov eax, 0x9b9044
// 004da80a  c3                   ret 
// 004da80b  b830909b00           mov eax, 0x9b9030
// 004da810  c3                   ret 
// 004da811  b824909b00           mov eax, 0x9b9024
// 004da816  c3                   ret 
// 004da817  b814909b00           mov eax, 0x9b9014
// 004da81c  c3                   ret 
// 004da81d  b804909b00           mov eax, 0x9b9004
// 004da822  c3                   ret 
// 004da823  b8f48f9b00           mov eax, 0x9b8ff4
// 004da828  c3                   ret 
// 004da829  b8e48f9b00           mov eax, 0x9b8fe4
// 004da82e  c3                   ret 
// 004da82f  b8d48f9b00           mov eax, 0x9b8fd4
// 004da834  c3                   ret 
// 004da835  b8c48f9b00           mov eax, 0x9b8fc4
// 004da83a  c3                   ret 
// 004da83b  b8b08f9b00           mov eax, 0x9b8fb0
// 004da840  c3                   ret 
// 004da841  b89c8f9b00           mov eax, 0x9b8f9c
// 004da846  c3                   ret 
// 004da847  b88c8f9b00           mov eax, 0x9b8f8c
// 004da84c  c3                   ret 
// 004da84d  b87c8f9b00           mov eax, 0x9b8f7c
// 004da852  c3                   ret 
// 004da853  b8708f9b00           mov eax, 0x9b8f70
// 004da858  c3                   ret 
// 004da859  b8688f9b00           mov eax, 0x9b8f68
// 004da85e  c3                   ret 
// 004da85f  b8548f9b00           mov eax, 0x9b8f54
// 004da864  c3                   ret 
// 004da865  b8448f9b00           mov eax, 0x9b8f44
// 004da86a  c3                   ret 
// 004da86b  b8308f9b00           mov eax, 0x9b8f30
// 004da870  c3                   ret 
// 004da871  3d800d0000           cmp eax, 0xd80
// 004da876  0f879e000000         ja 0x4da91a
// 004da87c  0f8492000000         je 0x4da914
// 004da882  8d889ff3ffff         lea ecx, [eax - 0xc61]
// 004da888  81f9d3000000         cmp ecx, 0xd3
// 004da88e  0f8775090000         ja 0x4db209
// 004da894  0fb6891cb54d00       movzx ecx, byte ptr [ecx + 0x4db51c]
// 004da89b  ff248dccb44d00       jmp dword ptr [ecx*4 + 0x4db4cc]
// 004da8a2  b8248f9b00           mov eax, 0x9b8f24
// 004da8a7  c3                   ret 
// 004da8a8  b8188f9b00           mov eax, 0x9b8f18
// 004da8ad  c3                   ret 
// 004da8ae  b80c8f9b00           mov eax, 0x9b8f0c
// 004da8b3  c3                   ret 
// 004da8b4  b8fc8e9b00           mov eax, 0x9b8efc
// 004da8b9  c3                   ret 
// 004da8ba  b8ec8e9b00           mov eax, 0x9b8eec
// 004da8bf  c3                   ret 
// 004da8c0  b8dc8e9b00           mov eax, 0x9b8edc
// 004da8c5  c3                   ret 
// 004da8c6  b8cc8e9b00           mov eax, 0x9b8ecc
// 004da8cb  c3                   ret 
// 004da8cc  b8bc8e9b00           mov eax, 0x9b8ebc
// 004da8d1  c3                   ret 
// 004da8d2  b8ac8e9b00           mov eax, 0x9b8eac
// 004da8d7  c3                   ret 
// 004da8d8  b89c8e9b00           mov eax, 0x9b8e9c
// 004da8dd  c3                   ret 
// 004da8de  b88c8e9b00           mov eax, 0x9b8e8c
// 004da8e3  c3                   ret 
// 004da8e4  b8788e9b00           mov eax, 0x9b8e78
// 004da8e9  c3                   ret 
// 004da8ea  b8688e9b00           mov eax, 0x9b8e68
// 004da8ef  c3                   ret 
// 004da8f0  b8548e9b00           mov eax, 0x9b8e54
// 004da8f5  c3                   ret 
// 004da8f6  b8408e9b00           mov eax, 0x9b8e40
// 004da8fb  c3                   ret 
// 004da8fc  b8288e9b00           mov eax, 0x9b8e28
// 004da901  c3                   ret 
// 004da902  b8148e9b00           mov eax, 0x9b8e14
// 004da907  c3                   ret 
// 004da908  b8008e9b00           mov eax, 0x9b8e00
// 004da90d  c3                   ret 
// 004da90e  b8ec8d9b00           mov eax, 0x9b8dec
// 004da913  c3                   ret 
// 004da914  b8dc8d9b00           mov eax, 0x9b8ddc
// 004da919  c3                   ret 
// 004da91a  3d00100000           cmp eax, 0x1000
// 004da91f  0f87a1000000         ja 0x4da9c6
// 004da925  0f8495000000         je 0x4da9c0
// 004da92b  8d8870f2ffff         lea ecx, [eax - 0xd90]
// 004da931  83f951               cmp ecx, 0x51
// 004da934  0f87cf080000         ja 0x4db209
// 004da93a  0fb69144b64d00       movzx edx, byte ptr [ecx + 0x4db644]
// 004da941  ff2495f0b54d00       jmp dword ptr [edx*4 + 0x4db5f0]
// 004da948  b8cc8d9b00           mov eax, 0x9b8dcc
// 004da94d  c3                   ret 
// 004da94e  b8bc8d9b00           mov eax, 0x9b8dbc
// 004da953  c3                   ret 
// 004da954  b8ac8d9b00           mov eax, 0x9b8dac
// 004da959  c3                   ret 
// 004da95a  b8948d9b00           mov eax, 0x9b8d94
// 004da95f  c3                   ret 
// 004da960  b87c8d9b00           mov eax, 0x9b8d7c
// 004da965  c3                   ret 
// 004da966  b8648d9b00           mov eax, 0x9b8d64
// 004da96b  c3                   ret 
// 004da96c  b84c8d9b00           mov eax, 0x9b8d4c
// 004da971  c3                   ret 
// 004da972  b8388d9b00           mov eax, 0x9b8d38
// 004da977  c3                   ret 
// 004da978  b8248d9b00           mov eax, 0x9b8d24
// 004da97d  c3                   ret 
// 004da97e  b8148d9b00           mov eax, 0x9b8d14
// 004da983  c3                   ret 
// 004da984  b8048d9b00           mov eax, 0x9b8d04
// 004da989  c3                   ret 
// 004da98a  b8f48c9b00           mov eax, 0x9b8cf4
// 004da98f  c3                   ret 
// 004da990  b8dc8c9b00           mov eax, 0x9b8cdc
// 004da995  c3                   ret 
// 004da996  b8c48c9b00           mov eax, 0x9b8cc4
// 004da99b  c3                   ret 
// 004da99c  b8ac8c9b00           mov eax, 0x9b8cac
// 004da9a1  c3                   ret 
// 004da9a2  b8948c9b00           mov eax, 0x9b8c94
// 004da9a7  c3                   ret 
// 004da9a8  b8808c9b00           mov eax, 0x9b8c80
// 004da9ad  c3                   ret 
// 004da9ae  b86c8c9b00           mov eax, 0x9b8c6c
// 004da9b3  c3                   ret 
// 004da9b4  b85c8c9b00           mov eax, 0x9b8c5c
// 004da9b9  c3                   ret 
// 004da9ba  b84c8c9b00           mov eax, 0x9b8c4c
// 004da9bf  c3                   ret 
// 004da9c0  b8388c9b00           mov eax, 0x9b8c38
// 004da9c5  c3                   ret 
// 004da9c6  3d00110000           cmp eax, 0x1100
// 004da9cb  7736                 ja 0x4daa03
// 004da9cd  742e                 je 0x4da9fd
// 004da9cf  8d88ffefffff         lea ecx, [eax - 0x1001]
// 004da9d5  83f904               cmp ecx, 4
// 004da9d8  0f872b080000         ja 0x4db209
// 004da9de  ff248d98b64d00       jmp dword ptr [ecx*4 + 0x4db698]
// 004da9e5  b8248c9b00           mov eax, 0x9b8c24
// 004da9ea  c3                   ret 
// 004da9eb  b8088c9b00           mov eax, 0x9b8c08
// 004da9f0  c3                   ret 
// 004da9f1  b8f08b9b00           mov eax, 0x9b8bf0
// 004da9f6  c3                   ret 
// 004da9f7  b8dc8b9b00           mov eax, 0x9b8bdc
// 004da9fc  c3                   ret 
// 004da9fd  b8cc8b9b00           mov eax, 0x9b8bcc
// 004daa02  c3                   ret 
// 004daa03  3d00140000           cmp eax, 0x1400
// 004daa08  0f879a000000         ja 0x4daaa8
// 004daa0e  0f848e000000         je 0x4daaa2
// 004daa14  3d00120000           cmp eax, 0x1200
// 004daa19  7727                 ja 0x4daa42
// 004daa1b  741f                 je 0x4daa3c
// 004daa1d  8bc8                 mov ecx, eax
// 004daa1f  81e901110000         sub ecx, 0x1101
// 004daa25  740f                 je 0x4daa36
// 004daa27  83e901               sub ecx, 1
// 004daa2a  0f85d9070000         jne 0x4db209
// 004daa30  b8c08b9b00           mov eax, 0x9b8bc0
// 004daa35  c3                   ret 
// 004daa36  b8b48b9b00           mov eax, 0x9b8bb4
// 004daa3b  c3                   ret 
// 004daa3c  b8a88b9b00           mov eax, 0x9b8ba8
// 004daa41  c3                   ret 
// 004daa42  3d00130000           cmp eax, 0x1300
// 004daa47  7748                 ja 0x4daa91
// 004daa49  7440                 je 0x4daa8b
// 004daa4b  8d88ffedffff         lea ecx, [eax - 0x1201]
// 004daa51  83f906               cmp ecx, 6
// 004daa54  0f87af070000         ja 0x4db209
// 004daa5a  ff248dacb64d00       jmp dword ptr [ecx*4 + 0x4db6ac]
// 004daa61  b89c8b9b00           mov eax, 0x9b8b9c
// 004daa66  c3                   ret 
// 004daa67  b8908b9b00           mov eax, 0x9b8b90
// 004daa6c  c3                   ret 
// 004daa6d  b8848b9b00           mov eax, 0x9b8b84
// 004daa72  c3                   ret 
// 004daa73  b8708b9b00           mov eax, 0x9b8b70
// 004daa78  c3                   ret 
// 004daa79  b85c8b9b00           mov eax, 0x9b8b5c
// 004daa7e  c3                   ret 
// 004daa7f  b84c8b9b00           mov eax, 0x9b8b4c
// 004daa84  c3                   ret 
// 004daa85  b8348b9b00           mov eax, 0x9b8b34
// 004daa8a  c3                   ret 
// 004daa8b  b8288b9b00           mov eax, 0x9b8b28
// 004daa90  c3                   ret 
// 004daa91  3d01130000           cmp eax, 0x1301
// 004daa96  0f856d070000         jne 0x4db209
// 004daa9c  b8108b9b00           mov eax, 0x9b8b10
// 004daaa1  c3                   ret 
// 004daaa2  b8088b9b00           mov eax, 0x9b8b08
// 004daaa7  c3                   ret 
// 004daaa8  3d00150000           cmp eax, 0x1500
// 004daaad  775a                 ja 0x4dab09
// 004daaaf  7452                 je 0x4dab03
// 004daab1  8d88ffebffff         lea ecx, [eax - 0x1401]
// 004daab7  83f909               cmp ecx, 9
// 004daaba  0f8749070000         ja 0x4db209
// 004daac0  ff248dc8b64d00       jmp dword ptr [ecx*4 + 0x4db6c8]
// 004daac7  b8f48a9b00           mov eax, 0x9b8af4
// 004daacc  c3                   ret 
// 004daacd  b8e88a9b00           mov eax, 0x9b8ae8
// 004daad2  c3                   ret 
// 004daad3  b8d48a9b00           mov eax, 0x9b8ad4
// 004daad8  c3                   ret 
// 004daad9  b8cc8a9b00           mov eax, 0x9b8acc
// 004daade  c3                   ret 
// 004daadf  b8bc8a9b00           mov eax, 0x9b8abc
// 004daae4  c3                   ret 
// 004daae5  b8b08a9b00           mov eax, 0x9b8ab0
// 004daaea  c3                   ret 
// 004daaeb  b8a48a9b00           mov eax, 0x9b8aa4
// 004daaf0  c3                   ret 
// 004daaf1  b8988a9b00           mov eax, 0x9b8a98
// 004daaf6  c3                   ret 
// 004daaf7  b88c8a9b00           mov eax, 0x9b8a8c
// 004daafc  c3                   ret 
// 004daafd  b8808a9b00           mov eax, 0x9b8a80
// 004dab02  c3                   ret 
// 004dab03  b8748a9b00           mov eax, 0x9b8a74
// 004dab08  c3                   ret 
// 004dab09  8d88ffeaffff         lea ecx, [eax - 0x1501]
// 004dab0f  83f90e               cmp ecx, 0xe
// 004dab12  0f87f1060000         ja 0x4db209
// 004dab18  ff248df0b64d00       jmp dword ptr [ecx*4 + 0x4db6f0]
// 004dab1f  b86c8a9b00           mov eax, 0x9b8a6c
// 004dab24  c3                   ret 
// 004dab25  b85c8a9b00           mov eax, 0x9b8a5c
// 004dab2a  c3                   ret 
// 004dab2b  b8548a9b00           mov eax, 0x9b8a54
// 004dab30  c3                   ret 
// 004dab31  b8448a9b00           mov eax, 0x9b8a44
// 004dab36  c3                   ret 
// 004dab37  b83c8a9b00           mov eax, 0x9b8a3c
// 004dab3c  c3                   ret 
// 004dab3d  b8348a9b00           mov eax, 0x9b8a34
// 004dab42  c3                   ret 
// 004dab43  b82c8a9b00           mov eax, 0x9b8a2c
// 004dab48  c3                   ret 
// 004dab49  b8248a9b00           mov eax, 0x9b8a24
// 004dab4e  c3                   ret 
// 004dab4f  b8188a9b00           mov eax, 0x9b8a18
// 004dab54  c3                   ret 
// 004dab55  b80c8a9b00           mov eax, 0x9b8a0c
// 004dab5a  c3                   ret 
// 004dab5b  b8fc899b00           mov eax, 0x9b89fc
// 004dab60  c3                   ret 
// 004dab61  b8e8899b00           mov eax, 0x9b89e8
// 004dab66  c3                   ret 
// 004dab67  b8d8899b00           mov eax, 0x9b89d8
// 004dab6c  c3                   ret 
// 004dab6d  b8d0899b00           mov eax, 0x9b89d0
// 004dab72  c3                   ret 
// 004dab73  b8c8899b00           mov eax, 0x9b89c8
// 004dab78  c3                   ret 
// 004dab79  b8bc899b00           mov eax, 0x9b89bc
// 004dab7e  c3                   ret 
// 004dab7f  3d00400000           cmp eax, 0x4000
// 004dab84  0f871e040000         ja 0x4dafa8
// 004dab8a  0f8412040000         je 0x4dafa2
// 004dab90  3d001f0000           cmp eax, 0x1f00
// 004dab95  0f87c1010000         ja 0x4dad5c
// 004dab9b  0f84b5010000         je 0x4dad56
// 004daba1  3d00190000           cmp eax, 0x1900
// 004daba6  0f8798000000         ja 0x4dac44
// 004dabac  0f848c000000         je 0x4dac3e
// 004dabb2  3d01170000           cmp eax, 0x1701
// 004dabb7  7747                 ja 0x4dac00
// 004dabb9  743f                 je 0x4dabfa
// 004dabbb  3d03160000           cmp eax, 0x1603
// 004dabc0  7727                 ja 0x4dabe9
// 004dabc2  741f                 je 0x4dabe3
// 004dabc4  8bc8                 mov ecx, eax
// 004dabc6  81e901160000         sub ecx, 0x1601
// 004dabcc  740f                 je 0x4dabdd
// 004dabce  83e901               sub ecx, 1
// 004dabd1  0f8532060000         jne 0x4db209
// 004dabd7  b8a4899b00           mov eax, 0x9b89a4
// 004dabdc  c3                   ret 
// 004dabdd  b894899b00           mov eax, 0x9b8994
// 004dabe2  c3                   ret 
// 004dabe3  b880899b00           mov eax, 0x9b8980
// 004dabe8  c3                   ret 
// 004dabe9  3d00170000           cmp eax, 0x1700
// 004dabee  0f8515060000         jne 0x4db209
// 004dabf4  b870899b00           mov eax, 0x9b8970
// 004dabf9  c3                   ret 
// 004dabfa  b860899b00           mov eax, 0x9b8960
// 004dabff  c3                   ret 
// 004dac00  3d01180000           cmp eax, 0x1801
// 004dac05  7726                 ja 0x4dac2d
// 004dac07  741e                 je 0x4dac27
// 004dac09  3d02170000           cmp eax, 0x1702
// 004dac0e  7411                 je 0x4dac21
// 004dac10  3d00180000           cmp eax, 0x1800
// 004dac15  0f85ee050000         jne 0x4db209
// 004dac1b  b854899b00           mov eax, 0x9b8954
// 004dac20  c3                   ret 
// 004dac21  b848899b00           mov eax, 0x9b8948
// 004dac26  c3                   ret 
// 004dac27  b83c899b00           mov eax, 0x9b893c
// 004dac2c  c3                   ret 
// 004dac2d  3d02180000           cmp eax, 0x1802
// 004dac32  0f85d1050000         jne 0x4db209
// 004dac38  b830899b00           mov eax, 0x9b8930
// 004dac3d  c3                   ret 
// 004dac3e  b820899b00           mov eax, 0x9b8920
// 004dac43  c3                   ret 
// 004dac44  3d001a0000           cmp eax, 0x1a00
// 004dac49  775a                 ja 0x4daca5
// 004dac4b  7452                 je 0x4dac9f
// 004dac4d  8d88ffe6ffff         lea ecx, [eax - 0x1901]
// 004dac53  83f909               cmp ecx, 9
// 004dac56  0f87ad050000         ja 0x4db209
// 004dac5c  ff248d2cb74d00       jmp dword ptr [ecx*4 + 0x4db72c]
// 004dac63  b80c899b00           mov eax, 0x9b890c
// 004dac68  c3                   ret 
// 004dac69  b8f8889b00           mov eax, 0x9b88f8
// 004dac6e  c3                   ret 
// 004dac6f  b8f0889b00           mov eax, 0x9b88f0
// 004dac74  c3                   ret 
// 004dac75  b8e4889b00           mov eax, 0x9b88e4
// 004dac7a  c3                   ret 
// 004dac7b  b8dc889b00           mov eax, 0x9b88dc
// 004dac80  c3                   ret 
// 004dac81  b8d0889b00           mov eax, 0x9b88d0
// 004dac86  c3                   ret 
// 004dac87  b8c8889b00           mov eax, 0x9b88c8
// 004dac8c  c3                   ret 
// 004dac8d  b8c0889b00           mov eax, 0x9b88c0
// 004dac92  c3                   ret 
// 004dac93  b8b0889b00           mov eax, 0x9b88b0
// 004dac98  c3                   ret 
// 004dac99  b89c889b00           mov eax, 0x9b889c
// 004dac9e  c3                   ret 
// 004dac9f  b890889b00           mov eax, 0x9b8890
// 004daca4  c3                   ret 
// 004daca5  3d001d0000           cmp eax, 0x1d00
// 004dacaa  7760                 ja 0x4dad0c
// 004dacac  7458                 je 0x4dad06
// 004dacae  3d001c0000           cmp eax, 0x1c00
// 004dacb3  7732                 ja 0x4dace7
// 004dacb5  742a                 je 0x4dace1
// 004dacb7  8bc8                 mov ecx, eax
// 004dacb9  81e9001b0000         sub ecx, 0x1b00
// 004dacbf  741a                 je 0x4dacdb
// 004dacc1  83e901               sub ecx, 1
// 004dacc4  740f                 je 0x4dacd5
// 004dacc6  83e901               sub ecx, 1
// 004dacc9  0f853a050000         jne 0x4db209
// 004daccf  b888889b00           mov eax, 0x9b8888
// 004dacd4  c3                   ret 
// 004dacd5  b880889b00           mov eax, 0x9b8880
// 004dacda  c3                   ret 
// 004dacdb  b874889b00           mov eax, 0x9b8874
// 004dace0  c3                   ret 
// 004dace1  b868889b00           mov eax, 0x9b8868
// 004dace6  c3                   ret 
// 004dace7  8bc8                 mov ecx, eax
// 004dace9  81e9011c0000         sub ecx, 0x1c01
// 004dacef  740f                 je 0x4dad00
// 004dacf1  83e901               sub ecx, 1
// 004dacf4  0f850f050000         jne 0x4db209
// 004dacfa  b85c889b00           mov eax, 0x9b885c
// 004dacff  c3                   ret 
// 004dad00  b850889b00           mov eax, 0x9b8850
// 004dad05  c3                   ret 
// 004dad06  b848889b00           mov eax, 0x9b8848
// 004dad0b  c3                   ret 
// 004dad0c  3d001e0000           cmp eax, 0x1e00
// 004dad11  7719                 ja 0x4dad2c
// 004dad13  7411                 je 0x4dad26
// 004dad15  3d011d0000           cmp eax, 0x1d01
// 004dad1a  0f85e9040000         jne 0x4db209
// 004dad20  b83c889b00           mov eax, 0x9b883c
// 004dad25  c3                   ret 
// 004dad26  b834889b00           mov eax, 0x9b8834
// 004dad2b  c3                   ret 
// 004dad2c  8bc8                 mov ecx, eax
// 004dad2e  81e9011e0000         sub ecx, 0x1e01
// 004dad34  741a                 je 0x4dad50
// 004dad36  83e901               sub ecx, 1
// 004dad39  740f                 je 0x4dad4a
// 004dad3b  83e901               sub ecx, 1
// 004dad3e  0f85c5040000         jne 0x4db209
// 004dad44  b82c889b00           mov eax, 0x9b882c
// 004dad49  c3                   ret 
// 004dad4a  b824889b00           mov eax, 0x9b8824
// 004dad4f  c3                   ret 
// 004dad50  b818889b00           mov eax, 0x9b8818
// 004dad55  c3                   ret 
// 004dad56  b80c889b00           mov eax, 0x9b880c
// 004dad5b  c3                   ret 
// 004dad5c  3d00260000           cmp eax, 0x2600
// 004dad61  0f8720010000         ja 0x4dae87
// 004dad67  0f8414010000         je 0x4dae81
// 004dad6d  3d00220000           cmp eax, 0x2200
// 004dad72  0f8792000000         ja 0x4dae0a
// 004dad78  0f8486000000         je 0x4dae04
// 004dad7e  3d00200000           cmp eax, 0x2000
// 004dad83  7732                 ja 0x4dadb7
// 004dad85  742a                 je 0x4dadb1
// 004dad87  8bc8                 mov ecx, eax
// 004dad89  81e9011f0000         sub ecx, 0x1f01
// 004dad8f  741a                 je 0x4dadab
// 004dad91  83e901               sub ecx, 1
// 004dad94  740f                 je 0x4dada5
// 004dad96  83e901               sub ecx, 1
// 004dad99  0f856a040000         jne 0x4db209
// 004dad9f  b8fc879b00           mov eax, 0x9b87fc
// 004dada4  c3                   ret 
// 004dada5  b8f0879b00           mov eax, 0x9b87f0
// 004dadaa  c3                   ret 
// 004dadab  b8e4879b00           mov eax, 0x9b87e4
// 004dadb0  c3                   ret 
// 004dadb1  b8d4879b00           mov eax, 0x9b87d4
// 004dadb6  c3                   ret 
// 004dadb7  3d03200000           cmp eax, 0x2003
// 004dadbc  7727                 ja 0x4dade5
// 004dadbe  741f                 je 0x4daddf
// 004dadc0  8bc8                 mov ecx, eax
// 004dadc2  81e901200000         sub ecx, 0x2001
// 004dadc8  740f                 je 0x4dadd9
// 004dadca  83e901               sub ecx, 1
// 004dadcd  0f8536040000         jne 0x4db209
// 004dadd3  b8cc879b00           mov eax, 0x9b87cc
// 004dadd8  c3                   ret 
// 004dadd9  b8c4879b00           mov eax, 0x9b87c4
// 004dadde  c3                   ret 
// 004daddf  b8bc879b00           mov eax, 0x9b87bc
// 004dade4  c3                   ret 
// 004dade5  8bc8                 mov ecx, eax
// 004dade7  81e900210000         sub ecx, 0x2100
// 004daded  740f                 je 0x4dadfe
// 004dadef  83e901               sub ecx, 1
// 004dadf2  0f8511040000         jne 0x4db209
// 004dadf8  b8b0879b00           mov eax, 0x9b87b0
// 004dadfd  c3                   ret 
// 004dadfe  b8a4879b00           mov eax, 0x9b87a4
// 004dae03  c3                   ret 
// 004dae04  b890879b00           mov eax, 0x9b8790
// 004dae09  c3                   ret 
// 004dae0a  3d02240000           cmp eax, 0x2402
// 004dae0f  7746                 ja 0x4dae57
// 004dae11  743e                 je 0x4dae51
// 004dae13  3d00240000           cmp eax, 0x2400
// 004dae18  7726                 ja 0x4dae40
// 004dae1a  741e                 je 0x4dae3a
// 004dae1c  3d01220000           cmp eax, 0x2201
// 004dae21  7411                 je 0x4dae34
// 004dae23  3d00230000           cmp eax, 0x2300
// 004dae28  0f85db030000         jne 0x4db209
// 004dae2e  b880879b00           mov eax, 0x9b8780
// 004dae33  c3                   ret 
// 004dae34  b868879b00           mov eax, 0x9b8768
// 004dae39  c3                   ret 
// 004dae3a  b858879b00           mov eax, 0x9b8758
// 004dae3f  c3                   ret 
// 004dae40  3d01240000           cmp eax, 0x2401
// 004dae45  0f85be030000         jne 0x4db209
// 004dae4b  b844879b00           mov eax, 0x9b8744
// 004dae50  c3                   ret 
// 004dae51  b834879b00           mov eax, 0x9b8734
// 004dae56  c3                   ret 
// 004dae57  8bc8                 mov ecx, eax
// 004dae59  81e900250000         sub ecx, 0x2500
// 004dae5f  741a                 je 0x4dae7b
// 004dae61  83e901               sub ecx, 1
// 004dae64  740f                 je 0x4dae75
// 004dae66  83e901               sub ecx, 1
// 004dae69  0f859a030000         jne 0x4db209
// 004dae6f  b824879b00           mov eax, 0x9b8724
// 004dae74  c3                   ret 
// 004dae75  b814879b00           mov eax, 0x9b8714
// 004dae7a  c3                   ret 
// 004dae7b  b800879b00           mov eax, 0x9b8700
// 004dae80  c3                   ret 
// 004dae81  b8f4869b00           mov eax, 0x9b86f4
// 004dae86  c3                   ret 
// 004dae87  3d00290000           cmp eax, 0x2900
// 004dae8c  0f878f000000         ja 0x4daf21
// 004dae92  0f8483000000         je 0x4daf1b
// 004dae98  3d00270000           cmp eax, 0x2700
// 004dae9d  7719                 ja 0x4daeb8
// 004dae9f  7411                 je 0x4daeb2
// 004daea1  3d01260000           cmp eax, 0x2601
// 004daea6  0f855d030000         jne 0x4db209
// 004daeac  b8e8869b00           mov eax, 0x9b86e8
// 004daeb1  c3                   ret 
// 004daeb2  b8cc869b00           mov eax, 0x9b86cc
// 004daeb7  c3                   ret 
// 004daeb8  3d00280000           cmp eax, 0x2800
// 004daebd  7732                 ja 0x4daef1
// 004daebf  742a                 je 0x4daeeb
// 004daec1  8bc8                 mov ecx, eax
// 004daec3  81e901270000         sub ecx, 0x2701
// 004daec9  741a                 je 0x4daee5
// 004daecb  83e901               sub ecx, 1
// 004daece  740f                 je 0x4daedf
// 004daed0  83e901               sub ecx, 1
// 004daed3  0f8530030000         jne 0x4db209
// 004daed9  b8b4869b00           mov eax, 0x9b86b4
// 004daede  c3                   ret 
// 004daedf  b898869b00           mov eax, 0x9b8698
// 004daee4  c3                   ret 
// 004daee5  b87c869b00           mov eax, 0x9b867c
// 004daeea  c3                   ret 
// 004daeeb  b864869b00           mov eax, 0x9b8664
// 004daef0  c3                   ret 
// 004daef1  8bc8                 mov ecx, eax
// 004daef3  81e901280000         sub ecx, 0x2801
// 004daef9  741a                 je 0x4daf15
// 004daefb  83e901               sub ecx, 1
// 004daefe  740f                 je 0x4daf0f
// 004daf00  83e901               sub ecx, 1
// 004daf03  0f8500030000         jne 0x4db209
// 004daf09  b850869b00           mov eax, 0x9b8650
// 004daf0e  c3                   ret 
// 004daf0f  b83c869b00           mov eax, 0x9b863c
// 004daf14  c3                   ret 
// 004daf15  b824869b00           mov eax, 0x9b8624
// 004daf1a  c3                   ret 
// 004daf1b  b818869b00           mov eax, 0x9b8618
// 004daf20  c3                   ret 
// 004daf21  3d00300000           cmp eax, 0x3000
// 004daf26  7746                 ja 0x4daf6e
// 004daf28  743e                 je 0x4daf68
// 004daf2a  3d012a0000           cmp eax, 0x2a01
// 004daf2f  7726                 ja 0x4daf57
// 004daf31  741e                 je 0x4daf51
// 004daf33  3d01290000           cmp eax, 0x2901
// 004daf38  7411                 je 0x4daf4b
// 004daf3a  3d002a0000           cmp eax, 0x2a00
// 004daf3f  0f85c4020000         jne 0x4db209
// 004daf45  b800869b00           mov eax, 0x9b8600
// 004daf4a  c3                   ret 
// 004daf4b  b8f4859b00           mov eax, 0x9b85f4
// 004daf50  c3                   ret 
// 004daf51  b8dc859b00           mov eax, 0x9b85dc
// 004daf56  c3                   ret 
// 004daf57  3d022a0000           cmp eax, 0x2a02
// 004daf5c  0f85a7020000         jne 0x4db209
// 004daf62  b8c4859b00           mov eax, 0x9b85c4
// 004daf67  c3                   ret 
// 004daf68  b8b4859b00           mov eax, 0x9b85b4
// 004daf6d  c3                   ret 
// 004daf6e  8d88ffcfffff         lea ecx, [eax - 0x3001]
// 004daf74  83f904               cmp ecx, 4
// 004daf77  0f878c020000         ja 0x4db209
// 004daf7d  ff248d54b74d00       jmp dword ptr [ecx*4 + 0x4db754]
// 004daf84  b8a4859b00           mov eax, 0x9b85a4
// 004daf89  c3                   ret 
// 004daf8a  b894859b00           mov eax, 0x9b8594
// 004daf8f  c3                   ret 
// 004daf90  b884859b00           mov eax, 0x9b8584
// 004daf95  c3                   ret 
// 004daf96  b874859b00           mov eax, 0x9b8574
// 004daf9b  c3                   ret 
// 004daf9c  b864859b00           mov eax, 0x9b8564
// 004dafa1  c3                   ret 
// 004dafa2  b858859b00           mov eax, 0x9b8558
// 004dafa7  c3                   ret 
// 004dafa8  3d00800000           cmp eax, 0x8000
// 004dafad  7748                 ja 0x4daff7
// 004dafaf  7440                 je 0x4daff1
// 004dafb1  8d88ffbfffff         lea ecx, [eax - 0x4001]
// 004dafb7  83f906               cmp ecx, 6
// 004dafba  0f8749020000         ja 0x4db209
// 004dafc0  ff248d68b74d00       jmp dword ptr [ecx*4 + 0x4db768]
// 004dafc7  b84c859b00           mov eax, 0x9b854c
// 004dafcc  c3                   ret 
// 004dafcd  b840859b00           mov eax, 0x9b8540
// 004dafd2  c3                   ret 
// 004dafd3  b834859b00           mov eax, 0x9b8534
// 004dafd8  c3                   ret 
// 004dafd9  b828859b00           mov eax, 0x9b8528
// 004dafde  c3                   ret 
// 004dafdf  b81c859b00           mov eax, 0x9b851c
// 004dafe4  c3                   ret 
// 004dafe5  b810859b00           mov eax, 0x9b8510
// 004dafea  c3                   ret 
// 004dafeb  b804859b00           mov eax, 0x9b8504
// 004daff0  c3                   ret 
// 004daff1  b8f8849b00           mov eax, 0x9b84f8
// 004daff6  c3                   ret 
// 004daff7  3df5840000           cmp eax, 0x84f5
// 004daffc  0f872e010000         ja 0x4db130
// 004db002  0f8422010000         je 0x4db12a
// 004db008  8d88c97fffff         lea ecx, [eax - 0x8037]
// 004db00e  81f9f8000000         cmp ecx, 0xf8
// 004db014  0f87ef010000         ja 0x4db209
// 004db01a  0fb68934b84d00       movzx ecx, byte ptr [ecx + 0x4db834]
// 004db021  ff248d84b74d00       jmp dword ptr [ecx*4 + 0x4db784]
// 004db028  b8e4849b00           mov eax, 0x9b84e4
// 004db02d  c3                   ret 
// 004db02e  b8d0849b00           mov eax, 0x9b84d0
// 004db033  c3                   ret 
// 004db034  b8b4849b00           mov eax, 0x9b84b4
// 004db039  c3                   ret 
// 004db03a  b89c849b00           mov eax, 0x9b849c
// 004db03f  c3                   ret 
// 004db040  b88c849b00           mov eax, 0x9b848c
// 004db045  c3                   ret 
// 004db046  b87c849b00           mov eax, 0x9b847c
// 004db04b  c3                   ret 
// 004db04c  b86c849b00           mov eax, 0x9b846c
// 004db051  c3                   ret 
// 004db052  b85c849b00           mov eax, 0x9b845c
// 004db057  c3                   ret 
// 004db058  b844849b00           mov eax, 0x9b8444
// 004db05d  c3                   ret 
// 004db05e  b830849b00           mov eax, 0x9b8430
// 004db063  c3                   ret 
// 004db064  b818849b00           mov eax, 0x9b8418
// 004db069  c3                   ret 
// 004db06a  b800849b00           mov eax, 0x9b8400
// 004db06f  c3                   ret 
// 004db070  b8e8839b00           mov eax, 0x9b83e8
// 004db075  c3                   ret 
// 004db076  b8d0839b00           mov eax, 0x9b83d0
// 004db07b  c3                   ret 
// 004db07c  b8b8839b00           mov eax, 0x9b83b8
// 004db081  c3                   ret 
// 004db082  b8a4839b00           mov eax, 0x9b83a4
// 004db087  c3                   ret 
// 004db088  b890839b00           mov eax, 0x9b8390
// 004db08d  c3                   ret 
// 004db08e  b878839b00           mov eax, 0x9b8378
// 004db093  c3                   ret 
// 004db094  b864839b00           mov eax, 0x9b8364
// 004db099  c3                   ret 
// 004db09a  b84c839b00           mov eax, 0x9b834c
// 004db09f  c3                   ret 
// 004db0a0  b830839b00           mov eax, 0x9b8330
// 004db0a5  c3                   ret 
// 004db0a6  b814839b00           mov eax, 0x9b8314
// 004db0ab  c3                   ret 
// 004db0ac  b8f8829b00           mov eax, 0x9b82f8
// 004db0b1  c3                   ret 
// 004db0b2  b8dc829b00           mov eax, 0x9b82dc
// 004db0b7  c3                   ret 
// 004db0b8  b8bc829b00           mov eax, 0x9b82bc
// 004db0bd  c3                   ret 
// 004db0be  b89c829b00           mov eax, 0x9b829c
// 004db0c3  c3                   ret 
// 004db0c4  b878829b00           mov eax, 0x9b8278
// 004db0c9  c3                   ret 
// 004db0ca  b854829b00           mov eax, 0x9b8254
// 004db0cf  c3                   ret 
// 004db0d0  b834829b00           mov eax, 0x9b8234
// 004db0d5  c3                   ret 
// 004db0d6  b814829b00           mov eax, 0x9b8214
// 004db0db  c3                   ret 
// 004db0dc  b8f8819b00           mov eax, 0x9b81f8
// 004db0e1  c3                   ret 
// 004db0e2  b8dc819b00           mov eax, 0x9b81dc
// 004db0e7  c3                   ret 
// 004db0e8  b8c0819b00           mov eax, 0x9b81c0
// 004db0ed  c3                   ret 
// 004db0ee  b8a4819b00           mov eax, 0x9b81a4
// 004db0f3  c3                   ret 
// 004db0f4  b880819b00           mov eax, 0x9b8180
// 004db0f9  c3                   ret 
// 004db0fa  b860819b00           mov eax, 0x9b8160
// 004db0ff  c3                   ret 
// 004db100  b850819b00           mov eax, 0x9b8150
// 004db105  c3                   ret 
// 004db106  b83c819b00           mov eax, 0x9b813c
// 004db10b  c3                   ret 
// 004db10c  b820819b00           mov eax, 0x9b8120
// 004db111  c3                   ret 
// 004db112  b810819b00           mov eax, 0x9b8110
// 004db117  c3                   ret 
// 004db118  b8f8809b00           mov eax, 0x9b80f8
// 004db11d  c3                   ret 
// 004db11e  b8e0809b00           mov eax, 0x9b80e0
// 004db123  c3                   ret 
// 004db124  b8c8809b00           mov eax, 0x9b80c8
// 004db129  c3                   ret 
// 004db12a  b8ac809b00           mov eax, 0x9b80ac
// 004db12f  c3                   ret 
// 004db130  3d488b0000           cmp eax, 0x8b48
// 004db135  7727                 ja 0x4db15e
// 004db137  741f                 je 0x4db158
// 004db139  8bc8                 mov ecx, eax
// 004db13b  81e907850000         sub ecx, 0x8507
// 004db141  740f                 je 0x4db152
// 004db143  83e901               sub ecx, 1
// 004db146  0f85bd000000         jne 0x4db209
// 004db14c  b898809b00           mov eax, 0x9b8098
// 004db151  c3                   ret 
// 004db152  b884809b00           mov eax, 0x9b8084
// 004db157  c3                   ret 
// 004db158  b86c809b00           mov eax, 0x9b806c
// 004db15d  c3                   ret 
// 004db15e  3d00000100           cmp eax, 0x10000
// 004db163  0f87a0000000         ja 0x4db209
// 004db169  0f8494000000         je 0x4db203
// 004db16f  8d88b074ffff         lea ecx, [eax - 0x8b50]
// 004db175  83f914               cmp ecx, 0x14
// 004db178  0f878b000000         ja 0x4db209
// 004db17e  ff248d30b94d00       jmp dword ptr [ecx*4 + 0x4db930]
// 004db185  b858809b00           mov eax, 0x9b8058
// 004db18a  c3                   ret 
// 004db18b  b844809b00           mov eax, 0x9b8044
// 004db190  c3                   ret 
// 004db191  b830809b00           mov eax, 0x9b8030
// 004db196  c3                   ret 
// 004db197  b820809b00           mov eax, 0x9b8020
// 004db19c  c3                   ret 
// 004db19d  b810809b00           mov eax, 0x9b8010
// 004db1a2  c3                   ret 
// 004db1a3  b800809b00           mov eax, 0x9b8000
// 004db1a8  c3                   ret 
// 004db1a9  b8f47f9b00           mov eax, 0x9b7ff4
// 004db1ae  c3                   ret 
// 004db1af  b8e07f9b00           mov eax, 0x9b7fe0
// 004db1b4  c3                   ret 
// 004db1b5  b8cc7f9b00           mov eax, 0x9b7fcc
// 004db1ba  c3                   ret 
// 004db1bb  b8b87f9b00           mov eax, 0x9b7fb8
// 004db1c0  c3                   ret 
// 004db1c1  b8a47f9b00           mov eax, 0x9b7fa4
// 004db1c6  c3                   ret 
// 004db1c7  b8907f9b00           mov eax, 0x9b7f90
// 004db1cc  c3                   ret 
// 004db1cd  b87c7f9b00           mov eax, 0x9b7f7c
// 004db1d2  c3                   ret 
// 004db1d3  b8687f9b00           mov eax, 0x9b7f68
// 004db1d8  c3                   ret 
// 004db1d9  b8547f9b00           mov eax, 0x9b7f54
// 004db1de  c3                   ret 
// 004db1df  b8407f9b00           mov eax, 0x9b7f40
// 004db1e4  c3                   ret 
// 004db1e5  b82c7f9b00           mov eax, 0x9b7f2c
// 004db1ea  c3                   ret 
// 004db1eb  b8107f9b00           mov eax, 0x9b7f10
// 004db1f0  c3                   ret 
// 004db1f1  b8f47e9b00           mov eax, 0x9b7ef4
// 004db1f6  c3                   ret 
// 004db1f7  b8dc7e9b00           mov eax, 0x9b7edc
// 004db1fc  c3                   ret 
// 004db1fd  b8bc7e9b00           mov eax, 0x9b7ebc
// 004db202  c3                   ret 
// 004db203  b8b07e9b00           mov eax, 0x9b7eb0
// 004db208  c3                   ret 
// 004db209  50                   push eax
// 004db20a  68a87e9b00           push 0x9b7ea8
// 004db20f  68d8dbb700           push 0xb7dbd8
// 004db214  ff15dcb79800         call dword ptr [0x98b7dc]
// 004db21a  83c40c               add esp, 0xc
// 004db21d  b8d8dbb700           mov eax, 0xb7dbd8
// 004db222  c3                   ret 
// 004db223  90                   nop 
// 004db224  5e                   pop esi
// 004db225  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 004db226  4d                   dec ebp
// 004db227  0064a54d             add byte ptr [ebp + 0x4d], ah
// 004db22b  0016                 add byte ptr [esi], dl
// 004db22d  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 004db22e  4d                   dec ebp
// 004db22f  003a                 add byte ptr [edx], bh
// 004db231  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 004db232  4d                   dec ebp
// 004db233  0040a5               add byte ptr [eax - 0x5b], al
// 004db236  4d                   dec ebp
// 004db237  0046a5               add byte ptr [esi - 0x5b], al
// 004db23a  4d                   dec ebp
// 004db23b  004ca54d             add byte ptr [ebp + 0x4d], cl
// 004db23f  0052a5               add byte ptr [edx - 0x5b], dl
// 004db242  4d                   dec ebp
// 004db243  001ca54d0058a5       add byte ptr [0xa558004d], bl
// 004db24a  4d                   dec ebp
// 004db24b  0022                 add byte ptr [edx], ah
// 004db24d  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 004db24e  4d                   dec ebp
// 004db24f  0028                 add byte ptr [eax], ch
// 004db251  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 004db252  4d                   dec ebp
// 004db253  002e                 add byte ptr [esi], ch
// 004db255  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 004db256  4d                   dec ebp
// 004db257  0034a54d0009b2       add byte ptr [0xb209004d], dh
// 004db25e  4d                   dec ebp
// 004db25f  0000                 add byte ptr [eax], al
// 004db261  0102                 add dword ptr [edx], eax
// 004db263  03040506070809       add eax, dword ptr [eax + 0x9080706]
// 004db26a  0e                   push cs
// 004db26b  0e                   push cs
// 004db26c  0e                   push cs
// 004db26d  0e                   push cs
// 004db26e  0e                   push cs
// 004db26f  0e                   push cs
// 004db270  0a0e                 or cl, byte ptr [esi]
// 004db272  0e                   push cs
// 004db273  0e                   push cs
// 004db274  0e                   push cs
// 004db275  0e                   push cs
// 004db276  0e                   push cs
// 004db277  0e                   push cs
// 004db278  0e                   push cs
// 004db279  0e                   push cs
// 004db27a  0e                   push cs
// 004db27b  0e                   push cs
// 004db27c  0e                   push cs
// 004db27d  0e                   push cs
// 004db27e  0e                   push cs
// 004db27f  0e                   push cs
// 004db280  0b0e                 or ecx, dword ptr [esi]
// 004db282  0e                   push cs
// 004db283  0e                   push cs
// 004db284  0e                   push cs
// 004db285  0e                   push cs
// 004db286  0e                   push cs
// 004db287  0e                   push cs
// 004db288  0e                   push cs
// 004db289  0e                   push cs
// 004db28a  0e                   push cs
// 004db28b  0e                   push cs
// 004db28c  0e                   push cs
// 004db28d  0e                   push cs
// 004db28e  0e                   push cs
// 004db28f  0e                   push cs
// 004db290  0e                   push cs
// 004db291  0e                   push cs
// 004db292  0e                   push cs
// 004db293  0e                   push cs
// 004db294  0e                   push cs
// 004db295  0e                   push cs
// 004db296  0e                   push cs
// 004db297  0e                   push cs
// 004db298  0e                   push cs
// 004db299  0e                   push cs
// 004db29a  0e                   push cs
// 004db29b  0e                   push cs
// 004db29c  0e                   push cs
// 004db29d  0e                   push cs
// 004db29e  0e                   push cs
// 004db29f  0e                   push cs
// 004db2a0  0c0e                 or al, 0xe
// 004db2a2  0e                   push cs
// 004db2a3  0e                   push cs
// 004db2a4  0e                   push cs
// 004db2a5  0e                   push cs
// 004db2a6  0e                   push cs
// 004db2a7  0e                   push cs
// 004db2a8  0e                   push cs
// 004db2a9  0e                   push cs
// 004db2aa  0e                   push cs
// 004db2ab  0e                   push cs
// 004db2ac  0e                   push cs
// 004db2ad  0e                   push cs
// 004db2ae  0e                   push cs
// 004db2af  0e                   push cs
// 004db2b0  0e                   push cs
// 004db2b1  0e                   push cs
// 004db2b2  0e                   push cs
// 004db2b3  0e                   push cs
// 004db2b4  0e                   push cs
// 004db2b5  0e                   push cs
// 004db2b6  0e                   push cs
// 004db2b7  0e                   push cs
// 004db2b8  0e                   push cs
// 004db2b9  0e                   push cs
// 004db2ba  0e                   push cs
// 004db2bb  0e                   push cs
// 004db2bc  0e                   push cs
// 004db2bd  0e                   push cs
// 004db2be  0e                   push cs
// 004db2bf  0e                   push cs
// 004db2c0  0e                   push cs
// 004db2c1  0e                   push cs
// 004db2c2  0e                   push cs
// 004db2c3  0e                   push cs
// 004db2c4  0e                   push cs
// 004db2c5  0e                   push cs
// 004db2c6  0e                   push cs
// 004db2c7  0e                   push cs
// 004db2c8  0e                   push cs
// 004db2c9  0e                   push cs
// 004db2ca  0e                   push cs
// 004db2cb  0e                   push cs
// 004db2cc  0e                   push cs
// 004db2cd  0e                   push cs
// 004db2ce  0e                   push cs
// 004db2cf  0e                   push cs
// 004db2d0  0e                   push cs
// 004db2d1  0e                   push cs
// 004db2d2  0e                   push cs
// 004db2d3  0e                   push cs
// 004db2d4  0e                   push cs
// 004db2d5  0e                   push cs
// 004db2d6  0e                   push cs
// 004db2d7  0e                   push cs
// 004db2d8  0e                   push cs
// 004db2d9  0e                   push cs
// 004db2da  0e                   push cs
// 004db2db  0e                   push cs
// 004db2dc  0e                   push cs
// 004db2dd  0e                   push cs
// 004db2de  0e                   push cs
// 004db2df  0e                   push cs
// 004db2e0  0d8d49008f           or eax, 0x8f00498d
// 004db2e5  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 004db2e6  4d                   dec ebp
// 004db2e7  0095a54d009b         add byte ptr [ebp - 0x64ffb25b], dl
// 004db2ed  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 004db2ee  4d                   dec ebp
// 004db2ef  00a1a54d00cc         add byte ptr [ecx - 0x33ffb25b], ah
// 004db2f5  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 004db2f6  4d                   dec ebp
// 004db2f7  00d2                 add dl, dl
// 004db2f9  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 004db2fa  4d                   dec ebp
// 004db2fb  00d8                 add al, bl
// 004db2fd  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 004db2fe  4d                   dec ebp
// 004db2ff  00de                 add dh, bl
// 004db301  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 004db302  4d                   dec ebp
// 004db303  00e4                 add ah, ah
// 004db305  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 004db306  4d                   dec ebp
// 004db307  00ea                 add dl, ch
// 004db309  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 004db30a  4d                   dec ebp
// 004db30b  00f0                 add al, dh
// 004db30d  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 004db30e  4d                   dec ebp
// 004db30f  008ba64d0091         add byte ptr [ebx - 0x6effb25a], cl
// 004db315  a6                   cmpsb byte ptr [esi], byte ptr es:[edi]
// 004db316  4d                   dec ebp
// 004db317  0097a64d009d         add byte ptr [edi - 0x62ffb25a], dl
// 004db31d  a6                   cmpsb byte ptr [esi], byte ptr es:[edi]
// 004db31e  4d                   dec ebp
// 004db31f  00a3a64d00a9         add byte ptr [ebx - 0x56ffb25a], ah
// 004db325  a6                   cmpsb byte ptr [esi], byte ptr es:[edi]
// 004db326  4d                   dec ebp
// 004db327  00afa64d00b5         add byte ptr [edi - 0x4affb25a], ch
// 004db32d  a6                   cmpsb byte ptr [esi], byte ptr es:[edi]
// 004db32e  4d                   dec ebp
// 004db32f  00e0                 add al, ah
// 004db331  a6                   cmpsb byte ptr [esi], byte ptr es:[edi]
// 004db332  4d                   dec ebp
// 004db333  00e6                 add dh, ah
// 004db335  a6                   cmpsb byte ptr [esi], byte ptr es:[edi]
// 004db336  4d                   dec ebp
// 004db337  00ec                 add ah, ch
// 004db339  a6                   cmpsb byte ptr [esi], byte ptr es:[edi]
// 004db33a  4d                   dec ebp
// 004db33b  00f2                 add dl, dh
// 004db33d  a6                   cmpsb byte ptr [esi], byte ptr es:[edi]
// 004db33e  4d                   dec ebp
// 004db33f  00f8                 add al, bh
// 004db341  a6                   cmpsb byte ptr [esi], byte ptr es:[edi]
// 004db342  4d                   dec ebp
// 004db343  0023                 add byte ptr [ebx], ah
// 004db345  a7                   cmpsd dword ptr [esi], dword ptr es:[edi]
// 004db346  4d                   dec ebp
// 004db347  0029                 add byte ptr [ecx], ch
// 004db349  a7                   cmpsd dword ptr [esi], dword ptr es:[edi]
// 004db34a  4d                   dec ebp
// 004db34b  002f                 add byte ptr [edi], ch
// 004db34d  a7                   cmpsd dword ptr [esi], dword ptr es:[edi]
// 004db34e  4d                   dec ebp
// 004db34f  0035a74d00ab         add byte ptr [0xab004da7], dh
// 004db355  a7                   cmpsd dword ptr [esi], dword ptr es:[edi]
// 004db356  4d                   dec ebp
// 004db357  00b1a74d00b7         add byte ptr [ecx - 0x48ffb259], dh
// 004db35d  a7                   cmpsd dword ptr [esi], dword ptr es:[edi]
// 004db35e  4d                   dec ebp
// 004db35f  00bda74d00c3         add byte ptr [ebp - 0x3cffb259], bh
// 004db365  a7                   cmpsd dword ptr [esi], dword ptr es:[edi]
// 004db366  4d                   dec ebp
// 004db367  00c9                 add cl, cl
// 004db369  a7                   cmpsd dword ptr [esi], dword ptr es:[edi]
// 004db36a  4d                   dec ebp
// 004db36b  00cf                 add bh, cl
// 004db36d  a7                   cmpsd dword ptr [esi], dword ptr es:[edi]
// 004db36e  4d                   dec ebp
// 004db36f  00d5                 add ch, dl
// 004db371  a7                   cmpsd dword ptr [esi], dword ptr es:[edi]
// 004db372  4d                   dec ebp
// 004db373  00db                 add bl, bl
// 004db375  a7                   cmpsd dword ptr [esi], dword ptr es:[edi]
// 004db376  4d                   dec ebp
// 004db377  00e1                 add cl, ah
// 004db379  a7                   cmpsd dword ptr [esi], dword ptr es:[edi]
// 004db37a  4d                   dec ebp
// 004db37b  00e7                 add bh, ah
// 004db37d  a7                   cmpsd dword ptr [esi], dword ptr es:[edi]
// 004db37e  4d                   dec ebp
// 004db37f  00ed                 add ch, ch
// 004db381  a7                   cmpsd dword ptr [esi], dword ptr es:[edi]
// 004db382  4d                   dec ebp
// 004db383  00f3                 add bl, dh
// 004db385  a7                   cmpsd dword ptr [esi], dword ptr es:[edi]
// 004db386  4d                   dec ebp
// 004db387  00f9                 add cl, bh
// 004db389  a7                   cmpsd dword ptr [esi], dword ptr es:[edi]
// 004db38a  4d                   dec ebp
// 004db38b  00ff                 add bh, bh
// 004db38d  a7                   cmpsd dword ptr [esi], dword ptr es:[edi]
// 004db38e  4d                   dec ebp
// 004db38f  0047a8               add byte ptr [edi - 0x58], al
// 004db392  4d                   dec ebp
// 004db393  0041a8               add byte ptr [ecx - 0x58], al
// 004db396  4d                   dec ebp
// 004db397  003b                 add byte ptr [ebx], bh
// 004db399  a84d                 test al, 0x4d
// 004db39b  004da8               add byte ptr [ebp - 0x58], cl
// 004db39e  4d                   dec ebp
// 004db39f  00a5a74d000b         add byte ptr [ebp + 0xb004da7], ah
// 004db3a5  a84d                 test al, 0x4d
// 004db3a7  0059a8               add byte ptr [ecx - 0x58], bl
// 004db3aa  4d                   dec ebp
// 004db3ab  0029                 add byte ptr [ecx], ch
// 004db3ad  a84d                 test al, 0x4d
// 004db3af  0035a84d002f         add byte ptr [0x2f004da8], dh
// 004db3b5  a84d                 test al, 0x4d
// 004db3b7  0023                 add byte ptr [ebx], ah
// 004db3b9  a84d                 test al, 0x4d
// 004db3bb  0053a8               add byte ptr [ebx - 0x58], dl
// 004db3be  4d                   dec ebp
// 004db3bf  0017                 add byte ptr [edi], dl
// 004db3c1  a84d                 test al, 0x4d
// 004db3c3  001da84d0011         add byte ptr [0x11004da8], bl
// 004db3c9  a84d                 test al, 0x4d
// 004db3cb  005fa8               add byte ptr [edi - 0x58], bl
// 004db3ce  4d                   dec ebp
// 004db3cf  0005a84d0009         add byte ptr [0x9004da8], al
// 004db3d5  b24d                 mov dl, 0x4d
// 004db3d7  0000                 add byte ptr [eax], al
// 004db3d9  0102                 add dword ptr [edx], eax
// 004db3db  03040506070820       add eax, dword ptr [eax + 0x20080706]
// 004db3e2  2020                 and byte ptr [eax], ah
// 004db3e4  2020                 and byte ptr [eax], ah
// 004db3e6  2009                 and byte ptr [ecx], cl
// 004db3e8  0a0b                 or cl, byte ptr [ebx]
// 004db3ea  0c20                 or al, 0x20
// 004db3ec  2020                 and byte ptr [eax], ah
// 004db3ee  2020                 and byte ptr [eax], ah
// 004db3f0  2020                 and byte ptr [eax], ah
// 004db3f2  2020                 and byte ptr [eax], ah
// 004db3f4  2020                 and byte ptr [eax], ah
// 004db3f6  200d0e20200f         and byte ptr [0xf20200e], cl
// 004db3fc  2020                 and byte ptr [eax], ah
// 004db3fe  2020                 and byte ptr [eax], ah
// 004db400  2020                 and byte ptr [eax], ah
// 004db402  2020                 and byte ptr [eax], ah
// 004db404  2020                 and byte ptr [eax], ah
// 004db406  2020                 and byte ptr [eax], ah
// 004db408  2020                 and byte ptr [eax], ah
// 004db40a  2020                 and byte ptr [eax], ah
// 004db40c  2020                 and byte ptr [eax], ah
// 004db40e  2020                 and byte ptr [eax], ah
// 004db410  2020                 and byte ptr [eax], ah
// 004db412  2020                 and byte ptr [eax], ah
// 004db414  2020                 and byte ptr [eax], ah
// 004db416  2020                 and byte ptr [eax], ah
// 004db418  1011                 adc byte ptr [ecx], dl
// 004db41a  2012                 and byte ptr [edx], dl
// 004db41c  2020                 and byte ptr [eax], ah
// 004db41e  2020                 and byte ptr [eax], ah
// 004db420  2020                 and byte ptr [eax], ah
// 004db422  2020                 and byte ptr [eax], ah
// 004db424  2020                 and byte ptr [eax], ah
// 004db426  2013                 and byte ptr [ebx], dl
// 004db428  2020                 and byte ptr [eax], ah
// 004db42a  2020                 and byte ptr [eax], ah
// 004db42c  2020                 and byte ptr [eax], ah
// 004db42e  1420                 adc al, 0x20
// 004db430  2020                 and byte ptr [eax], ah
// 004db432  2020                 and byte ptr [eax], ah
// 004db434  2020                 and byte ptr [eax], ah
// 004db436  201520202020         and byte ptr [0x20202020], dl
// 004db43c  2020                 and byte ptr [eax], ah
// 004db43e  2020                 and byte ptr [eax], ah
// 004db440  2020                 and byte ptr [eax], ah
// 004db442  2020                 and byte ptr [eax], ah
// 004db444  2020                 and byte ptr [eax], ah
// 004db446  2020                 and byte ptr [eax], ah
// 004db448  16                   push ss
// 004db449  2020                 and byte ptr [eax], ah
// 004db44b  2020                 and byte ptr [eax], ah
// 004db44d  2020                 and byte ptr [eax], ah
// 004db44f  2020                 and byte ptr [eax], ah
// 004db451  2020                 and byte ptr [eax], ah
// 004db453  2020                 and byte ptr [eax], ah
// 004db455  2020                 and byte ptr [eax], ah
// 004db457  2020                 and byte ptr [eax], ah
// 004db459  2020                 and byte ptr [eax], ah
// 004db45b  2020                 and byte ptr [eax], ah
// 004db45d  2020                 and byte ptr [eax], ah
// 004db45f  2020                 and byte ptr [eax], ah
// 004db461  2020                 and byte ptr [eax], ah
// 004db463  2020                 and byte ptr [eax], ah
// 004db465  2020                 and byte ptr [eax], ah
// 004db467  17                   pop ss
// 004db468  2020                 and byte ptr [eax], ah
// 004db46a  2020                 and byte ptr [eax], ah
// 004db46c  2020                 and byte ptr [eax], ah
// 004db46e  2020                 and byte ptr [eax], ah
// 004db470  2020                 and byte ptr [eax], ah
// 004db472  2020                 and byte ptr [eax], ah
// 004db474  2020                 and byte ptr [eax], ah
// 004db476  2020                 and byte ptr [eax], ah
// 004db478  1820                 sbb byte ptr [eax], ah
// 004db47a  2020                 and byte ptr [eax], ah
// 004db47c  2020                 and byte ptr [eax], ah
// 004db47e  2020                 and byte ptr [eax], ah
// 004db480  2020                 and byte ptr [eax], ah
// 004db482  2020                 and byte ptr [eax], ah
// 004db484  2020                 and byte ptr [eax], ah
// 004db486  2020                 and byte ptr [eax], ah
// 004db488  2020                 and byte ptr [eax], ah
// 004db48a  2020                 and byte ptr [eax], ah
// 004db48c  2020                 and byte ptr [eax], ah
// 004db48e  2020                 and byte ptr [eax], ah
// 004db490  2020                 and byte ptr [eax], ah
// 004db492  2020                 and byte ptr [eax], ah
// 004db494  2020                 and byte ptr [eax], ah
// 004db496  2019                 and byte ptr [ecx], bl
// 004db498  2020                 and byte ptr [eax], ah
// 004db49a  2020                 and byte ptr [eax], ah
// 004db49c  2020                 and byte ptr [eax], ah
// 004db49e  2020                 and byte ptr [eax], ah
// 004db4a0  2020                 and byte ptr [eax], ah
// 004db4a2  2020                 and byte ptr [eax], ah
// 004db4a4  2020                 and byte ptr [eax], ah
// 004db4a6  201a                 and byte ptr [edx], bl
// 004db4a8  2020                 and byte ptr [eax], ah
// 004db4aa  2020                 and byte ptr [eax], ah
// 004db4ac  2020                 and byte ptr [eax], ah
// 004db4ae  2020                 and byte ptr [eax], ah
// 004db4b0  2020                 and byte ptr [eax], ah
// 004db4b2  2020                 and byte ptr [eax], ah
// 004db4b4  2020                 and byte ptr [eax], ah
// 004db4b6  201b                 and byte ptr [ebx], bl
// 004db4b8  1c1d                 sbb al, 0x1d
// 004db4ba  2020                 and byte ptr [eax], ah
// 004db4bc  2020                 and byte ptr [eax], ah
// 004db4be  2020                 and byte ptr [eax], ah
// 004db4c0  2020                 and byte ptr [eax], ah
// 004db4c2  2020                 and byte ptr [eax], ah
// 004db4c4  2020                 and byte ptr [eax], ah
// 004db4c6  2020                 and byte ptr [eax], ah
// 004db4c8  1e                   push ds
// 004db4c9  1f                   pop ds
// 004db4ca  8bff                 mov edi, edi
// 004db4cc  0e                   push cs
// 004db4cd  a94d0008a9           test eax, 0xa908004d
// 004db4d2  4d                   dec ebp
// 004db4d3  0002                 add byte ptr [edx], al
// 004db4d5  a94d00a2a8           test eax, 0xa8a2004d
// 004db4da  4d                   dec ebp
// 004db4db  00a8a84d00ae         add byte ptr [eax - 0x51ffb258], ch
// 004db4e1  a84d                 test al, 0x4d
// 004db4e3  00b4a84d00baa8       add byte ptr [eax + ebp*4 - 0x5745ffb3], dh
// 004db4ea  4d                   dec ebp
// 004db4eb  00c0                 add al, al
// 004db4ed  a84d                 test al, 0x4d
// 004db4ef  00c6                 add dh, al
// 004db4f1  a84d                 test al, 0x4d
// 004db4f3  00cc                 add ah, cl
// 004db4f5  a84d                 test al, 0x4d
// 004db4f7  00d2                 add dl, dl
// 004db4f9  a84d                 test al, 0x4d
// 004db4fb  00d8                 add al, bl
// 004db4fd  a84d                 test al, 0x4d
// 004db4ff  00de                 add dh, bl
// 004db501  a84d                 test al, 0x4d
// 004db503  00e4                 add ah, ah
// 004db505  a84d                 test al, 0x4d
// 004db507  00ea                 add dl, ch
// 004db509  a84d                 test al, 0x4d
// 004db50b  00f0                 add al, dh
// 004db50d  a84d                 test al, 0x4d
// 004db50f  00f6                 add dh, dh
// 004db511  a84d                 test al, 0x4d
// 004db513  00fc                 add ah, bh
// 004db515  a84d                 test al, 0x4d
// 004db517  0009                 add byte ptr [ecx], cl
// 004db519  b24d                 mov dl, 0x4d
// 004db51b  0000                 add byte ptr [eax], al
// 004db51d  0102                 add dword ptr [edx], eax
// 004db51f  1313                 adc edx, dword ptr [ebx]
// 004db521  1313                 adc edx, dword ptr [ebx]
// 004db523  1313                 adc edx, dword ptr [ebx]
// 004db525  1313                 adc edx, dword ptr [ebx]
// 004db527  1313                 adc edx, dword ptr [ebx]
// 004db529  1313                 adc edx, dword ptr [ebx]
// 004db52b  1313                 adc edx, dword ptr [ebx]
// 004db52d  1313                 adc edx, dword ptr [ebx]
// 004db52f  1313                 adc edx, dword ptr [ebx]
// 004db531  1313                 adc edx, dword ptr [ebx]
// 004db533  1313                 adc edx, dword ptr [ebx]
// 004db535  1313                 adc edx, dword ptr [ebx]
// 004db537  1313                 adc edx, dword ptr [ebx]
// 004db539  1313                 adc edx, dword ptr [ebx]
// 004db53b  1313                 adc edx, dword ptr [ebx]
// 004db53d  1313                 adc edx, dword ptr [ebx]
// 004db53f  1313                 adc edx, dword ptr [ebx]
// 004db541  1313                 adc edx, dword ptr [ebx]
// 004db543  1313                 adc edx, dword ptr [ebx]
// 004db545  1313                 adc edx, dword ptr [ebx]
// 004db547  1313                 adc edx, dword ptr [ebx]
// 004db549  1313                 adc edx, dword ptr [ebx]
// 004db54b  1313                 adc edx, dword ptr [ebx]
// 004db54d  1313                 adc edx, dword ptr [ebx]
// 004db54f  1313                 adc edx, dword ptr [ebx]
// 004db551  1313                 adc edx, dword ptr [ebx]
// 004db553  1313                 adc edx, dword ptr [ebx]
// 004db555  1313                 adc edx, dword ptr [ebx]
// 004db557  1313                 adc edx, dword ptr [ebx]
// 004db559  1313                 adc edx, dword ptr [ebx]
// 004db55b  1313                 adc edx, dword ptr [ebx]
// 004db55d  1313                 adc edx, dword ptr [ebx]
// 004db55f  1313                 adc edx, dword ptr [ebx]
// 004db561  1313                 adc edx, dword ptr [ebx]
// 004db563  1313                 adc edx, dword ptr [ebx]
// 004db565  1313                 adc edx, dword ptr [ebx]
// 004db567  1313                 adc edx, dword ptr [ebx]
// 004db569  1313                 adc edx, dword ptr [ebx]
// 004db56b  1313                 adc edx, dword ptr [ebx]
// 004db56d  1313                 adc edx, dword ptr [ebx]
// 004db56f  1313                 adc edx, dword ptr [ebx]
// 004db571  1313                 adc edx, dword ptr [ebx]
// 004db573  1313                 adc edx, dword ptr [ebx]
// 004db575  1313                 adc edx, dword ptr [ebx]
// 004db577  1313                 adc edx, dword ptr [ebx]
// 004db579  1313                 adc edx, dword ptr [ebx]
// 004db57b  1313                 adc edx, dword ptr [ebx]
// 004db57d  1313                 adc edx, dword ptr [ebx]
// 004db57f  1313                 adc edx, dword ptr [ebx]
// 004db581  1313                 adc edx, dword ptr [ebx]
// 004db583  1313                 adc edx, dword ptr [ebx]
// 004db585  1313                 adc edx, dword ptr [ebx]
// 004db587  1313                 adc edx, dword ptr [ebx]
// 004db589  1313                 adc edx, dword ptr [ebx]
// 004db58b  1313                 adc edx, dword ptr [ebx]
// 004db58d  1313                 adc edx, dword ptr [ebx]
// 004db58f  1313                 adc edx, dword ptr [ebx]
// 004db591  1313                 adc edx, dword ptr [ebx]
// 004db593  1313                 adc edx, dword ptr [ebx]
// 004db595  1313                 adc edx, dword ptr [ebx]
// 004db597  1313                 adc edx, dword ptr [ebx]
// 004db599  1313                 adc edx, dword ptr [ebx]
// 004db59b  1313                 adc edx, dword ptr [ebx]
// 004db59d  1313                 adc edx, dword ptr [ebx]
// 004db59f  1313                 adc edx, dword ptr [ebx]
// 004db5a1  1313                 adc edx, dword ptr [ebx]
// 004db5a3  1313                 adc edx, dword ptr [ebx]
// 004db5a5  1313                 adc edx, dword ptr [ebx]
// 004db5a7  1313                 adc edx, dword ptr [ebx]
// 004db5a9  1313                 adc edx, dword ptr [ebx]
// 004db5ab  1313                 adc edx, dword ptr [ebx]
// 004db5ad  1313                 adc edx, dword ptr [ebx]
// 004db5af  1313                 adc edx, dword ptr [ebx]
// 004db5b1  1313                 adc edx, dword ptr [ebx]
// 004db5b3  1313                 adc edx, dword ptr [ebx]
// 004db5b5  1313                 adc edx, dword ptr [ebx]
// 004db5b7  1313                 adc edx, dword ptr [ebx]
// 004db5b9  1313                 adc edx, dword ptr [ebx]
// 004db5bb  1313                 adc edx, dword ptr [ebx]
// 004db5bd  1313                 adc edx, dword ptr [ebx]
// 004db5bf  1313                 adc edx, dword ptr [ebx]
// 004db5c1  1313                 adc edx, dword ptr [ebx]
// 004db5c3  1313                 adc edx, dword ptr [ebx]
// 004db5c5  1313                 adc edx, dword ptr [ebx]
// 004db5c7  1313                 adc edx, dword ptr [ebx]
// 004db5c9  1313                 adc edx, dword ptr [ebx]
// 004db5cb  1313                 adc edx, dword ptr [ebx]
// 004db5cd  1313                 adc edx, dword ptr [ebx]
// 004db5cf  1303                 adc eax, dword ptr [ebx]
// 004db5d1  0405                 add al, 5
// 004db5d3  06                   push es
// 004db5d4  07                   pop es
// 004db5d5  0809                 or byte ptr [ecx], cl
// 004db5d7  0a0b                 or cl, byte ptr [ebx]
// 004db5d9  0c0d                 or al, 0xd
// 004db5db  1313                 adc edx, dword ptr [ebx]
// 004db5dd  1313                 adc edx, dword ptr [ebx]
// 004db5df  1313                 adc edx, dword ptr [ebx]
// 004db5e1  1313                 adc edx, dword ptr [ebx]
// 004db5e3  1313                 adc edx, dword ptr [ebx]
// 004db5e5  1313                 adc edx, dword ptr [ebx]
// 004db5e7  1313                 adc edx, dword ptr [ebx]
// 004db5e9  1313                 adc edx, dword ptr [ebx]
// 004db5eb  0e                   push cs
// 004db5ec  0f1011               movups xmm2, xmmword ptr [ecx]
// 004db5ef  1248a9               adc cl, byte ptr [eax - 0x57]
// 004db5f2  4d                   dec ebp
// 004db5f3  004ea9               add byte ptr [esi - 0x57], cl
// 004db5f6  4d                   dec ebp
// 004db5f7  0054a94d             add byte ptr [ecx + ebp*4 + 0x4d], dl
// 004db5fb  005aa9               add byte ptr [edx - 0x57], bl
// 004db5fe  4d                   dec ebp
// 004db5ff  0060a9               add byte ptr [eax - 0x57], ah
// 004db602  4d                   dec ebp
// 004db603  0066a9               add byte ptr [esi - 0x57], ah
// 004db606  4d                   dec ebp
// 004db607  006ca94d             add byte ptr [ecx + ebp*4 + 0x4d], ch
// 004db60b  0072a9               add byte ptr [edx - 0x57], dh
// 004db60e  4d                   dec ebp
// 004db60f  0078a9               add byte ptr [eax - 0x57], bh
// 004db612  4d                   dec ebp
// 004db613  007ea9               add byte ptr [esi - 0x57], bh
// 004db616  4d                   dec ebp
// 004db617  0084a94d008aa9       add byte ptr [ecx + ebp*4 - 0x5675ffb3], al
// 004db61e  4d                   dec ebp
// 004db61f  0090a94d0096         add byte ptr [eax - 0x69ffb257], dl
// 004db625  a94d009ca9           test eax, 0xa99c004d
// 004db62a  4d                   dec ebp
// 004db62b  00a2a94d00a8         add byte ptr [edx - 0x57ffb257], ah
// 004db631  a94d00aea9           test eax, 0xa9ae004d
// 004db636  4d                   dec ebp
// 004db637  00b4a94d00baa9       add byte ptr [ecx + ebp*4 - 0x5645ffb3], dh
// 004db63e  4d                   dec ebp
// 004db63f  0009                 add byte ptr [ecx], cl
// 004db641  b24d                 mov dl, 0x4d
// 004db643  0000                 add byte ptr [eax], al
// 004db645  0102                 add dword ptr [edx], eax
// 004db647  03040506070814       add eax, dword ptr [eax + 0x14080706]
// 004db64e  1414                 adc al, 0x14
// 004db650  1414                 adc al, 0x14
// 004db652  1414                 adc al, 0x14
// 004db654  1414                 adc al, 0x14
// 004db656  1414                 adc al, 0x14
// 004db658  1414                 adc al, 0x14
// 004db65a  1414                 adc al, 0x14
// 004db65c  1414                 adc al, 0x14
// 004db65e  1414                 adc al, 0x14
// 004db660  1414                 adc al, 0x14
// 004db662  1414                 adc al, 0x14
// 004db664  090a                 or dword ptr [edx], ecx
// 004db666  0b0c0d0e0f1011       or ecx, dword ptr [ecx + 0x11100f0e]
// 004db66d  1414                 adc al, 0x14
// 004db66f  1414                 adc al, 0x14
// 004db671  1414                 adc al, 0x14
// 004db673  1414                 adc al, 0x14
// 004db675  1414                 adc al, 0x14
// 004db677  1414                 adc al, 0x14
// 004db679  1414                 adc al, 0x14
// 004db67b  1414                 adc al, 0x14
// 004db67d  1414                 adc al, 0x14
// 004db67f  1414                 adc al, 0x14
// 004db681  1414                 adc al, 0x14
// 004db683  1414                 adc al, 0x14
// 004db685  1414                 adc al, 0x14
// 004db687  1414                 adc al, 0x14
// 004db689  1414                 adc al, 0x14
// 004db68b  1414                 adc al, 0x14
// 004db68d  1414                 adc al, 0x14
// 004db68f  1414                 adc al, 0x14
// 004db691  1414                 adc al, 0x14
// 004db693  1412                 adc al, 0x12
// 004db695  138bffe5a94d         adc ecx, dword ptr [ebx + 0x4da9e5ff]
// 004db69b  0009                 add byte ptr [ecx], cl
// 004db69d  b24d                 mov dl, 0x4d
// 004db69f  00eb                 add bl, ch
// 004db6a1  a94d00f1a9           test eax, 0xa9f1004d
// 004db6a6  4d                   dec ebp
// 004db6a7  00f7                 add bh, dh
// 004db6a9  a94d0061aa           test eax, 0xaa61004d
// 004db6ae  4d                   dec ebp
// 004db6af  0067aa               add byte ptr [edi - 0x56], ah
// 004db6b2  4d                   dec ebp
// 004db6b3  006daa               add byte ptr [ebp - 0x56], ch
// 004db6b6  4d                   dec ebp
// 004db6b7  0073aa               add byte ptr [ebx - 0x56], dh
// 004db6ba  4d                   dec ebp
// 004db6bb  0079aa               add byte ptr [ecx - 0x56], bh
// 004db6be  4d                   dec ebp
// 004db6bf  007faa               add byte ptr [edi - 0x56], bh
// 004db6c2  4d                   dec ebp
// 004db6c3  0085aa4d00c7         add byte ptr [ebp - 0x38ffb256], al
// 004db6c9  aa                   stosb byte ptr es:[edi], al
// 004db6ca  4d                   dec ebp
// 004db6cb  00cd                 add ch, cl
// 004db6cd  aa                   stosb byte ptr es:[edi], al
// 004db6ce  4d                   dec ebp
// 004db6cf  00d3                 add bl, dl
// 004db6d1  aa                   stosb byte ptr es:[edi], al
// 004db6d2  4d                   dec ebp
// 004db6d3  00d9                 add cl, bl
// 004db6d5  aa                   stosb byte ptr es:[edi], al
// 004db6d6  4d                   dec ebp
// 004db6d7  00df                 add bh, bl
// 004db6d9  aa                   stosb byte ptr es:[edi], al
// 004db6da  4d                   dec ebp
// 004db6db  00e5                 add ch, ah
// 004db6dd  aa                   stosb byte ptr es:[edi], al
// 004db6de  4d                   dec ebp
// 004db6df  00eb                 add bl, ch
// 004db6e1  aa                   stosb byte ptr es:[edi], al
// 004db6e2  4d                   dec ebp
// 004db6e3  00f1                 add cl, dh
// 004db6e5  aa                   stosb byte ptr es:[edi], al
// 004db6e6  4d                   dec ebp
// 004db6e7  00f7                 add bh, dh
// 004db6e9  aa                   stosb byte ptr es:[edi], al
// 004db6ea  4d                   dec ebp
// 004db6eb  00fd                 add ch, bh
// 004db6ed  aa                   stosb byte ptr es:[edi], al
// 004db6ee  4d                   dec ebp
// 004db6ef  001f                 add byte ptr [edi], bl
// 004db6f1  ab                   stosd dword ptr es:[edi], eax
// 004db6f2  4d                   dec ebp
// 004db6f3  0025ab4d002b         add byte ptr [0x2b004dab], ah
// 004db6f9  ab                   stosd dword ptr es:[edi], eax
// 004db6fa  4d                   dec ebp
// 004db6fb  0031                 add byte ptr [ecx], dh
// 004db6fd  ab                   stosd dword ptr es:[edi], eax
// 004db6fe  4d                   dec ebp
// 004db6ff  0037                 add byte ptr [edi], dh
// 004db701  ab                   stosd dword ptr es:[edi], eax
// 004db702  4d                   dec ebp
// 004db703  003dab4d0043         add byte ptr [0x43004dab], bh
// 004db709  ab                   stosd dword ptr es:[edi], eax
// 004db70a  4d                   dec ebp
// 004db70b  0049ab               add byte ptr [ecx - 0x55], cl
// 004db70e  4d                   dec ebp
// 004db70f  004fab               add byte ptr [edi - 0x55], cl
// 004db712  4d                   dec ebp
// 004db713  0055ab               add byte ptr [ebp - 0x55], dl
// 004db716  4d                   dec ebp
// 004db717  005bab               add byte ptr [ebx - 0x55], bl
// 004db71a  4d                   dec ebp
// 004db71b  0061ab               add byte ptr [ecx - 0x55], ah
// 004db71e  4d                   dec ebp
// 004db71f  0067ab               add byte ptr [edi - 0x55], ah
// 004db722  4d                   dec ebp
// 004db723  006dab               add byte ptr [ebp - 0x55], ch
// 004db726  4d                   dec ebp
// 004db727  0073ab               add byte ptr [ebx - 0x55], dh
// 004db72a  4d                   dec ebp
// 004db72b  0063ac               add byte ptr [ebx - 0x54], ah
// 004db72e  4d                   dec ebp
// 004db72f  0069ac               add byte ptr [ecx - 0x54], ch
// 004db732  4d                   dec ebp
// 004db733  006fac               add byte ptr [edi - 0x54], ch
// 004db736  4d                   dec ebp
// 004db737  0075ac               add byte ptr [ebp - 0x54], dh
// 004db73a  4d                   dec ebp
// 004db73b  007bac               add byte ptr [ebx - 0x54], bh
// 004db73e  4d                   dec ebp
// 004db73f  0081ac4d0087         add byte ptr [ecx - 0x78ffb254], al
// 004db745  ac                   lodsb al, byte ptr [esi]
// 004db746  4d                   dec ebp
// 004db747  008dac4d0093         add byte ptr [ebp - 0x6cffb254], cl
// 004db74d  ac                   lodsb al, byte ptr [esi]
// 004db74e  4d                   dec ebp
// 004db74f  0099ac4d0084         add byte ptr [ecx - 0x7bffb254], bl
// 004db755  af                   scasd eax, dword ptr es:[edi]
// 004db756  4d                   dec ebp
// 004db757  008aaf4d0090         add byte ptr [edx - 0x6fffb251], cl
// 004db75d  af                   scasd eax, dword ptr es:[edi]
// 004db75e  4d                   dec ebp
// 004db75f  0096af4d009c         add byte ptr [esi - 0x63ffb251], dl
// 004db765  af                   scasd eax, dword ptr es:[edi]
// 004db766  4d                   dec ebp
// 004db767  00c7                 add bh, al
// 004db769  af                   scasd eax, dword ptr es:[edi]
// 004db76a  4d                   dec ebp
// 004db76b  00cd                 add ch, cl
// 004db76d  af                   scasd eax, dword ptr es:[edi]
// 004db76e  4d                   dec ebp
// 004db76f  00d3                 add bl, dl
// 004db771  af                   scasd eax, dword ptr es:[edi]
// 004db772  4d                   dec ebp
// 004db773  00d9                 add cl, bl
// 004db775  af                   scasd eax, dword ptr es:[edi]
// 004db776  4d                   dec ebp
// 004db777  00df                 add bh, bl
// 004db779  af                   scasd eax, dword ptr es:[edi]
// 004db77a  4d                   dec ebp
// 004db77b  00e5                 add ch, ah
// 004db77d  af                   scasd eax, dword ptr es:[edi]
// 004db77e  4d                   dec ebp
// 004db77f  00eb                 add bl, ch
// 004db781  af                   scasd eax, dword ptr es:[edi]
// 004db782  4d                   dec ebp
// 004db783  003a                 add byte ptr [edx], bh
// 004db785  b04d                 mov al, 0x4d
// 004db787  0034b0               add byte ptr [eax + esi*4], dh
// 004db78a  4d                   dec ebp
// 004db78b  0018                 add byte ptr [eax], bl
// 004db78d  b14d                 mov cl, 0x4d
// 004db78f  001e                 add byte ptr [esi], bl
// 004db791  b14d                 mov cl, 0x4d
// 004db793  0024b1               add byte ptr [ecx + esi*4], ah
// 004db796  4d                   dec ebp
// 004db797  0012                 add byte ptr [edx], dl
// 004db799  b14d                 mov cl, 0x4d
// 004db79b  0028                 add byte ptr [eax], ch
// 004db79d  b04d                 mov al, 0x4d
// 004db79f  0040b0               add byte ptr [eax - 0x50], al
// 004db7a2  4d                   dec ebp
// 004db7a3  0046b0               add byte ptr [esi - 0x50], al
// 004db7a6  4d                   dec ebp
// 004db7a7  004cb04d             add byte ptr [eax + esi*4 + 0x4d], cl
// 004db7ab  0052b0               add byte ptr [edx - 0x50], dl
// 004db7ae  4d                   dec ebp
// 004db7af  0058b0               add byte ptr [eax - 0x50], bl
// 004db7b2  4d                   dec ebp
// 004db7b3  005eb0               add byte ptr [esi - 0x50], bl
// 004db7b6  4d                   dec ebp
// 004db7b7  0064b04d             add byte ptr [eax + esi*4 + 0x4d], ah
// 004db7bb  006ab0               add byte ptr [edx - 0x50], ch
// 004db7be  4d                   dec ebp
// 004db7bf  0070b0               add byte ptr [eax - 0x50], dh
// 004db7c2  4d                   dec ebp
// 004db7c3  00a0b04d0076         add byte ptr [eax + 0x76004db0], ah
// 004db7c9  b04d                 mov al, 0x4d
// 004db7cb  007cb04d             add byte ptr [eax + esi*4 + 0x4d], bh
// 004db7cf  00a6b04d0082         add byte ptr [esi - 0x7dffb250], ah
// 004db7d5  b04d                 mov al, 0x4d
// 004db7d7  0088b04d008e         add byte ptr [eax - 0x71ffb250], cl
// 004db7dd  b04d                 mov al, 0x4d
// 004db7df  00acb04d0094b0       add byte ptr [eax + esi*4 - 0x4f6bffb3], ch
// 004db7e6  4d                   dec ebp
// 004db7e7  009ab04d00b2         add byte ptr [edx - 0x4dffb250], bl
// 004db7ed  b04d                 mov al, 0x4d
// 004db7ef  00b8b04d00be         add byte ptr [eax - 0x41ffb250], bh
// 004db7f5  b04d                 mov al, 0x4d
// 004db7f7  00c4                 add ah, al
// 004db7f9  b04d                 mov al, 0x4d
// 004db7fb  00ca                 add dl, cl
// 004db7fd  b04d                 mov al, 0x4d
// 004db7ff  00d0                 add al, dl
// 004db801  b04d                 mov al, 0x4d
// 004db803  00d6                 add dh, dl
// 004db805  b04d                 mov al, 0x4d
// 004db807  00dc                 add ah, bl
// 004db809  b04d                 mov al, 0x4d
// 004db80b  00e2                 add dl, ah
// 004db80d  b04d                 mov al, 0x4d
// 004db80f  00e8                 add al, ch
// 004db811  b04d                 mov al, 0x4d
// 004db813  00ee                 add dh, ch
// 004db815  b04d                 mov al, 0x4d
// 004db817  00f4                 add ah, dh
// 004db819  b04d                 mov al, 0x4d
// 004db81b  00fa                 add dl, bh
// 004db81d  b04d                 mov al, 0x4d
// 004db81f  0000                 add byte ptr [eax], al
// 004db821  b14d                 mov cl, 0x4d
// 004db823  0006                 add byte ptr [esi], al
// 004db825  b14d                 mov cl, 0x4d
// 004db827  000cb1               add byte ptr [ecx + esi*4], cl
// 004db82a  4d                   dec ebp
// 004db82b  002e                 add byte ptr [esi], ch
// 004db82d  b04d                 mov al, 0x4d
// 004db82f  0009                 add byte ptr [ecx], cl
// 004db831  b24d                 mov dl, 0x4d
// 004db833  0000                 add byte ptr [eax], al
// 004db835  012b                 add dword ptr [ebx], ebp
// 004db837  2b2b                 sub ebp, dword ptr [ebx]
// 004db839  2b2b                 sub ebp, dword ptr [ebx]
// 004db83b  2b2b                 sub ebp, dword ptr [ebx]
// 004db83d  2b2b                 sub ebp, dword ptr [ebx]
// 004db83f  2b2b                 sub ebp, dword ptr [ebx]
// 004db841  2b2b                 sub ebp, dword ptr [ebx]
// 004db843  2b2b                 sub ebp, dword ptr [ebx]
// 004db845  2b2b                 sub ebp, dword ptr [ebx]
// 004db847  2b2b                 sub ebp, dword ptr [ebx]
// 004db849  2b2b                 sub ebp, dword ptr [ebx]
// 004db84b  2b2b                 sub ebp, dword ptr [ebx]
// 004db84d  2b2b                 sub ebp, dword ptr [ebx]
// 004db84f  2b2b                 sub ebp, dword ptr [ebx]
// 004db851  2b2b                 sub ebp, dword ptr [ebx]
// 004db853  2b2b                 sub ebp, dword ptr [ebx]
// 004db855  2b2b                 sub ebp, dword ptr [ebx]
// 004db857  2b2b                 sub ebp, dword ptr [ebx]
// 004db859  2b2b                 sub ebp, dword ptr [ebx]
// 004db85b  2b2b                 sub ebp, dword ptr [ebx]
// 004db85d  2b2b                 sub ebp, dword ptr [ebx]
// 004db85f  2b2b                 sub ebp, dword ptr [ebx]
// 004db861  2b2b                 sub ebp, dword ptr [ebx]
// 004db863  2b2b                 sub ebp, dword ptr [ebx]
// 004db865  0203                 add al, byte ptr [ebx]
// 004db867  042b                 add al, 0x2b
// 004db869  2b2b                 sub ebp, dword ptr [ebx]
// 004db86b  2b052b2b062b         sub eax, dword ptr [0x2b062b2b]
// 004db871  07                   pop es
// 004db872  0809                 or byte ptr [ecx], cl
// 004db874  0a0b                 or cl, byte ptr [ebx]
// 004db876  0c0d                 or al, 0xd
// 004db878  0e                   push cs
// 004db879  0f1011               movups xmm2, xmmword ptr [ecx]
// 004db87c  1213                 adc dl, byte ptr [ebx]
// 004db87e  1415                 adc al, 0x15
// 004db880  16                   push ss
// 004db881  17                   pop ss
// 004db882  1819                 sbb byte ptr [ecx], bl
// 004db884  1a1b                 sbb bl, byte ptr [ebx]
// 004db886  1c1d                 sbb al, 0x1d
// 004db888  1e                   push ds
// 004db889  1f                   pop ds
// 004db88a  2021                 and byte ptr [ecx], ah
// 004db88c  2223                 and ah, byte ptr [ebx]
// 004db88e  2425                 and al, 0x25
// 004db890  262b2b               sub ebp, dword ptr es:[ebx]
// 004db893  2b2b                 sub ebp, dword ptr [ebx]
// 004db895  2b2b                 sub ebp, dword ptr [ebx]
// 004db897  2b2b                 sub ebp, dword ptr [ebx]
// 004db899  2b2b                 sub ebp, dword ptr [ebx]
// 004db89b  2b2b                 sub ebp, dword ptr [ebx]
// 004db89d  2b2b                 sub ebp, dword ptr [ebx]
// 004db89f  2b2b                 sub ebp, dword ptr [ebx]
// 004db8a1  2b2b                 sub ebp, dword ptr [ebx]
// 004db8a3  2b2b                 sub ebp, dword ptr [ebx]
// 004db8a5  2b2b                 sub ebp, dword ptr [ebx]
// 004db8a7  2b2b                 sub ebp, dword ptr [ebx]
// 004db8a9  2b2b                 sub ebp, dword ptr [ebx]
// 004db8ab  2b2b                 sub ebp, dword ptr [ebx]
// 004db8ad  2b2b                 sub ebp, dword ptr [ebx]
// 004db8af  2b2b                 sub ebp, dword ptr [ebx]
// 004db8b1  2b2b                 sub ebp, dword ptr [ebx]
// 004db8b3  2b2b                 sub ebp, dword ptr [ebx]
// 004db8b5  2b2b                 sub ebp, dword ptr [ebx]
// 004db8b7  2b2b                 sub ebp, dword ptr [ebx]
// 004db8b9  2b2b                 sub ebp, dword ptr [ebx]
// 004db8bb  2b2b                 sub ebp, dword ptr [ebx]
// 004db8bd  2b2b                 sub ebp, dword ptr [ebx]
// 004db8bf  2b2b                 sub ebp, dword ptr [ebx]
// 004db8c1  2b2b                 sub ebp, dword ptr [ebx]
// 004db8c3  2b2b                 sub ebp, dword ptr [ebx]
// 004db8c5  2b2b                 sub ebp, dword ptr [ebx]
// 004db8c7  2b2b                 sub ebp, dword ptr [ebx]
// 004db8c9  2b2b                 sub ebp, dword ptr [ebx]
// 004db8cb  2b2b                 sub ebp, dword ptr [ebx]
// 004db8cd  2b2b                 sub ebp, dword ptr [ebx]
// 004db8cf  2b2b                 sub ebp, dword ptr [ebx]
// 004db8d1  2b2b                 sub ebp, dword ptr [ebx]
// 004db8d3  2b2b                 sub ebp, dword ptr [ebx]
// 004db8d5  2b2b                 sub ebp, dword ptr [ebx]
// 004db8d7  2b2b                 sub ebp, dword ptr [ebx]
// 004db8d9  2b2b                 sub ebp, dword ptr [ebx]
// 004db8db  2b2b                 sub ebp, dword ptr [ebx]
// 004db8dd  2b2b                 sub ebp, dword ptr [ebx]
// 004db8df  2b2b                 sub ebp, dword ptr [ebx]
// 004db8e1  2b2b                 sub ebp, dword ptr [ebx]
// 004db8e3  2b2b                 sub ebp, dword ptr [ebx]
// 004db8e5  2b2b                 sub ebp, dword ptr [ebx]
// 004db8e7  27                   daa 
// 004db8e8  2829                 sub byte ptr [ecx], ch
// 004db8ea  2b2b                 sub ebp, dword ptr [ebx]
// 004db8ec  2b2b                 sub ebp, dword ptr [ebx]
// 004db8ee  2b2b                 sub ebp, dword ptr [ebx]
// 004db8f0  2b2b                 sub ebp, dword ptr [ebx]
// 004db8f2  2b2b                 sub ebp, dword ptr [ebx]
// 004db8f4  2b2b                 sub ebp, dword ptr [ebx]
// 004db8f6  2b2b                 sub ebp, dword ptr [ebx]
// 004db8f8  2b2b                 sub ebp, dword ptr [ebx]
// 004db8fa  2b2b                 sub ebp, dword ptr [ebx]
// 004db8fc  2b2b                 sub ebp, dword ptr [ebx]
// 004db8fe  2b2b                 sub ebp, dword ptr [ebx]
// 004db900  2b2b                 sub ebp, dword ptr [ebx]
// 004db902  2b2b                 sub ebp, dword ptr [ebx]
// 004db904  2b2b                 sub ebp, dword ptr [ebx]
// 004db906  2b2b                 sub ebp, dword ptr [ebx]
// 004db908  2b2b                 sub ebp, dword ptr [ebx]
// 004db90a  2b2b                 sub ebp, dword ptr [ebx]
// 004db90c  2b2b                 sub ebp, dword ptr [ebx]
// 004db90e  2b2b                 sub ebp, dword ptr [ebx]
// 004db910  2b2b                 sub ebp, dword ptr [ebx]
// 004db912  2b2b                 sub ebp, dword ptr [ebx]
// 004db914  2b2b                 sub ebp, dword ptr [ebx]
// 004db916  2b2b                 sub ebp, dword ptr [ebx]
// 004db918  2b2b                 sub ebp, dword ptr [ebx]
// 004db91a  2b2b                 sub ebp, dword ptr [ebx]
// 004db91c  2b2b                 sub ebp, dword ptr [ebx]
// 004db91e  2b2b                 sub ebp, dword ptr [ebx]
// 004db920  2b2b                 sub ebp, dword ptr [ebx]
// 004db922  2b2b                 sub ebp, dword ptr [ebx]
// 004db924  2b2b                 sub ebp, dword ptr [ebx]
// 004db926  2b2b                 sub ebp, dword ptr [ebx]
// 004db928  2b2b                 sub ebp, dword ptr [ebx]
// 004db92a  2b2b                 sub ebp, dword ptr [ebx]
// 004db92c  2a8d490085b1         sub cl, byte ptr [ebp - 0x4e7affb7]
// 004db932  4d                   dec ebp
// 004db933  008bb14d0091         add byte ptr [ebx - 0x6effb24f], cl
// 004db939  b14d                 mov cl, 0x4d
// 004db93b  0097b14d009d         add byte ptr [edi - 0x62ffb24f], dl
// 004db941  b14d                 mov cl, 0x4d
// 004db943  00a3b14d00a9         add byte ptr [ebx - 0x56ffb24f], ah
// 004db949  b14d                 mov cl, 0x4d
// 004db94b  00afb14d00b5         add byte ptr [edi - 0x4affb24f], ch
// 004db951  b14d                 mov cl, 0x4d
// 004db953  00bbb14d00c1         add byte ptr [ebx - 0x3effb24f], bh
// 004db959  b14d                 mov cl, 0x4d
// 004db95b  00c7                 add bh, al
// 004db95d  b14d                 mov cl, 0x4d
// 004db95f  00cd                 add ch, cl
// 004db961  b14d                 mov cl, 0x4d
// 004db963  00d3                 add bl, dl
// 004db965  b14d                 mov cl, 0x4d
// 004db967  00d9                 add cl, bl
// 004db969  b14d                 mov cl, 0x4d
// 004db96b  00df                 add bh, bl
// 004db96d  b14d                 mov cl, 0x4d
// 004db96f  00e5                 add ch, ah
// 004db971  b14d                 mov cl, 0x4d
// 004db973  00eb                 add bl, ch
// 004db975  b14d                 mov cl, 0x4d
// 004db977  00f1                 add cl, dh
// 004db979  b14d                 mov cl, 0x4d
// 004db97b  00f7                 add bh, dh
// 004db97d  b14d                 mov cl, 0x4d
// 004db97f  00fd                 add ch, bh
// 004db981  b14d                 mov cl, 0x4d
// copied from an identical function in another client (function ?GLenumToString@G3D@@YAPBDI@Z)

// from server: 100% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/glenumtostring.cpp
// roc 2008-06 00483a00  unit: G3D::Win32Window  size: 5268 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00483a00
//
// 00483a00  8b442404             mov eax, dword ptr [esp + 4]
// 00483a04  3d00010000           cmp eax, 0x100
// 00483a09  7775                 ja 0x483a80
// 00483a0b  746d                 je 0x483a7a
// 00483a0d  3d80000000           cmp eax, 0x80
// 00483a12  0f87010d0000         ja 0x484719
// 00483a18  0fb68870474800       movzx ecx, byte ptr [eax + 0x484770]
// 00483a1f  ff248d34474800       jmp dword ptr [ecx*4 + 0x484734]
// 00483a26  b84c0c8200           mov eax, 0x820c4c
// 00483a2b  c3                   ret 
// 00483a2c  b83c0c8200           mov eax, 0x820c3c
// 00483a31  c3                   ret 
// 00483a32  b8240c8200           mov eax, 0x820c24
// 00483a37  c3                   ret 
// 00483a38  b8100c8200           mov eax, 0x820c10
// 00483a3d  c3                   ret 
// 00483a3e  b8000c8200           mov eax, 0x820c00
// 00483a43  c3                   ret 
// 00483a44  b8f40b8200           mov eax, 0x820bf4
// 00483a49  c3                   ret 
// 00483a4a  b8e40b8200           mov eax, 0x820be4
// 00483a4f  c3                   ret 
// 00483a50  b8d40b8200           mov eax, 0x820bd4
// 00483a55  c3                   ret 
// 00483a56  b8c00b8200           mov eax, 0x820bc0
// 00483a5b  c3                   ret 
// 00483a5c  b8b00b8200           mov eax, 0x820bb0
// 00483a61  c3                   ret 
// 00483a62  b8a40b8200           mov eax, 0x820ba4
// 00483a67  c3                   ret 
// 00483a68  b8980b8200           mov eax, 0x820b98
// 00483a6d  c3                   ret 
// 00483a6e  b8900b8200           mov eax, 0x820b90
// 00483a73  c3                   ret 
// 00483a74  b8880b8200           mov eax, 0x820b88
// 00483a79  c3                   ret 
// 00483a7a  b87c0b8200           mov eax, 0x820b7c
// 00483a7f  c3                   ret 
// 00483a80  3d00020000           cmp eax, 0x200
// 00483a85  7736                 ja 0x483abd
// 00483a87  742e                 je 0x483ab7
// 00483a89  8d88fffeffff         lea ecx, [eax - 0x101]
// 00483a8f  83f903               cmp ecx, 3
// 00483a92  0f87810c0000         ja 0x484719
// 00483a98  ff248df4474800       jmp dword ptr [ecx*4 + 0x4847f4]
// 00483a9f  b8740b8200           mov eax, 0x820b74
// 00483aa4  c3                   ret 
// 00483aa5  b8680b8200           mov eax, 0x820b68
// 00483aaa  c3                   ret 
// 00483aab  b8600b8200           mov eax, 0x820b60
// 00483ab0  c3                   ret 
// 00483ab1  b8580b8200           mov eax, 0x820b58
// 00483ab6  c3                   ret 
// 00483ab7  b84c0b8200           mov eax, 0x820b4c
// 00483abc  c3                   ret 
// 00483abd  3d00030000           cmp eax, 0x300
// 00483ac2  7748                 ja 0x483b0c
// 00483ac4  7440                 je 0x483b06
// 00483ac6  8d88fffdffff         lea ecx, [eax - 0x201]
// 00483acc  83f906               cmp ecx, 6
// 00483acf  0f87440c0000         ja 0x484719
// 00483ad5  ff248d04484800       jmp dword ptr [ecx*4 + 0x484804]
// 00483adc  b8440b8200           mov eax, 0x820b44
// 00483ae1  c3                   ret 
// 00483ae2  b8380b8200           mov eax, 0x820b38
// 00483ae7  c3                   ret 
// 00483ae8  b82c0b8200           mov eax, 0x820b2c
// 00483aed  c3                   ret 
// 00483aee  b8200b8200           mov eax, 0x820b20
// 00483af3  c3                   ret 
// 00483af4  b8140b8200           mov eax, 0x820b14
// 00483af9  c3                   ret 
// 00483afa  b8080b8200           mov eax, 0x820b08
// 00483aff  c3                   ret 
// 00483b00  b8fc0a8200           mov eax, 0x820afc
// 00483b05  c3                   ret 
// 00483b06  b8ec0a8200           mov eax, 0x820aec
// 00483b0b  c3                   ret 
// 00483b0c  3d00160000           cmp eax, 0x1600
// 00483b11  0f8778050000         ja 0x48408f
// 00483b17  0f846c050000         je 0x484089
// 00483b1d  3d600c0000           cmp eax, 0xc60
// 00483b22  0f8759020000         ja 0x483d81
// 00483b28  0f844d020000         je 0x483d7b
// 00483b2e  3d000b0000           cmp eax, 0xb00
// 00483b33  0f874b010000         ja 0x483c84
// 00483b39  0f843f010000         je 0x483c7e
// 00483b3f  3d00050000           cmp eax, 0x500
// 00483b44  0f8787000000         ja 0x483bd1
// 00483b4a  747f                 je 0x483bcb
// 00483b4c  3d00040000           cmp eax, 0x400
// 00483b51  7732                 ja 0x483b85
// 00483b53  742a                 je 0x483b7f
// 00483b55  8bc8                 mov ecx, eax
// 00483b57  81e901030000         sub ecx, 0x301
// 00483b5d  741a                 je 0x483b79
// 00483b5f  83e901               sub ecx, 1
// 00483b62  740f                 je 0x483b73
// 00483b64  83e901               sub ecx, 1
// 00483b67  0f85ac0b0000         jne 0x484719
// 00483b6d  b8d40a8200           mov eax, 0x820ad4
// 00483b72  c3                   ret 
// 00483b73  b8c40a8200           mov eax, 0x820ac4
// 00483b78  c3                   ret 
// 00483b79  b8ac0a8200           mov eax, 0x820aac
// 00483b7e  c3                   ret 
// 00483b7f  b8940a8200           mov eax, 0x820a94
// 00483b84  c3                   ret 
// 00483b85  8d88fffbffff         lea ecx, [eax - 0x401]
// 00483b8b  83f907               cmp ecx, 7
// 00483b8e  0f87850b0000         ja 0x484719
// 00483b94  ff248d20484800       jmp dword ptr [ecx*4 + 0x484820]
// 00483b9b  b8840a8200           mov eax, 0x820a84
// 00483ba0  c3                   ret 
// 00483ba1  b8740a8200           mov eax, 0x820a74
// 00483ba6  c3                   ret 
// 00483ba7  b8640a8200           mov eax, 0x820a64
// 00483bac  c3                   ret 
// 00483bad  b8580a8200           mov eax, 0x820a58
// 00483bb2  c3                   ret 
// 00483bb3  b8500a8200           mov eax, 0x820a50
// 00483bb8  c3                   ret 
// 00483bb9  b8480a8200           mov eax, 0x820a48
// 00483bbe  c3                   ret 
// 00483bbf  b83c0a8200           mov eax, 0x820a3c
// 00483bc4  c3                   ret 
// 00483bc5  b8280a8200           mov eax, 0x820a28
// 00483bca  c3                   ret 
// 00483bcb  b8180a8200           mov eax, 0x820a18
// 00483bd0  c3                   ret 
// 00483bd1  3d00060000           cmp eax, 0x600
// 00483bd6  773c                 ja 0x483c14
// 00483bd8  7434                 je 0x483c0e
// 00483bda  8d88fffaffff         lea ecx, [eax - 0x501]
// 00483be0  83f904               cmp ecx, 4
// 00483be3  0f87300b0000         ja 0x484719
// 00483be9  ff248d40484800       jmp dword ptr [ecx*4 + 0x484840]
// 00483bf0  b8040a8200           mov eax, 0x820a04
// 00483bf5  c3                   ret 
// 00483bf6  b8ec098200           mov eax, 0x8209ec
// 00483bfb  c3                   ret 
// 00483bfc  b8d8098200           mov eax, 0x8209d8
// 00483c01  c3                   ret 
// 00483c02  b8c4098200           mov eax, 0x8209c4
// 00483c07  c3                   ret 
// 00483c08  b8b0098200           mov eax, 0x8209b0
// 00483c0d  c3                   ret 
// 00483c0e  b8a8098200           mov eax, 0x8209a8
// 00483c13  c3                   ret 
// 00483c14  3d00080000           cmp eax, 0x800
// 00483c19  7736                 ja 0x483c51
// 00483c1b  742e                 je 0x483c4b
// 00483c1d  8d88fff9ffff         lea ecx, [eax - 0x601]
// 00483c23  83f903               cmp ecx, 3
// 00483c26  0f87ed0a0000         ja 0x484719
// 00483c2c  ff248d54484800       jmp dword ptr [ecx*4 + 0x484854]
// 00483c33  b8a0098200           mov eax, 0x8209a0
// 00483c38  c3                   ret 
// 00483c39  b894098200           mov eax, 0x820994
// 00483c3e  c3                   ret 
// 00483c3f  b880098200           mov eax, 0x820980
// 00483c44  c3                   ret 
// 00483c45  b86c098200           mov eax, 0x82096c
// 00483c4a  c3                   ret 
// 00483c4b  b85c098200           mov eax, 0x82095c
// 00483c50  c3                   ret 
// 00483c51  8bc8                 mov ecx, eax
// 00483c53  81e901080000         sub ecx, 0x801
// 00483c59  741d                 je 0x483c78
// 00483c5b  81e9ff000000         sub ecx, 0xff
// 00483c61  740f                 je 0x483c72
// 00483c63  83e901               sub ecx, 1
// 00483c66  0f85ad0a0000         jne 0x484719
// 00483c6c  b854098200           mov eax, 0x820954
// 00483c71  c3                   ret 
// 00483c72  b84c098200           mov eax, 0x82094c
// 00483c77  c3                   ret 
// 00483c78  b844098200           mov eax, 0x820944
// 00483c7d  c3                   ret 
// 00483c7e  b830098200           mov eax, 0x820930
// 00483c83  c3                   ret 
// 00483c84  3d110c0000           cmp eax, 0xc11
// 00483c89  0f878a0a0000         ja 0x484719
// 00483c8f  0f84e0000000         je 0x483d75
// 00483c95  8d88fff4ffff         lea ecx, [eax - 0xb01]
// 00483c9b  81f9f1000000         cmp ecx, 0xf1
// 00483ca1  0f87720a0000         ja 0x484719
// 00483ca7  0fb691e8484800       movzx edx, byte ptr [ecx + 0x4848e8]
// 00483cae  ff249564484800       jmp dword ptr [edx*4 + 0x484864]
// 00483cb5  b824098200           mov eax, 0x820924
// 00483cba  c3                   ret 
// 00483cbb  b810098200           mov eax, 0x820910
// 00483cc0  c3                   ret 
// 00483cc1  b8fc088200           mov eax, 0x8208fc
// 00483cc6  c3                   ret 
// 00483cc7  b8e0088200           mov eax, 0x8208e0
// 00483ccc  c3                   ret 
// 00483ccd  b8c8088200           mov eax, 0x8208c8
// 00483cd2  c3                   ret 
// 00483cd3  b8b0088200           mov eax, 0x8208b0
// 00483cd8  c3                   ret 
// 00483cd9  b88c088200           mov eax, 0x82088c
// 00483cde  c3                   ret 
// 00483cdf  b870088200           mov eax, 0x820870
// 00483ce4  c3                   ret 
// 00483ce5  b84c088200           mov eax, 0x82084c
// 00483cea  c3                   ret 
// 00483ceb  b830088200           mov eax, 0x820830
// 00483cf0  c3                   ret 
// 00483cf1  b820088200           mov eax, 0x820820
// 00483cf6  c3                   ret 
// 00483cf7  b810088200           mov eax, 0x820810
// 00483cfc  c3                   ret 
// 00483cfd  b8fc078200           mov eax, 0x8207fc
// 00483d02  c3                   ret 
// 00483d03  b8e0078200           mov eax, 0x8207e0
// 00483d08  c3                   ret 
// 00483d09  b8d0078200           mov eax, 0x8207d0
// 00483d0e  c3                   ret 
// 00483d0f  b8c0078200           mov eax, 0x8207c0
// 00483d14  c3                   ret 
// 00483d15  b8ac078200           mov eax, 0x8207ac
// 00483d1a  c3                   ret 
// 00483d1b  b898078200           mov eax, 0x820798
// 00483d20  c3                   ret 
// 00483d21  b88c078200           mov eax, 0x82078c
// 00483d26  c3                   ret 
// 00483d27  b87c078200           mov eax, 0x82077c
// 00483d2c  c3                   ret 
// 00483d2d  b86c078200           mov eax, 0x82076c
// 00483d32  c3                   ret 
// 00483d33  b85c078200           mov eax, 0x82075c
// 00483d38  c3                   ret 
// 00483d39  b84c078200           mov eax, 0x82074c
// 00483d3e  c3                   ret 
// 00483d3f  b83c078200           mov eax, 0x82073c
// 00483d44  c3                   ret 
// 00483d45  b82c078200           mov eax, 0x82072c
// 00483d4a  c3                   ret 
// 00483d4b  b818078200           mov eax, 0x820718
// 00483d50  c3                   ret 
// 00483d51  b804078200           mov eax, 0x820704
// 00483d56  c3                   ret 
// 00483d57  b8f4068200           mov eax, 0x8206f4
// 00483d5c  c3                   ret 
// 00483d5d  b8e4068200           mov eax, 0x8206e4
// 00483d62  c3                   ret 
// 00483d63  b8d8068200           mov eax, 0x8206d8
// 00483d68  c3                   ret 
// 00483d69  b8d0068200           mov eax, 0x8206d0
// 00483d6e  c3                   ret 
// 00483d6f  b8bc068200           mov eax, 0x8206bc
// 00483d74  c3                   ret 
// 00483d75  b8ac068200           mov eax, 0x8206ac
// 00483d7a  c3                   ret 
// 00483d7b  b898068200           mov eax, 0x820698
// 00483d80  c3                   ret 
// 00483d81  3d800d0000           cmp eax, 0xd80
// 00483d86  0f879e000000         ja 0x483e2a
// 00483d8c  0f8492000000         je 0x483e24
// 00483d92  8d889ff3ffff         lea ecx, [eax - 0xc61]
// 00483d98  81f9d3000000         cmp ecx, 0xd3
// 00483d9e  0f8775090000         ja 0x484719
// 00483da4  0fb6892c4a4800       movzx ecx, byte ptr [ecx + 0x484a2c]
// 00483dab  ff248ddc494800       jmp dword ptr [ecx*4 + 0x4849dc]
// 00483db2  b88c068200           mov eax, 0x82068c
// 00483db7  c3                   ret 
// 00483db8  b880068200           mov eax, 0x820680
// 00483dbd  c3                   ret 
// 00483dbe  b874068200           mov eax, 0x820674
// 00483dc3  c3                   ret 
// 00483dc4  b864068200           mov eax, 0x820664
// 00483dc9  c3                   ret 
// 00483dca  b854068200           mov eax, 0x820654
// 00483dcf  c3                   ret 
// 00483dd0  b844068200           mov eax, 0x820644
// 00483dd5  c3                   ret 
// 00483dd6  b834068200           mov eax, 0x820634
// 00483ddb  c3                   ret 
// 00483ddc  b824068200           mov eax, 0x820624
// 00483de1  c3                   ret 
// 00483de2  b814068200           mov eax, 0x820614
// 00483de7  c3                   ret 
// 00483de8  b804068200           mov eax, 0x820604
// 00483ded  c3                   ret 
// 00483dee  b8f4058200           mov eax, 0x8205f4
// 00483df3  c3                   ret 
// 00483df4  b8e0058200           mov eax, 0x8205e0
// 00483df9  c3                   ret 
// 00483dfa  b8d0058200           mov eax, 0x8205d0
// 00483dff  c3                   ret 
// 00483e00  b8bc058200           mov eax, 0x8205bc
// 00483e05  c3                   ret 
// 00483e06  b8a8058200           mov eax, 0x8205a8
// 00483e0b  c3                   ret 
// 00483e0c  b890058200           mov eax, 0x820590
// 00483e11  c3                   ret 
// 00483e12  b87c058200           mov eax, 0x82057c
// 00483e17  c3                   ret 
// 00483e18  b868058200           mov eax, 0x820568
// 00483e1d  c3                   ret 
// 00483e1e  b854058200           mov eax, 0x820554
// 00483e23  c3                   ret 
// 00483e24  b844058200           mov eax, 0x820544
// 00483e29  c3                   ret 
// 00483e2a  3d00100000           cmp eax, 0x1000
// 00483e2f  0f87a1000000         ja 0x483ed6
// 00483e35  0f8495000000         je 0x483ed0
// 00483e3b  8d8870f2ffff         lea ecx, [eax - 0xd90]
// 00483e41  83f951               cmp ecx, 0x51
// 00483e44  0f87cf080000         ja 0x484719
// 00483e4a  0fb691544b4800       movzx edx, byte ptr [ecx + 0x484b54]
// 00483e51  ff2495004b4800       jmp dword ptr [edx*4 + 0x484b00]
// 00483e58  b834058200           mov eax, 0x820534
// 00483e5d  c3                   ret 
// 00483e5e  b824058200           mov eax, 0x820524
// 00483e63  c3                   ret 
// 00483e64  b814058200           mov eax, 0x820514
// 00483e69  c3                   ret 
// 00483e6a  b8fc048200           mov eax, 0x8204fc
// 00483e6f  c3                   ret 
// 00483e70  b8e4048200           mov eax, 0x8204e4
// 00483e75  c3                   ret 
// 00483e76  b8cc048200           mov eax, 0x8204cc
// 00483e7b  c3                   ret 
// 00483e7c  b8b4048200           mov eax, 0x8204b4
// 00483e81  c3                   ret 
// 00483e82  b8a0048200           mov eax, 0x8204a0
// 00483e87  c3                   ret 
// 00483e88  b88c048200           mov eax, 0x82048c
// 00483e8d  c3                   ret 
// 00483e8e  b87c048200           mov eax, 0x82047c
// 00483e93  c3                   ret 
// 00483e94  b86c048200           mov eax, 0x82046c
// 00483e99  c3                   ret 
// 00483e9a  b85c048200           mov eax, 0x82045c
// 00483e9f  c3                   ret 
// 00483ea0  b844048200           mov eax, 0x820444
// 00483ea5  c3                   ret 
// 00483ea6  b82c048200           mov eax, 0x82042c
// 00483eab  c3                   ret 
// 00483eac  b814048200           mov eax, 0x820414
// 00483eb1  c3                   ret 
// 00483eb2  b8fc038200           mov eax, 0x8203fc
// 00483eb7  c3                   ret 
// 00483eb8  b8e8038200           mov eax, 0x8203e8
// 00483ebd  c3                   ret 
// 00483ebe  b8d4038200           mov eax, 0x8203d4
// 00483ec3  c3                   ret 
// 00483ec4  b8c4038200           mov eax, 0x8203c4
// 00483ec9  c3                   ret 
// 00483eca  b8b4038200           mov eax, 0x8203b4
// 00483ecf  c3                   ret 
// 00483ed0  b8a0038200           mov eax, 0x8203a0
// 00483ed5  c3                   ret 
// 00483ed6  3d00110000           cmp eax, 0x1100
// 00483edb  7736                 ja 0x483f13
// 00483edd  742e                 je 0x483f0d
// 00483edf  8d88ffefffff         lea ecx, [eax - 0x1001]
// 00483ee5  83f904               cmp ecx, 4
// 00483ee8  0f872b080000         ja 0x484719
// 00483eee  ff248da84b4800       jmp dword ptr [ecx*4 + 0x484ba8]
// 00483ef5  b88c038200           mov eax, 0x82038c
// 00483efa  c3                   ret 
// 00483efb  b870038200           mov eax, 0x820370
// 00483f00  c3                   ret 
// 00483f01  b858038200           mov eax, 0x820358
// 00483f06  c3                   ret 
// 00483f07  b844038200           mov eax, 0x820344
// 00483f0c  c3                   ret 
// 00483f0d  b834038200           mov eax, 0x820334
// 00483f12  c3                   ret 
// 00483f13  3d00140000           cmp eax, 0x1400
// 00483f18  0f879a000000         ja 0x483fb8
// 00483f1e  0f848e000000         je 0x483fb2
// 00483f24  3d00120000           cmp eax, 0x1200
// 00483f29  7727                 ja 0x483f52
// 00483f2b  741f                 je 0x483f4c
// 00483f2d  8bc8                 mov ecx, eax
// 00483f2f  81e901110000         sub ecx, 0x1101
// 00483f35  740f                 je 0x483f46
// 00483f37  83e901               sub ecx, 1
// 00483f3a  0f85d9070000         jne 0x484719
// 00483f40  b828038200           mov eax, 0x820328
// 00483f45  c3                   ret 
// 00483f46  b81c038200           mov eax, 0x82031c
// 00483f4b  c3                   ret 
// 00483f4c  b810038200           mov eax, 0x820310
// 00483f51  c3                   ret 
// 00483f52  3d00130000           cmp eax, 0x1300
// 00483f57  7748                 ja 0x483fa1
// 00483f59  7440                 je 0x483f9b
// 00483f5b  8d88ffedffff         lea ecx, [eax - 0x1201]
// 00483f61  83f906               cmp ecx, 6
// 00483f64  0f87af070000         ja 0x484719
// 00483f6a  ff248dbc4b4800       jmp dword ptr [ecx*4 + 0x484bbc]
// 00483f71  b804038200           mov eax, 0x820304
// 00483f76  c3                   ret 
// 00483f77  b8f8028200           mov eax, 0x8202f8
// 00483f7c  c3                   ret 
// 00483f7d  b8ec028200           mov eax, 0x8202ec
// 00483f82  c3                   ret 
// 00483f83  b8d8028200           mov eax, 0x8202d8
// 00483f88  c3                   ret 
// 00483f89  b8c4028200           mov eax, 0x8202c4
// 00483f8e  c3                   ret 
// 00483f8f  b8b4028200           mov eax, 0x8202b4
// 00483f94  c3                   ret 
// 00483f95  b89c028200           mov eax, 0x82029c
// 00483f9a  c3                   ret 
// 00483f9b  b890028200           mov eax, 0x820290
// 00483fa0  c3                   ret 
// 00483fa1  3d01130000           cmp eax, 0x1301
// 00483fa6  0f856d070000         jne 0x484719
// 00483fac  b878028200           mov eax, 0x820278
// 00483fb1  c3                   ret 
// 00483fb2  b870028200           mov eax, 0x820270
// 00483fb7  c3                   ret 
// 00483fb8  3d00150000           cmp eax, 0x1500
// 00483fbd  775a                 ja 0x484019
// 00483fbf  7452                 je 0x484013
// 00483fc1  8d88ffebffff         lea ecx, [eax - 0x1401]
// 00483fc7  83f909               cmp ecx, 9
// 00483fca  0f8749070000         ja 0x484719
// 00483fd0  ff248dd84b4800       jmp dword ptr [ecx*4 + 0x484bd8]
// 00483fd7  b85c028200           mov eax, 0x82025c
// 00483fdc  c3                   ret 
// 00483fdd  b850028200           mov eax, 0x820250
// 00483fe2  c3                   ret 
// 00483fe3  b83c028200           mov eax, 0x82023c
// 00483fe8  c3                   ret 
// 00483fe9  b834028200           mov eax, 0x820234
// 00483fee  c3                   ret 
// 00483fef  b824028200           mov eax, 0x820224
// 00483ff4  c3                   ret 
// 00483ff5  b818028200           mov eax, 0x820218
// 00483ffa  c3                   ret 
// 00483ffb  b80c028200           mov eax, 0x82020c
// 00484000  c3                   ret 
// 00484001  b800028200           mov eax, 0x820200
// 00484006  c3                   ret 
// 00484007  b8f4018200           mov eax, 0x8201f4
// 0048400c  c3                   ret 
// 0048400d  b8e8018200           mov eax, 0x8201e8
// 00484012  c3                   ret 
// 00484013  b8dc018200           mov eax, 0x8201dc
// 00484018  c3                   ret 
// 00484019  8d88ffeaffff         lea ecx, [eax - 0x1501]
// 0048401f  83f90e               cmp ecx, 0xe
// 00484022  0f87f1060000         ja 0x484719
// 00484028  ff248d004c4800       jmp dword ptr [ecx*4 + 0x484c00]
// 0048402f  b8d4018200           mov eax, 0x8201d4
// 00484034  c3                   ret 
// 00484035  b8c4018200           mov eax, 0x8201c4
// 0048403a  c3                   ret 
// 0048403b  b8bc018200           mov eax, 0x8201bc
// 00484040  c3                   ret 
// 00484041  b8ac018200           mov eax, 0x8201ac
// 00484046  c3                   ret 
// 00484047  b8a4018200           mov eax, 0x8201a4
// 0048404c  c3                   ret 
// 0048404d  b89c018200           mov eax, 0x82019c
// 00484052  c3                   ret 
// 00484053  b894018200           mov eax, 0x820194
// 00484058  c3                   ret 
// 00484059  b88c018200           mov eax, 0x82018c
// 0048405e  c3                   ret 
// 0048405f  b880018200           mov eax, 0x820180
// 00484064  c3                   ret 
// 00484065  b874018200           mov eax, 0x820174
// 0048406a  c3                   ret 
// 0048406b  b864018200           mov eax, 0x820164
// 00484070  c3                   ret 
// 00484071  b850018200           mov eax, 0x820150
// 00484076  c3                   ret 
// 00484077  b840018200           mov eax, 0x820140
// 0048407c  c3                   ret 
// 0048407d  b838018200           mov eax, 0x820138
// 00484082  c3                   ret 
// 00484083  b830018200           mov eax, 0x820130
// 00484088  c3                   ret 
// 00484089  b824018200           mov eax, 0x820124
// 0048408e  c3                   ret 
// 0048408f  3d00400000           cmp eax, 0x4000
// 00484094  0f871e040000         ja 0x4844b8
// 0048409a  0f8412040000         je 0x4844b2
// 004840a0  3d001f0000           cmp eax, 0x1f00
// 004840a5  0f87c1010000         ja 0x48426c
// 004840ab  0f84b5010000         je 0x484266
// 004840b1  3d00190000           cmp eax, 0x1900
// 004840b6  0f8798000000         ja 0x484154
// 004840bc  0f848c000000         je 0x48414e
// 004840c2  3d01170000           cmp eax, 0x1701
// 004840c7  7747                 ja 0x484110
// 004840c9  743f                 je 0x48410a
// 004840cb  3d03160000           cmp eax, 0x1603
// 004840d0  7727                 ja 0x4840f9
// 004840d2  741f                 je 0x4840f3
// 004840d4  8bc8                 mov ecx, eax
// 004840d6  81e901160000         sub ecx, 0x1601
// 004840dc  740f                 je 0x4840ed
// 004840de  83e901               sub ecx, 1
// 004840e1  0f8532060000         jne 0x484719
// 004840e7  b80c018200           mov eax, 0x82010c
// 004840ec  c3                   ret 
// 004840ed  b8fc008200           mov eax, 0x8200fc
// 004840f2  c3                   ret 
// 004840f3  b8e8008200           mov eax, 0x8200e8
// 004840f8  c3                   ret 
// 004840f9  3d00170000           cmp eax, 0x1700
// 004840fe  0f8515060000         jne 0x484719
// 00484104  b8d8008200           mov eax, 0x8200d8
// 00484109  c3                   ret 
// 0048410a  b8c8008200           mov eax, 0x8200c8
// 0048410f  c3                   ret 
// 00484110  3d01180000           cmp eax, 0x1801
// 00484115  7726                 ja 0x48413d
// 00484117  741e                 je 0x484137
// 00484119  3d02170000           cmp eax, 0x1702
// 0048411e  7411                 je 0x484131
// 00484120  3d00180000           cmp eax, 0x1800
// 00484125  0f85ee050000         jne 0x484719
// 0048412b  b8bc008200           mov eax, 0x8200bc
// 00484130  c3                   ret 
// 00484131  b8b0008200           mov eax, 0x8200b0
// 00484136  c3                   ret 
// 00484137  b8a4008200           mov eax, 0x8200a4
// 0048413c  c3                   ret 
// 0048413d  3d02180000           cmp eax, 0x1802
// 00484142  0f85d1050000         jne 0x484719
// 00484148  b898008200           mov eax, 0x820098
// 0048414d  c3                   ret 
// 0048414e  b888008200           mov eax, 0x820088
// 00484153  c3                   ret 
// 00484154  3d001a0000           cmp eax, 0x1a00
// 00484159  775a                 ja 0x4841b5
// 0048415b  7452                 je 0x4841af
// 0048415d  8d88ffe6ffff         lea ecx, [eax - 0x1901]
// 00484163  83f909               cmp ecx, 9
// 00484166  0f87ad050000         ja 0x484719
// 0048416c  ff248d3c4c4800       jmp dword ptr [ecx*4 + 0x484c3c]
// 00484173  b874008200           mov eax, 0x820074
// 00484178  c3                   ret 
// 00484179  b860008200           mov eax, 0x820060
// 0048417e  c3                   ret 
// 0048417f  b858008200           mov eax, 0x820058
// 00484184  c3                   ret 
// 00484185  b84c008200           mov eax, 0x82004c
// 0048418a  c3                   ret 
// 0048418b  b844008200           mov eax, 0x820044
// 00484190  c3                   ret 
// 00484191  b838008200           mov eax, 0x820038
// 00484196  c3                   ret 
// 00484197  b830008200           mov eax, 0x820030
// 0048419c  c3                   ret 
// 0048419d  b828008200           mov eax, 0x820028
// 004841a2  c3                   ret 
// 004841a3  b818008200           mov eax, 0x820018
// 004841a8  c3                   ret 
// 004841a9  b804008200           mov eax, 0x820004
// 004841ae  c3                   ret 
// 004841af  b8f8ff8100           mov eax, 0x81fff8
// 004841b4  c3                   ret 
// 004841b5  3d001d0000           cmp eax, 0x1d00
// 004841ba  7760                 ja 0x48421c
// 004841bc  7458                 je 0x484216
// 004841be  3d001c0000           cmp eax, 0x1c00
// 004841c3  7732                 ja 0x4841f7
// 004841c5  742a                 je 0x4841f1
// 004841c7  8bc8                 mov ecx, eax
// 004841c9  81e9001b0000         sub ecx, 0x1b00
// 004841cf  741a                 je 0x4841eb
// 004841d1  83e901               sub ecx, 1
// 004841d4  740f                 je 0x4841e5
// 004841d6  83e901               sub ecx, 1
// 004841d9  0f853a050000         jne 0x484719
// 004841df  b8f0ff8100           mov eax, 0x81fff0
// 004841e4  c3                   ret 
// 004841e5  b8e8ff8100           mov eax, 0x81ffe8
// 004841ea  c3                   ret 
// 004841eb  b8dcff8100           mov eax, 0x81ffdc
// 004841f0  c3                   ret 
// 004841f1  b8d0ff8100           mov eax, 0x81ffd0
// 004841f6  c3                   ret 
// 004841f7  8bc8                 mov ecx, eax
// 004841f9  81e9011c0000         sub ecx, 0x1c01
// 004841ff  740f                 je 0x484210
// 00484201  83e901               sub ecx, 1
// 00484204  0f850f050000         jne 0x484719
// 0048420a  b8c4ff8100           mov eax, 0x81ffc4
// 0048420f  c3                   ret 
// 00484210  b8b8ff8100           mov eax, 0x81ffb8
// 00484215  c3                   ret 
// 00484216  b8b0ff8100           mov eax, 0x81ffb0
// 0048421b  c3                   ret 
// 0048421c  3d001e0000           cmp eax, 0x1e00
// 00484221  7719                 ja 0x48423c
// 00484223  7411                 je 0x484236
// 00484225  3d011d0000           cmp eax, 0x1d01
// 0048422a  0f85e9040000         jne 0x484719
// 00484230  b8a4ff8100           mov eax, 0x81ffa4
// 00484235  c3                   ret 
// 00484236  b89cff8100           mov eax, 0x81ff9c
// 0048423b  c3                   ret 
// 0048423c  8bc8                 mov ecx, eax
// 0048423e  81e9011e0000         sub ecx, 0x1e01
// 00484244  741a                 je 0x484260
// 00484246  83e901               sub ecx, 1
// 00484249  740f                 je 0x48425a
// 0048424b  83e901               sub ecx, 1
// 0048424e  0f85c5040000         jne 0x484719
// 00484254  b894ff8100           mov eax, 0x81ff94
// 00484259  c3                   ret 
// 0048425a  b88cff8100           mov eax, 0x81ff8c
// 0048425f  c3                   ret 
// 00484260  b880ff8100           mov eax, 0x81ff80
// 00484265  c3                   ret 
// 00484266  b874ff8100           mov eax, 0x81ff74
// 0048426b  c3                   ret 
// 0048426c  3d00260000           cmp eax, 0x2600
// 00484271  0f8720010000         ja 0x484397
// 00484277  0f8414010000         je 0x484391
// 0048427d  3d00220000           cmp eax, 0x2200
// 00484282  0f8792000000         ja 0x48431a
// 00484288  0f8486000000         je 0x484314
// 0048428e  3d00200000           cmp eax, 0x2000
// 00484293  7732                 ja 0x4842c7
// 00484295  742a                 je 0x4842c1
// 00484297  8bc8                 mov ecx, eax
// 00484299  81e9011f0000         sub ecx, 0x1f01
// 0048429f  741a                 je 0x4842bb
// 004842a1  83e901               sub ecx, 1
// 004842a4  740f                 je 0x4842b5
// 004842a6  83e901               sub ecx, 1
// 004842a9  0f856a040000         jne 0x484719
// 004842af  b864ff8100           mov eax, 0x81ff64
// 004842b4  c3                   ret 
// 004842b5  b858ff8100           mov eax, 0x81ff58
// 004842ba  c3                   ret 
// 004842bb  b84cff8100           mov eax, 0x81ff4c
// 004842c0  c3                   ret 
// 004842c1  b83cff8100           mov eax, 0x81ff3c
// 004842c6  c3                   ret 
// 004842c7  3d03200000           cmp eax, 0x2003
// 004842cc  7727                 ja 0x4842f5
// 004842ce  741f                 je 0x4842ef
// 004842d0  8bc8                 mov ecx, eax
// 004842d2  81e901200000         sub ecx, 0x2001
// 004842d8  740f                 je 0x4842e9
// 004842da  83e901               sub ecx, 1
// 004842dd  0f8536040000         jne 0x484719
// 004842e3  b834ff8100           mov eax, 0x81ff34
// 004842e8  c3                   ret 
// 004842e9  b82cff8100           mov eax, 0x81ff2c
// 004842ee  c3                   ret 
// 004842ef  b824ff8100           mov eax, 0x81ff24
// 004842f4  c3                   ret 
// 004842f5  8bc8                 mov ecx, eax
// 004842f7  81e900210000         sub ecx, 0x2100
// 004842fd  740f                 je 0x48430e
// 004842ff  83e901               sub ecx, 1
// 00484302  0f8511040000         jne 0x484719
// 00484308  b818ff8100           mov eax, 0x81ff18
// 0048430d  c3                   ret 
// 0048430e  b80cff8100           mov eax, 0x81ff0c
// 00484313  c3                   ret 
// 00484314  b8f8fe8100           mov eax, 0x81fef8
// 00484319  c3                   ret 
// 0048431a  3d02240000           cmp eax, 0x2402
// 0048431f  7746                 ja 0x484367
// 00484321  743e                 je 0x484361
// 00484323  3d00240000           cmp eax, 0x2400
// 00484328  7726                 ja 0x484350
// 0048432a  741e                 je 0x48434a
// 0048432c  3d01220000           cmp eax, 0x2201
// 00484331  7411                 je 0x484344
// 00484333  3d00230000           cmp eax, 0x2300
// 00484338  0f85db030000         jne 0x484719
// 0048433e  b8e8fe8100           mov eax, 0x81fee8
// 00484343  c3                   ret 
// 00484344  b8d0fe8100           mov eax, 0x81fed0
// 00484349  c3                   ret 
// 0048434a  b8c0fe8100           mov eax, 0x81fec0
// 0048434f  c3                   ret 
// 00484350  3d01240000           cmp eax, 0x2401
// 00484355  0f85be030000         jne 0x484719
// 0048435b  b8acfe8100           mov eax, 0x81feac
// 00484360  c3                   ret 
// 00484361  b89cfe8100           mov eax, 0x81fe9c
// 00484366  c3                   ret 
// 00484367  8bc8                 mov ecx, eax
// 00484369  81e900250000         sub ecx, 0x2500
// 0048436f  741a                 je 0x48438b
// 00484371  83e901               sub ecx, 1
// 00484374  740f                 je 0x484385
// 00484376  83e901               sub ecx, 1
// 00484379  0f859a030000         jne 0x484719
// 0048437f  b88cfe8100           mov eax, 0x81fe8c
// 00484384  c3                   ret 
// 00484385  b87cfe8100           mov eax, 0x81fe7c
// 0048438a  c3                   ret 
// 0048438b  b868fe8100           mov eax, 0x81fe68
// 00484390  c3                   ret 
// 00484391  b85cfe8100           mov eax, 0x81fe5c
// 00484396  c3                   ret 
// 00484397  3d00290000           cmp eax, 0x2900
// 0048439c  0f878f000000         ja 0x484431
// 004843a2  0f8483000000         je 0x48442b
// 004843a8  3d00270000           cmp eax, 0x2700
// 004843ad  7719                 ja 0x4843c8
// 004843af  7411                 je 0x4843c2
// 004843b1  3d01260000           cmp eax, 0x2601
// 004843b6  0f855d030000         jne 0x484719
// 004843bc  b850fe8100           mov eax, 0x81fe50
// 004843c1  c3                   ret 
// 004843c2  b834fe8100           mov eax, 0x81fe34
// 004843c7  c3                   ret 
// 004843c8  3d00280000           cmp eax, 0x2800
// 004843cd  7732                 ja 0x484401
// 004843cf  742a                 je 0x4843fb
// 004843d1  8bc8                 mov ecx, eax
// 004843d3  81e901270000         sub ecx, 0x2701
// 004843d9  741a                 je 0x4843f5
// 004843db  83e901               sub ecx, 1
// 004843de  740f                 je 0x4843ef
// 004843e0  83e901               sub ecx, 1
// 004843e3  0f8530030000         jne 0x484719
// 004843e9  b81cfe8100           mov eax, 0x81fe1c
// 004843ee  c3                   ret 
// 004843ef  b800fe8100           mov eax, 0x81fe00
// 004843f4  c3                   ret 
// 004843f5  b8e4fd8100           mov eax, 0x81fde4
// 004843fa  c3                   ret 
// 004843fb  b8ccfd8100           mov eax, 0x81fdcc
// 00484400  c3                   ret 
// 00484401  8bc8                 mov ecx, eax
// 00484403  81e901280000         sub ecx, 0x2801
// 00484409  741a                 je 0x484425
// 0048440b  83e901               sub ecx, 1
// 0048440e  740f                 je 0x48441f
// 00484410  83e901               sub ecx, 1
// 00484413  0f8500030000         jne 0x484719
// 00484419  b8b8fd8100           mov eax, 0x81fdb8
// 0048441e  c3                   ret 
// 0048441f  b8a4fd8100           mov eax, 0x81fda4
// 00484424  c3                   ret 
// 00484425  b88cfd8100           mov eax, 0x81fd8c
// 0048442a  c3                   ret 
// 0048442b  b880fd8100           mov eax, 0x81fd80
// 00484430  c3                   ret 
// 00484431  3d00300000           cmp eax, 0x3000
// 00484436  7746                 ja 0x48447e
// 00484438  743e                 je 0x484478
// 0048443a  3d012a0000           cmp eax, 0x2a01
// 0048443f  7726                 ja 0x484467
// 00484441  741e                 je 0x484461
// 00484443  3d01290000           cmp eax, 0x2901
// 00484448  7411                 je 0x48445b
// 0048444a  3d002a0000           cmp eax, 0x2a00
// 0048444f  0f85c4020000         jne 0x484719
// 00484455  b868fd8100           mov eax, 0x81fd68
// 0048445a  c3                   ret 
// 0048445b  b85cfd8100           mov eax, 0x81fd5c
// 00484460  c3                   ret 
// 00484461  b844fd8100           mov eax, 0x81fd44
// 00484466  c3                   ret 
// 00484467  3d022a0000           cmp eax, 0x2a02
// 0048446c  0f85a7020000         jne 0x484719
// 00484472  b82cfd8100           mov eax, 0x81fd2c
// 00484477  c3                   ret 
// 00484478  b81cfd8100           mov eax, 0x81fd1c
// 0048447d  c3                   ret 
// 0048447e  8d88ffcfffff         lea ecx, [eax - 0x3001]
// 00484484  83f904               cmp ecx, 4
// 00484487  0f878c020000         ja 0x484719
// 0048448d  ff248d644c4800       jmp dword ptr [ecx*4 + 0x484c64]
// 00484494  b80cfd8100           mov eax, 0x81fd0c
// 00484499  c3                   ret 
// 0048449a  b8fcfc8100           mov eax, 0x81fcfc
// 0048449f  c3                   ret 
// 004844a0  b8ecfc8100           mov eax, 0x81fcec
// 004844a5  c3                   ret 
// 004844a6  b8dcfc8100           mov eax, 0x81fcdc
// 004844ab  c3                   ret 
// 004844ac  b8ccfc8100           mov eax, 0x81fccc
// 004844b1  c3                   ret 
// 004844b2  b8c0fc8100           mov eax, 0x81fcc0
// 004844b7  c3                   ret 
// 004844b8  3d00800000           cmp eax, 0x8000
// 004844bd  7748                 ja 0x484507
// 004844bf  7440                 je 0x484501
// 004844c1  8d88ffbfffff         lea ecx, [eax - 0x4001]
// 004844c7  83f906               cmp ecx, 6
// 004844ca  0f8749020000         ja 0x484719
// 004844d0  ff248d784c4800       jmp dword ptr [ecx*4 + 0x484c78]
// 004844d7  b8b4fc8100           mov eax, 0x81fcb4
// 004844dc  c3                   ret 
// 004844dd  b8a8fc8100           mov eax, 0x81fca8
// 004844e2  c3                   ret 
// 004844e3  b89cfc8100           mov eax, 0x81fc9c
// 004844e8  c3                   ret 
// 004844e9  b890fc8100           mov eax, 0x81fc90
// 004844ee  c3                   ret 
// 004844ef  b884fc8100           mov eax, 0x81fc84
// 004844f4  c3                   ret 
// 004844f5  b878fc8100           mov eax, 0x81fc78
// 004844fa  c3                   ret 
// 004844fb  b86cfc8100           mov eax, 0x81fc6c
// 00484500  c3                   ret 
// 00484501  b860fc8100           mov eax, 0x81fc60
// 00484506  c3                   ret 
// 00484507  3df5840000           cmp eax, 0x84f5
// 0048450c  0f872e010000         ja 0x484640
// 00484512  0f8422010000         je 0x48463a
// 00484518  8d88c97fffff         lea ecx, [eax - 0x8037]
// 0048451e  81f9f8000000         cmp ecx, 0xf8
// 00484524  0f87ef010000         ja 0x484719
// 0048452a  0fb689444d4800       movzx ecx, byte ptr [ecx + 0x484d44]
// 00484531  ff248d944c4800       jmp dword ptr [ecx*4 + 0x484c94]
// 00484538  b84cfc8100           mov eax, 0x81fc4c
// 0048453d  c3                   ret 
// 0048453e  b838fc8100           mov eax, 0x81fc38
// 00484543  c3                   ret 
// 00484544  b81cfc8100           mov eax, 0x81fc1c
// 00484549  c3                   ret 
// 0048454a  b804fc8100           mov eax, 0x81fc04
// 0048454f  c3                   ret 
// 00484550  b8f4fb8100           mov eax, 0x81fbf4
// 00484555  c3                   ret 
// 00484556  b8e4fb8100           mov eax, 0x81fbe4
// 0048455b  c3                   ret 
// 0048455c  b8d4fb8100           mov eax, 0x81fbd4
// 00484561  c3                   ret 
// 00484562  b8c4fb8100           mov eax, 0x81fbc4
// 00484567  c3                   ret 
// 00484568  b8acfb8100           mov eax, 0x81fbac
// 0048456d  c3                   ret 
// 0048456e  b898fb8100           mov eax, 0x81fb98
// 00484573  c3                   ret 
// 00484574  b880fb8100           mov eax, 0x81fb80
// 00484579  c3                   ret 
// 0048457a  b868fb8100           mov eax, 0x81fb68
// 0048457f  c3                   ret 
// 00484580  b850fb8100           mov eax, 0x81fb50
// 00484585  c3                   ret 
// 00484586  b838fb8100           mov eax, 0x81fb38
// 0048458b  c3                   ret 
// 0048458c  b820fb8100           mov eax, 0x81fb20
// 00484591  c3                   ret 
// 00484592  b80cfb8100           mov eax, 0x81fb0c
// 00484597  c3                   ret 
// 00484598  b8f8fa8100           mov eax, 0x81faf8
// 0048459d  c3                   ret 
// 0048459e  b8e0fa8100           mov eax, 0x81fae0
// 004845a3  c3                   ret 
// 004845a4  b8ccfa8100           mov eax, 0x81facc
// 004845a9  c3                   ret 
// 004845aa  b8b4fa8100           mov eax, 0x81fab4
// 004845af  c3                   ret 
// 004845b0  b898fa8100           mov eax, 0x81fa98
// 004845b5  c3                   ret 
// 004845b6  b87cfa8100           mov eax, 0x81fa7c
// 004845bb  c3                   ret 
// 004845bc  b860fa8100           mov eax, 0x81fa60
// 004845c1  c3                   ret 
// 004845c2  b844fa8100           mov eax, 0x81fa44
// 004845c7  c3                   ret 
// 004845c8  b824fa8100           mov eax, 0x81fa24
// 004845cd  c3                   ret 
// 004845ce  b804fa8100           mov eax, 0x81fa04
// 004845d3  c3                   ret 
// 004845d4  b8e0f98100           mov eax, 0x81f9e0
// 004845d9  c3                   ret 
// 004845da  b8bcf98100           mov eax, 0x81f9bc
// 004845df  c3                   ret 
// 004845e0  b89cf98100           mov eax, 0x81f99c
// 004845e5  c3                   ret 
// 004845e6  b87cf98100           mov eax, 0x81f97c
// 004845eb  c3                   ret 
// 004845ec  b860f98100           mov eax, 0x81f960
// 004845f1  c3                   ret 
// 004845f2  b844f98100           mov eax, 0x81f944
// 004845f7  c3                   ret 
// 004845f8  b828f98100           mov eax, 0x81f928
// 004845fd  c3                   ret 
// 004845fe  b80cf98100           mov eax, 0x81f90c
// 00484603  c3                   ret 
// 00484604  b8e8f88100           mov eax, 0x81f8e8
// 00484609  c3                   ret 
// 0048460a  b8c8f88100           mov eax, 0x81f8c8
// 0048460f  c3                   ret 
// 00484610  b8b8f88100           mov eax, 0x81f8b8
// 00484615  c3                   ret 
// 00484616  b8a4f88100           mov eax, 0x81f8a4
// 0048461b  c3                   ret 
// 0048461c  b888f88100           mov eax, 0x81f888
// 00484621  c3                   ret 
// 00484622  b878f88100           mov eax, 0x81f878
// 00484627  c3                   ret 
// 00484628  b860f88100           mov eax, 0x81f860
// 0048462d  c3                   ret 
// 0048462e  b848f88100           mov eax, 0x81f848
// 00484633  c3                   ret 
// 00484634  b830f88100           mov eax, 0x81f830
// 00484639  c3                   ret 
// 0048463a  b814f88100           mov eax, 0x81f814
// 0048463f  c3                   ret 
// 00484640  3d488b0000           cmp eax, 0x8b48
// 00484645  7727                 ja 0x48466e
// 00484647  741f                 je 0x484668
// 00484649  8bc8                 mov ecx, eax
// 0048464b  81e907850000         sub ecx, 0x8507
// 00484651  740f                 je 0x484662
// 00484653  83e901               sub ecx, 1
// 00484656  0f85bd000000         jne 0x484719
// 0048465c  b800f88100           mov eax, 0x81f800
// 00484661  c3                   ret 
// 00484662  b8ecf78100           mov eax, 0x81f7ec
// 00484667  c3                   ret 
// 00484668  b8d4f78100           mov eax, 0x81f7d4
// 0048466d  c3                   ret 
// 0048466e  3d00000100           cmp eax, 0x10000
// 00484673  0f87a0000000         ja 0x484719
// 00484679  0f8494000000         je 0x484713
// 0048467f  8d88b074ffff         lea ecx, [eax - 0x8b50]
// 00484685  83f914               cmp ecx, 0x14
// 00484688  0f878b000000         ja 0x484719
// 0048468e  ff248d404e4800       jmp dword ptr [ecx*4 + 0x484e40]
// 00484695  b8c0f78100           mov eax, 0x81f7c0
// 0048469a  c3                   ret 
// 0048469b  b8acf78100           mov eax, 0x81f7ac
// 004846a0  c3                   ret 
// 004846a1  b898f78100           mov eax, 0x81f798
// 004846a6  c3                   ret 
// 004846a7  b888f78100           mov eax, 0x81f788
// 004846ac  c3                   ret 
// 004846ad  b878f78100           mov eax, 0x81f778
// 004846b2  c3                   ret 
// 004846b3  b868f78100           mov eax, 0x81f768
// 004846b8  c3                   ret 
// 004846b9  b85cf78100           mov eax, 0x81f75c
// 004846be  c3                   ret 
// 004846bf  b848f78100           mov eax, 0x81f748
// 004846c4  c3                   ret 
// 004846c5  b834f78100           mov eax, 0x81f734
// 004846ca  c3                   ret 
// 004846cb  b820f78100           mov eax, 0x81f720
// 004846d0  c3                   ret 
// 004846d1  b80cf78100           mov eax, 0x81f70c
// 004846d6  c3                   ret 
// 004846d7  b8f8f68100           mov eax, 0x81f6f8
// 004846dc  c3                   ret 
// 004846dd  b8e4f68100           mov eax, 0x81f6e4
// 004846e2  c3                   ret 
// 004846e3  b8d0f68100           mov eax, 0x81f6d0
// 004846e8  c3                   ret 
// 004846e9  b8bcf68100           mov eax, 0x81f6bc
// 004846ee  c3                   ret 
// 004846ef  b8a8f68100           mov eax, 0x81f6a8
// 004846f4  c3                   ret 
// 004846f5  b894f68100           mov eax, 0x81f694
// 004846fa  c3                   ret 
// 004846fb  b878f68100           mov eax, 0x81f678
// 00484700  c3                   ret 
// 00484701  b85cf68100           mov eax, 0x81f65c
// 00484706  c3                   ret 
// 00484707  b844f68100           mov eax, 0x81f644
// 0048470c  c3                   ret 
// 0048470d  b824f68100           mov eax, 0x81f624
// 00484712  c3                   ret 
// 00484713  b818f68100           mov eax, 0x81f618
// 00484718  c3                   ret 
// 00484719  50                   push eax
// 0048471a  6810f68100           push 0x81f610
// 0048471f  68c8fa9600           push 0x96fac8
// 00484724  ff1530288000         call dword ptr [0x802830]
// 0048472a  83c40c               add esp, 0xc
// 0048472d  b8c8fa9600           mov eax, 0x96fac8
// 00484732  c3                   ret 
// 00484733  90                   nop 
// 00484734  6e                   outsb dx, byte ptr [esi]
// 00484735  3a4800               cmp cl, byte ptr [eax]
// 00484738  743a                 je 0x484774
// 0048473a  48                   dec eax
// 0048473b  0026                 add byte ptr [esi], ah
// 0048473d  3a4800               cmp cl, byte ptr [eax]
// 00484740  4a                   dec edx
// 00484741  3a4800               cmp cl, byte ptr [eax]
// 00484744  50                   push eax
// 00484745  3a4800               cmp cl, byte ptr [eax]
// 00484748  56                   push esi
// 00484749  3a4800               cmp cl, byte ptr [eax]
// 0048474c  5c                   pop esp
// 0048474d  3a4800               cmp cl, byte ptr [eax]
// 00484750  623a                 bound edi, qword ptr [edx]
// 00484752  48                   dec eax
// 00484753  002c3a               add byte ptr [edx + edi], ch
// 00484756  48                   dec eax
// 00484757  00683a               add byte ptr [eax + 0x3a], ch
// 0048475a  48                   dec eax
// 0048475b  0032                 add byte ptr [edx], dh
// 0048475d  3a4800               cmp cl, byte ptr [eax]
// 00484760  383a                 cmp byte ptr [edx], bh
// 00484762  48                   dec eax
// 00484763  003e                 add byte ptr [esi], bh
// 00484765  3a4800               cmp cl, byte ptr [eax]
// 00484768  44                   inc esp
// 00484769  3a4800               cmp cl, byte ptr [eax]
// 0048476c  194748               sbb dword ptr [edi + 0x48], eax
// 0048476f  0000                 add byte ptr [eax], al
// 00484771  0102                 add dword ptr [edx], eax
// 00484773  03040506070809       add eax, dword ptr [eax + 0x9080706]
// 0048477a  0e                   push cs
// 0048477b  0e                   push cs
// 0048477c  0e                   push cs
// 0048477d  0e                   push cs
// 0048477e  0e                   push cs
// 0048477f  0e                   push cs
// 00484780  0a0e                 or cl, byte ptr [esi]
// 00484782  0e                   push cs
// 00484783  0e                   push cs
// 00484784  0e                   push cs
// 00484785  0e                   push cs
// 00484786  0e                   push cs
// 00484787  0e                   push cs
// 00484788  0e                   push cs
// 00484789  0e                   push cs
// 0048478a  0e                   push cs
// 0048478b  0e                   push cs
// 0048478c  0e                   push cs
// 0048478d  0e                   push cs
// 0048478e  0e                   push cs
// 0048478f  0e                   push cs
// 00484790  0b0e                 or ecx, dword ptr [esi]
// 00484792  0e                   push cs
// 00484793  0e                   push cs
// 00484794  0e                   push cs
// 00484795  0e                   push cs
// 00484796  0e                   push cs
// 00484797  0e                   push cs
// 00484798  0e                   push cs
// 00484799  0e                   push cs
// 0048479a  0e                   push cs
// 0048479b  0e                   push cs
// 0048479c  0e                   push cs
// 0048479d  0e                   push cs
// 0048479e  0e                   push cs
// 0048479f  0e                   push cs
// 004847a0  0e                   push cs
// 004847a1  0e                   push cs
// 004847a2  0e                   push cs
// 004847a3  0e                   push cs
// 004847a4  0e                   push cs
// 004847a5  0e                   push cs
// 004847a6  0e                   push cs
// 004847a7  0e                   push cs
// 004847a8  0e                   push cs
// 004847a9  0e                   push cs
// 004847aa  0e                   push cs
// 004847ab  0e                   push cs
// 004847ac  0e                   push cs
// 004847ad  0e                   push cs
// 004847ae  0e                   push cs
// 004847af  0e                   push cs
// 004847b0  0c0e                 or al, 0xe
// 004847b2  0e                   push cs
// 004847b3  0e                   push cs
// 004847b4  0e                   push cs
// 004847b5  0e                   push cs
// 004847b6  0e                   push cs
// 004847b7  0e                   push cs
// 004847b8  0e                   push cs
// 004847b9  0e                   push cs
// 004847ba  0e                   push cs
// 004847bb  0e                   push cs
// 004847bc  0e                   push cs
// 004847bd  0e                   push cs
// 004847be  0e                   push cs
// 004847bf  0e                   push cs
// 004847c0  0e                   push cs
// 004847c1  0e                   push cs
// 004847c2  0e                   push cs
// 004847c3  0e                   push cs
// 004847c4  0e                   push cs
// 004847c5  0e                   push cs
// 004847c6  0e                   push cs
// 004847c7  0e                   push cs
// 004847c8  0e                   push cs
// 004847c9  0e                   push cs
// 004847ca  0e                   push cs
// 004847cb  0e                   push cs
// 004847cc  0e                   push cs
// 004847cd  0e                   push cs
// 004847ce  0e                   push cs
// 004847cf  0e                   push cs
// 004847d0  0e                   push cs
// 004847d1  0e                   push cs
// 004847d2  0e                   push cs
// 004847d3  0e                   push cs
// 004847d4  0e                   push cs
// 004847d5  0e                   push cs
// 004847d6  0e                   push cs
// 004847d7  0e                   push cs
// 004847d8  0e                   push cs
// 004847d9  0e                   push cs
// 004847da  0e                   push cs
// 004847db  0e                   push cs
// 004847dc  0e                   push cs
// 004847dd  0e                   push cs
// 004847de  0e                   push cs
// 004847df  0e                   push cs
// 004847e0  0e                   push cs
// 004847e1  0e                   push cs
// 004847e2  0e                   push cs
// 004847e3  0e                   push cs
// 004847e4  0e                   push cs
// 004847e5  0e                   push cs
// 004847e6  0e                   push cs
// 004847e7  0e                   push cs
// 004847e8  0e                   push cs
// 004847e9  0e                   push cs
// 004847ea  0e                   push cs
// 004847eb  0e                   push cs
// 004847ec  0e                   push cs
// 004847ed  0e                   push cs
// 004847ee  0e                   push cs
// 004847ef  0e                   push cs
// 004847f0  0d8d49009f           or eax, 0x9f00498d
// 004847f5  3a4800               cmp cl, byte ptr [eax]
// 004847f8  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 004847f9  3a4800               cmp cl, byte ptr [eax]
// 004847fc  ab                   stosd dword ptr es:[edi], eax
// 004847fd  3a4800               cmp cl, byte ptr [eax]
// 00484800  b13a                 mov cl, 0x3a
// 00484802  48                   dec eax
// 00484803  00dc                 add ah, bl
// 00484805  3a4800               cmp cl, byte ptr [eax]
// 00484808  e23a                 loop 0x484844
// 0048480a  48                   dec eax
// 0048480b  00e8                 add al, ch
// 0048480d  3a4800               cmp cl, byte ptr [eax]
// 00484810  ee                   out dx, al
// 00484811  3a4800               cmp cl, byte ptr [eax]
// 00484814  f4                   hlt 
// 00484815  3a4800               cmp cl, byte ptr [eax]
// 00484818  fa                   cli 
// 00484819  3a4800               cmp cl, byte ptr [eax]
// 0048481c  003b                 add byte ptr [ebx], bh
// 0048481e  48                   dec eax
// 0048481f  009b3b4800a1         add byte ptr [ebx - 0x5effb7c5], bl
// 00484825  3b4800               cmp ecx, dword ptr [eax]
// 00484828  a7                   cmpsd dword ptr [esi], dword ptr es:[edi]
// 00484829  3b4800               cmp ecx, dword ptr [eax]
// 0048482c  ad                   lodsd eax, dword ptr [esi]
// 0048482d  3b4800               cmp ecx, dword ptr [eax]
// 00484830  b33b                 mov bl, 0x3b
// 00484832  48                   dec eax
// 00484833  00b93b4800bf         add byte ptr [ecx - 0x40ffb7c5], bh
// 00484839  3b4800               cmp ecx, dword ptr [eax]
// 0048483c  c53b                 lds edi, ptr [ebx]
// 0048483e  48                   dec eax
// 0048483f  00f0                 add al, dh
// 00484841  3b4800               cmp ecx, dword ptr [eax]
// 00484844  f63b                 idiv byte ptr [ebx]
// 00484846  48                   dec eax
// 00484847  00fc                 add ah, bh
// 00484849  3b4800               cmp ecx, dword ptr [eax]
// 0048484c  023c48               add bh, byte ptr [eax + ecx*2]
// 0048484f  0008                 add byte ptr [eax], cl
// 00484851  3c48                 cmp al, 0x48
// 00484853  0033                 add byte ptr [ebx], dh
// 00484855  3c48                 cmp al, 0x48
// 00484857  0039                 add byte ptr [ecx], bh
// 00484859  3c48                 cmp al, 0x48
// 0048485b  003f                 add byte ptr [edi], bh
// 0048485d  3c48                 cmp al, 0x48
// 0048485f  00453c               add byte ptr [ebp + 0x3c], al
// 00484862  48                   dec eax
// 00484863  00bb3c4800c1         add byte ptr [ebx - 0x3effb7c4], bh
// 00484869  3c48                 cmp al, 0x48
// 0048486b  00c7                 add bh, al
// 0048486d  3c48                 cmp al, 0x48
// 0048486f  00cd                 add ch, cl
// 00484871  3c48                 cmp al, 0x48
// 00484873  00d3                 add bl, dl
// 00484875  3c48                 cmp al, 0x48
// 00484877  00d9                 add cl, bl
// 00484879  3c48                 cmp al, 0x48
// 0048487b  00df                 add bh, bl
// 0048487d  3c48                 cmp al, 0x48
// 0048487f  00e5                 add ch, ah
// 00484881  3c48                 cmp al, 0x48
// 00484883  00eb                 add bl, ch
// 00484885  3c48                 cmp al, 0x48
// 00484887  00f1                 add cl, dh
// 00484889  3c48                 cmp al, 0x48
// 0048488b  00f7                 add bh, dh
// 0048488d  3c48                 cmp al, 0x48
// 0048488f  00fd                 add ch, bh
// 00484891  3c48                 cmp al, 0x48
// 00484893  0003                 add byte ptr [ebx], al
// 00484895  3d4800093d           cmp eax, 0x3d090048
// 0048489a  48                   dec eax
// 0048489b  000f                 add byte ptr [edi], cl
// 0048489d  3d4800573d           cmp eax, 0x3d570048
// 004848a2  48                   dec eax
// 004848a3  00513d               add byte ptr [ecx + 0x3d], dl
// 004848a6  48                   dec eax
// 004848a7  004b3d               add byte ptr [ebx + 0x3d], cl
// 004848aa  48                   dec eax
// 004848ab  005d3d               add byte ptr [ebp + 0x3d], bl
// 004848ae  48                   dec eax
// 004848af  00b53c48001b         add byte ptr [ebp + 0x1b00483c], dh
// 004848b5  3d4800693d           cmp eax, 0x3d690048
// 004848ba  48                   dec eax
// 004848bb  0039                 add byte ptr [ecx], bh
// 004848bd  3d4800453d           cmp eax, 0x3d450048
// 004848c2  48                   dec eax
// 004848c3  003f                 add byte ptr [edi], bh
// 004848c5  3d4800333d           cmp eax, 0x3d330048
// 004848ca  48                   dec eax
// 004848cb  00633d               add byte ptr [ebx + 0x3d], ah
// 004848ce  48                   dec eax
// 004848cf  0027                 add byte ptr [edi], ah
// 004848d1  3d48002d3d           cmp eax, 0x3d2d0048
// 004848d6  48                   dec eax
// 004848d7  0021                 add byte ptr [ecx], ah
// 004848d9  3d48006f3d           cmp eax, 0x3d6f0048
// 004848de  48                   dec eax
// 004848df  00153d480019         add byte ptr [0x1900483d], dl
// 004848e5  47                   inc edi
// 004848e6  48                   dec eax
// 004848e7  0000                 add byte ptr [eax], al
// 004848e9  0102                 add dword ptr [edx], eax
// 004848eb  03040506070820       add eax, dword ptr [eax + 0x20080706]
// 004848f2  2020                 and byte ptr [eax], ah
// 004848f4  2020                 and byte ptr [eax], ah
// 004848f6  2009                 and byte ptr [ecx], cl
// 004848f8  0a0b                 or cl, byte ptr [ebx]
// 004848fa  0c20                 or al, 0x20
// 004848fc  2020                 and byte ptr [eax], ah
// 004848fe  2020                 and byte ptr [eax], ah
// 00484900  2020                 and byte ptr [eax], ah
// 00484902  2020                 and byte ptr [eax], ah
// 00484904  2020                 and byte ptr [eax], ah
// 00484906  200d0e20200f         and byte ptr [0xf20200e], cl
// 0048490c  2020                 and byte ptr [eax], ah
// 0048490e  2020                 and byte ptr [eax], ah
// 00484910  2020                 and byte ptr [eax], ah
// 00484912  2020                 and byte ptr [eax], ah
// 00484914  2020                 and byte ptr [eax], ah
// 00484916  2020                 and byte ptr [eax], ah
// 00484918  2020                 and byte ptr [eax], ah
// 0048491a  2020                 and byte ptr [eax], ah
// 0048491c  2020                 and byte ptr [eax], ah
// 0048491e  2020                 and byte ptr [eax], ah
// 00484920  2020                 and byte ptr [eax], ah
// 00484922  2020                 and byte ptr [eax], ah
// 00484924  2020                 and byte ptr [eax], ah
// 00484926  2020                 and byte ptr [eax], ah
// 00484928  1011                 adc byte ptr [ecx], dl
// 0048492a  2012                 and byte ptr [edx], dl
// 0048492c  2020                 and byte ptr [eax], ah
// 0048492e  2020                 and byte ptr [eax], ah
// 00484930  2020                 and byte ptr [eax], ah
// 00484932  2020                 and byte ptr [eax], ah
// 00484934  2020                 and byte ptr [eax], ah
// 00484936  2013                 and byte ptr [ebx], dl
// 00484938  2020                 and byte ptr [eax], ah
// 0048493a  2020                 and byte ptr [eax], ah
// 0048493c  2020                 and byte ptr [eax], ah
// 0048493e  1420                 adc al, 0x20
// 00484940  2020                 and byte ptr [eax], ah
// 00484942  2020                 and byte ptr [eax], ah
// 00484944  2020                 and byte ptr [eax], ah
// 00484946  201520202020         and byte ptr [0x20202020], dl
// 0048494c  2020                 and byte ptr [eax], ah
// 0048494e  2020                 and byte ptr [eax], ah
// 00484950  2020                 and byte ptr [eax], ah
// 00484952  2020                 and byte ptr [eax], ah
// 00484954  2020                 and byte ptr [eax], ah
// 00484956  2020                 and byte ptr [eax], ah
// 00484958  16                   push ss
// 00484959  2020                 and byte ptr [eax], ah
// 0048495b  2020                 and byte ptr [eax], ah
// 0048495d  2020                 and byte ptr [eax], ah
// 0048495f  2020                 and byte ptr [eax], ah
// 00484961  2020                 and byte ptr [eax], ah
// 00484963  2020                 and byte ptr [eax], ah
// 00484965  2020                 and byte ptr [eax], ah
// 00484967  2020                 and byte ptr [eax], ah
// 00484969  2020                 and byte ptr [eax], ah
// 0048496b  2020                 and byte ptr [eax], ah
// 0048496d  2020                 and byte ptr [eax], ah
// 0048496f  2020                 and byte ptr [eax], ah
// 00484971  2020                 and byte ptr [eax], ah
// 00484973  2020                 and byte ptr [eax], ah
// 00484975  2020                 and byte ptr [eax], ah
// 00484977  17                   pop ss
// 00484978  2020                 and byte ptr [eax], ah
// 0048497a  2020                 and byte ptr [eax], ah
// 0048497c  2020                 and byte ptr [eax], ah
// 0048497e  2020                 and byte ptr [eax], ah
// 00484980  2020                 and byte ptr [eax], ah
// 00484982  2020                 and byte ptr [eax], ah
// 00484984  2020                 and byte ptr [eax], ah
// 00484986  2020                 and byte ptr [eax], ah
// 00484988  1820                 sbb byte ptr [eax], ah
// 0048498a  2020                 and byte ptr [eax], ah
// 0048498c  2020                 and byte ptr [eax], ah
// 0048498e  2020                 and byte ptr [eax], ah
// 00484990  2020                 and byte ptr [eax], ah
// 00484992  2020                 and byte ptr [eax], ah
// 00484994  2020                 and byte ptr [eax], ah
// 00484996  2020                 and byte ptr [eax], ah
// 00484998  2020                 and byte ptr [eax], ah
// 0048499a  2020                 and byte ptr [eax], ah
// 0048499c  2020                 and byte ptr [eax], ah
// 0048499e  2020                 and byte ptr [eax], ah
// 004849a0  2020                 and byte ptr [eax], ah
// 004849a2  2020                 and byte ptr [eax], ah
// 004849a4  2020                 and byte ptr [eax], ah
// 004849a6  2019                 and byte ptr [ecx], bl
// 004849a8  2020                 and byte ptr [eax], ah
// 004849aa  2020                 and byte ptr [eax], ah
// 004849ac  2020                 and byte ptr [eax], ah
// 004849ae  2020                 and byte ptr [eax], ah
// 004849b0  2020                 and byte ptr [eax], ah
// 004849b2  2020                 and byte ptr [eax], ah
// 004849b4  2020                 and byte ptr [eax], ah
// 004849b6  201a                 and byte ptr [edx], bl
// 004849b8  2020                 and byte ptr [eax], ah
// 004849ba  2020                 and byte ptr [eax], ah
// 004849bc  2020                 and byte ptr [eax], ah
// 004849be  2020                 and byte ptr [eax], ah
// 004849c0  2020                 and byte ptr [eax], ah
// 004849c2  2020                 and byte ptr [eax], ah
// 004849c4  2020                 and byte ptr [eax], ah
// 004849c6  201b                 and byte ptr [ebx], bl
// 004849c8  1c1d                 sbb al, 0x1d
// 004849ca  2020                 and byte ptr [eax], ah
// 004849cc  2020                 and byte ptr [eax], ah
// 004849ce  2020                 and byte ptr [eax], ah
// 004849d0  2020                 and byte ptr [eax], ah
// 004849d2  2020                 and byte ptr [eax], ah
// 004849d4  2020                 and byte ptr [eax], ah
// 004849d6  2020                 and byte ptr [eax], ah
// 004849d8  1e                   push ds
// 004849d9  1f                   pop ds
// 004849da  8bff                 mov edi, edi
// 004849dc  1e                   push ds
// 004849dd  3e48                 dec eax
// 004849df  0018                 add byte ptr [eax], bl
// 004849e1  3e48                 dec eax
// 004849e3  0012                 add byte ptr [edx], dl
// 004849e5  3e48                 dec eax
// 004849e7  00b23d4800b8         add byte ptr [edx - 0x47ffb7c3], dh
// 004849ed  3d4800be3d           cmp eax, 0x3dbe0048
// 004849f2  48                   dec eax
// 004849f3  00c4                 add ah, al
// 004849f5  3d4800ca3d           cmp eax, 0x3dca0048
// 004849fa  48                   dec eax
// 004849fb  00d0                 add al, dl
// 004849fd  3d4800d63d           cmp eax, 0x3dd60048
// 00484a02  48                   dec eax
// 00484a03  00dc                 add ah, bl
// 00484a05  3d4800e23d           cmp eax, 0x3de20048
// 00484a0a  48                   dec eax
// 00484a0b  00e8                 add al, ch
// 00484a0d  3d4800ee3d           cmp eax, 0x3dee0048
// 00484a12  48                   dec eax
// 00484a13  00f4                 add ah, dh
// 00484a15  3d4800fa3d           cmp eax, 0x3dfa0048
// 00484a1a  48                   dec eax
// 00484a1b  0000                 add byte ptr [eax], al
// 00484a1d  3e48                 dec eax
// 00484a1f  0006                 add byte ptr [esi], al
// 00484a21  3e48                 dec eax
// 00484a23  000c3e               add byte ptr [esi + edi], cl
// 00484a26  48                   dec eax
// 00484a27  0019                 add byte ptr [ecx], bl
// 00484a29  47                   inc edi
// 00484a2a  48                   dec eax
// 00484a2b  0000                 add byte ptr [eax], al
// 00484a2d  0102                 add dword ptr [edx], eax
// 00484a2f  1313                 adc edx, dword ptr [ebx]
// 00484a31  1313                 adc edx, dword ptr [ebx]
// 00484a33  1313                 adc edx, dword ptr [ebx]
// 00484a35  1313                 adc edx, dword ptr [ebx]
// 00484a37  1313                 adc edx, dword ptr [ebx]
// 00484a39  1313                 adc edx, dword ptr [ebx]
// 00484a3b  1313                 adc edx, dword ptr [ebx]
// 00484a3d  1313                 adc edx, dword ptr [ebx]
// 00484a3f  1313                 adc edx, dword ptr [ebx]
// 00484a41  1313                 adc edx, dword ptr [ebx]
// 00484a43  1313                 adc edx, dword ptr [ebx]
// 00484a45  1313                 adc edx, dword ptr [ebx]
// 00484a47  1313                 adc edx, dword ptr [ebx]
// 00484a49  1313                 adc edx, dword ptr [ebx]
// 00484a4b  1313                 adc edx, dword ptr [ebx]
// 00484a4d  1313                 adc edx, dword ptr [ebx]
// 00484a4f  1313                 adc edx, dword ptr [ebx]
// 00484a51  1313                 adc edx, dword ptr [ebx]
// 00484a53  1313                 adc edx, dword ptr [ebx]
// 00484a55  1313                 adc edx, dword ptr [ebx]
// 00484a57  1313                 adc edx, dword ptr [ebx]
// 00484a59  1313                 adc edx, dword ptr [ebx]
// 00484a5b  1313                 adc edx, dword ptr [ebx]
// 00484a5d  1313                 adc edx, dword ptr [ebx]
// 00484a5f  1313                 adc edx, dword ptr [ebx]
// 00484a61  1313                 adc edx, dword ptr [ebx]
// 00484a63  1313                 adc edx, dword ptr [ebx]
// 00484a65  1313                 adc edx, dword ptr [ebx]
// 00484a67  1313                 adc edx, dword ptr [ebx]
// 00484a69  1313                 adc edx, dword ptr [ebx]
// 00484a6b  1313                 adc edx, dword ptr [ebx]
// 00484a6d  1313                 adc edx, dword ptr [ebx]
// 00484a6f  1313                 adc edx, dword ptr [ebx]
// 00484a71  1313                 adc edx, dword ptr [ebx]
// 00484a73  1313                 adc edx, dword ptr [ebx]
// 00484a75  1313                 adc edx, dword ptr [ebx]
// 00484a77  1313                 adc edx, dword ptr [ebx]
// 00484a79  1313                 adc edx, dword ptr [ebx]
// 00484a7b  1313                 adc edx, dword ptr [ebx]
// 00484a7d  1313                 adc edx, dword ptr [ebx]
// 00484a7f  1313                 adc edx, dword ptr [ebx]
// 00484a81  1313                 adc edx, dword ptr [ebx]
// 00484a83  1313                 adc edx, dword ptr [ebx]
// 00484a85  1313                 adc edx, dword ptr [ebx]
// 00484a87  1313                 adc edx, dword ptr [ebx]
// 00484a89  1313                 adc edx, dword ptr [ebx]
// 00484a8b  1313                 adc edx, dword ptr [ebx]
// 00484a8d  1313                 adc edx, dword ptr [ebx]
// 00484a8f  1313                 adc edx, dword ptr [ebx]
// 00484a91  1313                 adc edx, dword ptr [ebx]
// 00484a93  1313                 adc edx, dword ptr [ebx]
// 00484a95  1313                 adc edx, dword ptr [ebx]
// 00484a97  1313                 adc edx, dword ptr [ebx]
// 00484a99  1313                 adc edx, dword ptr [ebx]
// 00484a9b  1313                 adc edx, dword ptr [ebx]
// 00484a9d  1313                 adc edx, dword ptr [ebx]
// 00484a9f  1313                 adc edx, dword ptr [ebx]
// 00484aa1  1313                 adc edx, dword ptr [ebx]
// 00484aa3  1313                 adc edx, dword ptr [ebx]
// 00484aa5  1313                 adc edx, dword ptr [ebx]
// 00484aa7  1313                 adc edx, dword ptr [ebx]
// 00484aa9  1313                 adc edx, dword ptr [ebx]
// 00484aab  1313                 adc edx, dword ptr [ebx]
// 00484aad  1313                 adc edx, dword ptr [ebx]
// 00484aaf  1313                 adc edx, dword ptr [ebx]
// 00484ab1  1313                 adc edx, dword ptr [ebx]
// 00484ab3  1313                 adc edx, dword ptr [ebx]
// 00484ab5  1313                 adc edx, dword ptr [ebx]
// 00484ab7  1313                 adc edx, dword ptr [ebx]
// 00484ab9  1313                 adc edx, dword ptr [ebx]
// 00484abb  1313                 adc edx, dword ptr [ebx]
// 00484abd  1313                 adc edx, dword ptr [ebx]
// 00484abf  1313                 adc edx, dword ptr [ebx]
// 00484ac1  1313                 adc edx, dword ptr [ebx]
// 00484ac3  1313                 adc edx, dword ptr [ebx]
// 00484ac5  1313                 adc edx, dword ptr [ebx]
// 00484ac7  1313                 adc edx, dword ptr [ebx]
// 00484ac9  1313                 adc edx, dword ptr [ebx]
// 00484acb  1313                 adc edx, dword ptr [ebx]
// 00484acd  1313                 adc edx, dword ptr [ebx]
// 00484acf  1313                 adc edx, dword ptr [ebx]
// 00484ad1  1313                 adc edx, dword ptr [ebx]
// 00484ad3  1313                 adc edx, dword ptr [ebx]
// 00484ad5  1313                 adc edx, dword ptr [ebx]
// 00484ad7  1313                 adc edx, dword ptr [ebx]
// 00484ad9  1313                 adc edx, dword ptr [ebx]
// 00484adb  1313                 adc edx, dword ptr [ebx]
// 00484add  1313                 adc edx, dword ptr [ebx]
// 00484adf  1303                 adc eax, dword ptr [ebx]
// 00484ae1  0405                 add al, 5
// 00484ae3  06                   push es
// 00484ae4  07                   pop es
// 00484ae5  0809                 or byte ptr [ecx], cl
// 00484ae7  0a0b                 or cl, byte ptr [ebx]
// 00484ae9  0c0d                 or al, 0xd
// 00484aeb  1313                 adc edx, dword ptr [ebx]
// 00484aed  1313                 adc edx, dword ptr [ebx]
// 00484aef  1313                 adc edx, dword ptr [ebx]
// 00484af1  1313                 adc edx, dword ptr [ebx]
// 00484af3  1313                 adc edx, dword ptr [ebx]
// 00484af5  1313                 adc edx, dword ptr [ebx]
// 00484af7  1313                 adc edx, dword ptr [ebx]
// 00484af9  1313                 adc edx, dword ptr [ebx]
// 00484afb  0e                   push cs
// 00484afc  0f1011               movups xmm2, xmmword ptr [ecx]
// 00484aff  12583e               adc bl, byte ptr [eax + 0x3e]
// 00484b02  48                   dec eax
// 00484b03  005e3e               add byte ptr [esi + 0x3e], bl
// 00484b06  48                   dec eax
// 00484b07  00643e48             add byte ptr [esi + edi + 0x48], ah
// 00484b0b  006a3e               add byte ptr [edx + 0x3e], ch
// 00484b0e  48                   dec eax
// 00484b0f  00703e               add byte ptr [eax + 0x3e], dh
// 00484b12  48                   dec eax
// 00484b13  00763e               add byte ptr [esi + 0x3e], dh
// 00484b16  48                   dec eax
// 00484b17  007c3e48             add byte ptr [esi + edi + 0x48], bh
// 00484b1b  00823e480088         add byte ptr [edx - 0x77ffb7c2], al
// 00484b21  3e48                 dec eax
// 00484b23  008e3e480094         add byte ptr [esi - 0x6bffb7c2], cl
// 00484b29  3e48                 dec eax
// 00484b2b  009a3e4800a0         add byte ptr [edx - 0x5fffb7c2], bl
// 00484b31  3e48                 dec eax
// 00484b33  00a63e4800ac         add byte ptr [esi - 0x53ffb7c2], ah
// 00484b39  3e48                 dec eax
// 00484b3b  00b23e4800b8         add byte ptr [edx - 0x47ffb7c2], dh
// 00484b41  3e48                 dec eax
// 00484b43  00be3e4800c4         add byte ptr [esi - 0x3bffb7c2], bh
// 00484b49  3e48                 dec eax
// 00484b4b  00ca                 add dl, cl
// 00484b4d  3e48                 dec eax
// 00484b4f  0019                 add byte ptr [ecx], bl
// 00484b51  47                   inc edi
// 00484b52  48                   dec eax
// 00484b53  0000                 add byte ptr [eax], al
// 00484b55  0102                 add dword ptr [edx], eax
// 00484b57  03040506070814       add eax, dword ptr [eax + 0x14080706]
// 00484b5e  1414                 adc al, 0x14
// 00484b60  1414                 adc al, 0x14
// 00484b62  1414                 adc al, 0x14
// 00484b64  1414                 adc al, 0x14
// 00484b66  1414                 adc al, 0x14
// 00484b68  1414                 adc al, 0x14
// 00484b6a  1414                 adc al, 0x14
// 00484b6c  1414                 adc al, 0x14
// 00484b6e  1414                 adc al, 0x14
// 00484b70  1414                 adc al, 0x14
// 00484b72  1414                 adc al, 0x14
// 00484b74  090a                 or dword ptr [edx], ecx
// 00484b76  0b0c0d0e0f1011       or ecx, dword ptr [ecx + 0x11100f0e]
// 00484b7d  1414                 adc al, 0x14
// 00484b7f  1414                 adc al, 0x14
// 00484b81  1414                 adc al, 0x14
// 00484b83  1414                 adc al, 0x14
// 00484b85  1414                 adc al, 0x14
// 00484b87  1414                 adc al, 0x14
// 00484b89  1414                 adc al, 0x14
// 00484b8b  1414                 adc al, 0x14
// 00484b8d  1414                 adc al, 0x14
// 00484b8f  1414                 adc al, 0x14
// 00484b91  1414                 adc al, 0x14
// 00484b93  1414                 adc al, 0x14
// 00484b95  1414                 adc al, 0x14
// 00484b97  1414                 adc al, 0x14
// 00484b99  1414                 adc al, 0x14
// 00484b9b  1414                 adc al, 0x14
// 00484b9d  1414                 adc al, 0x14
// 00484b9f  1414                 adc al, 0x14
// 00484ba1  1414                 adc al, 0x14
// 00484ba3  1412                 adc al, 0x12
// 00484ba5  138bfff53e48         adc ecx, dword ptr [ebx + 0x483ef5ff]
// 00484bab  0019                 add byte ptr [ecx], bl
// 00484bad  47                   inc edi
// 00484bae  48                   dec eax
// 00484baf  00fb                 add bl, bh
// 00484bb1  3e48                 dec eax
// 00484bb3  0001                 add byte ptr [ecx], al
// 00484bb5  3f                   aas 
// 00484bb6  48                   dec eax
// 00484bb7  0007                 add byte ptr [edi], al
// 00484bb9  3f                   aas 
// 00484bba  48                   dec eax
// 00484bbb  00713f               add byte ptr [ecx + 0x3f], dh
// 00484bbe  48                   dec eax
// 00484bbf  00773f               add byte ptr [edi + 0x3f], dh
// 00484bc2  48                   dec eax
// 00484bc3  007d3f               add byte ptr [ebp + 0x3f], bh
// 00484bc6  48                   dec eax
// 00484bc7  00833f480089         add byte ptr [ebx - 0x76ffb7c1], al
// 00484bcd  3f                   aas 
// 00484bce  48                   dec eax
// 00484bcf  008f3f480095         add byte ptr [edi - 0x6affb7c1], cl
// 00484bd5  3f                   aas 
// 00484bd6  48                   dec eax
// 00484bd7  00d7                 add bh, dl
// 00484bd9  3f                   aas 
// 00484bda  48                   dec eax
// 00484bdb  00dd                 add ch, bl
// 00484bdd  3f                   aas 
// 00484bde  48                   dec eax
// 00484bdf  00e3                 add bl, ah
// 00484be1  3f                   aas 
// 00484be2  48                   dec eax
// 00484be3  00e9                 add cl, ch
// 00484be5  3f                   aas 
// 00484be6  48                   dec eax
// 00484be7  00ef                 add bh, ch
// 00484be9  3f                   aas 
// 00484bea  48                   dec eax
// 00484beb  00f5                 add ch, dh
// 00484bed  3f                   aas 
// 00484bee  48                   dec eax
// 00484bef  00fb                 add bl, bh
// 00484bf1  3f                   aas 
// 00484bf2  48                   dec eax
// 00484bf3  0001                 add byte ptr [ecx], al
// 00484bf5  40                   inc eax
// 00484bf6  48                   dec eax
// 00484bf7  0007                 add byte ptr [edi], al
// 00484bf9  40                   inc eax
// 00484bfa  48                   dec eax
// 00484bfb  000d4048002f         add byte ptr [0x2f004840], cl
// 00484c01  40                   inc eax
// 00484c02  48                   dec eax
// 00484c03  00354048003b         add byte ptr [0x3b004840], dh
// 00484c09  40                   inc eax
// 00484c0a  48                   dec eax
// 00484c0b  004140               add byte ptr [ecx + 0x40], al
// 00484c0e  48                   dec eax
// 00484c0f  004740               add byte ptr [edi + 0x40], al
// 00484c12  48                   dec eax
// 00484c13  004d40               add byte ptr [ebp + 0x40], cl
// 00484c16  48                   dec eax
// 00484c17  005340               add byte ptr [ebx + 0x40], dl
// 00484c1a  48                   dec eax
// 00484c1b  005940               add byte ptr [ecx + 0x40], bl
// 00484c1e  48                   dec eax
// 00484c1f  005f40               add byte ptr [edi + 0x40], bl
// 00484c22  48                   dec eax
// 00484c23  006540               add byte ptr [ebp + 0x40], ah
// 00484c26  48                   dec eax
// 00484c27  006b40               add byte ptr [ebx + 0x40], ch
// 00484c2a  48                   dec eax
// 00484c2b  007140               add byte ptr [ecx + 0x40], dh
// 00484c2e  48                   dec eax
// 00484c2f  007740               add byte ptr [edi + 0x40], dh
// 00484c32  48                   dec eax
// 00484c33  007d40               add byte ptr [ebp + 0x40], bh
// 00484c36  48                   dec eax
// 00484c37  008340480073         add byte ptr [ebx + 0x73004840], al
// 00484c3d  41                   inc ecx
// 00484c3e  48                   dec eax
// 00484c3f  007941               add byte ptr [ecx + 0x41], bh
// 00484c42  48                   dec eax
// 00484c43  007f41               add byte ptr [edi + 0x41], bh
// 00484c46  48                   dec eax
// 00484c47  00854148008b         add byte ptr [ebp - 0x74ffb7bf], al
// 00484c4d  41                   inc ecx
// 00484c4e  48                   dec eax
// 00484c4f  009141480097         add byte ptr [ecx - 0x68ffb7bf], dl
// 00484c55  41                   inc ecx
// 00484c56  48                   dec eax
// 00484c57  009d414800a3         add byte ptr [ebp - 0x5cffb7bf], bl
// 00484c5d  41                   inc ecx
// 00484c5e  48                   dec eax
// 00484c5f  00a941480094         add byte ptr [ecx - 0x6bffb7bf], ch
// 00484c65  44                   inc esp
// 00484c66  48                   dec eax
// 00484c67  009a444800a0         add byte ptr [edx - 0x5fffb7bc], bl
// 00484c6d  44                   inc esp
// 00484c6e  48                   dec eax
// 00484c6f  00a6444800ac         add byte ptr [esi - 0x53ffb7bc], ah
// 00484c75  44                   inc esp
// 00484c76  48                   dec eax
// 00484c77  00d7                 add bh, dl
// 00484c79  44                   inc esp
// 00484c7a  48                   dec eax
// 00484c7b  00dd                 add ch, bl
// 00484c7d  44                   inc esp
// 00484c7e  48                   dec eax
// 00484c7f  00e3                 add bl, ah
// 00484c81  44                   inc esp
// 00484c82  48                   dec eax
// 00484c83  00e9                 add cl, ch
// 00484c85  44                   inc esp
// 00484c86  48                   dec eax
// 00484c87  00ef                 add bh, ch
// 00484c89  44                   inc esp
// 00484c8a  48                   dec eax
// 00484c8b  00f5                 add ch, dh
// 00484c8d  44                   inc esp
// 00484c8e  48                   dec eax
// 00484c8f  00fb                 add bl, bh
// 00484c91  44                   inc esp
// 00484c92  48                   dec eax
// 00484c93  004a45               add byte ptr [edx + 0x45], cl
// 00484c96  48                   dec eax
// 00484c97  00444548             add byte ptr [ebp + eax*2 + 0x48], al
// 00484c9b  0028                 add byte ptr [eax], ch
// 00484c9d  46                   inc esi
// 00484c9e  48                   dec eax
// 00484c9f  002e                 add byte ptr [esi], ch
// 00484ca1  46                   inc esi
// 00484ca2  48                   dec eax
// 00484ca3  003446               add byte ptr [esi + eax*2], dh
// 00484ca6  48                   dec eax
// 00484ca7  0022                 add byte ptr [edx], ah
// 00484ca9  46                   inc esi
// 00484caa  48                   dec eax
// 00484cab  0038                 add byte ptr [eax], bh
// 00484cad  45                   inc ebp
// 00484cae  48                   dec eax
// 00484caf  005045               add byte ptr [eax + 0x45], dl
// 00484cb2  48                   dec eax
// 00484cb3  005645               add byte ptr [esi + 0x45], dl
// 00484cb6  48                   dec eax
// 00484cb7  005c4548             add byte ptr [ebp + eax*2 + 0x48], bl
// 00484cbb  006245               add byte ptr [edx + 0x45], ah
// 00484cbe  48                   dec eax
// 00484cbf  006845               add byte ptr [eax + 0x45], ch
// 00484cc2  48                   dec eax
// 00484cc3  006e45               add byte ptr [esi + 0x45], ch
// 00484cc6  48                   dec eax
// 00484cc7  00744548             add byte ptr [ebp + eax*2 + 0x48], dh
// 00484ccb  007a45               add byte ptr [edx + 0x45], bh
// 00484cce  48                   dec eax
// 00484ccf  0080454800b0         add byte ptr [eax - 0x4fffb7bb], al
// 00484cd5  45                   inc ebp
// 00484cd6  48                   dec eax
// 00484cd7  00864548008c         add byte ptr [esi - 0x73ffb7bb], al
// 00484cdd  45                   inc ebp
// 00484cde  48                   dec eax
// 00484cdf  00b645480092         add byte ptr [esi - 0x6dffb7bb], dh
// 00484ce5  45                   inc ebp
// 00484ce6  48                   dec eax
// 00484ce7  00984548009e         add byte ptr [eax - 0x61ffb7bb], bl
// 00484ced  45                   inc ebp
// 00484cee  48                   dec eax
// 00484cef  00bc454800a445       add byte ptr [ebp + eax*2 + 0x45a40048], bh
// 00484cf6  48                   dec eax
// 00484cf7  00aa454800c2         add byte ptr [edx - 0x3dffb7bb], ch
// 00484cfd  45                   inc ebp
// 00484cfe  48                   dec eax
// 00484cff  00c8                 add al, cl
// 00484d01  45                   inc ebp
// 00484d02  48                   dec eax
// 00484d03  00ce                 add dh, cl
// 00484d05  45                   inc ebp
// 00484d06  48                   dec eax
// 00484d07  00d4                 add ah, dl
// 00484d09  45                   inc ebp
// 00484d0a  48                   dec eax
// 00484d0b  00da                 add dl, bl
// 00484d0d  45                   inc ebp
// 00484d0e  48                   dec eax
// 00484d0f  00e0                 add al, ah
// 00484d11  45                   inc ebp
// 00484d12  48                   dec eax
// 00484d13  00e6                 add dh, ah
// 00484d15  45                   inc ebp
// 00484d16  48                   dec eax
// 00484d17  00ec                 add ah, ch
// 00484d19  45                   inc ebp
// 00484d1a  48                   dec eax
// 00484d1b  00f2                 add dl, dh
// 00484d1d  45                   inc ebp
// 00484d1e  48                   dec eax
// 00484d1f  00f8                 add al, bh
// 00484d21  45                   inc ebp
// 00484d22  48                   dec eax
// 00484d23  00fe                 add dh, bh
// 00484d25  45                   inc ebp
// 00484d26  48                   dec eax
// 00484d27  000446               add byte ptr [esi + eax*2], al
// 00484d2a  48                   dec eax
// 00484d2b  000a                 add byte ptr [edx], cl
// 00484d2d  46                   inc esi
// 00484d2e  48                   dec eax
// 00484d2f  0010                 add byte ptr [eax], dl
// 00484d31  46                   inc esi
// 00484d32  48                   dec eax
// 00484d33  0016                 add byte ptr [esi], dl
// 00484d35  46                   inc esi
// 00484d36  48                   dec eax
// 00484d37  001c46               add byte ptr [esi + eax*2], bl
// 00484d3a  48                   dec eax
// 00484d3b  003e                 add byte ptr [esi], bh
// 00484d3d  45                   inc ebp
// 00484d3e  48                   dec eax
// 00484d3f  0019                 add byte ptr [ecx], bl
// 00484d41  47                   inc edi
// 00484d42  48                   dec eax
// 00484d43  0000                 add byte ptr [eax], al
// 00484d45  012b                 add dword ptr [ebx], ebp
// 00484d47  2b2b                 sub ebp, dword ptr [ebx]
// 00484d49  2b2b                 sub ebp, dword ptr [ebx]
// 00484d4b  2b2b                 sub ebp, dword ptr [ebx]
// 00484d4d  2b2b                 sub ebp, dword ptr [ebx]
// 00484d4f  2b2b                 sub ebp, dword ptr [ebx]
// 00484d51  2b2b                 sub ebp, dword ptr [ebx]
// 00484d53  2b2b                 sub ebp, dword ptr [ebx]
// 00484d55  2b2b                 sub ebp, dword ptr [ebx]
// 00484d57  2b2b                 sub ebp, dword ptr [ebx]
// 00484d59  2b2b                 sub ebp, dword ptr [ebx]
// 00484d5b  2b2b                 sub ebp, dword ptr [ebx]
// 00484d5d  2b2b                 sub ebp, dword ptr [ebx]
// 00484d5f  2b2b                 sub ebp, dword ptr [ebx]
// 00484d61  2b2b                 sub ebp, dword ptr [ebx]
// 00484d63  2b2b                 sub ebp, dword ptr [ebx]
// 00484d65  2b2b                 sub ebp, dword ptr [ebx]
// 00484d67  2b2b                 sub ebp, dword ptr [ebx]
// 00484d69  2b2b                 sub ebp, dword ptr [ebx]
// 00484d6b  2b2b                 sub ebp, dword ptr [ebx]
// 00484d6d  2b2b                 sub ebp, dword ptr [ebx]
// 00484d6f  2b2b                 sub ebp, dword ptr [ebx]
// 00484d71  2b2b                 sub ebp, dword ptr [ebx]
// 00484d73  2b2b                 sub ebp, dword ptr [ebx]
// 00484d75  0203                 add al, byte ptr [ebx]
// 00484d77  042b                 add al, 0x2b
// 00484d79  2b2b                 sub ebp, dword ptr [ebx]
// 00484d7b  2b052b2b062b         sub eax, dword ptr [0x2b062b2b]
// 00484d81  07                   pop es
// 00484d82  0809                 or byte ptr [ecx], cl
// 00484d84  0a0b                 or cl, byte ptr [ebx]
// 00484d86  0c0d                 or al, 0xd
// 00484d88  0e                   push cs
// 00484d89  0f1011               movups xmm2, xmmword ptr [ecx]
// 00484d8c  1213                 adc dl, byte ptr [ebx]
// 00484d8e  1415                 adc al, 0x15
// 00484d90  16                   push ss
// 00484d91  17                   pop ss
// 00484d92  1819                 sbb byte ptr [ecx], bl
// 00484d94  1a1b                 sbb bl, byte ptr [ebx]
// 00484d96  1c1d                 sbb al, 0x1d
// 00484d98  1e                   push ds
// 00484d99  1f                   pop ds
// 00484d9a  2021                 and byte ptr [ecx], ah
// 00484d9c  2223                 and ah, byte ptr [ebx]
// 00484d9e  2425                 and al, 0x25
// 00484da0  262b2b               sub ebp, dword ptr es:[ebx]
// 00484da3  2b2b                 sub ebp, dword ptr [ebx]
// 00484da5  2b2b                 sub ebp, dword ptr [ebx]
// 00484da7  2b2b                 sub ebp, dword ptr [ebx]
// 00484da9  2b2b                 sub ebp, dword ptr [ebx]
// 00484dab  2b2b                 sub ebp, dword ptr [ebx]
// 00484dad  2b2b                 sub ebp, dword ptr [ebx]
// 00484daf  2b2b                 sub ebp, dword ptr [ebx]
// 00484db1  2b2b                 sub ebp, dword ptr [ebx]
// 00484db3  2b2b                 sub ebp, dword ptr [ebx]
// 00484db5  2b2b                 sub ebp, dword ptr [ebx]
// 00484db7  2b2b                 sub ebp, dword ptr [ebx]
// 00484db9  2b2b                 sub ebp, dword ptr [ebx]
// 00484dbb  2b2b                 sub ebp, dword ptr [ebx]
// 00484dbd  2b2b                 sub ebp, dword ptr [ebx]
// 00484dbf  2b2b                 sub ebp, dword ptr [ebx]
// 00484dc1  2b2b                 sub ebp, dword ptr [ebx]
// 00484dc3  2b2b                 sub ebp, dword ptr [ebx]
// 00484dc5  2b2b                 sub ebp, dword ptr [ebx]
// 00484dc7  2b2b                 sub ebp, dword ptr [ebx]
// 00484dc9  2b2b                 sub ebp, dword ptr [ebx]
// 00484dcb  2b2b                 sub ebp, dword ptr [ebx]
// 00484dcd  2b2b                 sub ebp, dword ptr [ebx]
// 00484dcf  2b2b                 sub ebp, dword ptr [ebx]
// 00484dd1  2b2b                 sub ebp, dword ptr [ebx]
// 00484dd3  2b2b                 sub ebp, dword ptr [ebx]
// 00484dd5  2b2b                 sub ebp, dword ptr [ebx]
// 00484dd7  2b2b                 sub ebp, dword ptr [ebx]
// 00484dd9  2b2b                 sub ebp, dword ptr [ebx]
// 00484ddb  2b2b                 sub ebp, dword ptr [ebx]
// 00484ddd  2b2b                 sub ebp, dword ptr [ebx]
// 00484ddf  2b2b                 sub ebp, dword ptr [ebx]
// 00484de1  2b2b                 sub ebp, dword ptr [ebx]
// 00484de3  2b2b                 sub ebp, dword ptr [ebx]
// 00484de5  2b2b                 sub ebp, dword ptr [ebx]
// 00484de7  2b2b                 sub ebp, dword ptr [ebx]
// 00484de9  2b2b                 sub ebp, dword ptr [ebx]
// 00484deb  2b2b                 sub ebp, dword ptr [ebx]
// 00484ded  2b2b                 sub ebp, dword ptr [ebx]
// 00484def  2b2b                 sub ebp, dword ptr [ebx]
// 00484df1  2b2b                 sub ebp, dword ptr [ebx]
// 00484df3  2b2b                 sub ebp, dword ptr [ebx]
// 00484df5  2b2b                 sub ebp, dword ptr [ebx]
// 00484df7  27                   daa 
// 00484df8  2829                 sub byte ptr [ecx], ch
// 00484dfa  2b2b                 sub ebp, dword ptr [ebx]
// 00484dfc  2b2b                 sub ebp, dword ptr [ebx]
// 00484dfe  2b2b                 sub ebp, dword ptr [ebx]
// 00484e00  2b2b                 sub ebp, dword ptr [ebx]
// 00484e02  2b2b                 sub ebp, dword ptr [ebx]
// 00484e04  2b2b                 sub ebp, dword ptr [ebx]
// 00484e06  2b2b                 sub ebp, dword ptr [ebx]
// 00484e08  2b2b                 sub ebp, dword ptr [ebx]
// 00484e0a  2b2b                 sub ebp, dword ptr [ebx]
// 00484e0c  2b2b                 sub ebp, dword ptr [ebx]
// 00484e0e  2b2b                 sub ebp, dword ptr [ebx]
// 00484e10  2b2b                 sub ebp, dword ptr [ebx]
// 00484e12  2b2b                 sub ebp, dword ptr [ebx]
// 00484e14  2b2b                 sub ebp, dword ptr [ebx]
// 00484e16  2b2b                 sub ebp, dword ptr [ebx]
// 00484e18  2b2b                 sub ebp, dword ptr [ebx]
// 00484e1a  2b2b                 sub ebp, dword ptr [ebx]
// 00484e1c  2b2b                 sub ebp, dword ptr [ebx]
// 00484e1e  2b2b                 sub ebp, dword ptr [ebx]
// 00484e20  2b2b                 sub ebp, dword ptr [ebx]
// 00484e22  2b2b                 sub ebp, dword ptr [ebx]
// 00484e24  2b2b                 sub ebp, dword ptr [ebx]
// 00484e26  2b2b                 sub ebp, dword ptr [ebx]
// 00484e28  2b2b                 sub ebp, dword ptr [ebx]
// 00484e2a  2b2b                 sub ebp, dword ptr [ebx]
// 00484e2c  2b2b                 sub ebp, dword ptr [ebx]
// 00484e2e  2b2b                 sub ebp, dword ptr [ebx]
// 00484e30  2b2b                 sub ebp, dword ptr [ebx]
// 00484e32  2b2b                 sub ebp, dword ptr [ebx]
// 00484e34  2b2b                 sub ebp, dword ptr [ebx]
// 00484e36  2b2b                 sub ebp, dword ptr [ebx]
// 00484e38  2b2b                 sub ebp, dword ptr [ebx]
// 00484e3a  2b2b                 sub ebp, dword ptr [ebx]
// 00484e3c  2a8d49009546         sub cl, byte ptr [ebp + 0x46950049]
// 00484e42  48                   dec eax
// 00484e43  009b464800a1         add byte ptr [ebx - 0x5effb7ba], bl
// 00484e49  46                   inc esi
// 00484e4a  48                   dec eax
// 00484e4b  00a7464800ad         add byte ptr [edi - 0x52ffb7ba], ah
// 00484e51  46                   inc esi
// 00484e52  48                   dec eax
// 00484e53  00b3464800b9         add byte ptr [ebx - 0x46ffb7ba], dh
// 00484e59  46                   inc esi
// 00484e5a  48                   dec eax
// 00484e5b  00bf464800c5         add byte ptr [edi - 0x3affb7ba], bh
// 00484e61  46                   inc esi
// 00484e62  48                   dec eax
// 00484e63  00cb                 add bl, cl
// 00484e65  46                   inc esi
// 00484e66  48                   dec eax
// 00484e67  00d1                 add cl, dl
// 00484e69  46                   inc esi
// 00484e6a  48                   dec eax
// 00484e6b  00d7                 add bh, dl
// 00484e6d  46                   inc esi
// 00484e6e  48                   dec eax
// 00484e6f  00dd                 add ch, bl
// 00484e71  46                   inc esi
// 00484e72  48                   dec eax
// 00484e73  00e3                 add bl, ah
// 00484e75  46                   inc esi
// 00484e76  48                   dec eax
// 00484e77  00e9                 add cl, ch
// 00484e79  46                   inc esi
// 00484e7a  48                   dec eax
// 00484e7b  00ef                 add bh, ch
// 00484e7d  46                   inc esi
// 00484e7e  48                   dec eax
// 00484e7f  00f5                 add ch, dh
// 00484e81  46                   inc esi
// 00484e82  48                   dec eax
// 00484e83  00fb                 add bl, bh
// 00484e85  46                   inc esi
// 00484e86  48                   dec eax
// 00484e87  0001                 add byte ptr [ecx], al
// 00484e89  47                   inc edi
// 00484e8a  48                   dec eax
// 00484e8b  0007                 add byte ptr [edi], al
// 00484e8d  47                   inc edi
// 00484e8e  48                   dec eax

void func_00483a00()
{
}