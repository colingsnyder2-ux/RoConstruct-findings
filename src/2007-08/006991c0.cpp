// from server: 86% by colin
// roc 2007-08 006991c0  unit: CXTPPropertyGridItemConstraint  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006991c0
//
// 006991c0  53                   push ebx
// 006991c1  55                   push ebp
// 006991c2  56                   push esi
// 006991c3  57                   push edi
// 006991c4  8bf9                 mov edi, ecx
// 006991c6  33f6                 xor esi, esi
// 006991c8  397728               cmp dword ptr [edi + 0x28], esi
// 006991cb  7e35                 jle 0x699202
// 006991cd  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 006991d1  56                   push esi
// 006991d2  8d442418             lea eax, [esp + 0x18]
// 006991d6  50                   push eax
// 006991d7  8bcf                 mov ecx, edi
// 006991d9  e842ffffff           call 0x699120
// 006991de  55                   push ebp
// 006991df  8bc8                 mov ecx, eax
// 006991e1  ff156cd57700         call dword ptr [0x77d56c]
// 006991e7  85c0                 test eax, eax
// 006991e9  8d4c2414             lea ecx, [esp + 0x14]
// 006991ed  0f94c3               sete bl
// 006991f0  ff15bcdd7700         call dword ptr [0x77ddbc]
// 006991f6  84db                 test bl, bl
// 006991f8  7512                 jne 0x69920c
// 006991fa  83c601               add esi, 1
// 006991fd  3b7728               cmp esi, dword ptr [edi + 0x28]
// 00699200  7ccf                 jl 0x6991d1
// 00699202  5f                   pop edi
// 00699203  5e                   pop esi
// 00699204  5d                   pop ebp
// 00699205  83c8ff               or eax, 0xffffffff
// 00699208  5b                   pop ebx
// 00699209  c20400               ret 4
// 0069920c  5f                   pop edi
// 0069920d  8bc6                 mov eax, esi
// 0069920f  5e                   pop esi
// 00699210  5d                   pop ebp
// 00699211  5b                   pop ebx
// 00699212  c20400               ret 4

struct CXTPPropertyGridItemConstraint
{
    char pad[0x28];
    int m_nCount;
    int GetAt(int index, int* out);
    int Find(void* value);
};

extern "C" int __stdcall sub_77D56C(void*, void*);
extern "C" void __stdcall sub_77DDBC(void*);

int CXTPPropertyGridItemConstraint::Find(void* value)
{
    int i = 0;
    if (m_nCount > 0)
    {
        do
        {
            int local;
            int item = GetAt(i, &local);
            int r = sub_77D56C(value, (void*)item);
            bool found = (r == 0);
            sub_77DDBC(&local);
            if (found)
                return i;
            ++i;
        } while (i < m_nCount);
    }
    return -1;
}
