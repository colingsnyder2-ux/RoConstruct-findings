// from server: 100% by colin
// roc 2007-08 00666c90  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00666c90
//
// 00666c90  8b442404             mov eax, dword ptr [esp + 4]
// 00666c94  c1e804               shr eax, 4
// 00666c97  57                   push edi
// 00666c98  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00666c9c  8907                 mov dword ptr [edi], eax
// 00666c9e  33d2                 xor edx, edx
// 00666ca0  f77108               div dword ptr [ecx + 8]
// 00666ca3  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00666ca7  8910                 mov dword ptr [eax], edx
// 00666ca9  8b4904               mov ecx, dword ptr [ecx + 4]
// 00666cac  85c9                 test ecx, ecx
// 00666cae  7506                 jne 0x666cb6
// 00666cb0  33c0                 xor eax, eax
// 00666cb2  5f                   pop edi
// 00666cb3  c20c00               ret 0xc
// 00666cb6  56                   push esi
// 00666cb7  8b3491               mov esi, dword ptr [ecx + edx*4]
// 00666cba  85f6                 test esi, esi
// 00666cbc  741f                 je 0x666cdd
// 00666cbe  8bff                 mov edi, edi
// 00666cc0  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 00666cc3  3b0f                 cmp ecx, dword ptr [edi]
// 00666cc5  750f                 jne 0x666cd6
// 00666cc7  8d54240c             lea edx, [esp + 0xc]
// 00666ccb  52                   push edx
// 00666ccc  56                   push esi
// 00666ccd  e86e8b0200           call 0x68f840
// 00666cd2  85c0                 test eax, eax
// 00666cd4  750e                 jne 0x666ce4
// 00666cd6  8b7648               mov esi, dword ptr [esi + 0x48]
// 00666cd9  85f6                 test esi, esi
// 00666cdb  75e3                 jne 0x666cc0
// 00666cdd  5e                   pop esi
// 00666cde  33c0                 xor eax, eax
// 00666ce0  5f                   pop edi
// 00666ce1  c20c00               ret 0xc
// 00666ce4  8bc6                 mov eax, esi
// 00666ce6  5e                   pop esi
// 00666ce7  5f                   pop edi
// 00666ce8  c20c00               ret 0xc

struct CXTTreeBase
{
    int f(int a, int b, int c);
};

extern "C" int __stdcall sub_68F840(int, int*);

int CXTTreeBase::f(int a, int b, int c)
{
    int* pOut1 = (int*)c;
    int* pOut2 = (int*)b;
    unsigned int key = (unsigned int)a >> 4;
    *pOut1 = key;
    unsigned int idx = key % *(unsigned int*)((char*)this + 8);
    *pOut2 = idx;
    int* table = *(int**)((char*)this + 4);
    if (table == 0)
        return 0;
    int node = table[idx];
    while (node != 0)
    {
        if (*(int*)(node + 0x4c) == *pOut1)
        {
            int tmp;
            if (sub_68F840(node, &tmp) != 0)
                return node;
        }
        node = *(int*)(node + 0x48);
    }
    return 0;
}
