// from server: 100% by king_originala
// roc 2008-06 00416950  unit: VCContent::?$CComObject  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00416950
//
// 00416950  56                   push esi
// 00416951  8bf1                 mov esi, ecx
// 00416953  c706bcea8000         mov dword ptr [esi], 0x80eabc
// 00416959  c7460498ea8000       mov dword ptr [esi + 4], 0x80ea98
// 00416960  c74608010000c0       mov dword ptr [esi + 8], 0xc0000001
// 00416967  8b0d68c29600         mov ecx, dword ptr [0x96c268]
// 0041696d  8b01                 mov eax, dword ptr [ecx]
// 0041696f  8b5008               mov edx, dword ptr [eax + 8]
// 00416972  ffd2                 call edx
// 00416974  8d4e0c               lea ecx, [esi + 0xc]
// 00416977  ff152c248000         call dword ptr [0x80242c]
// 0041697d  f644240801           test byte ptr [esp + 8], 1
// 00416982  7409                 je 0x41698d
// 00416984  56                   push esi
// 00416985  e8f09c2800           call 0x6a067a
// 0041698a  83c404               add esp, 4
// 0041698d  8bc6                 mov eax, esi
// 0041698f  5e                   pop esi
// 00416990  c20400               ret 4

struct Service
{
    virtual void slot0() = 0;
    virtual void slot1() = 0;
    virtual void release() = 0;
};

struct Stream;

extern Service* service;
extern char table0[];
extern char table1[];
extern void (__thiscall *destroyStream)(Stream*);
void __cdecl operator delete(void*);

struct S
{
    void* vtable0;
    void* vtable1;
    unsigned long references;
    char stream[1];

    S* destroy(unsigned int flags);
};

S* S::destroy(unsigned int flags)
{
    vtable0 = table0;
    vtable1 = table1;
    references = 0xC0000001UL;
    service->release();
    destroyStream(reinterpret_cast<Stream*>(stream));
    if (flags & 1)
        operator delete(this);
    return this;
}
