// roc 2007-03 00698550  unit: seg_00690000  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00698550
//
// 00698550  56                   push esi
// 00698551  8bf1                 mov esi, ecx
// 00698553  e87833faff           call 0x63b8d0
// 00698558  50                   push eax
// 00698559  e8be65f8ff           call 0x61eb1c
// 0069855e  50                   push eax
// 0069855f  e82c61f8ff           call 0x61e690
// 00698564  83c408               add esp, 8
// 00698567  85c0                 test eax, eax
// 00698569  7414                 je 0x69857f
// 0069856b  83782000             cmp dword ptr [eax + 0x20], 0
// 0069856f  740e                 je 0x69857f
// 00698571  8b10                 mov edx, dword ptr [eax]
// 00698573  8bc8                 mov ecx, eax
// 00698575  8b826c010000         mov eax, dword ptr [edx + 0x16c]
// 0069857b  6a00                 push 0
// 0069857d  ffd0                 call eax
// 0069857f  c786c001000000000000 mov dword ptr [esi + 0x1c0], 0
// 00698589  5e                   pop esi
// 0069858a  c3                   ret 
// copied from an identical function in another client (function ?f@CXTPMenuBar_CControlMDIButton@ns_ROCX000010@@QAEXXZ)

namespace ns_ROCX000010 {
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
}
