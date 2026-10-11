// from server: 100% by colin
// roc 2007-08 0065e6b0  unit: CXTPReportColumn  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065e6b0
//
// 0065e6b0  56                   push esi
// 0065e6b1  8bf1                 mov esi, ecx
// 0065e6b3  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 0065e6b6  85c9                 test ecx, ecx
// 0065e6b8  741d                 je 0x65e6d7
// 0065e6ba  e8a14d0700           call 0x6d3460
// 0065e6bf  85c0                 test eax, eax
// 0065e6c1  7414                 je 0x65e6d7
// 0065e6c3  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 0065e6c6  e8954d0700           call 0x6d3460
// 0065e6cb  397038               cmp dword ptr [eax + 0x38], esi
// 0065e6ce  7507                 jne 0x65e6d7
// 0065e6d0  b801000000           mov eax, 1
// 0065e6d5  5e                   pop esi
// 0065e6d6  c3                   ret 
// 0065e6d7  33c0                 xor eax, eax
// 0065e6d9  5e                   pop esi
// 0065e6da  c3                   ret 

struct CXTPReportColumn
{
    char pad[0x54];
    void* field_54;
    int isSomething();
};

struct Helper
{
    int __thiscall getSomething();
};

extern int __fastcall sub_006d3460(void*);

int CXTPReportColumn::isSomething()
{
    void* p = field_54;
    if (p != 0)
    {
        if (sub_006d3460(p) != 0)
        {
            void* q = field_54;
            int r = sub_006d3460(q);
            if (*(int*)(r + 0x38) == (int)this)
                return 1;
        }
    }
    return 0;
}
