// from server: 61% by colin
// roc 2007-08 0062e9e0  unit: RBX::AdornG3D  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0062e9e0
//
// 0062e9e0  83ec0c               sub esp, 0xc
// 0062e9e3  56                   push esi
// 0062e9e4  8b742414             mov esi, dword ptr [esp + 0x14]
// 0062e9e8  57                   push edi
// 0062e9e9  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0062e9ed  8b07                 mov eax, dword ptr [edi]
// 0062e9ef  8b5034               mov edx, dword ptr [eax + 0x34]
// 0062e9f2  8d4e38               lea ecx, [esi + 0x38]
// 0062e9f5  51                   push ecx
// 0062e9f6  8bcf                 mov ecx, edi
// 0062e9f8  ffd2                 call edx
// 0062e9fa  d94604               fld dword ptr [esi + 4]
// 0062e9fd  dd05485b7900         fld qword ptr [0x795b48]
// 0062ea03  8b442424             mov eax, dword ptr [esp + 0x24]
// 0062ea07  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0062ea0b  dcc9                 fmul st(1), st(0)
// 0062ea0d  d9c9                 fxch st(1)
// 0062ea0f  50                   push eax
// 0062ea10  51                   push ecx
// 0062ea11  d95c2410             fstp dword ptr [esp + 0x10]
// 0062ea15  51                   push ecx
// 0062ea16  d94608               fld dword ptr [esi + 8]
// 0062ea19  8d542414             lea edx, [esp + 0x14]
// 0062ea1d  d8c9                 fmul st(1)
// 0062ea1f  d95c2418             fstp dword ptr [esp + 0x18]
// 0062ea23  d84e0c               fmul dword ptr [esi + 0xc]
// 0062ea26  d95c241c             fstp dword ptr [esp + 0x1c]
// 0062ea2a  d90580b97a00         fld dword ptr [0x7ab980]
// 0062ea30  d91c24               fstp dword ptr [esp]
// 0062ea33  52                   push edx
// 0062ea34  57                   push edi
// 0062ea35  e816feffff           call 0x62e850
// 0062ea3a  83c414               add esp, 0x14
// 0062ea3d  5f                   pop edi
// 0062ea3e  5e                   pop esi
// 0062ea3f  83c40c               add esp, 0xc
// 0062ea42  c3                   ret 

struct AdornG3D {
    char pad[0x38];
};

struct VTable {
    char pad[0x34];
    void (__stdcall *func)(void*, void*);
};

struct Obj {
    VTable* vt;
};

extern float g_795b48;
extern float g_7ab980;

void __stdcall sub_62e850(void*, void*, void*, void*, void*);

void AdornG3D_render(AdornG3D* self, Obj* obj, void* a3, void* a4, void* a5)
{
    obj->vt->func(obj, (char*)self + 0x38);

    float t = g_795b48;
    float v4 = *(float*)((char*)self + 4) * t;
    float v8 = *(float*)((char*)self + 8) * t;
    float vc = *(float*)((char*)self + 0xc) * t;

    float local[3];
    local[0] = v4;
    local[1] = v8;
    local[2] = vc;

    sub_62e850(obj, a3, a4, a5, local);
}
