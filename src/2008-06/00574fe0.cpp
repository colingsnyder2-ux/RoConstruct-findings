// from server: 100% by colin
// roc 2008-06 00574fe0  unit: RBX::UnifiedWidget  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00574fe0
//
// 00574fe0  51                   push ecx
// 00574fe1  53                   push ebx
// 00574fe2  56                   push esi
// 00574fe3  8b742410             mov esi, dword ptr [esp + 0x10]
// 00574fe7  6a01                 push 1
// 00574fe9  56                   push esi
// 00574fea  e8710ef2ff           call 0x495e60
// 00574fef  6a01                 push 1
// 00574ff1  56                   push esi
// 00574ff2  8844241b             mov byte ptr [esp + 0x1b], al
// 00574ff6  e8750ef2ff           call 0x495e70
// 00574ffb  56                   push esi
// 00574ffc  8ad8                 mov bl, al
// 00574ffe  e87d5cf2ff           call 0x49ac80
// 00575003  83c414               add esp, 0x14
// 00575006  85c0                 test eax, eax
// 00575008  0f95c0               setne al
// 0057500b  5e                   pop esi
// 0057500c  84db                 test bl, bl
// 0057500e  5b                   pop ebx
// 0057500f  7404                 je 0x575015
// 00575011  33c0                 xor eax, eax
// 00575013  59                   pop ecx
// 00575014  c3                   ret 
// 00575015  807c240300           cmp byte ptr [esp + 3], 0
// 0057501a  740c                 je 0x575028
// 0057501c  33c9                 xor ecx, ecx
// 0057501e  84c0                 test al, al
// 00575020  0f94c1               sete cl
// 00575023  41                   inc ecx
// 00575024  8bc1                 mov eax, ecx
// 00575026  59                   pop ecx
// 00575027  c3                   ret 
// 00575028  33d2                 xor edx, edx
// 0057502a  84c0                 test al, al
// 0057502c  0f94c2               sete dl
// 0057502f  83c203               add edx, 3
// 00575032  8bc2                 mov eax, edx
// 00575034  59                   pop ecx
// 00575035  c3                   ret 

extern "C" {
    bool __cdecl sub_495E60(int, int);
    bool __cdecl sub_495E70(int, int);
    int __cdecl sub_49AC80(int);
}

struct RBX_UnifiedWidget {
};

int __cdecl f(int a)
{
    bool v1 = sub_495E60(a, 1);
    bool v2 = sub_495E70(a, 1);
    int v3 = sub_49AC80(a);
    bool v4 = (v3 != 0);
    if (v2)
        return 0;
    if (v1)
        return v4 ? 1 : 2;
    return v4 ? 3 : 4;
}
