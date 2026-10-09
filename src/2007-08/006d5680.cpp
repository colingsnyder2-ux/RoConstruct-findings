// from server: 78% by colin
// roc 2007-08 006d5680  unit: CXTPReportRow_Batch  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d5680
//
// 006d5680  51                   push ecx
// 006d5681  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006d5685  56                   push esi
// 006d5686  8bf1                 mov esi, ecx
// 006d5688  8b06                 mov eax, dword ptr [esi]
// 006d568a  57                   push edi
// 006d568b  8d4c2408             lea ecx, [esp + 8]
// 006d568f  51                   push ecx
// 006d5690  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006d5694  6a00                 push 0
// 006d5696  52                   push edx
// 006d5697  8b908c000000         mov edx, dword ptr [eax + 0x8c]
// 006d569d  51                   push ecx
// 006d569e  8bce                 mov ecx, esi
// 006d56a0  c744241800000000     mov dword ptr [esp + 0x18], 0
// 006d56a8  ffd2                 call edx
// 006d56aa  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 006d56ad  8b5120               mov edx, dword ptr [ecx + 0x20]
// 006d56b0  8bf8                 mov edi, eax
// 006d56b2  8d442410             lea eax, [esp + 0x10]
// 006d56b6  50                   push eax
// 006d56b7  52                   push edx
// 006d56b8  ff15f0ed7700         call dword ptr [0x77edf0]
// 006d56be  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006d56c2  6aff                 push -1
// 006d56c4  8d442414             lea eax, [esp + 0x14]
// 006d56c8  50                   push eax
// 006d56c9  6afb                 push -5
// 006d56cb  51                   push ecx
// 006d56cc  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 006d56cf  57                   push edi
// 006d56d0  56                   push esi
// 006d56d1  e83a56f8ff           call 0x65ad10
// 006d56d6  5f                   pop edi
// 006d56d7  5e                   pop esi
// 006d56d8  59                   pop ecx
// 006d56d9  c20800               ret 8

struct CXTPReportRow_Batch;

struct CXTPReportRow_Batch_Vtbl {
    char pad[0x8c];
    int (__stdcall *field_8c)(CXTPReportRow_Batch*, int, int, int, int*);
};

struct CXTPReportRow_Batch {
    CXTPReportRow_Batch_Vtbl* vtable;
    char pad1[0x20];
    void* field_24;

    int func_006d5680(int a2, int a3);
};

extern "C" int __stdcall ClientToScreen(void*, void*);

extern "C" int __stdcall sub_0065ad10(CXTPReportRow_Batch*, int, int, int, int*, int);

int CXTPReportRow_Batch::func_006d5680(int a2, int a3)
{
    int local = 0;
    int result = this->vtable->field_8c(this, a2, 0, a3, &local);
    void* p = *(void**)((char*)this->field_24 + 0x20);
    ClientToScreen(p, &local);
    int v = local;
    sub_0065ad10(this, result, -5, v, &local, -1);
    return result;
}
