// from server: 100% by colin
// roc 2007-08 005b4710  unit: RBX::Geometry  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b4710
//
// 005b4710  56                   push esi
// 005b4711  8b742408             mov esi, dword ptr [esp + 8]
// 005b4715  8b06                 mov eax, dword ptr [esi]
// 005b4717  8b500c               mov edx, dword ptr [eax + 0xc]
// 005b471a  8bce                 mov ecx, esi
// 005b471c  ffd2                 call edx
// 005b471e  85c0                 test eax, eax
// 005b4720  7519                 jne 0x5b473b
// 005b4722  8b460c               mov eax, dword ptr [esi + 0xc]
// 005b4725  8b4e08               mov ecx, dword ptr [esi + 8]
// 005b4728  83c010               add eax, 0x10
// 005b472b  50                   push eax
// 005b472c  83c110               add ecx, 0x10
// 005b472f  51                   push ecx
// 005b4730  56                   push esi
// 005b4731  e8fafeffff           call 0x5b4630
// 005b4736  83c40c               add esp, 0xc
// 005b4739  5e                   pop esi
// 005b473a  c3                   ret 
// 005b473b  8b560c               mov edx, dword ptr [esi + 0xc]
// 005b473e  8b4608               mov eax, dword ptr [esi + 8]
// 005b4741  83c208               add edx, 8
// 005b4744  52                   push edx
// 005b4745  83c008               add eax, 8
// 005b4748  50                   push eax
// 005b4749  56                   push esi
// 005b474a  e8e1feffff           call 0x5b4630
// 005b474f  83c40c               add esp, 0xc
// 005b4752  5e                   pop esi
// 005b4753  c3                   ret 

struct Geometry {
    char pad0[8];
    int m_field8;
    int m_fieldC;
};

void sub_005b4630(Geometry* self, int* a, int* b);

void f(Geometry* self)
{
    int r = ((int (__thiscall*)(Geometry*))*(int*)(*(int*)self + 0xc))(self);
    if (r == 0) {
        int* p1 = (int*)(self->m_fieldC + 0x10);
        int* p2 = (int*)(self->m_field8 + 0x10);
        sub_005b4630(self, p2, p1);
    } else {
        int* p1 = (int*)(self->m_fieldC + 8);
        int* p2 = (int*)(self->m_field8 + 8);
        sub_005b4630(self, p2, p1);
    }
}
