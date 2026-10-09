// from server: 78% by colin
// roc 2007-08 00673b50  unit: CXTPCustomizeSheet  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00673b50
//
// 00673b50  8b81b8000000         mov eax, dword ptr [ecx + 0xb8]
// 00673b56  56                   push esi
// 00673b57  8b7058               mov esi, dword ptr [eax + 0x58]
// 00673b5a  85f6                 test esi, esi
// 00673b5c  743a                 je 0x673b98
// 00673b5e  83be9000000000       cmp dword ptr [esi + 0x90], 0
// 00673b65  7f1d                 jg 0x673b84
// 00673b67  8d8edc000000         lea ecx, [esi + 0xdc]
// 00673b6d  ff15d0dc7700         call dword ptr [0x77dcd0]
// 00673b73  84c0                 test al, al
// 00673b75  740d                 je 0x673b84
// 00673b77  83be48010000ff       cmp dword ptr [esi + 0x148], -1
// 00673b7e  7504                 jne 0x673b84
// 00673b80  33c0                 xor eax, eax
// 00673b82  eb05                 jmp 0x673b89
// 00673b84  b801000000           mov eax, 1
// 00673b89  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00673b8d  8b11                 mov edx, dword ptr [ecx]
// 00673b8f  5e                   pop esi
// 00673b90  89442404             mov dword ptr [esp + 4], eax
// 00673b94  8b02                 mov eax, dword ptr [edx]
// 00673b96  ffe0                 jmp eax
// 00673b98  5e                   pop esi
// 00673b99  c20400               ret 4

struct CXTPCustomizeSheet {
    char pad[0xb8];
    void* m_pSomething;
    int IsActive(void* p);
};

extern "C" char __stdcall sub_77DCD0(void*);

int CXTPCustomizeSheet::IsActive(void* p)
{
    void* v = m_pSomething;
    int* esi = *(int**)((char*)v + 0x58);
    if (esi == 0)
        return 0;
    int result;
    if (*(int*)((char*)esi + 0x90) > 0)
    {
        result = 1;
    }
    else
    {
        if (sub_77DCD0((char*)esi + 0xdc) && *(int*)((char*)esi + 0x148) == -1)
            result = 0;
        else
            result = 1;
    }
    int* pv = (int*)p;
    int edx = *pv;
    return ((int(__thiscall*)(void*, int))edx)(p, result);
}
