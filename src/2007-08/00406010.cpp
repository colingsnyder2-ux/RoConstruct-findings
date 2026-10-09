// from server: 100% by colin
// roc 2007-08 00406010  unit: UIEnumConnections::V?$CComEnum::?$CComObject  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00406010
//
// 00406010  56                   push esi
// 00406011  8bf1                 mov esi, ecx
// 00406013  c706f44f7800         mov dword ptr [esi], 0x784ff4
// 00406019  c74618010000c0       mov dword ptr [esi + 0x18], 0xc0000001
// 00406020  8b0d44ae8b00         mov ecx, dword ptr [0x8bae44]
// 00406026  8b01                 mov eax, dword ptr [ecx]
// 00406028  8b5008               mov edx, dword ptr [eax + 8]
// 0040602b  ffd2                 call edx
// 0040602d  8bce                 mov ecx, esi
// 0040602f  e8bcd4ffff           call 0x4034f0
// 00406034  f644240801           test byte ptr [esp + 8], 1
// 00406039  7409                 je 0x406044
// 0040603b  56                   push esi
// 0040603c  e8219c2200           call 0x62fc62
// 00406041  83c404               add esp, 4
// 00406044  8bc6                 mov eax, esi
// 00406046  5e                   pop esi
// 00406047  c20400               ret 4

struct UIEnumConnections_CComEnum_CComObject
{
    void Release();
    void Destroy();
    void* scalar_deleting_dtor(unsigned int flags);
};

void UIEnumConnections_CComEnum_CComObject::Release()
{
    *(void**)this = (void*)0x784ff4;
    *(int*)((char*)this + 0x18) = (int)0xc0000001;
    void* p = *(void**)0x8bae44;
    void** vtbl = *(void***)p;
    ((void(__thiscall*)(void*))vtbl[2])(p);
    Destroy();
}

void* UIEnumConnections_CComEnum_CComObject::scalar_deleting_dtor(unsigned int flags)
{
    Release();
    if (flags & 1)
    {
        extern void __cdecl op_delete(void*);
        op_delete(this);
    }
    return this;
}
