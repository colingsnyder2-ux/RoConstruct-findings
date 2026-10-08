// from server: 61% by colin
// roc 2007-08 0060bc60  unit: CXTCaptionButtonTheme  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060bc60
//
// 0060bc60  83ec08               sub esp, 8
// 0060bc63  53                   push ebx
// 0060bc64  8b5940               mov ebx, dword ptr [ecx + 0x40]
// 0060bc67  56                   push esi
// 0060bc68  57                   push edi
// 0060bc69  8d713c               lea esi, [ecx + 0x3c]
// 0060bc6c  8d442418             lea eax, [esp + 0x18]
// 0060bc70  50                   push eax
// 0060bc71  8d4c2410             lea ecx, [esp + 0x10]
// 0060bc75  51                   push ecx
// 0060bc76  8bce                 mov ecx, esi
// 0060bc78  e8d398ffff           call 0x605550
// 0060bc7d  8bf8                 mov edi, eax
// 0060bc7f  8b07                 mov eax, dword ptr [edi]
// 0060bc81  85c0                 test eax, eax
// 0060bc83  7404                 je 0x60bc89
// 0060bc85  3bc6                 cmp eax, esi
// 0060bc87  7406                 je 0x60bc8f
// 0060bc89  ff15d8e67700         call dword ptr [0x77e6d8]
// 0060bc8f  33c0                 xor eax, eax
// 0060bc91  395f04               cmp dword ptr [edi + 4], ebx
// 0060bc94  5f                   pop edi
// 0060bc95  5e                   pop esi
// 0060bc96  0f95c0               setne al
// 0060bc99  5b                   pop ebx
// 0060bc9a  83c408               add esp, 8
// 0060bc9d  c20400               ret 4

struct CXTCaptionButtonTheme {
    char pad[0x3c];
    int field_3c;
    int field_40;
    bool compare(int);
};

extern "C" void __stdcall _invalid_parameter_noinfo();

int __stdcall sub_00605550(int*, int*);

bool CXTCaptionButtonTheme::compare(int arg)
{
    int local1;
    int local2;
    int* p = &this->field_3c;
    int* result = (int*)sub_00605550(&local1, &local2);
    int* node = (int*)*result;
    if (node != 0 && node != p)
        _invalid_parameter_noinfo();
    return result[1] != this->field_40;
}
