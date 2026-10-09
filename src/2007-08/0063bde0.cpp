// from server: 94% by colin
// roc 2007-08 0063bde0  unit: PAVCXTPControlAction::?$CArray  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0063bde0
//
// 0063bde0  53                   push ebx
// 0063bde1  56                   push esi
// 0063bde2  57                   push edi
// 0063bde3  8bf9                 mov edi, ecx
// 0063bde5  33f6                 xor esi, esi
// 0063bde7  e8847a0100           call 0x653870
// 0063bdec  85c0                 test eax, eax
// 0063bdee  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0063bdf2  7e1e                 jle 0x63be12
// 0063bdf4  56                   push esi
// 0063bdf5  8bcf                 mov ecx, edi
// 0063bdf7  e824d40500           call 0x699220
// 0063bdfc  8b4028               mov eax, dword ptr [eax + 0x28]
// 0063bdff  3b4328               cmp eax, dword ptr [ebx + 0x28]
// 0063be02  7f0e                 jg 0x63be12
// 0063be04  8bcf                 mov ecx, edi
// 0063be06  83c601               add esi, 1
// 0063be09  e8627a0100           call 0x653870
// 0063be0e  3bf0                 cmp esi, eax
// 0063be10  7ce2                 jl 0x63bdf4
// 0063be12  6a01                 push 1
// 0063be14  53                   push ebx
// 0063be15  56                   push esi
// 0063be16  8d4f20               lea ecx, [edi + 0x20]
// 0063be19  e832faffff           call 0x63b850
// 0063be1e  5f                   pop edi
// 0063be1f  5e                   pop esi
// 0063be20  5b                   pop ebx
// 0063be21  c20400               ret 4

struct CXTPControlActionArray {
    char pad0[0x20];
    int m_field20;
    int GetCount();
    void* GetAt(int index);
    void InsertAt(void* element);
};

extern "C" int __stdcall sub_653870();
extern "C" void* __stdcall sub_699220(int index);
extern "C" void __stdcall sub_63b850(void* arr, int index, void* element, int count);

void CXTPControlActionArray::InsertAt(void* element)
{
    int i = 0;
    int n = GetCount();
    if (n > 0) {
        do {
            void* item = GetAt(i);
            if (*(int*)((char*)item + 0x28) > *(int*)((char*)element + 0x28))
                break;
            i++;
            n = GetCount();
        } while (i < n);
    }
    sub_63b850((char*)this + 0x20, i, element, 1);
}
