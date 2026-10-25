// from server: 100% by king_originala
// roc 2008-06 00599640  unit: RBX::VPartInstance::?$FactoryProduct  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00599640
//
// 00599640  53                   push ebx
// 00599641  56                   push esi
// 00599642  57                   push edi
// 00599643  33ff                 xor edi, edi
// 00599645  8d99f4010000         lea ebx, [ecx + 0x1f4]
// 0059964b  eb03                 jmp 0x599650
// 0059964d  8d4900               lea ecx, [ecx]
// 00599650  57                   push edi
// 00599651  8bcb                 mov ecx, ebx
// 00599653  e8a8350500           call 0x5ecc00
// 00599658  8bf0                 mov esi, eax
// 0059965a  8bce                 mov ecx, esi
// 0059965c  e82f7c0500           call 0x5f1290
// 00599661  83f806               cmp eax, 6
// 00599664  7424                 je 0x59968a
// 00599666  8bce                 mov ecx, esi
// 00599668  e8237c0500           call 0x5f1290
// 0059966d  83f808               cmp eax, 8
// 00599670  7418                 je 0x59968a
// 00599672  8bce                 mov ecx, esi
// 00599674  e8177c0500           call 0x5f1290
// 00599679  83f807               cmp eax, 7
// 0059967c  740c                 je 0x59968a
// 0059967e  47                   inc edi
// 0059967f  83ff06               cmp edi, 6
// 00599682  7ccc                 jl 0x599650
// 00599684  5f                   pop edi
// 00599685  5e                   pop esi
// 00599686  32c0                 xor al, al
// 00599688  5b                   pop ebx
// 00599689  c3                   ret 
// 0059968a  5f                   pop edi
// 0059968b  5e                   pop esi
// 0059968c  b001                 mov al, 1
// 0059968e  5b                   pop ebx
// 0059968f  c3                   ret 

struct FaceInstance {
    int getSurfaceType() const;
};

struct Faces {
    FaceInstance* get(int index);
};

struct S {
    char padding[0x1f4];
    Faces faces;
    bool f();
};

bool S::f()
{
    for (int i = 0; i < 6; ++i) {
        FaceInstance* face = faces.get(i);
        if (face->getSurfaceType() == 6 ||
            face->getSurfaceType() == 8 ||
            face->getSurfaceType() == 7)
            return true;
    }
    return false;
}
