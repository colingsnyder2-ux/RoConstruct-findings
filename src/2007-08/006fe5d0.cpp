// from server: 84% by colin
// roc 2007-08 006fe5d0  unit: CXTPTabManagerItem  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fe5d0
//
// 006fe5d0  56                   push esi
// 006fe5d1  57                   push edi
// 006fe5d2  8bf1                 mov esi, ecx
// 006fe5d4  33ff                 xor edi, edi
// 006fe5d6  e8e5eeffff           call 0x6fd4c0
// 006fe5db  83f805               cmp eax, 5
// 006fe5de  7526                 jne 0x6fe606
// 006fe5e0  8b06                 mov eax, dword ptr [esi]
// 006fe5e2  8b502c               mov edx, dword ptr [eax + 0x2c]
// 006fe5e5  53                   push ebx
// 006fe5e6  8bce                 mov ecx, esi
// 006fe5e8  ffd2                 call edx
// 006fe5ea  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 006fe5f0  8b01                 mov eax, dword ptr [ecx]
// 006fe5f2  8b501c               mov edx, dword ptr [eax + 0x1c]
// 006fe5f5  8b5e5c               mov ebx, dword ptr [esi + 0x5c]
// 006fe5f8  56                   push esi
// 006fe5f9  ffd2                 call edx
// 006fe5fb  8bf8                 mov edi, eax
// 006fe5fd  0faffb               imul edi, ebx
// 006fe600  5b                   pop ebx
// 006fe601  8bc7                 mov eax, edi
// 006fe603  5f                   pop edi
// 006fe604  5e                   pop esi
// 006fe605  c3                   ret 
// 006fe606  8b565c               mov edx, dword ptr [esi + 0x5c]
// 006fe609  33c0                 xor eax, eax
// 006fe60b  85d2                 test edx, edx
// 006fe60d  7e1d                 jle 0x6fe62c
// 006fe60f  90                   nop 
// 006fe610  85c0                 test eax, eax
// 006fe612  7c0c                 jl 0x6fe620
// 006fe614  3bc2                 cmp eax, edx
// 006fe616  7d08                 jge 0x6fe620
// 006fe618  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 006fe61b  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 006fe61e  eb02                 jmp 0x6fe622
// 006fe620  33c9                 xor ecx, ecx
// 006fe622  037920               add edi, dword ptr [ecx + 0x20]
// 006fe625  83c001               add eax, 1
// 006fe628  3bc2                 cmp eax, edx
// 006fe62a  7ce4                 jl 0x6fe610
// 006fe62c  8bc7                 mov eax, edi
// 006fe62e  5f                   pop edi
// 006fe62f  5e                   pop esi
// 006fe630  c3                   ret 

struct CXTPTabManagerItem {
    int GetType();
    int GetTotalWidth();
    int field_0;
    int field_4;
    int field_8;
    int field_c;
    int field_10;
    int field_14;
    int field_18;
    int field_1c;
    int field_20;
    int field_24;
    int field_28;
    int field_2c;
    int field_30;
    int field_34;
    int field_38;
    int field_3c;
    int field_40;
    int field_44;
    int field_48;
    int field_4c;
    int field_50;
    int field_54;
    int field_58;
    int field_5c;
};

int CXTPTabManagerItem::GetTotalWidth()
{
    int result = 0;
    if (this->GetType() == 5)
    {
        int* obj = (int*)((int (__thiscall*)(CXTPTabManagerItem*))this->field_0)(this);
        int* v = (int*)obj[0xe0 / 4];
        int n = ((int (__thiscall*)(void*, CXTPTabManagerItem*))v[0x1c / 4])(v, this);
        result = n * this->field_5c;
    }
    else
    {
        int count = this->field_5c;
        int i = 0;
        if (count > 0)
        {
            do
            {
                int* item;
                if (i >= 0 && i < count)
                    item = (int*)((int*)this->field_58)[i];
                else
                    item = 0;
                result += item[0x20 / 4];
                i++;
            } while (i < count);
        }
    }
    return result;
}
