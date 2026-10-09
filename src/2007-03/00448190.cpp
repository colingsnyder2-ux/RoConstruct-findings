// roc 2007-03 00448190  unit: seg_00440000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00448190
//
// 00448190  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00448193  8b4824               mov ecx, dword ptr [eax + 0x24]
// 00448196  8b11                 mov edx, dword ptr [ecx]
// 00448198  8b8288000000         mov eax, dword ptr [edx + 0x88]
// 0044819e  6a01                 push 1
// 004481a0  6a00                 push 0
// 004481a2  ffd0                 call eax
// 004481a4  8bc8                 mov ecx, eax
// 004481a6  e9c57f0000           jmp 0x450170
// copied from an identical function in another client (function ?method@CRbxDocTemplate@ns_ROCX00000e@@QAEXXZ)

namespace ns_ROCX00000e {
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
