// from server: 100% by tester
// roc 2008-06 0045c3b0  unit: G3D::TextureManager::VTextureArgs::?$Table  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045c3b0
//
// 0045c3b0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0045c3b4  83f803               cmp eax, 3
// 0045c3b7  7441                 je 0x45c3fa
// 0045c3b9  85c0                 test eax, eax
// 0045c3bb  7517                 jne 0x45c3d4
// 0045c3bd  8b442408             mov eax, dword ptr [esp + 8]
// 0045c3c1  85c0                 test eax, eax
// 0045c3c3  743f                 je 0x45c404
// 0045c3c5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0045c3c9  8b11                 mov edx, dword ptr [ecx]
// 0045c3cb  8910                 mov dword ptr [eax], edx
// 0045c3cd  8b4904               mov ecx, dword ptr [ecx + 4]
// 0045c3d0  894804               mov dword ptr [eax + 4], ecx
// 0045c3d3  c3                   ret 
// 0045c3d4  83f801               cmp eax, 1
// 0045c3d7  742b                 je 0x45c404
// 0045c3d9  56                   push esi
// 0045c3da  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0045c3de  8b0e                 mov ecx, dword ptr [esi]
// 0045c3e0  6858299300           push 0x932958
// 0045c3e5  ff1578288000         call dword ptr [0x802878]
// 0045c3eb  0fb6d0               movzx edx, al
// 0045c3ee  f7da                 neg edx
// 0045c3f0  1bd2                 sbb edx, edx
// 0045c3f2  23542408             and edx, dword ptr [esp + 8]
// 0045c3f6  8916                 mov dword ptr [esi], edx
// 0045c3f8  5e                   pop esi
// 0045c3f9  c3                   ret 
// 0045c3fa  8b442408             mov eax, dword ptr [esp + 8]
// 0045c3fe  c70058299300         mov dword ptr [eax], 0x932958
// 0045c404  c3                   ret 

struct TypeInfo {};

typedef bool (__thiscall *TypeEqual)(const TypeInfo*, const TypeInfo&);
extern TypeEqual typeEqual;
extern const TypeInfo typeTag;

struct Storage {
    const TypeInfo* first;
    void* second;
};

void manage(Storage* source, Storage* destination, int operation)
{
    if (operation != 3) {
        if (operation == 0) {
            if (destination)
                *destination = *source;
        } else if (operation != 1) {
            destination->first = typeEqual(destination->first, typeTag)
                ? reinterpret_cast<const TypeInfo*>(source) : 0;
        }
    } else {
        destination->first = &typeTag;
    }
}
