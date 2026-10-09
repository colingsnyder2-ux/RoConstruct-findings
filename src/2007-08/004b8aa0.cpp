// from DeepSeek/server: 100% by colin
// roc 2007-08 004b8aa0  unit: RakPeer  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b8aa0
//
// 004b8aa0  56                   push esi
// 004b8aa1  8b742408             mov esi, dword ptr [esp + 8]
// 004b8aa5  85f6                 test esi, esi
// 004b8aa7  741c                 je 0x4b8ac5
// 004b8aa9  807e1800             cmp byte ptr [esi + 0x18], 0
// 004b8aad  740c                 je 0x4b8abb
// 004b8aaf  8b4614               mov eax, dword ptr [esi + 0x14]
// 004b8ab2  50                   push eax
// 004b8ab3  e8aa711700           call 0x62fc62
// 004b8ab8  83c404               add esp, 4
// 004b8abb  56                   push esi
// 004b8abc  ff15c4e67700         call dword ptr [0x77e6c4]
// 004b8ac2  83c404               add esp, 4
// 004b8ac5  5e                   pop esi
// 004b8ac6  c20400               ret 4

extern "C" void __cdecl free(void*);

extern void* free_ptr;

struct RakPeer
{
    char pad[0x14];
    void* field_14;
    char field_18;

    void func_004b8aa0(RakPeer* p);
};

void RakPeer::func_004b8aa0(RakPeer* p)
{
    if (p)
    {
        if (p->field_18)
        {
            free(p->field_14);
        }
        ((void (__cdecl*)(void*))free_ptr)(p);
    }
}
