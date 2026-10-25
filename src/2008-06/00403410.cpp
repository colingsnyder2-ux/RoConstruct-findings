// from server: 100% by king_originala
// roc 2008-06 00403410  unit: ATL::CComClassFactory  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00403410
//
// 00403410  6aff                 push -1
// 00403412  688bcb7b00           push 0x7bcb8b
// 00403417  64a100000000         mov eax, dword ptr fs:[0]
// 0040341d  50                   push eax
// 0040341e  64892500000000       mov dword ptr fs:[0], esp
// 00403425  51                   push ecx
// 00403426  56                   push esi
// 00403427  894c2404             mov dword ptr [esp + 4], ecx
// 0040342b  c70144b18000         mov dword ptr [ecx], 0x80b144
// 00403431  8d7108               lea esi, [ecx + 8]
// 00403434  c74104010000c0       mov dword ptr [ecx + 4], 0xc0000001
// 0040343b  8bce                 mov ecx, esi
// 0040343d  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00403445  e8f6820600           call 0x46b740
// 0040344a  8b0d68c29600         mov ecx, dword ptr [0x96c268]
// 00403450  8b01                 mov eax, dword ptr [ecx]
// 00403452  8b5008               mov edx, dword ptr [eax + 8]
// 00403455  ffd2                 call edx
// 00403457  8bce                 mov ecx, esi
// 00403459  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00403461  e84a750600           call 0x46a9b0
// 00403466  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040346a  5e                   pop esi
// 0040346b  64890d00000000       mov dword ptr fs:[0], ecx
// 00403472  83c410               add esp, 0x10
// 00403475  c3                   ret 

struct CriticalSection
{
    unsigned char storage[24];
    unsigned char initialized;

    void Lock();
    ~CriticalSection();
};

struct Module
{
    virtual long Slot0() = 0;
    virtual long Slot1() = 0;
    virtual long Unlock() = 0;
};

extern Module* module;

struct Factory
{
    virtual long QueryInterface(const void*, void**) = 0;
    virtual unsigned long AddRef() = 0;
    virtual unsigned long Release() = 0;
    virtual long CreateInstance(void*, const void*, void**) = 0;
    virtual long LockServer(int) = 0;

    long references;
    CriticalSection criticalSection;

    ~Factory();
};

Factory::~Factory()
{
    references = (long)0xC0000001UL;
    criticalSection.Lock();
    module->Unlock();
}
