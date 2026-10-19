// from server: 56% by colin
// from server: 55% by colin
// roc 2008-06 005d9f70  unit: RBX::VPartInstance::?$FilteredSelection  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d9f70
//
// 005d9f70  83ec08               sub esp, 8
// 005d9f73  56                   push esi
// 005d9f74  57                   push edi
// 005d9f75  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005d9f79  8b07                 mov eax, dword ptr [edi]
// 005d9f7b  6a00                 push 0
// 005d9f7d  6850dd9200           push 0x92dd50
// 005d9f82  687c909200           push 0x92907c
// 005d9f87  6a00                 push 0
// 005d9f89  50                   push eax
// 005d9f8a  8bf1                 mov esi, ecx
// 005d9f8c  e835780c00           call 0x6a17c6
// 005d9f91  83c414               add esp, 0x14
// 005d9f94  89442414             mov dword ptr [esp + 0x14], eax
// 005d9f98  85c0                 test eax, eax
// 005d9f9a  740d                 je 0x5d9fa9
// 005d9f9c  8d442414             lea eax, [esp + 0x14]
// 005d9fa0  50                   push eax
// 005d9fa1  8d4e0c               lea ecx, [esi + 0xc]
// 005d9fa4  e8f773e4ff           call 0x4213a0
// 005d9fa9  8b7f08               mov edi, dword ptr [edi + 8]
// 005d9fac  897c2414             mov dword ptr [esp + 0x14], edi
// 005d9fb0  85ff                 test edi, edi
// 005d9fb2  746d                 je 0x5da021
// 005d9fb4  83c60c               add esi, 0xc
// 005d9fb7  53                   push ebx
// 005d9fb8  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 005d9fbb  55                   push ebp
// 005d9fbc  395e0c               cmp dword ptr [esi + 0xc], ebx
// 005d9fbf  7606                 jbe 0x5d9fc7
// 005d9fc1  ff1590288000         call dword ptr [0x802890]
// 005d9fc7  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 005d9fca  3b7e10               cmp edi, dword ptr [esi + 0x10]
// 005d9fcd  7606                 jbe 0x5d9fd5
// 005d9fcf  ff1590288000         call dword ptr [0x802890]
// 005d9fd5  8b2e                 mov ebp, dword ptr [esi]
// 005d9fd7  897c2414             mov dword ptr [esp + 0x14], edi
// 005d9fdb  3bfb                 cmp edi, ebx
// 005d9fdd  7410                 je 0x5d9fef
// 005d9fdf  90                   nop 
// 005d9fe0  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005d9fe4  390f                 cmp dword ptr [edi], ecx
// 005d9fe6  7407                 je 0x5d9fef
// 005d9fe8  83c704               add edi, 4
// 005d9feb  3bfb                 cmp edi, ebx
// 005d9fed  75f1                 jne 0x5d9fe0
// 005d9fef  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 005d9ff2  395e0c               cmp dword ptr [esi + 0xc], ebx
// 005d9ff5  7606                 jbe 0x5d9ffd
// 005d9ff7  ff1590288000         call dword ptr [0x802890]
// 005d9ffd  8b06                 mov eax, dword ptr [esi]
// 005d9fff  85ed                 test ebp, ebp
// 005da001  7404                 je 0x5da007
// 005da003  3be8                 cmp ebp, eax
// 005da005  7406                 je 0x5da00d
// 005da007  ff1590288000         call dword ptr [0x802890]
// 005da00d  3bfb                 cmp edi, ebx
// 005da00f  740e                 je 0x5da01f
// 005da011  57                   push edi
// 005da012  55                   push ebp
// 005da013  8d542418             lea edx, [esp + 0x18]
// 005da017  52                   push edx
// 005da018  8bce                 mov ecx, esi
// 005da01a  e811f8e7ff           call 0x459830
// 005da01f  5d                   pop ebp
// 005da020  5b                   pop ebx
// 005da021  5f                   pop edi
// 005da022  5e                   pop esi
// 005da023  83c408               add esp, 8
// 005da026  c20400               ret 4
#include <intrin.h>

extern "C" void* __cdecl cast_object(void*, long, const void*, const void*, int);
extern "C" void __cdecl invalid_parameter_noinfo();

extern char instance_type;
extern char part_type;

struct Selection
{
    void* owner;
    void** first;
    void** last;

    void insert(void* const*);
    void** erase(void**, void*, void**);
};

struct Argument
{
    void* object;
    unsigned int reserved;
    void* removed;
};

struct S
{
    unsigned int reserved[3];
    Selection selection;

    void update(Argument*);
};

void S::update(Argument* argument)
{
    Argument* original = argument;
    _ReadWriteBarrier();
    void* obj = cast_object(original->object, 0, &instance_type, &part_type, 0);

    if (obj)
        selection.insert(&obj);

    void* removed = original->removed;
    if (removed)
    {
        void** finish = selection.last;
        if (selection.first > finish)
            invalid_parameter_noinfo();

        void** current = selection.first;
        if (current > selection.last)
            invalid_parameter_noinfo();

        void* owner = selection.owner;

        while (current != finish)
        {
            if (*current == removed)
                break;
            ++current;
        }

        finish = selection.last;
        if (selection.first > finish)
            invalid_parameter_noinfo();

        if (!owner || owner != selection.owner)
            invalid_parameter_noinfo();

        if (current != finish)
            selection.erase(current, owner, current);
    }
}
