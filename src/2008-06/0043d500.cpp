// from server: 100% by atomic.potato
// roc 2008-06 0043d500  unit: _NVCXTPPropertyGridItemBool::?$XItem  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0043d500
//
// 0043d500  56                   push esi
// 0043d501  8bf1                 mov esi, ecx
// 0043d503  8b8630010000         mov eax, dword ptr [esi + 0x130]
// 0043d509  85c0                 test eax, eax
// 0043d50b  7409                 je 0x43d516
// 0043d50d  50                   push eax
// 0043d50e  e867312600           call 0x6a067a
// 0043d513  83c404               add esp, 4
// 0043d516  8b8624010000         mov eax, dword ptr [esi + 0x124]
// 0043d51c  50                   push eax
// 0043d51d  c7863001000000000000 mov dword ptr [esi + 0x130], 0
// 0043d527  c7863401000000000000 mov dword ptr [esi + 0x134], 0
// 0043d531  c7863801000000000000 mov dword ptr [esi + 0x138], 0
// 0043d53b  e83a312600           call 0x6a067a
// 0043d540  83c404               add esp, 4
// 0043d543  8bce                 mov ecx, esi
// 0043d545  e8c69f2d00           call 0x717510
// 0043d54a  f644240801           test byte ptr [esp + 8], 1
// 0043d54f  7409                 je 0x43d55a
// 0043d551  56                   push esi
// 0043d552  e823312600           call 0x6a067a
// 0043d557  83c404               add esp, 4
// 0043d55a  8bc6                 mov eax, esi
// 0043d55c  5e                   pop esi
// 0043d55d  c20400               ret 4

extern "C" void __cdecl free(void *p);

struct CXTPPropertyGridItemBool
{
    void Destructor();
    void* Cleanup(int bDelete);
};

void* CXTPPropertyGridItemBool::Cleanup(int bDelete)
{
    if (*(void **)((char *)this + 0x130))
    {
        free(*(void **)((char *)this + 0x130));
    }
    void *p = *(void **)((char *)this + 0x124);
    *(void **)((char *)this + 0x130) = 0;
    *(void **)((char *)this + 0x134) = 0;
    *(void **)((char *)this + 0x138) = 0;
    free(p);
    Destructor();

    if (bDelete & 1)
    {
        free(this);
    }

    return this;
}
