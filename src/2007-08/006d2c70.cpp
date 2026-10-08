// from server: 100% by colin
// roc 2007-08 006d2c70  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d2c70
//
// 006d2c70  8b442404             mov eax, dword ptr [esp + 4]
// 006d2c74  83c020               add eax, 0x20
// 006d2c77  89442404             mov dword ptr [esp + 4], eax
// 006d2c7b  83c120               add ecx, 0x20
// 006d2c7e  e95dfeffff           jmp 0x6d2ae0

struct S {
    void f(int* p);
};

extern "C" void __cdecl target();

void S::f(int* p)
{
    p = (int*)((char*)p + 0x20);
    ((void (__thiscall*)(void*, int*))&target)((char*)this + 0x20, p);
}
