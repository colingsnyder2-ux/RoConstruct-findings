// from server: 60% by colin
// roc 2008-06 0055d840  unit: std::D::DU?$char_traits::V?$basic_string::?$sp_counted_impl_p  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055d840
//
// 0055d840  8b442414             mov eax, dword ptr [esp + 0x14]
// 0055d844  55                   push ebp
// 0055d845  8b6c2408             mov ebp, dword ptr [esp + 8]
// 0055d849  56                   push esi
// 0055d84a  57                   push edi
// 0055d84b  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0055d84f  8d3407               lea esi, [edi + eax]
// 0055d852  8b4500               mov eax, dword ptr [ebp]
// 0055d855  8b50f8               mov edx, dword ptr [eax - 8]
// 0055d858  83e810               sub eax, 0x10
// 0055d85b  b901000000           mov ecx, 1
// 0055d860  2b480c               sub ecx, dword ptr [eax + 0xc]
// 0055d863  2bd6                 sub edx, esi
// 0055d865  0bca                 or ecx, edx
// 0055d867  7d08                 jge 0x55d871
// 0055d869  56                   push esi
// 0055d86a  8bcd                 mov ecx, ebp
// 0055d86c  e88f9beaff           call 0x407400
// 0055d871  8b442414             mov eax, dword ptr [esp + 0x14]
// 0055d875  53                   push ebx
// 0055d876  8b5d00               mov ebx, dword ptr [ebp]
// 0055d879  57                   push edi
// 0055d87a  50                   push eax
// 0055d87b  57                   push edi
// 0055d87c  53                   push ebx
// 0055d87d  ff15ac288000         call dword ptr [0x8028ac]
// 0055d883  8b442434             mov eax, dword ptr [esp + 0x34]
// 0055d887  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0055d88b  50                   push eax
// 0055d88c  51                   push ecx
// 0055d88d  50                   push eax
// 0055d88e  03df                 add ebx, edi
// 0055d890  53                   push ebx
// 0055d891  ff15ac288000         call dword ptr [0x8028ac]
// 0055d897  83c420               add esp, 0x20
// 0055d89a  5b                   pop ebx
// 0055d89b  85f6                 test esi, esi
// 0055d89d  7c16                 jl 0x55d8b5
// 0055d89f  8b4500               mov eax, dword ptr [ebp]
// 0055d8a2  3b70f8               cmp esi, dword ptr [eax - 8]
// 0055d8a5  7f0e                 jg 0x55d8b5
// 0055d8a7  8970f4               mov dword ptr [eax - 0xc], esi
// 0055d8aa  8b5500               mov edx, dword ptr [ebp]
// 0055d8ad  5f                   pop edi
// 0055d8ae  c6041600             mov byte ptr [esi + edx], 0
// 0055d8b2  5e                   pop esi
// 0055d8b3  5d                   pop ebp
// 0055d8b4  c3                   ret 
// 0055d8b5  6857000780           push 0x80070057
// 0055d8ba  e84137eaff           call 0x401000

extern "C" int __stdcall memcpy_s(void*, unsigned int, const void*, unsigned int);
extern "C" void __stdcall sub_401000(unsigned int);
extern "C" void __stdcall sub_407400(void*, int);

struct S {
    void f(int, int, int, int);
};

void S::f(int a1, int a2, int a3, int a4)
{
    int* self = (int*)this;
    int total = a4 + a1;
    int* p = (int*)*self;
    int avail = p[-2];
    int cap = p[-4];
    int need = 1 - cap;
    int diff = avail - total;
    if ((need | diff) < 0)
        sub_407400(self, total);
    int* base = (int*)*self;
    memcpy_s((void*)((char*)base + a3), a4, (const void*)a2, a3);
    memcpy_s((void*)((char*)base + a3 + a4), a4, (const void*)a2, a4);
    if (total >= 0 && total <= base[-2])
    {
        base[-3] = total;
        ((char*)*self)[total] = 0;
    }
    else
    {
        sub_401000(0x80070057);
    }
}
