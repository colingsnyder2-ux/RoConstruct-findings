// from server: 54% by colin
// roc 2007-08 00654a90  unit: PAVCXTPReportInplaceButton::?$CArray  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00654a90
//
// 00654a90  56                   push esi
// 00654a91  57                   push edi
// 00654a92  8bf9                 mov edi, ecx
// 00654a94  33f6                 xor esi, esi
// 00654a96  397734               cmp dword ptr [edi + 0x34], esi
// 00654a99  7e21                 jle 0x654abc
// 00654a9b  eb03                 jmp 0x654aa0
// 00654a9d  8d4900               lea ecx, [ecx]
// 00654aa0  85f6                 test esi, esi
// 00654aa2  7c27                 jl 0x654acb
// 00654aa4  3b7734               cmp esi, dword ptr [edi + 0x34]
// 00654aa7  7d22                 jge 0x654acb
// 00654aa9  8b4730               mov eax, dword ptr [edi + 0x30]
// 00654aac  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 00654aaf  e830b7fdff           call 0x6301e4
// 00654ab4  83c601               add esi, 1
// 00654ab7  3b7734               cmp esi, dword ptr [edi + 0x34]
// 00654aba  7ce4                 jl 0x654aa0
// 00654abc  6aff                 push -1
// 00654abe  6a00                 push 0
// 00654ac0  8d4f2c               lea ecx, [edi + 0x2c]
// 00654ac3  e8e8af0a00           call 0x6ffab0
// 00654ac8  5f                   pop edi
// 00654ac9  5e                   pop esi
// 00654aca  c3                   ret 
// 00654acb  e950b4fdff           jmp 0x62ff20

struct T_func_00654a90 {
    char pad[0x2c];
    int count;
    int capacity;
    void** items;
    void m();
};

extern "C" void __stdcall sub_006301e4(void*);
extern "C" void __stdcall sub_006ffab0(void*, int, int);
extern "C" void __stdcall sub_0062ff20();

void T_func_00654a90::m()
{
    int i = 0;
    if (this->capacity > 0) {
        do {
            if (i < 0 || i >= this->capacity)
                sub_0062ff20();
            sub_006301e4(this->items[i]);
            ++i;
        } while (i < this->capacity);
    }
    sub_006ffab0(&this->count, 0, -1);
}
