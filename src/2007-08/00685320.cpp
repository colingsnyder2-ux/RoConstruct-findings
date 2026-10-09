// from server: 65% by colin
// roc 2007-08 00685320  unit: CXTPPropExchangeArchive  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00685320
//
// 00685320  56                   push esi
// 00685321  8bf1                 mov esi, ecx
// 00685323  8b06                 mov eax, dword ptr [esi]
// 00685325  8b9090000000         mov edx, dword ptr [eax + 0x90]
// 0068532b  ffd2                 call edx
// 0068532d  85c0                 test eax, eax
// 0068532f  7506                 jne 0x685337
// 00685331  33c0                 xor eax, eax
// 00685333  5e                   pop esi
// 00685334  c20c00               ret 0xc
// 00685337  837e2400             cmp dword ptr [esi + 0x24], 0
// 0068533b  7518                 jne 0x685355
// 0068533d  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00685341  8b08                 mov ecx, dword ptr [eax]
// 00685343  51                   push ecx
// 00685344  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 00685347  e860360b00           call 0x7389ac
// 0068534c  b801000000           mov eax, 1
// 00685351  5e                   pop esi
// 00685352  c20c00               ret 0xc
// 00685355  8b442410             mov eax, dword ptr [esp + 0x10]
// 00685359  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 0068535c  6a00                 push 0
// 0068535e  8d5628               lea edx, [esi + 0x28]
// 00685361  52                   push edx
// 00685362  50                   push eax
// 00685363  e83e360b00           call 0x7389a6
// 00685368  85c0                 test eax, eax
// 0068536a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0068536e  8901                 mov dword ptr [ecx], eax
// 00685370  74bf                 je 0x685331
// 00685372  b801000000           mov eax, 1
// 00685377  5e                   pop esi
// 00685378  c20c00               ret 0xc

struct CXTPPropExchangeArchive {
    virtual int IsLoading();
    int field_0x24;
    int field_0x28;
    int field_0x40;
    int Exchange(int* value, int a, int b);
};

extern "C" int __cdecl sub_7389AC(int, int);
extern "C" int __cdecl sub_7389A6(int, int, int, int);

int CXTPPropExchangeArchive::Exchange(int* value, int a, int b)
{
    if (IsLoading() != 0)
        return 0;

    if (field_0x24 == 0)
    {
        int v = *value;
        sub_7389AC(field_0x40, v);
        return 1;
    }

    int v = sub_7389A6(field_0x40, b, (int)&field_0x28, 0);
    *value = v;
    if (v == 0)
        return 0;

    return 1;
}
