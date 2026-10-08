// from server: 69% by colin
// roc 2007-08 005b4840  unit: RBX::Geometry  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b4840
//
// 005b4840  56                   push esi
// 005b4841  8bf1                 mov esi, ecx
// 005b4843  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 005b4846  8b01                 mov eax, dword ptr [ecx]
// 005b4848  8b5008               mov edx, dword ptr [eax + 8]
// 005b484b  ffd2                 call edx
// 005b484d  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 005b4850  83c104               add ecx, 4
// 005b4853  83f801               cmp eax, 1
// 005b4856  0f94c0               sete al
// 005b4859  50                   push eax
// 005b485a  51                   push ecx
// 005b485b  e860420500           call 0x608ac0
// 005b4860  83c408               add esp, 8
// 005b4863  5e                   pop esi
// 005b4864  c3                   ret 

struct Geometry {
    char pad0[0x60];
    void* m_pCollisionObject;
    bool isGeometryOrthogonal();
};

extern "C" void __cdecl G1_func_00608ac0(void*, bool);

bool Geometry::isGeometryOrthogonal()
{
    void* p = m_pCollisionObject;
    int (*fn)(void*) = *(int (**)(void*))p;
    int result = ((int (__thiscall*)(void*))fn)(p);
    G1_func_00608ac0((char*)m_pCollisionObject + 4, result == 1);
    return result == 1;
}
