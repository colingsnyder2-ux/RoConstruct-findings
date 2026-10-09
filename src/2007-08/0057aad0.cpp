// from server: 73% by colin
// roc 2007-08 0057aad0  unit: RBX::Workspace  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057aad0
//
// 0057aad0  8b8128020000         mov eax, dword ptr [ecx + 0x228]
// 0057aad6  8b5004               mov edx, dword ptr [eax + 4]
// 0057aad9  56                   push esi
// 0057aada  57                   push edi
// 0057aadb  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0057aadf  d94704               fld dword ptr [edi + 4]
// 0057aae2  8db128020000         lea esi, [ecx + 0x228]
// 0057aae8  d80d6cb57a00         fmul dword ptr [0x7ab56c]
// 0057aaee  51                   push ecx
// 0057aaef  8bce                 mov ecx, esi
// 0057aaf1  d91c24               fstp dword ptr [esp]
// 0057aaf4  ffd2                 call edx
// 0057aaf6  8bc8                 mov ecx, eax
// 0057aaf8  e8c3f10100           call 0x599cc0
// 0057aafd  d907                 fld dword ptr [edi]
// 0057aaff  d80d68b57a00         fmul dword ptr [0x7ab568]
// 0057ab05  8b06                 mov eax, dword ptr [esi]
// 0057ab07  8b5004               mov edx, dword ptr [eax + 4]
// 0057ab0a  51                   push ecx
// 0057ab0b  8bce                 mov ecx, esi
// 0057ab0d  d91c24               fstp dword ptr [esp]
// 0057ab10  ffd2                 call edx
// 0057ab12  8bc8                 mov ecx, eax
// 0057ab14  e877f20100           call 0x599d90
// 0057ab19  5f                   pop edi
// 0057ab1a  5e                   pop esi
// 0057ab1b  c20400               ret 4

struct S_0057aad0 {
    char pad[0x228];
    struct Vtbl {
        void* pad0;
        void (__thiscall* fn1)(void*, float);
    };
    Vtbl* m_vtbl;
    void f(float* arg);
};

extern float G_007ab568;
extern float G_007ab56c;

extern void func_00599cc0(void*);
extern void func_00599d90(void*);

void S_0057aad0::f(float* arg)
{
    Vtbl* vt = m_vtbl;
    vt->fn1(&m_vtbl, arg[1] * G_007ab56c);
    func_00599cc0((void*)0);
    Vtbl* vt2 = m_vtbl;
    vt2->fn1(&m_vtbl, arg[0] * G_007ab568);
    func_00599d90((void*)0);
}
