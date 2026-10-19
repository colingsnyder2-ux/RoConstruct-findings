// from server: 72% by colin
// from server: 70% by king_originala
// roc 2008-06 005fdaf0  unit: RBX::Tool  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fdaf0
//
// 005fdaf0  53                   push ebx
// 005fdaf1  55                   push ebp
// 005fdaf2  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 005fdaf6  56                   push esi
// 005fdaf7  57                   push edi
// 005fdaf8  8bd9                 mov ebx, ecx
// 005fdafa  33ff                 xor edi, edi
// 005fdafc  8d642400             lea esp, [esp]
// 005fdb00  8b8358ffffff         mov eax, dword ptr [ebx - 0xa8]
// 005fdb06  85c0                 test eax, eax
// 005fdb08  7455                 je 0x5fdb5f
// 005fdb0a  8b4810               mov ecx, dword ptr [eax + 0x10]
// 005fdb0d  2b480c               sub ecx, dword ptr [eax + 0xc]
// 005fdb10  c1f903               sar ecx, 3
// 005fdb13  3bf9                 cmp edi, ecx
// 005fdb15  7348                 jae 0x5fdb5f
// 005fdb17  8bf0                 mov esi, eax
// 005fdb19  8b5610               mov edx, dword ptr [esi + 0x10]
// 005fdb1c  2b560c               sub edx, dword ptr [esi + 0xc]
// 005fdb1f  c1fa03               sar edx, 3
// 005fdb22  3bfa                 cmp edi, edx
// 005fdb24  7206                 jb 0x5fdb2c
// 005fdb26  ff1590288000         call dword ptr [0x802890]
// 005fdb2c  8b460c               mov eax, dword ptr [esi + 0xc]
// 005fdb2f  8b04f8               mov eax, dword ptr [eax + edi*8]
// 005fdb32  6a00                 push 0
// 005fdb34  68709f9300           push 0x939f70
// 005fdb39  687c909200           push 0x92907c
// 005fdb3e  6a00                 push 0
// 005fdb40  50                   push eax
// 005fdb41  e8803c0a00           call 0x6a17c6
// 005fdb46  83c414               add esp, 0x14
// 005fdb49  85c0                 test eax, eax
// 005fdb4b  740f                 je 0x5fdb5c
// 005fdb4d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005fdb51  8b10                 mov edx, dword ptr [eax]
// 005fdb53  8b5210               mov edx, dword ptr [edx + 0x10]
// 005fdb56  55                   push ebp
// 005fdb57  51                   push ecx
// 005fdb58  8bc8                 mov ecx, eax
// 005fdb5a  ffd2                 call edx
// 005fdb5c  47                   inc edi
// 005fdb5d  eba1                 jmp 0x5fdb00
// 005fdb5f  5f                   pop edi
// 005fdb60  5e                   pop esi
// 005fdb61  5d                   pop ebp
// 005fdb62  5b                   pop ebx
// 005fdb63  c20800               ret 8

extern "C" void (__cdecl* _invalid_parameter_noinfo)();
extern "C" void* __cdecl __RTDynamicCast(void*, long, void*, void*, int);

struct Entry {
    void* object;
    void* get() const { return object; }
    void* control;
};

struct Children {
    char padding[12];
    Entry* volatile first;
    Entry* volatile last;

    unsigned int size() const;
    Entry& at(unsigned int);
};

__forceinline unsigned int Children::size() const
{
    Entry* end = last;
    Entry* begin = first;
    return (unsigned int)(end - begin);
}

__forceinline Entry& Children::at(unsigned int i)
{
    if (i >= size())
        _invalid_parameter_noinfo();
    return first[i];
}

struct Renderable {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void render(void*, void*);
};

struct S {
    void f(void*, void*);
};

void S::f(void* a, void* b)
{
    for (unsigned int i = 0;
         i < (*(Children**)((char*)this - 0xa8)
                  ? (*(Children**)((char*)this - 0xa8))->size()
                  : 0);
         ++i) {
        Children* children = *(Children**)((char*)this - 0xa8);
        Renderable* object = (Renderable*)__RTDynamicCast(
            children->at(i).get(), 0,
            (void*)0x92907c, (void*)0x939f70, 0);
        if (object)
            object->render(a, b);
    }
}
