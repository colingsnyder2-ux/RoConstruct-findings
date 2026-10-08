// from server: 100% by colin
// roc 2007-08 0064e5e0  unit: CXTPImageManager  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0064e5e0
//
// 0064e5e0  8b81b4000000         mov eax, dword ptr [ecx + 0xb4]
// 0064e5e6  85c0                 test eax, eax
// 0064e5e8  7404                 je 0x64e5ee
// 0064e5ea  8b4040               mov eax, dword ptr [eax + 0x40]
// 0064e5ed  c3                   ret 
// 0064e5ee  e9ddf9ffff           jmp 0x64dfd0

struct CXTPImageManager {
    char pad[0xb4];
    void* field_b4;
    void* get();
};

void* helper_64dfd0();

void* CXTPImageManager::get()
{
    void* p = field_b4;
    if (p != 0)
        return *(void**)((char*)p + 0x40);
    return helper_64dfd0();
}
