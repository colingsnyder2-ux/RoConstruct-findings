// from server: 100% by colin
// roc 2007-08 006731f0  unit: CXTPControlColorSelector  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006731f0
//
// 006731f0  56                   push esi
// 006731f1  57                   push edi
// 006731f2  8bf9                 mov edi, ecx
// 006731f4  e887ffffff           call 0x673180
// 006731f9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006731fd  8bf0                 mov esi, eax
// 006731ff  8b06                 mov eax, dword ptr [esi]
// 00673201  8b90e0000000         mov edx, dword ptr [eax + 0xe0]
// 00673207  51                   push ecx
// 00673208  57                   push edi
// 00673209  8bce                 mov ecx, esi
// 0067320b  ffd2                 call edx
// 0067320d  5f                   pop edi
// 0067320e  8bc6                 mov eax, esi
// 00673210  5e                   pop esi
// 00673211  c20400               ret 4

struct CXTPControlColorSelector {
    void* f(int);
};

extern void* g_00673180();

void* CXTPControlColorSelector::f(int a)
{
    void* p = g_00673180();
    (*(void (__thiscall**)(void*, void*, int))(*(int*)p + 0xe0))(p, this, a);
    return p;
}
