// from server: 100% by tester
// roc 2008-06 004e7340  unit: RBX::ViewNew::Texture  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e7340
//
// 004e7340  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004e7344  83f803               cmp eax, 3
// 004e7347  7441                 je 0x4e738a
// 004e7349  85c0                 test eax, eax
// 004e734b  7517                 jne 0x4e7364
// 004e734d  8b442408             mov eax, dword ptr [esp + 8]
// 004e7351  85c0                 test eax, eax
// 004e7353  743f                 je 0x4e7394
// 004e7355  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004e7359  8b11                 mov edx, dword ptr [ecx]
// 004e735b  8910                 mov dword ptr [eax], edx
// 004e735d  8b4904               mov ecx, dword ptr [ecx + 4]
// 004e7360  894804               mov dword ptr [eax + 4], ecx
// 004e7363  c3                   ret 
// 004e7364  83f801               cmp eax, 1
// 004e7367  742b                 je 0x4e7394
// 004e7369  56                   push esi
// 004e736a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004e736e  8b0e                 mov ecx, dword ptr [esi]
// 004e7370  68501b9400           push 0x941b50
// 004e7375  ff1578288000         call dword ptr [0x802878]
// 004e737b  0fb6d0               movzx edx, al
// 004e737e  f7da                 neg edx
// 004e7380  1bd2                 sbb edx, edx
// 004e7382  23542408             and edx, dword ptr [esp + 8]
// 004e7386  8916                 mov dword ptr [esi], edx
// 004e7388  5e                   pop esi
// 004e7389  c3                   ret 
// 004e738a  8b442408             mov eax, dword ptr [esp + 8]
// 004e738e  c700501b9400         mov dword ptr [eax], 0x941b50
// 004e7394  c3                   ret 

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
