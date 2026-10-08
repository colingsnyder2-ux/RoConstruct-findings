// from server: 80% by colin
// roc 2007-08 005bd1d0  unit: RBX::VPVInstance::?$EnumPropDescriptor  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bd1d0
//
// 005bd1d0  56                   push esi
// 005bd1d1  57                   push edi
// 005bd1d2  8bf9                 mov edi, ecx
// 005bd1d4  807f0400             cmp byte ptr [edi + 4], 0
// 005bd1d8  740a                 je 0x5bd1e4
// 005bd1da  8b07                 mov eax, dword ptr [edi]
// 005bd1dc  8b10                 mov edx, dword ptr [eax]
// 005bd1de  ffd2                 call edx
// 005bd1e0  c6470400             mov byte ptr [edi + 4], 0
// 005bd1e4  33f6                 xor esi, esi
// 005bd1e6  39770c               cmp dword ptr [edi + 0xc], esi
// 005bd1e9  7e1c                 jle 0x5bd207
// 005bd1eb  53                   push ebx
// 005bd1ec  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005bd1f0  8b4708               mov eax, dword ptr [edi + 8]
// 005bd1f3  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 005bd1f6  8b11                 mov edx, dword ptr [ecx]
// 005bd1f8  8b4208               mov eax, dword ptr [edx + 8]
// 005bd1fb  53                   push ebx
// 005bd1fc  ffd0                 call eax
// 005bd1fe  83c601               add esi, 1
// 005bd201  3b770c               cmp esi, dword ptr [edi + 0xc]
// 005bd204  7cea                 jl 0x5bd1f0
// 005bd206  5b                   pop ebx
// 005bd207  5f                   pop edi
// 005bd208  5e                   pop esi
// 005bd209  c20400               ret 4

struct EnumPropDescriptor {
    void* getset;
    char flag;
    char pad[3];
    int count;
    void** items;
    void destroy(void* arg);
};

void EnumPropDescriptor::destroy(void* arg)
{
    if (flag) {
        void* p = getset;
        (*(void (__thiscall**)(void*))p)(p);
        flag = 0;
    }
    int i = 0;
    if (count > 0) {
        do {
            void* item = items[i];
            (*(void (__thiscall**)(void*, void*))(*(void**)item))(item, arg);
            i++;
        } while (i < count);
    }
}
