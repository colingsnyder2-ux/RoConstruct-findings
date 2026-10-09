// roc 2007-03 0065e060  unit: seg_00650000  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0065e060
//
// 0065e060  56                   push esi
// 0065e061  8bf1                 mov esi, ecx
// 0065e063  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 0065e069  8b4834               mov ecx, dword ptr [eax + 0x34]
// 0065e06c  8b11                 mov edx, dword ptr [ecx]
// 0065e06e  8b4258               mov eax, dword ptr [edx + 0x58]
// 0065e071  ffd0                 call eax
// 0065e073  8b8e3c010000         mov ecx, dword ptr [esi + 0x13c]
// 0065e079  8b11                 mov edx, dword ptr [ecx]
// 0065e07b  8b4234               mov eax, dword ptr [edx + 0x34]
// 0065e07e  ffd0                 call eax
// 0065e080  8bce                 mov ecx, esi
// 0065e082  5e                   pop esi
// 0065e083  e988f9ffff           jmp 0x65da10
// copied from an identical function in another client (function ?func_684550@CXTPPropertyGrid@ns_ROCX000007@@QAEXXZ)

namespace ns_ROCX000007 {
struct CXTPPropertyGrid {
    void sub_683E20();
    void func_684550();
};

void CXTPPropertyGrid::func_684550()
{
    int* p = *(int**)((char*)this + 0x13c);
    int* q = *(int**)((char*)p + 0x34);
    void (__thiscall *f1)(void*) = *(void (__thiscall **)(void*))((char*)*(int**)q + 0x58);
    f1(q);
    int* r = *(int**)((char*)this + 0x13c);
    void (__thiscall *f2)(void*) = *(void (__thiscall **)(void*))((char*)*(int**)r + 0x34);
    f2(r);
    sub_683E20();
}
}
