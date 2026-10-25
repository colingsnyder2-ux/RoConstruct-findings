// from server: 76% by atomic.potato
// roc 2011-06 0067e670  unit: RBX::Humanoid  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0067e670
//
// 0067e670  56                   push esi
// 0067e671  81c148fdffff         add ecx, 0xfffffd48
// 0067e677  e854fbffff           call 0x67e1d0
// 0067e67c  85c0                 test eax, eax
// 0067e67e  7432                 je 0x67e6b2
// 0067e680  57                   push edi
// 0067e681  8bc8                 mov ecx, eax
// 0067e683  e858e4feff           call 0x66cae0
// 0067e688  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0067e68c  8bf0                 mov esi, eax
// 0067e68e  56                   push esi
// 0067e68f  8bcf                 mov ecx, edi
// 0067e691  e8ba19ecff           call 0x540050
// 0067e696  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0067e699  8d4624               lea eax, [esi + 0x24]
// 0067e69c  894f24               mov dword ptr [edi + 0x24], ecx
// 0067e69f  8b5004               mov edx, dword ptr [eax + 4]
// 0067e6a2  895728               mov dword ptr [edi + 0x28], edx
// 0067e6a5  8b4008               mov eax, dword ptr [eax + 8]
// 0067e6a8  89472c               mov dword ptr [edi + 0x2c], eax
// 0067e6ab  8bc7                 mov eax, edi
// 0067e6ad  5f                   pop edi
// 0067e6ae  5e                   pop esi
// 0067e6af  c20400               ret 4
// 0067e6b2  8b742408             mov esi, dword ptr [esp + 8]
// 0067e6b6  8bce                 mov ecx, esi
// 0067e6b8  e8d331ecff           call 0x541890
// 0067e6bd  8bc6                 mov eax, esi
// 0067e6bf  5e                   pop esi
// 0067e6c0  c20400               ret 4

struct S_func_0067e670 {
    char pad0[0x24];
    int a;
    int b;
    int c;

    void* f(void* arg);
};

struct S_func_0066cae0 {
    char pad[360];
    void* m_p;
    void* g();
};

extern "C" void __stdcall f_00540050(void*, void*);
extern "C" void __stdcall f_00541890(void*);
extern "C" void* __stdcall f_0067e1d0(void*);

void* S_func_0067e670::f(void* arg)
{
    S_func_0067e670* p = (S_func_0067e670*)((char*)this - 0x2b8);
    S_func_0066cae0* r = (S_func_0066cae0*)f_0067e1d0(p);
    if (r)
    {
        void* src = r->g();
        f_00540050(arg, src);
        S_func_0067e670* d = (S_func_0067e670*)arg;
        d->a = *(int*)((char*)src + 0x24);
        d->b = *(int*)((char*)src + 0x28);
        d->c = *(int*)((char*)src + 0x2c);
        return arg;
    }
    f_00541890(arg);
    return arg;
}
