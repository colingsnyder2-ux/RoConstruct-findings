// roc 2011-06 0085dc00  unit: CXTPDrawHelpers  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085dc00
//
// 0085dc00  8b442404             mov eax, dword ptr [esp + 4]
// 0085dc04  85c0                 test eax, eax
// 0085dc06  740c                 je 0x85dc14
// 0085dc08  8b4004               mov eax, dword ptr [eax + 4]
// 0085dc0b  89442404             mov dword ptr [esp + 4], eax
// 0085dc0f  e9dce8ffff           jmp 0x85c4f0
// 0085dc14  c3                   ret 
// copied from an identical function in another client (function ?Draw3dRect@CXTPDrawHelpers@ns_ROCX00001e@@SAXPAX@Z)

namespace ns_ROCX00001e {
struct CXTPDrawHelpers
{
    static void Draw3dRect(void* p);
};

extern "C" void __cdecl helper_0067f830(void* p);

void CXTPDrawHelpers::Draw3dRect(void* p)
{
    if (p != 0)
    {
        helper_0067f830(*(void**)((char*)p + 4));
    }
}
}
