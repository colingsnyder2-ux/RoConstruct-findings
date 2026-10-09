// from server: 82% by colin
// roc 2007-08 004360a0  unit: CDeclarationView  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004360a0
//
// 004360a0  55                   push ebp
// 004360a1  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 004360a5  56                   push esi
// 004360a6  8b742414             mov esi, dword ptr [esp + 0x14]
// 004360aa  57                   push edi
// 004360ab  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004360af  3bf7                 cmp esi, edi
// 004360b1  741c                 je 0x4360cf
// 004360b3  8b442428             mov eax, dword ptr [esp + 0x28]
// 004360b7  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004360bb  53                   push ebx
// 004360bc  8d1c08               lea ebx, [eax + ecx]
// 004360bf  90                   nop 
// 004360c0  8b16                 mov edx, dword ptr [esi]
// 004360c2  52                   push edx
// 004360c3  8bcb                 mov ecx, ebx
// 004360c5  ffd5                 call ebp
// 004360c7  83c604               add esi, 4
// 004360ca  3bf7                 cmp esi, edi
// 004360cc  75f2                 jne 0x4360c0
// 004360ce  5b                   pop ebx
// 004360cf  8b442410             mov eax, dword ptr [esp + 0x10]
// 004360d3  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004360d7  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004360db  8928                 mov dword ptr [eax], ebp
// 004360dd  894804               mov dword ptr [eax + 4], ecx
// 004360e0  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004360e4  5f                   pop edi
// 004360e5  5e                   pop esi
// 004360e6  895008               mov dword ptr [eax + 8], edx
// 004360e9  89480c               mov dword ptr [eax + 0xc], ecx
// 004360ec  5d                   pop ebp
// 004360ed  c3                   ret 

struct CDeclarationView
{
    void constructView(char* out, int a, int b, int c, int d, int e, int f);
};

void CDeclarationView::constructView(char* out, int a, int b, int c, int d, int e, int f)
{
    int* begin = (int*)b;
    int* end = (int*)d;
    if (begin != end)
    {
        char* base = (char*)e + f;
        do
        {
            int v = *begin;
            ((void (__stdcall*)(char*, int))a)(base, v);
            begin++;
        } while (begin != end);
    }
    *(int*)(out + 0) = a;
    *(int*)(out + 4) = e;
    *(int*)(out + 8) = f;
    *(int*)(out + 12) = c;
}
