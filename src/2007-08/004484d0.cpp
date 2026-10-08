// from server: 74% by colin
// roc 2007-08 004484d0  unit: CIDEDocManager  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004484d0
//
// 004484d0  85c0                 test eax, eax
// 004484d2  7501                 jne 0x4484d5
// 004484d4  c3                   ret 
// 004484d5  8a08                 mov cl, byte ptr [eax]
// 004484d7  56                   push esi
// 004484d8  33f6                 xor esi, esi
// 004484da  84c9                 test cl, cl
// 004484dc  7427                 je 0x448505
// 004484de  57                   push edi
// 004484df  8b3df4ec7700         mov edi, dword ptr [0x77ecf4]
// 004484e5  80f92e               cmp cl, 0x2e
// 004484e8  7409                 je 0x4484f3
// 004484ea  80f95c               cmp cl, 0x5c
// 004484ed  7506                 jne 0x4484f5
// 004484ef  33f6                 xor esi, esi
// 004484f1  eb02                 jmp 0x4484f5
// 004484f3  8bf0                 mov esi, eax
// 004484f5  50                   push eax
// 004484f6  ffd7                 call edi
// 004484f8  8a08                 mov cl, byte ptr [eax]
// 004484fa  84c9                 test cl, cl
// 004484fc  75e7                 jne 0x4484e5
// 004484fe  85f6                 test esi, esi
// 00448500  5f                   pop edi
// 00448501  7402                 je 0x448505
// 00448503  8bc6                 mov eax, esi
// 00448505  5e                   pop esi
// 00448506  c3                   ret 

extern "C" __declspec(dllimport) char* __stdcall CharNextA(const char*);

char* FindLastDotOrBackslash(char* p)
{
    if (p == 0)
        return p;
    char c = *p;
    char* result = 0;
    if (c == 0)
        return p;
    while (c != 0)
    {
        if (c == '.')
            result = p;
        else if (c == '\\')
            result = 0;
        p = CharNextA(p);
        c = *p;
    }
    if (result != 0)
        return result;
    return p;
}
