// from server: 100% by king_originala
// roc 2008-06 00599770  unit: RBX::PartInstance  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00599770
//
// 00599770  53                   push ebx
// 00599771  56                   push esi
// 00599772  57                   push edi
// 00599773  33ff                 xor edi, edi
// 00599775  8d99c4000000         lea ebx, [ecx + 0xc4]
// 0059977b  eb03                 jmp 0x599780
// 0059977d  8d4900               lea ecx, [ecx]
// 00599780  57                   push edi
// 00599781  8bcb                 mov ecx, ebx
// 00599783  e878340500           call 0x5ecc00
// 00599788  8bf0                 mov esi, eax
// 0059978a  8bce                 mov ecx, esi
// 0059978c  e8ff7a0500           call 0x5f1290
// 00599791  83f808               cmp eax, 8
// 00599794  740c                 je 0x5997a2
// 00599796  8bce                 mov ecx, esi
// 00599798  e8f37a0500           call 0x5f1290
// 0059979d  83f807               cmp eax, 7
// 005997a0  750b                 jne 0x5997ad
// 005997a2  8bce                 mov ecx, esi
// 005997a4  e8177c0500           call 0x5f13c0
// 005997a9  84c0                 test al, al
// 005997ab  750c                 jne 0x5997b9
// 005997ad  47                   inc edi
// 005997ae  83ff06               cmp edi, 6
// 005997b1  7ccd                 jl 0x599780
// 005997b3  5f                   pop edi
// 005997b4  5e                   pop esi
// 005997b5  32c0                 xor al, al
// 005997b7  5b                   pop ebx
// 005997b8  c3                   ret 
// 005997b9  5f                   pop edi
// 005997ba  5e                   pop esi
// 005997bb  b001                 mov al, 1
// 005997bd  5b                   pop ebx
// 005997be  c3                   ret 

struct Face {
    int getType();
    bool isActive();
};

struct Faces {
    Face* get(int index);
};

struct Part {
    char padding[196];
    Faces faces;
    bool hasActiveFace();
};

bool Part::hasActiveFace()
{
    for (int i = 0; i < 6; ++i) {
        Face* face = faces.get(i);
        if ((face->getType() == 8 || face->getType() == 7) &&
            face->isActive())
            return true;
    }
    return false;
}
