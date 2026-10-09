// from server: 94% by colin
// roc 2007-08 00655ce0  unit: CXTPReportControl  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00655ce0
//
// 00655ce0  57                   push edi
// 00655ce1  8bf9                 mov edi, ecx
// 00655ce3  837f5c00             cmp dword ptr [edi + 0x5c], 0
// 00655ce7  740b                 je 0x655cf4
// 00655ce9  c7475801000000       mov dword ptr [edi + 0x58], 1
// 00655cf0  5f                   pop edi
// 00655cf1  c20400               ret 4
// 00655cf4  8b8fa0000000         mov ecx, dword ptr [edi + 0xa0]
// 00655cfa  53                   push ebx
// 00655cfb  56                   push esi
// 00655cfc  e84fdf0000           call 0x663c50
// 00655d01  8bd8                 mov ebx, eax
// 00655d03  33f6                 xor esi, esi
// 00655d05  85db                 test ebx, ebx
// 00655d07  7e1f                 jle 0x655d28
// 00655d09  8da42400000000       lea esp, [esp]
// 00655d10  8b8fa0000000         mov ecx, dword ptr [edi + 0xa0]
// 00655d16  8b01                 mov eax, dword ptr [ecx]
// 00655d18  8b505c               mov edx, dword ptr [eax + 0x5c]
// 00655d1b  56                   push esi
// 00655d1c  ffd2                 call edx
// 00655d1e  897028               mov dword ptr [eax + 0x28], esi
// 00655d21  83c601               add esi, 1
// 00655d24  3bf3                 cmp esi, ebx
// 00655d26  7ce8                 jl 0x655d10
// 00655d28  837c241000           cmp dword ptr [esp + 0x10], 0
// 00655d2d  5e                   pop esi
// 00655d2e  5b                   pop ebx
// 00655d2f  740c                 je 0x655d3d
// 00655d31  8b07                 mov eax, dword ptr [edi]
// 00655d33  8b9054010000         mov edx, dword ptr [eax + 0x154]
// 00655d39  8bcf                 mov ecx, edi
// 00655d3b  ffd2                 call edx
// 00655d3d  5f                   pop edi
// 00655d3e  c20400               ret 4

struct CXTPReportControl {
    void SetChanged(int);
    int GetCount();
    void* GetAt(int);
    void OnChanged();
};

extern "C" int __stdcall sub_663C50(void*);

void CXTPReportControl::SetChanged(int flag)
{
    if (*(int*)((char*)this + 0x5c) != 0)
    {
        *(int*)((char*)this + 0x58) = 1;
        return;
    }

    int count = sub_663C50(*(void**)((char*)this + 0xa0));
    int i = 0;
    if (count > 0)
    {
        do
        {
            void* p = *(void**)((char*)this + 0xa0);
            void** vtbl = *(void***)p;
            void* item = ((void* (__thiscall*)(void*, int))vtbl[0x17])(p, i);
            *(int*)((char*)item + 0x28) = i;
            i++;
        } while (i < count);
    }

    if (flag != 0)
    {
        void** vtbl = *(void***)this;
        ((void (__thiscall*)(void*))vtbl[0x55])(this);
    }
}
