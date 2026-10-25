// from server: 100% by king_originala
// roc 2008-06 00575460  unit: RBX::ServiceProvider  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00575460
//
// 00575460  56                   push esi
// 00575461  8bf1                 mov esi, ecx
// 00575463  57                   push edi
// 00575464  8d7e14               lea edi, [esi + 0x14]
// 00575467  e88479ffff           call 0x56cdf0
// 0057546c  8907                 mov dword ptr [edi], eax
// 0057546e  8d4640               lea eax, [esi + 0x40]
// 00575471  50                   push eax
// 00575472  e87979ffff           call 0x56cdf0
// 00575477  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057547b  50                   push eax
// 0057547c  6aff                 push -1
// 0057547e  51                   push ecx
// 0057547f  e80cebfdff           call 0x553f90
// 00575484  83c408               add esp, 8
// 00575487  50                   push eax
// 00575488  8bcf                 mov ecx, edi
// 0057548a  e8b1f60100           call 0x594b40
// 0057548f  8d5648               lea edx, [esi + 0x48]
// 00575492  52                   push edx
// 00575493  e85879ffff           call 0x56cdf0
// 00575498  50                   push eax
// 00575499  8b442418             mov eax, dword ptr [esp + 0x18]
// 0057549d  6aff                 push -1
// 0057549f  50                   push eax
// 005754a0  e8ebeafdff           call 0x553f90
// 005754a5  83c408               add esp, 8
// 005754a8  50                   push eax
// 005754a9  8bcf                 mov ecx, edi
// 005754ab  e890f60100           call 0x594b40
// 005754b0  83c650               add esi, 0x50
// 005754b3  56                   push esi
// 005754b4  e87777ffff           call 0x56cc30
// 005754b9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005754bd  50                   push eax
// 005754be  6aff                 push -1
// 005754c0  51                   push ecx
// 005754c1  e8caeafdff           call 0x553f90
// 005754c6  83c408               add esp, 8
// 005754c9  50                   push eax
// 005754ca  8bcf                 mov ecx, edi
// 005754cc  e86ff60100           call 0x594b40
// 005754d1  5f                   pop edi
// 005754d2  5e                   pop esi
// 005754d3  c20c00               ret 0xc

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
