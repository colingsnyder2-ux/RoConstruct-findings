// roc 2009-12 0044bf90  unit: CRbxPlayDocTemplate  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0044bf90
//
// 0044bf90  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0044bf93  8b4824               mov ecx, dword ptr [eax + 0x24]
// 0044bf96  8b11                 mov edx, dword ptr [ecx]
// 0044bf98  8b8288000000         mov eax, dword ptr [edx + 0x88]
// 0044bf9e  6a01                 push 1
// 0044bfa0  6a00                 push 0
// 0044bfa2  ffd0                 call eax
// 0044bfa4  8bc8                 mov ecx, eax
// 0044bfa6  e975f90000           jmp 0x45b920
// copied from an identical function in another client (function ?method@CRbxDocTemplate@ns_ROCX000018@@QAEXXZ)

namespace ns_ROCX000018 {
struct CRbxDocTemplate {
    char pad[0x58];
    void* field_58;
    void method();
};

void sub_4525A0();

void CRbxDocTemplate::method()
{
    void* p = field_58;
    void* q = *(void**)((char*)p + 0x24);
    void** vtbl = *(void***)q;
    void* (__stdcall *fn)(int, int) = (void* (__stdcall *)(int, int))vtbl[0x88 / 4];
    void* r = fn(0, 1);
    ((void (__thiscall*)(void*))sub_4525A0)(r);
}
}
