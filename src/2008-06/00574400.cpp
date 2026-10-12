// from server: 83% by king_originala
// roc 2008-06 00574400  unit: RBX::UnifiedWidget  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00574400
//
// 00574400  83ec08               sub esp, 8
// 00574403  53                   push ebx
// 00574404  55                   push ebp
// 00574405  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00574409  56                   push esi
// 0057440a  8bd9                 mov ebx, ecx
// 0057440c  8b03                 mov eax, dword ptr [ebx]
// 0057440e  8b5068               mov edx, dword ptr [eax + 0x68]
// 00574411  57                   push edi
// 00574412  55                   push ebp
// 00574413  ffd2                 call edx
// 00574415  8bcb                 mov ecx, ebx
// 00574417  33ff                 xor edi, edi
// 00574419  e8026af1ff           call 0x48ae20
// 0057441e  85c0                 test eax, eax
// 00574420  766b                 jbe 0x57448d
// 00574422  8bb308010000         mov esi, dword ptr [ebx + 0x108]
// 00574428  8b4610               mov eax, dword ptr [esi + 0x10]
// 0057442b  2b460c               sub eax, dword ptr [esi + 0xc]
// 0057442e  c1f803               sar eax, 3
// 00574431  3bf8                 cmp edi, eax
// 00574433  7206                 jb 0x57443b
// 00574435  ff1590288000         call dword ptr [0x802890]
// 0057443b  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0057443e  8b04f9               mov eax, dword ptr [ecx + edi*8]
// 00574441  6a00                 push 0
// 00574443  68d8b89200           push 0x92b8d8
// 00574448  687c909200           push 0x92907c
// 0057444d  6a00                 push 0
// 0057444f  50                   push eax
// 00574450  e871d31200           call 0x6a17c6
// 00574455  83c414               add esp, 0x14
// 00574458  85c0                 test eax, eax
// 0057445a  7425                 je 0x574481
// 0057445c  3b442420             cmp eax, dword ptr [esp + 0x20]
// 00574460  742b                 je 0x57448d
// 00574462  8b13                 mov edx, dword ptr [ebx]
// 00574464  8b526c               mov edx, dword ptr [edx + 0x6c]
// 00574467  8d442410             lea eax, [esp + 0x10]
// 0057446b  50                   push eax
// 0057446c  8bcb                 mov ecx, ebx
// 0057446e  ffd2                 call edx
// 00574470  d94500               fld dword ptr [ebp]
// 00574473  d800                 fadd dword ptr [eax]
// 00574475  d95d00               fstp dword ptr [ebp]
// 00574478  d94004               fld dword ptr [eax + 4]
// 0057447b  d84504               fadd dword ptr [ebp + 4]
// 0057447e  d95d04               fstp dword ptr [ebp + 4]
// 00574481  8bcb                 mov ecx, ebx
// 00574483  47                   inc edi
// 00574484  e89769f1ff           call 0x48ae20
// 00574489  3bf8                 cmp edi, eax
// 0057448b  7295                 jb 0x574422
// 0057448d  5f                   pop edi
// 0057448e  5e                   pop esi
// 0057448f  8bc5                 mov eax, ebp
// 00574491  5d                   pop ebp
// 00574492  5b                   pop ebx
// 00574493  83c408               add esp, 8
// 00574496  c20800               ret 8

extern "C" {
    extern void (__cdecl* invalid_parameter_noinfo)();
    void* __cdecl runtime_cast(void*, long, void*, void*, int);
    extern char instance_type;
    extern char gui_item_type;
}

struct Vec2 {
    float x, y;
};

struct Entry {
    void* object;
    void* owner;
};

struct Children {
    char padding[12];
    Entry* first;
    Entry* last;
};

struct GuiItem {
    virtual void v00();
    virtual void v01();
    virtual void v02();
    virtual void v03();
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual void v07();
    virtual void v08();
    virtual void v09();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual Vec2 initial();
    virtual Vec2 offset();

    char padding[0x104];
    Children* children;

    unsigned int count();
    Vec2 f(GuiItem* stop);
};

Vec2 GuiItem::f(GuiItem* stop)
{
    Vec2 result = initial();
    for (unsigned int i = 0; i < count(); ++i) {
        Children* list = children;
        if (i >= static_cast<unsigned int>(list->last - list->first))
            invalid_parameter_noinfo();

        GuiItem* item = static_cast<GuiItem*>(
            runtime_cast(list->first[i].object, 0,
                         &instance_type, &gui_item_type, 0));
        if (item) {
            if (item == stop)
                break;

            const Vec2& value = offset();
            result.x = result.x + value.x;
            result.y = value.y + result.y;
        }
    }
    return result;
}
