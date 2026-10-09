// from server: 91% by colin
// roc 2007-08 00698c10  unit: CXTPPropertyGridItem  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00698c10
//
// 00698c10  56                   push esi
// 00698c11  8bf1                 mov esi, ecx
// 00698c13  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 00698c1a  743d                 je 0x698c59
// 00698c1c  e80ff1ffff           call 0x697d30
// 00698c21  85c0                 test eax, eax
// 00698c23  7515                 jne 0x698c3a
// 00698c25  8b86b4000000         mov eax, dword ptr [esi + 0xb4]
// 00698c2b  8b88b0000000         mov ecx, dword ptr [eax + 0xb0]
// 00698c31  83b96001000000       cmp dword ptr [ecx + 0x160], 0
// 00698c38  741f                 je 0x698c59
// 00698c3a  8b16                 mov edx, dword ptr [esi]
// 00698c3c  8b4258               mov eax, dword ptr [edx + 0x58]
// 00698c3f  8bce                 mov ecx, esi
// 00698c41  ffd0                 call eax
// 00698c43  85c0                 test eax, eax
// 00698c45  7512                 jne 0x698c59
// 00698c47  8b8ec8000000         mov ecx, dword ptr [esi + 0xc8]
// 00698c4d  394128               cmp dword ptr [ecx + 0x28], eax
// 00698c50  7e07                 jle 0x698c59
// 00698c52  b801000000           mov eax, 1
// 00698c57  5e                   pop esi
// 00698c58  c3                   ret 
// 00698c59  33c0                 xor eax, eax
// 00698c5b  5e                   pop esi
// 00698c5c  c3                   ret 

struct CXTPPropertyGridItem
{
    int IsSelected() const;
    int IsVisible() const;
    int GetValue() const;
};

struct CXTPPropertyGridItemValue
{
    char pad[0xb0];
    int field_0xb0;
};

struct CXTPPropertyGridItemValue2
{
    char pad[0x160];
    int field_0x160;
};

struct CXTPPropertyGridItemValue3
{
    char pad[0x28];
    int field_0x28;
};

extern int __cdecl func_00697d30();

int CXTPPropertyGridItem::IsSelected() const
{
    if (*(int*)((char*)this + 0xb4) != 0)
    {
        if (func_00697d30() != 0)
            goto check_visible;
        {
            CXTPPropertyGridItemValue* p = *(CXTPPropertyGridItemValue**)((char*)this + 0xb4);
            CXTPPropertyGridItemValue2* q = *(CXTPPropertyGridItemValue2**)((char*)p + 0xb0);
            if (*(int*)((char*)q + 0x160) == 0)
                goto ret_zero;
        }
    check_visible:
        {
            int (__thiscall *fn)(const CXTPPropertyGridItem*) = *(int (__thiscall **)(const CXTPPropertyGridItem*))((*(int*)this) + 0x58);
            if (fn(this) != 0)
                goto ret_zero;
        }
        {
            CXTPPropertyGridItemValue3* r = *(CXTPPropertyGridItemValue3**)((char*)this + 0xc8);
            if (*(int*)((char*)r + 0x28) <= 0)
                goto ret_zero;
        }
        return 1;
    }
ret_zero:
    return 0;
}
