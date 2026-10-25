// from server: 100% by tester
// roc 2008-06 004db700  unit: RBX::ViewNew::ViewRbxGfx  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004db700
//
// 004db700  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004db704  83f803               cmp eax, 3
// 004db707  7441                 je 0x4db74a
// 004db709  85c0                 test eax, eax
// 004db70b  7517                 jne 0x4db724
// 004db70d  8b442408             mov eax, dword ptr [esp + 8]
// 004db711  85c0                 test eax, eax
// 004db713  743f                 je 0x4db754
// 004db715  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004db719  8b11                 mov edx, dword ptr [ecx]
// 004db71b  8910                 mov dword ptr [eax], edx
// 004db71d  8b4904               mov ecx, dword ptr [ecx + 4]
// 004db720  894804               mov dword ptr [eax + 4], ecx
// 004db723  c3                   ret 
// 004db724  83f801               cmp eax, 1
// 004db727  742b                 je 0x4db754
// 004db729  56                   push esi
// 004db72a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004db72e  8b0e                 mov ecx, dword ptr [esi]
// 004db730  6838129400           push 0x941238
// 004db735  ff1578288000         call dword ptr [0x802878]
// 004db73b  0fb6d0               movzx edx, al
// 004db73e  f7da                 neg edx
// 004db740  1bd2                 sbb edx, edx
// 004db742  23542408             and edx, dword ptr [esp + 8]
// 004db746  8916                 mov dword ptr [esi], edx
// 004db748  5e                   pop esi
// 004db749  c3                   ret 
// 004db74a  8b442408             mov eax, dword ptr [esp + 8]
// 004db74e  c70038129400         mov dword ptr [eax], 0x941238
// 004db754  c3                   ret 

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
