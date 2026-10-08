// from server: 100% by colin
// roc 2007-08 0069f1a0  unit: CXTPWinThemeWrapper  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069f1a0
//
// 0069f1a0  56                   push esi
// 0069f1a1  8bf1                 mov esi, ecx
// 0069f1a3  e8e8ffffff           call 0x69f190
// 0069f1a8  50                   push eax
// 0069f1a9  8bce                 mov ecx, esi
// 0069f1ab  e8f05b0700           call 0x714da0
// 0069f1b0  c706e42c7d00         mov dword ptr [esi], 0x7d2ce4
// 0069f1b6  c74654d42c7d00       mov dword ptr [esi + 0x54], 0x7d2cd4
// 0069f1bd  c786ac00000000000000 mov dword ptr [esi + 0xac], 0
// 0069f1c7  8bc6                 mov eax, esi
// 0069f1c9  5e                   pop esi
// 0069f1ca  c3                   ret 

struct CXTPWinThemeWrapper
{
    void construct();
    void init(void*);
    int field0;
    char pad[0x50];
    int field54;
    char pad2[0x54];
    int fieldAC;
    void* method_69f190();
    void method_714da0(void*);
    void* setEditable();
};

void* CXTPWinThemeWrapper::setEditable()
{
    void* p = method_69f190();
    method_714da0(p);
    field0 = 0x7d2ce4;
    field54 = 0x7d2cd4;
    fieldAC = 0;
    return this;
}
