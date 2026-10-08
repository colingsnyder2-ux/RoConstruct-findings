// from server: 63% by colin
// roc 2007-08 005e3770  unit: RBX::IMovingManager  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e3770
//
// 005e3770  51                   push ecx
// 005e3771  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005e3775  56                   push esi
// 005e3776  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005e377a  50                   push eax
// 005e377b  8bce                 mov ecx, esi
// 005e377d  c744240800000000     mov dword ptr [esp + 8], 0
// 005e3785  ff159ce67700         call dword ptr [0x77e69c]
// 005e378b  8bc6                 mov eax, esi
// 005e378d  5e                   pop esi
// 005e378e  59                   pop ecx
// 005e378f  c3                   ret 

struct IMovingManager {
    void construct(const void* other);
};

void IMovingManager::construct(const void* other)
{
    void* p = 0;
    void* q = p;
    q = (void*)&p;
    (void)q;
    extern void __stdcall string_copy_ctor(void*, const void*);
    string_copy_ctor(&p, other);
}
