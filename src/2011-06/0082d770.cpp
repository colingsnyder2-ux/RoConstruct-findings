// from server: 100% by atomic.potato
// roc 2011-06 0082d770  unit: CXTPCommandBarsOptions  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0082d770
//
// 0082d770  53                   push ebx
// 0082d771  55                   push ebp
// 0082d772  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0082d776  8bd9                 mov ebx, ecx
// 0082d778  85ed                 test ebp, ebp
// 0082d77a  741f                 je 0x82d79b
// 0082d77c  56                   push esi
// 0082d77d  57                   push edi
// 0082d77e  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0082d782  33f6                 xor esi, esi
// 0082d784  85ff                 test edi, edi
// 0082d786  7e11                 jle 0x82d799
// 0082d788  8b44b500             mov eax, dword ptr [ebp + esi*4]
// 0082d78c  50                   push eax
// 0082d78d  8bcb                 mov ecx, ebx
// 0082d78f  e8bcfaffff           call 0x82d250
// 0082d794  46                   inc esi
// 0082d795  3bf7                 cmp esi, edi
// 0082d797  7cef                 jl 0x82d788
// 0082d799  5f                   pop edi
// 0082d79a  5e                   pop esi
// 0082d79b  5d                   pop ebp
// 0082d79c  5b                   pop ebx
// 0082d79d  c20800               ret 8

struct S
{
    void g(void*);
    void f(void*, int);
};

void S::f(void* p, int n)
{
    if (p)
    {
        int i = 0;
        while (i < n)
        {
            g(*((void**)p + i));
            ++i;
        }
    }
}
