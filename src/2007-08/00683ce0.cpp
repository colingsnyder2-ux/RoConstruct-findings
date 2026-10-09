// from server: 42% by colin
// roc 2007-08 00683ce0  unit: CXTPPropertyGrid  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00683ce0
//
// 00683ce0  83ec10               sub esp, 0x10
// 00683ce3  53                   push ebx
// 00683ce4  55                   push ebp
// 00683ce5  8b6968               mov ebp, dword ptr [ecx + 0x68]
// 00683ce8  56                   push esi
// 00683ce9  57                   push edi
// 00683cea  6800e80000           push 0xe800
// 00683cef  83ec10               sub esp, 0x10
// 00683cf2  8bc4                 mov eax, esp
// 00683cf4  33d2                 xor edx, edx
// 00683cf6  8910                 mov dword ptr [eax], edx
// 00683cf8  33db                 xor ebx, ebx
// 00683cfa  6810208050           push 0x50802010
// 00683cff  8d7168               lea esi, [ecx + 0x68]
// 00683d02  33ff                 xor edi, edi
// 00683d04  897804               mov dword ptr [eax + 4], edi
// 00683d07  895808               mov dword ptr [eax + 8], ebx
// 00683d0a  8bd3                 mov edx, ebx
// 00683d0c  6800080000           push 0x800
// 00683d11  89500c               mov dword ptr [eax + 0xc], edx
// 00683d14  8b8574010000         mov eax, dword ptr [ebp + 0x174]
// 00683d1a  51                   push ecx
// 00683d1b  8bce                 mov ecx, esi
// 00683d1d  895c243c             mov dword ptr [esp + 0x3c], ebx
// 00683d21  ffd0                 call eax
// 00683d23  e8e8f20200           call 0x6b3010
// 00683d28  8b10                 mov edx, dword ptr [eax]
// 00683d2a  681c250000           push 0x251c
// 00683d2f  8bc8                 mov ecx, eax
// 00683d31  8b420c               mov eax, dword ptr [edx + 0xc]
// 00683d34  56                   push esi
// 00683d35  ffd0                 call eax
// 00683d37  5f                   pop edi
// 00683d38  5e                   pop esi
// 00683d39  5d                   pop ebp
// 00683d3a  5b                   pop ebx
// 00683d3b  83c410               add esp, 0x10
// 00683d3e  c3                   ret 

struct CXTPPropertyGrid
{
    char pad[0x68];
    void* field_68;
    void sub_683CE0();
};

extern "C" void* __stdcall sub_6B3010();

void CXTPPropertyGrid::sub_683CE0()
{
    void* p = field_68;
    int local[4];
    local[0] = 0;
    local[1] = 0;
    local[2] = 0;
    local[3] = 0;
    void** vtbl = *(void***)((char*)p + 0x174);
    void* self = &field_68;
    ((void (__stdcall*)(void*, int, int, int, void*))vtbl)(self, 0x50802010, 0x800, 0xe800, local);
    void* obj = sub_6B3010();
    void** vtbl2 = *(void***)obj;
    ((void (__stdcall*)(void*, void*, int))vtbl2[3])(obj, self, 0x251c);
}
