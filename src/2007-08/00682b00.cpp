// from server: 86% by colin
// roc 2007-08 00682b00  unit: CXTPPropertyGrid  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00682b00
//
// 00682b00  56                   push esi
// 00682b01  8bf1                 mov esi, ecx
// 00682b03  e8785a0b00           call 0x738580
// 00682b08  8b8e3c010000         mov ecx, dword ptr [esi + 0x13c]
// 00682b0e  8b01                 mov eax, dword ptr [ecx]
// 00682b10  8b5034               mov edx, dword ptr [eax + 0x34]
// 00682b13  5e                   pop esi
// 00682b14  ffe2                 jmp edx

struct CXTPPropertyGrid
{
    char pad[0x13c];
    void* m_pSomething;
    void SomeMethod();
};

extern "C" void __cdecl sub_738580();

void CXTPPropertyGrid::SomeMethod()
{
    sub_738580();
    void** p = (void**)m_pSomething;
    void* vtable = *p;
    void (*fn)() = *(void (**)())((char*)vtable + 0x34);
    fn();
}
