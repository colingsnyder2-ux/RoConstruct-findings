// from server: 100% by atomic.potato
// roc 2008-06 006a6170  unit: MyXTPCommandBars  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a6170
//
// 006a6170  56                   push esi
// 006a6171  57                   push edi
// 006a6172  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006a6176  8bf1                 mov esi, ecx
// 006a6178  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 006a617b  8d44240c             lea eax, [esp + 0xc]
// 006a617f  50                   push eax
// 006a6180  57                   push edi
// 006a6181  81c18c000000         add ecx, 0x8c
// 006a6187  e884b20700           call 0x721410
// 006a618c  85c0                 test eax, eax
// 006a618e  7505                 jne 0x6a6195
// 006a6190  5f                   pop edi
// 006a6191  5e                   pop esi
// 006a6192  c20400               ret 4
// 006a6195  8d4c240c             lea ecx, [esp + 0xc]
// 006a6199  51                   push ecx
// 006a619a  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 006a619d  57                   push edi
// 006a619e  81c1a8000000         add ecx, 0xa8
// 006a61a4  e867b20700           call 0x721410
// 006a61a9  f7d8                 neg eax
// 006a61ab  1bc0                 sbb eax, eax
// 006a61ad  5f                   pop edi
// 006a61ae  40                   inc eax
// 006a61af  5e                   pop esi
// 006a61b0  c20400               ret 4

struct CmdMap {
    int Find(void* cmd, int* index);
};

struct MyXTPCommandBars {
    char pad[0x74];
    void* field_74;
    int FindCommand(void* cmd);
};

int MyXTPCommandBars::FindCommand(void* cmd)
{
    int index;
    int result = ((CmdMap*)((char*)field_74 + 0x8c))->Find(cmd, &index);
    if (result == 0)
        return 0;
    result = ((CmdMap*)((char*)field_74 + 0xa8))->Find(cmd, &index);
    return (result == 0) ? 1 : 0;
}
