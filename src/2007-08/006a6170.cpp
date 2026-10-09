// from server: 100% by colin
// roc 2007-08 006a6170  unit: CXTPMenuBar::CControlMDIButton  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a6170
//
// 006a6170  56                   push esi
// 006a6171  8bf1                 mov esi, ecx
// 006a6173  e8f803faff           call 0x646570
// 006a6178  50                   push eax
// 006a6179  e840a5f8ff           call 0x6306be
// 006a617e  50                   push eax
// 006a617f  e87ea0f8ff           call 0x630202
// 006a6184  83c408               add esp, 8
// 006a6187  85c0                 test eax, eax
// 006a6189  7414                 je 0x6a619f
// 006a618b  83782000             cmp dword ptr [eax + 0x20], 0
// 006a618f  740e                 je 0x6a619f
// 006a6191  8b10                 mov edx, dword ptr [eax]
// 006a6193  8bc8                 mov ecx, eax
// 006a6195  8b826c010000         mov eax, dword ptr [edx + 0x16c]
// 006a619b  6a00                 push 0
// 006a619d  ffd0                 call eax
// 006a619f  c786c001000000000000 mov dword ptr [esi + 0x1c0], 0
// 006a61a9  5e                   pop esi
// 006a61aa  c3                   ret 

struct CXTPMenuBar_CControlMDIButton
{
    void f();
};

extern "C" void* __cdecl sub_00646570();
extern "C" void* __cdecl sub_006306BE(void*);
extern "C" void* __cdecl sub_00630202(void*);

void CXTPMenuBar_CControlMDIButton::f()
{
    void* p = sub_00646570();
    void* q = sub_006306BE(p);
    void* r = sub_00630202(q);
    if (r != 0)
    {
        if (*(int*)((char*)r + 0x20) != 0)
        {
            void** vt = *(void***)r;
            void (__thiscall *fn)(void*, int) = (void (__thiscall *)(void*, int))vt[0x16c / 4];
            fn(r, 0);
        }
    }
    *(int*)((char*)this + 0x1c0) = 0;
}
