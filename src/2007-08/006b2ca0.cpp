// from server: 77% by colin
// roc 2007-08 006b2ca0  unit: CXTPResourceManager  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b2ca0
//
// 006b2ca0  0fb7542404           movzx edx, word ptr [esp + 4]
// 006b2ca5  8b01                 mov eax, dword ptr [ecx]
// 006b2ca7  8b401c               mov eax, dword ptr [eax + 0x1c]
// 006b2caa  52                   push edx
// 006b2cab  ffd0                 call eax
// 006b2cad  89442404             mov dword ptr [esp + 4], eax
// 006b2cb1  ff2568d27700         jmp dword ptr [0x77d268]

extern "C" void* __stdcall LockResource(void*);

struct CXTPResourceManager {
    void* GetResourceData(unsigned short id);
};

void* CXTPResourceManager::GetResourceData(unsigned short id) {
    void* (__thiscall *fn)(void*, unsigned short);
    fn = *(void* (__thiscall **)(void*, unsigned short))(*(char**)this + 0x1c);
    void* h = fn(this, id);
    return LockResource(h);
}
