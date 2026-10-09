// from server: 34% by colin
// roc 2007-08 00415910  unit: VCContent::?$CComContainedObject  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00415910
//
// 00415910  6aff                 push -1
// 00415912  68917b7400           push 0x747b91
// 00415917  64a100000000         mov eax, dword ptr fs:[0]
// 0041591d  50                   push eax
// 0041591e  51                   push ecx
// 0041591f  a188518b00           mov eax, dword ptr [0x8b5188]
// 00415924  33c4                 xor eax, esp
// 00415926  50                   push eax
// 00415927  8d442408             lea eax, [esp + 8]
// 0041592b  64a300000000         mov dword ptr fs:[0], eax
// 00415931  8b442418             mov eax, dword ptr [esp + 0x18]
// 00415935  89442418             mov dword ptr [esp + 0x18], eax
// 00415939  89442404             mov dword ptr [esp + 4], eax
// 0041593d  85c0                 test eax, eax
// 0041593f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00415947  741a                 je 0x415963
// 00415949  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0041594d  8b11                 mov edx, dword ptr [ecx]
// 0041594f  8910                 mov dword ptr [eax], edx
// 00415951  8b5104               mov edx, dword ptr [ecx + 4]
// 00415954  83c108               add ecx, 8
// 00415957  51                   push ecx
// 00415958  8d4808               lea ecx, [eax + 8]
// 0041595b  895004               mov dword ptr [eax + 4], edx
// 0041595e  e8fdedffff           call 0x414760
// 00415963  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00415967  64890d00000000       mov dword ptr fs:[0], ecx
// 0041596e  59                   pop ecx
// 0041596f  83c410               add esp, 0x10
// 00415972  c3                   ret 

struct S_func_00415910
{
    void m(void* p1, void* p2);
};

extern char G1;
extern char G2;

void S_func_00415910::m(void* p1, void* p2)
{
    char* dst = (char*)p1;
    if (dst != 0)
    {
        int* src = (int*)p2;
        *(int*)dst = src[0];
        *(int*)(dst + 4) = src[1];
        void* tmp = (void*)(src + 2);
        void* dst2 = (void*)(dst + 8);
        extern void func_00414760(void*, void*);
        func_00414760(dst2, tmp);
    }
}
