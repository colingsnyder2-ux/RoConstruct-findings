// from server: 100% by king_originala
// roc 2008-06 0057e110  unit: RBX::ClearBackpack  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057e110
//
// 0057e110  8b442404             mov eax, dword ptr [esp + 4]
// 0057e114  8b8808010000         mov ecx, dword ptr [eax + 0x108]
// 0057e11a  85c9                 test ecx, ecx
// 0057e11c  7412                 je 0x57e130
// 0057e11e  8b4110               mov eax, dword ptr [ecx + 0x10]
// 0057e121  2b410c               sub eax, dword ptr [ecx + 0xc]
// 0057e124  33c9                 xor ecx, ecx
// 0057e126  c1f803               sar eax, 3
// 0057e129  3bc8                 cmp ecx, eax
// 0057e12b  1bc0                 sbb eax, eax
// 0057e12d  f7d8                 neg eax
// 0057e12f  c3                   ret 
// 0057e130  33c0                 xor eax, eax
// 0057e132  33c9                 xor ecx, ecx
// 0057e134  3bc8                 cmp ecx, eax
// 0057e136  1bc0                 sbb eax, eax
// 0057e138  f7d8                 neg eax
// 0057e13a  c3                   ret 

struct Entry {
    unsigned int data[2];
};

struct Storage {
    unsigned char padding[12];
    Entry* begin;
    Entry* end;
};

struct Object {
    unsigned char padding[264];
    Storage* storage;
};

int __cdecl hasEntries(Object* object)
{
    Storage* storage = object->storage;
    unsigned int count = storage ? storage->end - storage->begin : 0;
    return count > 0;
}
