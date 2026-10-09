// roc 2009-06 00771340  unit: CXTPDrawHelpers  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00771340
//
// 00771340  8b442404             mov eax, dword ptr [esp + 4]
// 00771344  85c0                 test eax, eax
// 00771346  740c                 je 0x771354
// 00771348  8b4004               mov eax, dword ptr [eax + 4]
// 0077134b  89442404             mov dword ptr [esp + 4], eax
// 0077134f  e9ece8ffff           jmp 0x76fc40
// 00771354  c3                   ret 
// copied from an identical function in another client (function ?Draw3dRect@CXTPDrawHelpers@ns_ROCX000065@@SAXPAX@Z)

namespace ns_ROCX000065 {
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
