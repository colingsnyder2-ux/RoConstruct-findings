// from server: 100% by king_originala
// roc 2008-06 005d7830  unit: RBX::Humanoid  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d7830
//
// 005d7830  56                   push esi
// 005d7831  8bf1                 mov esi, ecx
// 005d7833  57                   push edi
// 005d7834  8d7e14               lea edi, [esi + 0x14]
// 005d7837  e814d2fbff           call 0x594a50
// 005d783c  8907                 mov dword ptr [edi], eax
// 005d783e  8d4644               lea eax, [esi + 0x44]
// 005d7841  50                   push eax
// 005d7842  e81956f9ff           call 0x56ce60
// 005d7847  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005d784b  50                   push eax
// 005d784c  6aff                 push -1
// 005d784e  51                   push ecx
// 005d784f  e83cc7f7ff           call 0x553f90
// 005d7854  83c408               add esp, 8
// 005d7857  50                   push eax
// 005d7858  8bcf                 mov ecx, edi
// 005d785a  e8e1d2fbff           call 0x594b40
// 005d785f  83c64c               add esi, 0x4c
// 005d7862  56                   push esi
// 005d7863  e87852f9ff           call 0x56cae0
// 005d7868  8b542414             mov edx, dword ptr [esp + 0x14]
// 005d786c  50                   push eax
// 005d786d  6aff                 push -1
// 005d786f  52                   push edx
// 005d7870  e81bc7f7ff           call 0x553f90
// 005d7875  83c408               add esp, 8
// 005d7878  50                   push eax
// 005d7879  8bcf                 mov ecx, edi
// 005d787b  e8c0d2fbff           call 0x594b40
// 005d7880  5f                   pop edi
// 005d7881  5e                   pop esi
// 005d7882  c20800               ret 8

extern "C" void* __cdecl initialType();
extern "C" void* __cdecl firstType();
extern "C" void* __cdecl secondType();
extern "C" void* __cdecl convertValue(void*, int);

struct Value {
    void* type;
    void assign(void*, void*, void*);
};

struct S {
    char padding0[0x14];
    Value value;
    char padding1[0x2c];
    char first[8];
    char second[8];

    void f(void*, void*);
};

void S::f(void* a, void* b)
{
    value.type = initialType();
    value.assign(convertValue(a, -1), firstType(), first);
    value.assign(convertValue(b, -1), secondType(), second);
}
