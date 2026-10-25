// from server: 100% by colin
// roc 2008-06 00416f10  unit: DHTMLWindowService  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00416f10
//
// 00416f10  56                   push esi
// 00416f11  8bf1                 mov esi, ecx
// 00416f13  57                   push edi
// 00416f14  8d7e14               lea edi, [esi + 0x14]
// 00416f17  e834db1700           call 0x594a50
// 00416f1c  8907                 mov dword ptr [edi], eax
// 00416f1e  8d4640               lea eax, [esi + 0x40]
// 00416f21  50                   push eax
// 00416f22  e8b95b1500           call 0x56cae0
// 00416f27  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00416f2b  50                   push eax
// 00416f2c  6aff                 push -1
// 00416f2e  51                   push ecx
// 00416f2f  e85cd01300           call 0x553f90
// 00416f34  83c408               add esp, 8
// 00416f37  50                   push eax
// 00416f38  8bcf                 mov ecx, edi
// 00416f3a  e801dc1700           call 0x594b40
// 00416f3f  8d5648               lea edx, [esi + 0x48]
// 00416f42  52                   push edx
// 00416f43  e8a85e1500           call 0x56cdf0
// 00416f48  50                   push eax
// 00416f49  8b442418             mov eax, dword ptr [esp + 0x18]
// 00416f4d  6aff                 push -1
// 00416f4f  50                   push eax
// 00416f50  e83bd01300           call 0x553f90
// 00416f55  83c408               add esp, 8
// 00416f58  50                   push eax
// 00416f59  8bcf                 mov ecx, edi
// 00416f5b  e8e0db1700           call 0x594b40
// 00416f60  83c650               add esi, 0x50
// 00416f63  56                   push esi
// 00416f64  e8875e1500           call 0x56cdf0
// 00416f69  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00416f6d  50                   push eax
// 00416f6e  6aff                 push -1
// 00416f70  51                   push ecx
// 00416f71  e81ad01300           call 0x553f90
// 00416f76  83c408               add esp, 8
// 00416f79  50                   push eax
// 00416f7a  8bcf                 mov ecx, edi
// 00416f7c  e8bfdb1700           call 0x594b40
// 00416f81  5f                   pop edi
// 00416f82  5e                   pop esi
// 00416f83  c20c00               ret 0xc

extern "C" void* __cdecl getType();
extern "C" void* __cdecl getOtherType();
extern "C" const char* __cdecl convert(const char*, int);

struct Value {
    void* type;
    char padding[40];
    void set(const char*, void*, void*);
};

struct S {
    char padding[20];
    Value value;
    char first[8];
    char second[8];
    char third[8];

    void f(const char*, const char*, const char*);
};

void S::f(const char* a, const char* b, const char* c)
{
    value.type = getType();
    value.set(convert(a, -1), getType(), first);
    value.set(convert(b, -1), getType(), second);
    value.set(convert(c, -1), getOtherType(), third);
}
