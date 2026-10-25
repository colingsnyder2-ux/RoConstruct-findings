// from server: 100% by tester
// roc 2008-06 005a1320  unit: RBX::PartTool  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a1320
//
// 005a1320  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005a1324  83f803               cmp eax, 3
// 005a1327  7441                 je 0x5a136a
// 005a1329  85c0                 test eax, eax
// 005a132b  7517                 jne 0x5a1344
// 005a132d  8b442408             mov eax, dword ptr [esp + 8]
// 005a1331  85c0                 test eax, eax
// 005a1333  743f                 je 0x5a1374
// 005a1335  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005a1339  8b11                 mov edx, dword ptr [ecx]
// 005a133b  8910                 mov dword ptr [eax], edx
// 005a133d  8b4904               mov ecx, dword ptr [ecx + 4]
// 005a1340  894804               mov dword ptr [eax + 4], ecx
// 005a1343  c3                   ret 
// 005a1344  83f801               cmp eax, 1
// 005a1347  742b                 je 0x5a1374
// 005a1349  56                   push esi
// 005a134a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005a134e  8b0e                 mov ecx, dword ptr [esi]
// 005a1350  6800ba9400           push 0x94ba00
// 005a1355  ff1578288000         call dword ptr [0x802878]
// 005a135b  0fb6d0               movzx edx, al
// 005a135e  f7da                 neg edx
// 005a1360  1bd2                 sbb edx, edx
// 005a1362  23542408             and edx, dword ptr [esp + 8]
// 005a1366  8916                 mov dword ptr [esi], edx
// 005a1368  5e                   pop esi
// 005a1369  c3                   ret 
// 005a136a  8b442408             mov eax, dword ptr [esp + 8]
// 005a136e  c70000ba9400         mov dword ptr [eax], 0x94ba00
// 005a1374  c3                   ret 

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
