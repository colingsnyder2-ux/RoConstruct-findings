// from server: 100% by tester
// roc 2008-06 004db760  unit: RBX::ViewNew::ViewRbxGfx  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004db760
//
// 004db760  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004db764  83f803               cmp eax, 3
// 004db767  7441                 je 0x4db7aa
// 004db769  85c0                 test eax, eax
// 004db76b  7517                 jne 0x4db784
// 004db76d  8b442408             mov eax, dword ptr [esp + 8]
// 004db771  85c0                 test eax, eax
// 004db773  743f                 je 0x4db7b4
// 004db775  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004db779  8b11                 mov edx, dword ptr [ecx]
// 004db77b  8910                 mov dword ptr [eax], edx
// 004db77d  8b4904               mov ecx, dword ptr [ecx + 4]
// 004db780  894804               mov dword ptr [eax + 4], ecx
// 004db783  c3                   ret 
// 004db784  83f801               cmp eax, 1
// 004db787  742b                 je 0x4db7b4
// 004db789  56                   push esi
// 004db78a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004db78e  8b0e                 mov ecx, dword ptr [esi]
// 004db790  68d8129400           push 0x9412d8
// 004db795  ff1578288000         call dword ptr [0x802878]
// 004db79b  0fb6d0               movzx edx, al
// 004db79e  f7da                 neg edx
// 004db7a0  1bd2                 sbb edx, edx
// 004db7a2  23542408             and edx, dword ptr [esp + 8]
// 004db7a6  8916                 mov dword ptr [esi], edx
// 004db7a8  5e                   pop esi
// 004db7a9  c3                   ret 
// 004db7aa  8b442408             mov eax, dword ptr [esp + 8]
// 004db7ae  c700d8129400         mov dword ptr [eax], 0x9412d8
// 004db7b4  c3                   ret 

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
