// from server: 93% by colin
// roc 2007-08 005463c0  unit: RBX::MD5HasherImpl  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005463c0
//
// 005463c0  8b442408             mov eax, dword ptr [esp + 8]
// 005463c4  83f802               cmp eax, 2
// 005463c7  7519                 jne 0x5463e2
// 005463c9  56                   push esi
// 005463ca  8b742408             mov esi, dword ptr [esp + 8]
// 005463ce  56                   push esi
// 005463cf  b948bd8900           mov ecx, 0x89bd48
// 005463d4  ff1508e77700         call dword ptr [0x77e708]
// 005463da  f6d8                 neg al
// 005463dc  1bc0                 sbb eax, eax
// 005463de  23c6                 and eax, esi
// 005463e0  5e                   pop esi
// 005463e1  c3                   ret 
// 005463e2  85c0                 test eax, eax
// 005463e4  751d                 jne 0x546403
// 005463e6  6a08                 push 8
// 005463e8  e8099b0e00           call 0x62fef6
// 005463ed  83c404               add esp, 4
// 005463f0  85c0                 test eax, eax
// 005463f2  741e                 je 0x546412
// 005463f4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005463f8  8b11                 mov edx, dword ptr [ecx]
// 005463fa  8910                 mov dword ptr [eax], edx
// 005463fc  8b4904               mov ecx, dword ptr [ecx + 4]
// 005463ff  894804               mov dword ptr [eax + 4], ecx
// 00546402  c3                   ret 
// 00546403  8b542404             mov edx, dword ptr [esp + 4]
// 00546407  52                   push edx
// 00546408  e855980e00           call 0x62fc62
// 0054640d  83c404               add esp, 4
// 00546410  33c0                 xor eax, eax
// 00546412  c3                   ret 

struct type_info
{
    bool operator==(const type_info&) const;
};

extern "C" void* __cdecl malloc(unsigned int);
extern "C" void __cdecl free(void*);
extern "C" void __cdecl sub_0062fc62(void*);
extern "C" void* __cdecl sub_0062fef6(unsigned int);

extern type_info type_info_89bd48;

void* func_005463c0(void* self, int mode, void* arg)
{
    if (mode == 2)
    {
        if (type_info_89bd48 == *(type_info*)arg)
            return arg;
        return 0;
    }
    if (mode == 0)
    {
        void* p = sub_0062fef6(8);
        if (p)
        {
            *(int*)p = *(int*)self;
            *(int*)((char*)p + 4) = *(int*)((char*)self + 4);
        }
        return p;
    }
    sub_0062fc62(self);
    return 0;
}
