// from server: 63% by colin
// roc 2007-08 00632940  unit: CXTPCommandBarKeyboardTip  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00632940
//
// 00632940  8b442404             mov eax, dword ptr [esp + 4]
// 00632944  53                   push ebx
// 00632945  56                   push esi
// 00632946  50                   push eax
// 00632947  8bd9                 mov ebx, ecx
// 00632949  e8c2ffffff           call 0x632910
// 0063294e  8bf0                 mov esi, eax
// 00632950  85f6                 test esi, esi
// 00632952  742f                 je 0x632983
// 00632954  57                   push edi
// 00632955  8b3e                 mov edi, dword ptr [esi]
// 00632957  8b9760010000         mov edx, dword ptr [edi + 0x160]
// 0063295d  8bce                 mov ecx, esi
// 0063295f  ffd2                 call edx
// 00632961  f7d8                 neg eax
// 00632963  1bc0                 sbb eax, eax
// 00632965  83c001               add eax, 1
// 00632968  50                   push eax
// 00632969  8b875c010000         mov eax, dword ptr [edi + 0x15c]
// 0063296f  8bce                 mov ecx, esi
// 00632971  ffd0                 call eax
// 00632973  8b4b74               mov ecx, dword ptr [ebx + 0x74]
// 00632976  5f                   pop edi
// 00632977  5e                   pop esi
// 00632978  c7414c01000000       mov dword ptr [ecx + 0x4c], 1
// 0063297f  5b                   pop ebx
// 00632980  c20400               ret 4
// 00632983  8b5374               mov edx, dword ptr [ebx + 0x74]
// 00632986  5e                   pop esi
// 00632987  c7424c01000000       mov dword ptr [edx + 0x4c], 1
// 0063298e  5b                   pop ebx
// 0063298f  c20400               ret 4

struct CXTPCommandBarKeyboardTip
{
    char pad[0x74];
    void* field_74;
    void* method_00632910(void*);
    void method_00632940(void*);
};

void CXTPCommandBarKeyboardTip::method_00632940(void* arg)
{
    void* obj = method_00632910(arg);
    if (obj != 0)
    {
        int* vtbl = *(int**)obj;
        int (*fn1)(void*) = (int (*)(void*))vtbl[0x160 / 4];
        int r = fn1(obj);
        int flag = (r != 0) ? 0 : 1;
        void (*fn2)(void*, int) = (void (*)(void*, int))vtbl[0x15c / 4];
        fn2(obj, flag);
    }
    *(int*)((char*)field_74 + 0x4c) = 1;
}
