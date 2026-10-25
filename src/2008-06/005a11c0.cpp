// from server: 100% by tester
// roc 2008-06 005a11c0  unit: RBX::PartTool  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a11c0
//
// 005a11c0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005a11c4  83f803               cmp eax, 3
// 005a11c7  7441                 je 0x5a120a
// 005a11c9  85c0                 test eax, eax
// 005a11cb  7517                 jne 0x5a11e4
// 005a11cd  8b442408             mov eax, dword ptr [esp + 8]
// 005a11d1  85c0                 test eax, eax
// 005a11d3  743f                 je 0x5a1214
// 005a11d5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005a11d9  8b11                 mov edx, dword ptr [ecx]
// 005a11db  8910                 mov dword ptr [eax], edx
// 005a11dd  8b4904               mov ecx, dword ptr [ecx + 4]
// 005a11e0  894804               mov dword ptr [eax + 4], ecx
// 005a11e3  c3                   ret 
// 005a11e4  83f801               cmp eax, 1
// 005a11e7  742b                 je 0x5a1214
// 005a11e9  56                   push esi
// 005a11ea  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005a11ee  8b0e                 mov ecx, dword ptr [esi]
// 005a11f0  6830b79400           push 0x94b730
// 005a11f5  ff1578288000         call dword ptr [0x802878]
// 005a11fb  0fb6d0               movzx edx, al
// 005a11fe  f7da                 neg edx
// 005a1200  1bd2                 sbb edx, edx
// 005a1202  23542408             and edx, dword ptr [esp + 8]
// 005a1206  8916                 mov dword ptr [esi], edx
// 005a1208  5e                   pop esi
// 005a1209  c3                   ret 
// 005a120a  8b442408             mov eax, dword ptr [esp + 8]
// 005a120e  c70030b79400         mov dword ptr [eax], 0x94b730
// 005a1214  c3                   ret 

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
