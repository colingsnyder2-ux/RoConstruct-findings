// roc 2007-03 005ae950  unit: seg_005a0000  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ae950
//
// 005ae950  56                   push esi
// 005ae951  8b742408             mov esi, dword ptr [esp + 8]
// 005ae955  8b06                 mov eax, dword ptr [esi]
// 005ae957  8b500c               mov edx, dword ptr [eax + 0xc]
// 005ae95a  8bce                 mov ecx, esi
// 005ae95c  ffd2                 call edx
// 005ae95e  85c0                 test eax, eax
// 005ae960  7519                 jne 0x5ae97b
// 005ae962  8b460c               mov eax, dword ptr [esi + 0xc]
// 005ae965  8b4e08               mov ecx, dword ptr [esi + 8]
// 005ae968  83c010               add eax, 0x10
// 005ae96b  50                   push eax
// 005ae96c  83c110               add ecx, 0x10
// 005ae96f  51                   push ecx
// 005ae970  56                   push esi
// 005ae971  e8fafeffff           call 0x5ae870
// 005ae976  83c40c               add esp, 0xc
// 005ae979  5e                   pop esi
// 005ae97a  c3                   ret 
// 005ae97b  8b560c               mov edx, dword ptr [esi + 0xc]
// 005ae97e  8b4608               mov eax, dword ptr [esi + 8]
// 005ae981  83c208               add edx, 8
// 005ae984  52                   push edx
// 005ae985  83c008               add eax, 8
// 005ae988  50                   push eax
// 005ae989  56                   push esi
// 005ae98a  e8e1feffff           call 0x5ae870
// 005ae98f  83c40c               add esp, 0xc
// 005ae992  5e                   pop esi
// 005ae993  c3                   ret 
// copied from an identical function in another client (function ?sub_005b46c0@ns_ROCX00000e@@YAXPAUGeometry@1@@Z)

namespace ns_ROCX00000e {
struct Geometry {
    char pad0[8];
    int m_field8;
    int m_fieldC;
};

void sub_005b45f0(Geometry* self, int* a, int* b);

void sub_005b46c0(Geometry* self)
{
    int r = ((int (__thiscall*)(Geometry*))*(int*)(*(int*)self + 0xc))(self);
    if (r == 0) {
        int* p1 = (int*)(self->m_fieldC + 0x10);
        int* p2 = (int*)(self->m_field8 + 0x10);
        sub_005b45f0(self, p2, p1);
    } else {
        int* p1 = (int*)(self->m_fieldC + 8);
        int* p2 = (int*)(self->m_field8 + 8);
        sub_005b45f0(self, p2, p1);
    }
}
}
