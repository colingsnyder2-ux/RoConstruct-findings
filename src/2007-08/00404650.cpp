// from server: 78% by colin
// roc 2007-08 00404650  unit: ATL::CRegObject  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00404650
//
// 00404650  56                   push esi
// 00404651  57                   push edi
// 00404652  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00404656  8b07                 mov eax, dword ptr [edi]
// 00404658  50                   push eax
// 00404659  8bf1                 mov esi, ecx
// 0040465b  e800f2ffff           call 0x403860
// 00404660  84c0                 test al, al
// 00404662  7532                 jne 0x404696
// 00404664  85f6                 test esi, esi
// 00404666  8b07                 mov eax, dword ptr [edi]
// 00404668  7507                 jne 0x404671
// 0040466a  5f                   pop edi
// 0040466b  33c0                 xor eax, eax
// 0040466d  5e                   pop esi
// 0040466e  c20400               ret 4
// 00404671  85c0                 test eax, eax
// 00404673  8b3e                 mov edi, dword ptr [esi]
// 00404675  c70600000000         mov dword ptr [esi], 0
// 0040467b  740d                 je 0x40468a
// 0040467d  8b08                 mov ecx, dword ptr [eax]
// 0040467f  8b11                 mov edx, dword ptr [ecx]
// 00404681  56                   push esi
// 00404682  68144f7800           push 0x784f14
// 00404687  50                   push eax
// 00404688  ffd2                 call edx
// 0040468a  85ff                 test edi, edi
// 0040468c  7408                 je 0x404696
// 0040468e  8b07                 mov eax, dword ptr [edi]
// 00404690  8b4808               mov ecx, dword ptr [eax + 8]
// 00404693  57                   push edi
// 00404694  ffd1                 call ecx
// 00404696  8b06                 mov eax, dword ptr [esi]
// 00404698  5f                   pop edi
// 00404699  5e                   pop esi
// 0040469a  c20400               ret 4

struct CRegObject {
    void* m_p;
    void* f(void* p);
};

extern "C" char __stdcall sub_403860(void* p);

void* CRegObject::f(void* p)
{
    void* old;
    if (sub_403860(*(void**)p)) {
        return m_p;
    }
    if (this == 0) {
        return 0;
    }
    old = m_p;
    m_p = 0;
    if (*(void**)p != 0) {
        void* v = *(void**)p;
        void** vt = *(void***)v;
        ((void (__stdcall*)(void*, void*, void*))vt[0])(v, (void*)0x784f14, this);
    }
    if (old != 0) {
        void** vt = *(void***)old;
        ((void (__stdcall*)(void*))vt[2])(old);
    }
    return m_p;
}
