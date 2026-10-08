// from server: 91% by colin
// roc 2007-08 006d2a00  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d2a00
//
// 006d2a00  8b442404             mov eax, dword ptr [esp + 4]
// 006d2a04  56                   push esi
// 006d2a05  8b7128               mov esi, dword ptr [ecx + 0x28]
// 006d2a08  83c120               add ecx, 0x20
// 006d2a0b  50                   push eax
// 006d2a0c  56                   push esi
// 006d2a0d  e8fefeffff           call 0x6d2910
// 006d2a12  8bc6                 mov eax, esi
// 006d2a14  5e                   pop esi
// 006d2a15  c20400               ret 4

struct S_func_006d2a00
{
    char pad[0x20];
    int count;
    char pad2[4];
    int* data;
    int Add(int* p);
};

extern "C" int __stdcall sub_006d2910(int* arr, int* p);

int S_func_006d2a00::Add(int* p)
{
    int* d = data;
    sub_006d2910((int*)((char*)this + 0x20), p);
    return (int)d;
}
