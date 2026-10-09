// from server: 82% by colin
// roc 2007-08 0064ef00  unit: CXTPToolBar  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0064ef00
//
// 0064ef00  53                   push ebx
// 0064ef01  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0064ef05  56                   push esi
// 0064ef06  57                   push edi
// 0064ef07  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0064ef0b  8bf1                 mov esi, ecx
// 0064ef0d  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 0064ef13  57                   push edi
// 0064ef14  53                   push ebx
// 0064ef15  e886ba0200           call 0x67a9a0
// 0064ef1a  85c0                 test eax, eax
// 0064ef1c  751b                 jne 0x64ef39
// 0064ef1e  398684010000         cmp dword ptr [esi + 0x184], eax
// 0064ef24  7413                 je 0x64ef39
// 0064ef26  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 0064ef2c  8b01                 mov eax, dword ptr [ecx]
// 0064ef2e  8b500c               mov edx, dword ptr [eax + 0xc]
// 0064ef31  ffd2                 call edx
// 0064ef33  5f                   pop edi
// 0064ef34  5e                   pop esi
// 0064ef35  5b                   pop ebx
// 0064ef36  c20c00               ret 0xc
// 0064ef39  8b442410             mov eax, dword ptr [esp + 0x10]
// 0064ef3d  57                   push edi
// 0064ef3e  53                   push ebx
// 0064ef3f  50                   push eax
// 0064ef40  8bce                 mov ecx, esi
// 0064ef42  e80955ffff           call 0x644450
// 0064ef47  5f                   pop edi
// 0064ef48  5e                   pop esi
// 0064ef49  5b                   pop ebx
// 0064ef4a  c20c00               ret 0xc

struct CXTPToolBar {
    char pad[0xf8];
    void* field_f8;
    char pad2[0x184 - 0xf8 - 4];
    void* field_184;
    int sub_67a9a0(void*, void*);
    int sub_644450(void*, void*, void*);
    int func(void*, void*, void*);
};

int CXTPToolBar::func(void* a, void* b, void* c)
{
    int result = sub_67a9a0(b, c);
    if (result == 0 && field_184 != 0) {
        void** vtbl = *(void***)field_184;
        int (__thiscall *fn)(void*) = (int (__thiscall *)(void*))vtbl[3];
        fn(field_184);
        return 0;
    }
    return sub_644450(a, b, c);
}
