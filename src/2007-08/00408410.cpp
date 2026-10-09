// from server: 100% by colin
// roc 2007-08 00408410  unit: VCApp::?$CComObject  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00408410
//
// 00408410  8b542408             mov edx, dword ptr [esp + 8]
// 00408414  56                   push esi
// 00408415  8b32                 mov esi, dword ptr [edx]
// 00408417  57                   push edi
// 00408418  33c9                 xor ecx, ecx
// 0040841a  8d9b00000000         lea ebx, [ebx]
// 00408420  8b8198138800         mov eax, dword ptr [ecx + 0x881398]
// 00408426  3930                 cmp dword ptr [eax], esi
// 00408428  7518                 jne 0x408442
// 0040842a  8b7804               mov edi, dword ptr [eax + 4]
// 0040842d  3b7a04               cmp edi, dword ptr [edx + 4]
// 00408430  7510                 jne 0x408442
// 00408432  8b7808               mov edi, dword ptr [eax + 8]
// 00408435  3b7a08               cmp edi, dword ptr [edx + 8]
// 00408438  7508                 jne 0x408442
// 0040843a  8b400c               mov eax, dword ptr [eax + 0xc]
// 0040843d  3b420c               cmp eax, dword ptr [edx + 0xc]
// 00408440  7412                 je 0x408454
// 00408442  83c104               add ecx, 4
// 00408445  83f904               cmp ecx, 4
// 00408448  72d6                 jb 0x408420
// 0040844a  5f                   pop edi
// 0040844b  b801000000           mov eax, 1
// 00408450  5e                   pop esi
// 00408451  c20800               ret 8
// 00408454  5f                   pop edi
// 00408455  33c0                 xor eax, eax
// 00408457  5e                   pop esi
// 00408458  c20800               ret 8

struct S_func_00408410 {
    static int* table[4];
    int f(int, int*);
};

int* S_func_00408410::table[4];

int S_func_00408410::f(int, int* p)
{
    unsigned int i = 0;
    do {
        int* e = *(int**)((char*)table + i);
        if (e[0] == p[0] && e[1] == p[1] && e[2] == p[2] && e[3] == p[3])
            return 0;
        i += 4;
    } while (i < 4);
    return 1;
}
