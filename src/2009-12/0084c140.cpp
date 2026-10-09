// roc 2009-12 0084c140  unit: CXTPDrawHelpers  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084c140
//
// 0084c140  8b442404             mov eax, dword ptr [esp + 4]
// 0084c144  85c0                 test eax, eax
// 0084c146  740c                 je 0x84c154
// 0084c148  8b4004               mov eax, dword ptr [eax + 4]
// 0084c14b  89442404             mov dword ptr [esp + 4], eax
// 0084c14f  e9ece8ffff           jmp 0x84aa40
// 0084c154  c3                   ret 
// copied from an identical function in another client (function ?Draw3dRect@CXTPDrawHelpers@ns_ROCX000035@@SAXPAX@Z)

namespace ns_ROCX000035 {
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
