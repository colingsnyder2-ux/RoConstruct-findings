// from server: 86% by colin
// roc 2007-08 004a9140  unit: RBX::Network::VClient::?$FactoryProduct  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a9140
//
// 004a9140  8b442408             mov eax, dword ptr [esp + 8]
// 004a9144  83f802               cmp eax, 2
// 004a9147  7519                 jne 0x4a9162
// 004a9149  56                   push esi
// 004a914a  8b742408             mov esi, dword ptr [esp + 8]
// 004a914e  56                   push esi
// 004a914f  b930168900           mov ecx, 0x891630
// 004a9154  ff1508e77700         call dword ptr [0x77e708]
// 004a915a  f6d8                 neg al
// 004a915c  1bc0                 sbb eax, eax
// 004a915e  23c6                 and eax, esi
// 004a9160  5e                   pop esi
// 004a9161  c3                   ret 
// 004a9162  85c0                 test eax, eax
// 004a9164  7529                 jne 0x4a918f
// 004a9166  6a10                 push 0x10
// 004a9168  e8896d1800           call 0x62fef6
// 004a916d  83c404               add esp, 4
// 004a9170  85c0                 test eax, eax
// 004a9172  742a                 je 0x4a919e
// 004a9174  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004a9178  8b11                 mov edx, dword ptr [ecx]
// 004a917a  8910                 mov dword ptr [eax], edx
// 004a917c  8b5104               mov edx, dword ptr [ecx + 4]
// 004a917f  895004               mov dword ptr [eax + 4], edx
// 004a9182  8b5108               mov edx, dword ptr [ecx + 8]
// 004a9185  895008               mov dword ptr [eax + 8], edx
// 004a9188  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 004a918b  89480c               mov dword ptr [eax + 0xc], ecx
// 004a918e  c3                   ret 
// 004a918f  8b542404             mov edx, dword ptr [esp + 4]
// 004a9193  52                   push edx
// 004a9194  e8c96a1800           call 0x62fc62
// 004a9199  83c404               add esp, 4
// 004a919c  33c0                 xor eax, eax
// 004a919e  c3                   ret 

struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

struct S {
};

void* __cdecl operator_new(unsigned int);
void __cdecl operator_delete(void*);

void* __cdecl f(void* a, int b)
{
    if (b == 2) {
        void* p = a;
        if (*(const type_info*)0x891630 == *(const type_info*)p) {
            return p;
        }
        return 0;
    }
    if (b == 0) {
        void* p = operator_new(0x10);
        if (p) {
            *(int*)((char*)p + 0) = *(int*)((char*)a + 0);
            *(int*)((char*)p + 4) = *(int*)((char*)a + 4);
            *(int*)((char*)p + 8) = *(int*)((char*)a + 8);
            *(int*)((char*)p + 12) = *(int*)((char*)a + 12);
            return p;
        }
        return 0;
    }
    operator_delete(a);
    return 0;
}
