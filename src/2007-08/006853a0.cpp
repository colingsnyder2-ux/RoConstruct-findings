// from server: 69% by colin
// roc 2007-08 006853a0  unit: CXTPPropExchangeArchive  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006853a0
//
// 006853a0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006853a4  8b542408             mov edx, dword ptr [esp + 8]
// 006853a8  8b4940               mov ecx, dword ptr [ecx + 0x40]
// 006853ab  50                   push eax
// 006853ac  52                   push edx
// 006853ad  e8e2b2faff           call 0x630694
// 006853b2  c20c00               ret 0xc

struct CXTPPropExchangeArchive {
    char pad[0x40];
    void* m_p;
    void method(int a1, int a2);
};

extern "C" void __stdcall sub_630694(void* self, int a1, int a2);

void CXTPPropExchangeArchive::method(int a1, int a2)
{
    sub_630694(m_p, a1, a2);
}
