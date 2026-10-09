// roc 2010-06 00800180  unit: CXTPDrawHelpers  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00800180
//
// 00800180  8b442404             mov eax, dword ptr [esp + 4]
// 00800184  85c0                 test eax, eax
// 00800186  740c                 je 0x800194
// 00800188  8b4004               mov eax, dword ptr [eax + 4]
// 0080018b  89442404             mov dword ptr [esp + 4], eax
// 0080018f  e9dce8ffff           jmp 0x7fea70
// 00800194  c3                   ret 
// copied from an identical function in another client (function ?Draw3dRect@CXTPDrawHelpers@ns_ROCX000031@@SAXPAX@Z)

namespace ns_ROCX000031 {
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
