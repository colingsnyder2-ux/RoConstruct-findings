// from server: 80% by colin
// roc 2007-08 006739d0  unit: CXTPCustomizeSheet  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006739d0
//
// 006739d0  8b81b8000000         mov eax, dword ptr [ecx + 0xb8]
// 006739d6  53                   push ebx
// 006739d7  8b5858               mov ebx, dword ptr [eax + 0x58]
// 006739da  53                   push ebx
// 006739db  e890feffff           call 0x673870
// 006739e0  85c0                 test eax, eax
// 006739e2  7431                 je 0x673a15
// 006739e4  56                   push esi
// 006739e5  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006739e9  8b16                 mov edx, dword ptr [esi]
// 006739eb  8b02                 mov eax, dword ptr [edx]
// 006739ed  57                   push edi
// 006739ee  6a01                 push 1
// 006739f0  8bce                 mov ecx, esi
// 006739f2  ffd0                 call eax
// 006739f4  8b3e                 mov edi, dword ptr [esi]
// 006739f6  8bcb                 mov ecx, ebx
// 006739f8  e88363fcff           call 0x639d80
// 006739fd  8b5704               mov edx, dword ptr [edi + 4]
// 00673a00  83e801               sub eax, 1
// 00673a03  f7d8                 neg eax
// 00673a05  1bc0                 sbb eax, eax
// 00673a07  83c001               add eax, 1
// 00673a0a  50                   push eax
// 00673a0b  8bce                 mov ecx, esi
// 00673a0d  ffd2                 call edx
// 00673a0f  5f                   pop edi
// 00673a10  5e                   pop esi
// 00673a11  5b                   pop ebx
// 00673a12  c20400               ret 4
// 00673a15  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00673a19  8b01                 mov eax, dword ptr [ecx]
// 00673a1b  8b10                 mov edx, dword ptr [eax]
// 00673a1d  5b                   pop ebx
// 00673a1e  c744240400000000     mov dword ptr [esp + 4], 0
// 00673a26  ffe2                 jmp edx

struct CXTPCustomizeSheet {
    char pad[0xb8];
    void* field_b8;
    void sub_6739D0(void* arg);
};

struct Page {
    virtual void v0(int);
    virtual void v1(int);
};

extern "C" int __stdcall sub_673870(void*);
extern "C" int __fastcall sub_639D80(void*);

void CXTPCustomizeSheet::sub_6739D0(void* arg)
{
    void* p = *(void**)((char*)field_b8 + 0x58);
    if (sub_673870(p))
    {
        Page* pg = (Page*)arg;
        pg->v0(1);
        int r = sub_639D80(p);
        int flag = (r - 1 != 0) ? 0 : 1;
        pg->v1(flag);
    }
    else
    {
        Page* pg = (Page*)arg;
        pg->v0(0);
    }
}
