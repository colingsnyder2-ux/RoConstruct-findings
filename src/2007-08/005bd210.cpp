// from server: 76% by colin
// roc 2007-08 005bd210  unit: RBX::VPVInstance::?$EnumPropDescriptor  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bd210
//
// 005bd210  56                   push esi
// 005bd211  57                   push edi
// 005bd212  8bf9                 mov edi, ecx
// 005bd214  807f0400             cmp byte ptr [edi + 4], 0
// 005bd218  740a                 je 0x5bd224
// 005bd21a  8b07                 mov eax, dword ptr [edi]
// 005bd21c  8b10                 mov edx, dword ptr [eax]
// 005bd21e  ffd2                 call edx
// 005bd220  c6470400             mov byte ptr [edi + 4], 0
// 005bd224  33f6                 xor esi, esi
// 005bd226  397718               cmp dword ptr [edi + 0x18], esi
// 005bd229  7e1c                 jle 0x5bd247
// 005bd22b  53                   push ebx
// 005bd22c  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005bd230  8b4714               mov eax, dword ptr [edi + 0x14]
// 005bd233  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 005bd236  8b11                 mov edx, dword ptr [ecx]
// 005bd238  8b420c               mov eax, dword ptr [edx + 0xc]
// 005bd23b  53                   push ebx
// 005bd23c  ffd0                 call eax
// 005bd23e  83c601               add esi, 1
// 005bd241  3b7718               cmp esi, dword ptr [edi + 0x18]
// 005bd244  7cea                 jl 0x5bd230
// 005bd246  5b                   pop ebx
// 005bd247  5f                   pop edi
// 005bd248  5e                   pop esi
// 005bd249  c20400               ret 4

struct EnumPropDescriptor {
    void* getset;
    char flag;
    char pad[3];
    char pad2[0x10];
    int count;
    void** items;
    void sub_5BD210(int);
};

void EnumPropDescriptor::sub_5BD210(int a)
{
    if (flag) {
        void* p = getset;
        void (*fn)(void*) = *(void (**)(void*))p;
        fn(p);
        flag = 0;
    }
    int i = 0;
    if (count > 0) {
        do {
            void* item = items[i];
            void* vt = *(void**)item;
            void (*fn)(void*, int) = *(void (**)(void*, int))((char*)vt + 0xc);
            fn(item, a);
            i++;
        } while (i < count);
    }
}
