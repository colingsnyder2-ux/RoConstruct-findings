// from server: 100% by atomic.potato
// roc 2008-06 0046a970  unit: CWebToolbox  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046a970
//
// 0046a970  8b4124               mov eax, dword ptr [ecx + 0x24]
// 0046a973  85c0                 test eax, eax
// 0046a975  7407                 je 0x46a97e
// 0046a977  8b8004020000         mov eax, dword ptr [eax + 0x204]
// 0046a97d  c3                   ret 
// 0046a97e  33c0                 xor eax, eax
// 0046a980  c3                   ret 

struct CWebToolbox
{
    char padding[0x24];
    void* field24;
    int GetValue();
};

int CWebToolbox::GetValue()
{
    if (field24)
        return *(int*)((char*)field24 + 0x204);
    return 0;
}
