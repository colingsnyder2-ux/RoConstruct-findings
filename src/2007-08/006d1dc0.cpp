// from server: 65% by colin
// roc 2007-08 006d1dc0  unit: CXTPReportInplaceList  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d1dc0
//
// 006d1dc0  56                   push esi
// 006d1dc1  8bf1                 mov esi, ecx
// 006d1dc3  837e6400             cmp dword ptr [esi + 0x64], 0
// 006d1dc7  741a                 je 0x6d1de3
// 006d1dc9  83be8000000000       cmp dword ptr [esi + 0x80], 0
// 006d1dd0  7511                 jne 0x6d1de3
// 006d1dd2  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 006d1dd5  8b01                 mov eax, dword ptr [ecx]
// 006d1dd7  8b8028010000         mov eax, dword ptr [eax + 0x128]
// 006d1ddd  8d5654               lea edx, [esi + 0x54]
// 006d1de0  52                   push edx
// 006d1de1  ffd0                 call eax
// 006d1de3  8bce                 mov ecx, esi
// 006d1de5  e854e4f5ff           call 0x63023e
// 006d1dea  8b16                 mov edx, dword ptr [esi]
// 006d1dec  8b4268               mov eax, dword ptr [edx + 0x68]
// 006d1def  8bce                 mov ecx, esi
// 006d1df1  ffd0                 call eax
// 006d1df3  5e                   pop esi
// 006d1df4  c20400               ret 4

struct CXTPReportInplaceList
{
    void func(int);
};

void CXTPReportInplaceList::func(int)
{
    if (*(int*)((char*)this + 0x64) != 0)
    {
        if (*(int*)((char*)this + 0x80) == 0)
        {
            int* p = *(int**)((char*)this + 0x64);
            int* vt = *(int**)p;
            void (__stdcall *fn)(void*) = *(void (__stdcall **)(void*))(vt + 0x128 / 4);
            fn((char*)this + 0x54);
        }
    }
    ((void (__thiscall*)(void*))0x63023e)(this);
    int* vt2 = *(int**)this;
    void (__thiscall *fn2)(void*) = *(void (__thiscall **)(void*))(vt2 + 0x68 / 4);
    fn2(this);
}
