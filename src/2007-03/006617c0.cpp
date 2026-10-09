// roc 2007-03 006617c0  unit: seg_00660000  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006617c0
//
// 006617c0  56                   push esi
// 006617c1  6a01                 push 1
// 006617c3  8bf1                 mov esi, ecx
// 006617c5  e8b4cbfbff           call 0x61e37e
// 006617ca  8b86ac010000         mov eax, dword ptr [esi + 0x1ac]
// 006617d0  8b88b8000000         mov ecx, dword ptr [eax + 0xb8]
// 006617d6  8b8690000000         mov eax, dword ptr [esi + 0x90]
// 006617dc  8b5174               mov edx, dword ptr [ecx + 0x74]
// 006617df  894230               mov dword ptr [edx + 0x30], eax
// 006617e2  5e                   pop esi
// 006617e3  e968b3fcff           jmp 0x62cb50
// copied from an identical function in another client (function ?OnDestroy@CXTPCustomizeSheet@ns_ROCX000002@@QAEXXZ)

namespace ns_ROCX000002 {
struct CXTPCustomizeSheet {
    char pad[0x90];
    int field_90;
    char pad2[0x1ac - 0x90 - 4];
    void* field_1ac;
    void OnDestroy();
};

extern "C" void __stdcall sub_62FEEA(int);
extern "C" void __stdcall sub_6333A0();

void CXTPCustomizeSheet::OnDestroy()
{
    sub_62FEEA(1);
    void* p = field_1ac;
    int* q = *(int**)((char*)p + 0xb8);
    int v = field_90;
    int* r = *(int**)((char*)q + 0x74);
    *(int*)((char*)r + 0x30) = v;
    sub_6333A0();
}
}
