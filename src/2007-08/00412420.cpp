// from server: 88% by colin
// roc 2007-08 00412420  unit: VCContent::?$CComObject  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00412420
//
// 00412420  56                   push esi
// 00412421  8bf1                 mov esi, ecx
// 00412423  c706b06e7800         mov dword ptr [esi], 0x786eb0
// 00412429  c746048c6e7800       mov dword ptr [esi + 4], 0x786e8c
// 00412430  c74608010000c0       mov dword ptr [esi + 8], 0xc0000001
// 00412437  8b0d44ae8b00         mov ecx, dword ptr [0x8bae44]
// 0041243d  8b01                 mov eax, dword ptr [ecx]
// 0041243f  8b5008               mov edx, dword ptr [eax + 8]
// 00412442  ffd2                 call edx
// 00412444  8d4e0c               lea ecx, [esi + 0xc]
// 00412447  ff1578e67700         call dword ptr [0x77e678]
// 0041244d  f644240801           test byte ptr [esp + 8], 1
// 00412452  7409                 je 0x41245d
// 00412454  56                   push esi
// 00412455  e808d82100           call 0x62fc62
// 0041245a  83c404               add esp, 4
// 0041245d  8bc6                 mov eax, esi
// 0041245f  5e                   pop esi
// 00412460  c20400               ret 4

struct VCContent_CComObject {
    void* m_vtbl0;
    void* m_vtbl1;
    int m_field8;
    char m_pad[0x0c];
    char m_stream[0x40];
    VCContent_CComObject* construct(unsigned int flags);
};

extern "C" void __stdcall sub_77E678(void*);
extern "C" void __cdecl sub_62FC62(void*);

void* g_8BAE44;

VCContent_CComObject* VCContent_CComObject::construct(unsigned int flags)
{
    m_vtbl0 = (void*)0x786EB0;
    m_vtbl1 = (void*)0x786E8C;
    m_field8 = (int)0xC0000001;

    void* p = g_8BAE44;
    void** vt = *(void***)p;
    void (*fn)(void) = (void (*)(void))vt[2];
    fn();

    sub_77E678((char*)this + 0x0c);

    if (flags & 1) {
        sub_62FC62(this);
    }
    return this;
}
