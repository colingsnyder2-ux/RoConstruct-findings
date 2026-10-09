// roc 2008-06 006f89a0  unit: CXTPDrawHelpers  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f89a0
//
// 006f89a0  8b442404             mov eax, dword ptr [esp + 4]
// 006f89a4  85c0                 test eax, eax
// 006f89a6  740c                 je 0x6f89b4
// 006f89a8  8b4004               mov eax, dword ptr [eax + 4]
// 006f89ab  89442404             mov dword ptr [esp + 4], eax
// 006f89af  e9ece8ffff           jmp 0x6f72a0
// 006f89b4  c3                   ret 
// copied from an identical function in another client (function ?Draw3dRect@CXTPDrawHelpers@ns_ROCX00006a@@SAXPAX@Z)

namespace ns_ROCX00006a {
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
