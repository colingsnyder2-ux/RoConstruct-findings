// from server: 100% by colin
// roc 2008-06 00574280  unit: RBX::UnifiedWidget  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00574280
//
// 00574280  53                   push ebx
// 00574281  8bd9                 mov ebx, ecx
// 00574283  83bb4401000002       cmp dword ptr [ebx + 0x144], 2
// 0057428a  7c67                 jl 0x5742f3
// 0057428c  57                   push edi
// 0057428d  33ff                 xor edi, edi
// 0057428f  e88c6bf1ff           call 0x48ae20
// 00574294  85c0                 test eax, eax
// 00574296  765a                 jbe 0x5742f2
// 00574298  55                   push ebp
// 00574299  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0057429d  56                   push esi
// 0057429e  8bff                 mov edi, edi
// 005742a0  8bb308010000         mov esi, dword ptr [ebx + 0x108]
// 005742a6  8b4610               mov eax, dword ptr [esi + 0x10]
// 005742a9  2b460c               sub eax, dword ptr [esi + 0xc]
// 005742ac  c1f803               sar eax, 3
// 005742af  3bf8                 cmp edi, eax
// 005742b1  7206                 jb 0x5742b9
// 005742b3  ff1590288000         call dword ptr [0x802890]
// 005742b9  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005742bc  8b04f9               mov eax, dword ptr [ecx + edi*8]
// 005742bf  6a00                 push 0
// 005742c1  68d8b89200           push 0x92b8d8
// 005742c6  687c909200           push 0x92907c
// 005742cb  6a00                 push 0
// 005742cd  50                   push eax
// 005742ce  e8f3d41200           call 0x6a17c6
// 005742d3  83c414               add esp, 0x14
// 005742d6  85c0                 test eax, eax
// 005742d8  740a                 je 0x5742e4
// 005742da  8b10                 mov edx, dword ptr [eax]
// 005742dc  8bc8                 mov ecx, eax
// 005742de  8b4260               mov eax, dword ptr [edx + 0x60]
// 005742e1  55                   push ebp
// 005742e2  ffd0                 call eax
// 005742e4  8bcb                 mov ecx, ebx
// 005742e6  47                   inc edi
// 005742e7  e8346bf1ff           call 0x48ae20
// 005742ec  3bf8                 cmp edi, eax
// 005742ee  72b0                 jb 0x5742a0
// 005742f0  5e                   pop esi
// 005742f1  5d                   pop ebp
// 005742f2  5f                   pop edi
// 005742f3  5b                   pop ebx
// 005742f4  c20400               ret 4

struct GuiItem {
    void (__thiscall **vtable)(GuiItem *, int);
};

struct Entry {
    void *object;
    void *control;
};

struct Children {
    char pad[12];
    Entry *begin;
    Entry *end;
};

extern "C" void (__cdecl *invalid_parameter_noinfo)();
extern "C" void *__cdecl __RTDynamicCast(void *, long, void *, void *, int);

extern char instance_type;
extern char gui_item_type;

struct S_func_00574280 {
    char pad0[0x108];
    Children *children;
    char pad1[0x38];
    int state;

    unsigned int count();
    void f(int argument);
};

void S_func_00574280::f(int argument)
{
    if (state >= 2) {
        for (unsigned int i = 0; i < count(); ++i) {
            Children *list = children;
            if (i >= static_cast<unsigned int>(list->end - list->begin))
                invalid_parameter_noinfo();

            void *object = list->begin[i].object;
            GuiItem *item = static_cast<GuiItem *>(
                __RTDynamicCast(object, 0,
                                &instance_type, &gui_item_type, 0));

            if (item)
                item->vtable[24](item, argument);
        }
    }
}
