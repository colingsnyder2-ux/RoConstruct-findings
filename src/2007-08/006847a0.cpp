// from server: 78% by colin
// roc 2007-08 006847a0  unit: CXTPPropertyGridVerbs  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006847a0
//
// 006847a0  57                   push edi
// 006847a1  8bf9                 mov edi, ecx
// 006847a3  8b4728               mov eax, dword ptr [edi + 0x28]
// 006847a6  85c0                 test eax, eax
// 006847a8  743e                 je 0x6847e8
// 006847aa  56                   push esi
// 006847ab  33f6                 xor esi, esi
// 006847ad  85c0                 test eax, eax
// 006847af  7e1c                 jle 0x6847cd
// 006847b1  85f6                 test esi, esi
// 006847b3  7c2e                 jl 0x6847e3
// 006847b5  3b7728               cmp esi, dword ptr [edi + 0x28]
// 006847b8  7d29                 jge 0x6847e3
// 006847ba  8b4724               mov eax, dword ptr [edi + 0x24]
// 006847bd  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 006847c0  e81fbafaff           call 0x6301e4
// 006847c5  83c601               add esi, 1
// 006847c8  3b7728               cmp esi, dword ptr [edi + 0x28]
// 006847cb  7ce4                 jl 0x6847b1
// 006847cd  6aff                 push -1
// 006847cf  6a00                 push 0
// 006847d1  8d4f20               lea ecx, [edi + 0x20]
// 006847d4  e8d7b20700           call 0x6ffab0
// 006847d9  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 006847dc  5e                   pop esi
// 006847dd  5f                   pop edi
// 006847de  e96dfcffff           jmp 0x684450
// 006847e3  e938b7faff           jmp 0x62ff20
// 006847e8  5f                   pop edi
// 006847e9  c3                   ret 

struct CXTPPropertyGridVerbs
{
    void func_006847a0();
};

extern "C" void __fastcall func_006301e4(int);
extern "C" void __fastcall func_006ffab0(int, int, int);
extern "C" void __stdcall func_0062ff20();
extern "C" void __stdcall func_00684450();

void CXTPPropertyGridVerbs::func_006847a0()
{
    int count = *(int*)((char*)this + 0x28);
    if (count == 0)
        return;

    int i = 0;
    if (count > 0)
    {
        do
        {
            if (i < 0 || i >= *(int*)((char*)this + 0x28))
            {
                func_0062ff20();
                return;
            }
            int* arr = *(int**)((char*)this + 0x24);
            func_006301e4(arr[i]);
            i++;
        } while (i < *(int*)((char*)this + 0x28));
    }

    func_006ffab0((int)((char*)this + 0x20), 0, -1);
    func_00684450();
}
