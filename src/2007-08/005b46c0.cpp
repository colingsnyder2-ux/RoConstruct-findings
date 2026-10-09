// from server: 100% by colin
// roc 2007-08 005b46c0  unit: RBX::Geometry  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b46c0
//
// 005b46c0  56                   push esi
// 005b46c1  8b742408             mov esi, dword ptr [esp + 8]
// 005b46c5  8b06                 mov eax, dword ptr [esi]
// 005b46c7  8b500c               mov edx, dword ptr [eax + 0xc]
// 005b46ca  8bce                 mov ecx, esi
// 005b46cc  ffd2                 call edx
// 005b46ce  85c0                 test eax, eax
// 005b46d0  7519                 jne 0x5b46eb
// 005b46d2  8b460c               mov eax, dword ptr [esi + 0xc]
// 005b46d5  8b4e08               mov ecx, dword ptr [esi + 8]
// 005b46d8  83c010               add eax, 0x10
// 005b46db  50                   push eax
// 005b46dc  83c110               add ecx, 0x10
// 005b46df  51                   push ecx
// 005b46e0  56                   push esi
// 005b46e1  e80affffff           call 0x5b45f0
// 005b46e6  83c40c               add esp, 0xc
// 005b46e9  5e                   pop esi
// 005b46ea  c3                   ret 
// 005b46eb  8b560c               mov edx, dword ptr [esi + 0xc]
// 005b46ee  8b4608               mov eax, dword ptr [esi + 8]
// 005b46f1  83c208               add edx, 8
// 005b46f4  52                   push edx
// 005b46f5  83c008               add eax, 8
// 005b46f8  50                   push eax
// 005b46f9  56                   push esi
// 005b46fa  e8f1feffff           call 0x5b45f0
// 005b46ff  83c40c               add esp, 0xc
// 005b4702  5e                   pop esi
// 005b4703  c3                   ret 

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
