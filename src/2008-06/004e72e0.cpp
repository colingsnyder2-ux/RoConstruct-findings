// from server: 100% by tester
// roc 2008-06 004e72e0  unit: RBX::ViewNew::Texture  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e72e0
//
// 004e72e0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004e72e4  83f803               cmp eax, 3
// 004e72e7  7441                 je 0x4e732a
// 004e72e9  85c0                 test eax, eax
// 004e72eb  7517                 jne 0x4e7304
// 004e72ed  8b442408             mov eax, dword ptr [esp + 8]
// 004e72f1  85c0                 test eax, eax
// 004e72f3  743f                 je 0x4e7334
// 004e72f5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004e72f9  8b11                 mov edx, dword ptr [ecx]
// 004e72fb  8910                 mov dword ptr [eax], edx
// 004e72fd  8b4904               mov ecx, dword ptr [ecx + 4]
// 004e7300  894804               mov dword ptr [eax + 4], ecx
// 004e7303  c3                   ret 
// 004e7304  83f801               cmp eax, 1
// 004e7307  742b                 je 0x4e7334
// 004e7309  56                   push esi
// 004e730a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004e730e  8b0e                 mov ecx, dword ptr [esi]
// 004e7310  68901a9400           push 0x941a90
// 004e7315  ff1578288000         call dword ptr [0x802878]
// 004e731b  0fb6d0               movzx edx, al
// 004e731e  f7da                 neg edx
// 004e7320  1bd2                 sbb edx, edx
// 004e7322  23542408             and edx, dword ptr [esp + 8]
// 004e7326  8916                 mov dword ptr [esi], edx
// 004e7328  5e                   pop esi
// 004e7329  c3                   ret 
// 004e732a  8b442408             mov eax, dword ptr [esp + 8]
// 004e732e  c700901a9400         mov dword ptr [eax], 0x941a90
// 004e7334  c3                   ret 

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
