// roc 2007-03 005ae900  unit: seg_005a0000  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ae900
//
// 005ae900  56                   push esi
// 005ae901  8b742408             mov esi, dword ptr [esp + 8]
// 005ae905  8b06                 mov eax, dword ptr [esi]
// 005ae907  8b500c               mov edx, dword ptr [eax + 0xc]
// 005ae90a  8bce                 mov ecx, esi
// 005ae90c  ffd2                 call edx
// 005ae90e  85c0                 test eax, eax
// 005ae910  7519                 jne 0x5ae92b
// 005ae912  8b460c               mov eax, dword ptr [esi + 0xc]
// 005ae915  8b4e08               mov ecx, dword ptr [esi + 8]
// 005ae918  83c010               add eax, 0x10
// 005ae91b  50                   push eax
// 005ae91c  83c110               add ecx, 0x10
// 005ae91f  51                   push ecx
// 005ae920  56                   push esi
// 005ae921  e80affffff           call 0x5ae830
// 005ae926  83c40c               add esp, 0xc
// 005ae929  5e                   pop esi
// 005ae92a  c3                   ret 
// 005ae92b  8b560c               mov edx, dword ptr [esi + 0xc]
// 005ae92e  8b4608               mov eax, dword ptr [esi + 8]
// 005ae931  83c208               add edx, 8
// 005ae934  52                   push edx
// 005ae935  83c008               add eax, 8
// 005ae938  50                   push eax
// 005ae939  56                   push esi
// 005ae93a  e8f1feffff           call 0x5ae830
// 005ae93f  83c40c               add esp, 0xc
// 005ae942  5e                   pop esi
// 005ae943  c3                   ret 
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
