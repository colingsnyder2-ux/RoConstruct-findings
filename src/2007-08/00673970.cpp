// from server: 89% by colin
// roc 2007-08 00673970  unit: CXTPCustomizeSheet  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00673970
//
// 00673970  8b81b8000000         mov eax, dword ptr [ecx + 0xb8]
// 00673976  57                   push edi
// 00673977  8b7858               mov edi, dword ptr [eax + 0x58]
// 0067397a  57                   push edi
// 0067397b  e8f0feffff           call 0x673870
// 00673980  85c0                 test eax, eax
// 00673982  742f                 je 0x6739b3
// 00673984  53                   push ebx
// 00673985  56                   push esi
// 00673986  8b742410             mov esi, dword ptr [esp + 0x10]
// 0067398a  8b16                 mov edx, dword ptr [esi]
// 0067398c  8b02                 mov eax, dword ptr [edx]
// 0067398e  6a01                 push 1
// 00673990  8bce                 mov ecx, esi
// 00673992  ffd0                 call eax
// 00673994  8b1e                 mov ebx, dword ptr [esi]
// 00673996  8bcf                 mov ecx, edi
// 00673998  e8e363fcff           call 0x639d80
// 0067399d  8b5304               mov edx, dword ptr [ebx + 4]
// 006739a0  33c9                 xor ecx, ecx
// 006739a2  83f803               cmp eax, 3
// 006739a5  0f94c1               sete cl
// 006739a8  51                   push ecx
// 006739a9  8bce                 mov ecx, esi
// 006739ab  ffd2                 call edx
// 006739ad  5e                   pop esi
// 006739ae  5b                   pop ebx
// 006739af  5f                   pop edi
// 006739b0  c20400               ret 4
// 006739b3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006739b7  8b01                 mov eax, dword ptr [ecx]
// 006739b9  8b10                 mov edx, dword ptr [eax]
// 006739bb  5f                   pop edi
// 006739bc  c744240400000000     mov dword ptr [esp + 4], 0
// 006739c4  ffe2                 jmp edx

struct CXTPCustomizeSheet;

struct CXTPCustomizeSheet_Inner {
    virtual void v0(int);
    virtual void v1(int);
};

struct CXTPCustomizeSheet {
    char pad[0xb8];
    void* field_b8;

    void func(int);
};

extern "C" int __stdcall sub_673870(void*);
extern "C" int __stdcall sub_639d80(void*);

void CXTPCustomizeSheet::func(int arg)
{
    void* p = *(void**)((char*)field_b8 + 0x58);
    if (sub_673870(p))
    {
        CXTPCustomizeSheet_Inner* inner = (CXTPCustomizeSheet_Inner*)arg;
        inner->v0(1);
        int r = sub_639d80(p);
        inner->v1(r == 3 ? 1 : 0);
    }
    else
    {
        CXTPCustomizeSheet_Inner* inner2 = (CXTPCustomizeSheet_Inner*)arg;
        inner2->v0(0);
    }
}
