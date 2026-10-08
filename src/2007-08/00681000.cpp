// from server: 100% by colin
// roc 2007-08 00681000  unit: CXTPDrawHelpers  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00681000
//
// 00681000  8b442404             mov eax, dword ptr [esp + 4]
// 00681004  85c0                 test eax, eax
// 00681006  740c                 je 0x681014
// 00681008  8b4004               mov eax, dword ptr [eax + 4]
// 0068100b  89442404             mov dword ptr [esp + 4], eax
// 0068100f  e91ce8ffff           jmp 0x67f830
// 00681014  c3                   ret 

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
