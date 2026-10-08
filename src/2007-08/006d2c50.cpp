// from server: 100% by colin
// roc 2007-08 006d2c50  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d2c50
//
// 006d2c50  8b442404             mov eax, dword ptr [esp + 4]
// 006d2c54  83c020               add eax, 0x20
// 006d2c57  89442404             mov dword ptr [esp + 4], eax
// 006d2c5b  83c120               add ecx, 0x20
// 006d2c5e  e93dfeffff           jmp 0x6d2aa0

struct CXTPReportHyperlink {
    void f(int* p);
};

extern "C" void __cdecl target();

void CXTPReportHyperlink::f(int* p)
{
    p = (int*)((char*)p + 0x20);
    ((void (__thiscall*)(void*, int*))&target)((char*)this + 0x20, p);
}
