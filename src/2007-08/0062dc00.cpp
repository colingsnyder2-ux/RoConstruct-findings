// from server: 81% by colin
// roc 2007-08 0062dc00  unit: RBX::AdornG3D  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0062dc00
//
// 0062dc00  56                   push esi
// 0062dc01  8bf1                 mov esi, ecx
// 0062dc03  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0062dc07  8b06                 mov eax, dword ptr [esi]
// 0062dc09  8b5038               mov edx, dword ptr [eax + 0x38]
// 0062dc0c  51                   push ecx
// 0062dc0d  8bce                 mov ecx, esi
// 0062dc0f  ffd2                 call edx
// 0062dc11  d944240c             fld dword ptr [esp + 0xc]
// 0062dc15  8b4604               mov eax, dword ptr [esi + 4]
// 0062dc18  50                   push eax
// 0062dc19  83ec08               sub esp, 8
// 0062dc1c  d95c2404             fstp dword ptr [esp + 4]
// 0062dc20  d9442414             fld dword ptr [esp + 0x14]
// 0062dc24  d91c24               fstp dword ptr [esp]
// 0062dc27  e864190000           call 0x62f590
// 0062dc2c  83c40c               add esp, 0xc
// 0062dc2f  5e                   pop esi
// 0062dc30  c21000               ret 0x10

struct AdornG3D {
    void adorn(float a, float b, float c, float d);
};

extern "C" void __cdecl sub_62F590(int, float, float);

void AdornG3D::adorn(float a, float b, float c, float d)
{
    void (__thiscall *fn)(AdornG3D *, float);
    fn = *(void (__thiscall **)(AdornG3D *, float))((*(int *)this) + 0x38);
    fn(this, d);
    sub_62F590(*(int *)((char *)this + 4), a, b);
}
