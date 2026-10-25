// from server: 100% by king_originala
// roc 2008-06 00580ae0  unit: RBX::ClearStarterpack  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00580ae0
//
// 00580ae0  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 00580ae3  85c9                 test ecx, ecx
// 00580ae5  7430                 je 0x580b17
// 00580ae7  e88402f1ff           call 0x490d70
// 00580aec  85c0                 test eax, eax
// 00580aee  7427                 je 0x580b17
// 00580af0  8b8808010000         mov ecx, dword ptr [eax + 0x108]
// 00580af6  85c9                 test ecx, ecx
// 00580af8  7412                 je 0x580b0c
// 00580afa  8b4110               mov eax, dword ptr [ecx + 0x10]
// 00580afd  2b410c               sub eax, dword ptr [ecx + 0xc]
// 00580b00  33c9                 xor ecx, ecx
// 00580b02  c1f803               sar eax, 3
// 00580b05  3bc8                 cmp ecx, eax
// 00580b07  1bc0                 sbb eax, eax
// 00580b09  f7d8                 neg eax
// 00580b0b  c3                   ret 
// 00580b0c  33c0                 xor eax, eax
// 00580b0e  33c9                 xor ecx, ecx
// 00580b10  3bc8                 cmp ecx, eax
// 00580b12  1bc0                 sbb eax, eax
// 00580b14  f7d8                 neg eax
// 00580b16  c3                   ret 
// 00580b17  32c0                 xor al, al
// 00580b19  c3                   ret 

struct Entry {
    unsigned int first;
    unsigned int second;
};

struct Entries {
    char padding[12];
    Entry* begin;
    Entry* end;
};

struct Object {
    char padding[264];
    Entries* entries;
};

struct Context {
    Object* getObject();
};

struct ClearStarterpack {
    char padding[12];
    Context* context;
    bool check();
};

bool ClearStarterpack::check()
{
    if (context) {
        Object* object = context->getObject();
        if (object) {
            Entries* entries = object->entries;
            unsigned int count = entries
                ? static_cast<unsigned int>(entries->end - entries->begin)
                : 0;
            return count > 0;
        }
    }
    return false;
}
