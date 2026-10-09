// roc 2010-06 0044d5c0  unit: CRbxPlayDocTemplate  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0044d5c0
//
// 0044d5c0  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0044d5c3  8b4824               mov ecx, dword ptr [eax + 0x24]
// 0044d5c6  8b11                 mov edx, dword ptr [ecx]
// 0044d5c8  8b8288000000         mov eax, dword ptr [edx + 0x88]
// 0044d5ce  6a01                 push 1
// 0044d5d0  6a00                 push 0
// 0044d5d2  ffd0                 call eax
// 0044d5d4  8bc8                 mov ecx, eax
// 0044d5d6  e955290100           jmp 0x45ff30
// copied from an identical function in another client (function ?method@CRbxDocTemplate@ns_ROCX000014@@QAEXXZ)

namespace ns_ROCX000014 {
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
