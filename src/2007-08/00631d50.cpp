// from server: 100% by colin
// roc 2007-08 00631d50  unit: CXTPCommandBars  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00631d50
//
// 00631d50  8b89a0000000         mov ecx, dword ptr [ecx + 0xa0]
// 00631d56  56                   push esi
// 00631d57  8b742408             mov esi, dword ptr [esp + 8]
// 00631d5b  8b06                 mov eax, dword ptr [esi]
// 00631d5d  8b90f4010000         mov edx, dword ptr [eax + 0x1f4]
// 00631d63  6a00                 push 0
// 00631d65  51                   push ecx
// 00631d66  8bce                 mov ecx, esi
// 00631d68  ffd2                 call edx
// 00631d6a  85c0                 test eax, eax
// 00631d6c  7504                 jne 0x631d72
// 00631d6e  5e                   pop esi
// 00631d6f  c20c00               ret 0xc
// 00631d72  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00631d76  57                   push edi
// 00631d77  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00631d7b  50                   push eax
// 00631d7c  56                   push esi
// 00631d7d  8bcf                 mov ecx, edi
// 00631d7f  e84c0c0700           call 0x6a29d0
// 00631d84  8bcf                 mov ecx, edi
// 00631d86  e865f20600           call 0x6a0ff0
// 00631d8b  8986fc000000         mov dword ptr [esi + 0xfc], eax
// 00631d91  5f                   pop edi
// 00631d92  b801000000           mov eax, 1
// 00631d97  5e                   pop esi
// 00631d98  c20c00               ret 0xc

struct CXTPCommandBars {
    char pad[0xa0];
    void* m_p;
    int Func(int, int, int);
};

struct SubA {
    int Method(void*, int);
};

extern "C" int __stdcall sub_6A29D0(void*, void*, int);
extern "C" int __stdcall sub_6A0FF0(void*);

int CXTPCommandBars::Func(int a2, int a3, int a4)
{
    void* p = m_p;
    int r = (*(int (__thiscall**)(int, void*, int))(*(int*)a2 + 0x1f4))(a2, p, 0);
    if (r == 0)
        return 0;
    ((SubA*)a4)->Method((void*)a2, a3);
    int v = ((int (__thiscall*)(void*))sub_6A0FF0)((void*)a4);
    *(int*)((char*)a2 + 0xfc) = v;
    return 1;
}
