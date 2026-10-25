// from server: 100% by tester
// roc 2008-06 0045c410  unit: G3D::TextureManager::VTextureArgs::?$Table  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045c410
//
// 0045c410  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0045c414  83f803               cmp eax, 3
// 0045c417  7441                 je 0x45c45a
// 0045c419  85c0                 test eax, eax
// 0045c41b  7517                 jne 0x45c434
// 0045c41d  8b442408             mov eax, dword ptr [esp + 8]
// 0045c421  85c0                 test eax, eax
// 0045c423  743f                 je 0x45c464
// 0045c425  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0045c429  8b11                 mov edx, dword ptr [ecx]
// 0045c42b  8910                 mov dword ptr [eax], edx
// 0045c42d  8b4904               mov ecx, dword ptr [ecx + 4]
// 0045c430  894804               mov dword ptr [eax + 4], ecx
// 0045c433  c3                   ret 
// 0045c434  83f801               cmp eax, 1
// 0045c437  742b                 je 0x45c464
// 0045c439  56                   push esi
// 0045c43a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0045c43e  8b0e                 mov ecx, dword ptr [esi]
// 0045c440  68e0299300           push 0x9329e0
// 0045c445  ff1578288000         call dword ptr [0x802878]
// 0045c44b  0fb6d0               movzx edx, al
// 0045c44e  f7da                 neg edx
// 0045c450  1bd2                 sbb edx, edx
// 0045c452  23542408             and edx, dword ptr [esp + 8]
// 0045c456  8916                 mov dword ptr [esi], edx
// 0045c458  5e                   pop esi
// 0045c459  c3                   ret 
// 0045c45a  8b442408             mov eax, dword ptr [esp + 8]
// 0045c45e  c700e0299300         mov dword ptr [eax], 0x9329e0
// 0045c464  c3                   ret 

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
