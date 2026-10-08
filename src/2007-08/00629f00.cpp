// from server: 68% by colin
// roc 2007-08 00629f00  unit: RBX::AssemblyStage  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00629f00
//
// 00629f00  8b442404             mov eax, dword ptr [esp + 4]
// 00629f04  83781810             cmp dword ptr [eax + 0x18], 0x10
// 00629f08  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00629f0b  7205                 jb 0x629f12
// 00629f0d  8b4004               mov eax, dword ptr [eax + 4]
// 00629f10  eb03                 jmp 0x629f15
// 00629f12  83c004               add eax, 4
// 00629f15  51                   push ecx
// 00629f16  50                   push eax
// 00629f17  8d44240c             lea eax, [esp + 0xc]
// 00629f1b  50                   push eax
// 00629f1c  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00629f24  e877ffffff           call 0x629ea0
// 00629f29  8b442410             mov eax, dword ptr [esp + 0x10]
// 00629f2d  83c40c               add esp, 0xc
// 00629f30  c3                   ret 

struct S {
    int f(const char* s);
};

int __cdecl helper(const char*, unsigned int, int*);

int S::f(const char* s)
{
    unsigned int len;
    const char* data;
    int result;

    len = *(const unsigned int*)(s + 0x18);
    data = *(const char**)(s + 4);
    if (len < 0x10)
        data = s + 4;

    result = 0;
    helper(data, len, &result);
    return result;
}
