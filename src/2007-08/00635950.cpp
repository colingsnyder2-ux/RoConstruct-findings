// from server: 95% by colin
// roc 2007-08 00635950  unit: CXTPCommandBarsOptions  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00635950
//
// 00635950  53                   push ebx
// 00635951  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00635955  56                   push esi
// 00635956  33f6                 xor esi, esi
// 00635958  85db                 test ebx, ebx
// 0063595a  57                   push edi
// 0063595b  8bf9                 mov edi, ecx
// 0063595d  7e19                 jle 0x635978
// 0063595f  55                   push ebp
// 00635960  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00635964  8b44b500             mov eax, dword ptr [ebp + esi*4]
// 00635968  50                   push eax
// 00635969  8bcf                 mov ecx, edi
// 0063596b  e8c0faffff           call 0x635430
// 00635970  83c601               add esi, 1
// 00635973  3bf3                 cmp esi, ebx
// 00635975  7ced                 jl 0x635964
// 00635977  5d                   pop ebp
// 00635978  5f                   pop edi
// 00635979  5e                   pop esi
// 0063597a  5b                   pop ebx
// 0063597b  c20800               ret 8

struct CXTPCommandBarsOptions
{
    void Add(int);
    void AddRange(int, int*);
};

void CXTPCommandBarsOptions::AddRange(int count, int* items)
{
    int i = 0;
    if (count > 0)
    {
        do
        {
            Add(items[i]);
            ++i;
        } while (i < count);
    }
}
