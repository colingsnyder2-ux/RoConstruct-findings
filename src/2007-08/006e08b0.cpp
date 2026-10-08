// from server: 74% by colin
// roc 2007-08 006e08b0  unit: CXTPDockingPaneBase  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e08b0
//
// 006e08b0  56                   push esi
// 006e08b1  57                   push edi
// 006e08b2  8bf1                 mov esi, ecx
// 006e08b4  e887fcffff           call 0x6e0540
// 006e08b9  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 006e08bc  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006e08c0  8b10                 mov edx, dword ptr [eax]
// 006e08c2  57                   push edi
// 006e08c3  51                   push ecx
// 006e08c4  8bc8                 mov ecx, eax
// 006e08c6  8b8244010000         mov eax, dword ptr [edx + 0x144]
// 006e08cc  ffd0                 call eax
// 006e08ce  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006e08d2  85c9                 test ecx, ecx
// 006e08d4  8bf8                 mov edi, eax
// 006e08d6  740a                 je 0x6e08e2
// 006e08d8  56                   push esi
// 006e08d9  e8c24af5ff           call 0x6353a0
// 006e08de  8938                 mov dword ptr [eax], edi
// 006e08e0  8bc7                 mov eax, edi
// 006e08e2  5f                   pop edi
// 006e08e3  5e                   pop esi
// 006e08e4  c20c00               ret 0xc

struct CXTPDockingPaneBase;

struct CXTPDockingPaneBaseVtbl
{
    void* pad[0x51];
    void* (__stdcall* fn144)(void*, void*, void*);
};

struct CXTPDockingPaneBase
{
    void* (__stdcall* getSomething)(void);
    void* field18;
    void* method(int a, int b, int c);
};

extern "C" void* __stdcall sub_6e0540();
extern "C" void* __stdcall sub_6353a0(void* p);

void* CXTPDockingPaneBase::method(int a, int b, int c)
{
    void* p = sub_6e0540();
    CXTPDockingPaneBaseVtbl* vt = *(CXTPDockingPaneBaseVtbl**)p;
    void* r = vt->fn144(p, field18, (void*)a);
    if (b != 0)
    {
        void** slot = (void**)sub_6353a0(this);
        *slot = r;
        return r;
    }
    return r;
}
