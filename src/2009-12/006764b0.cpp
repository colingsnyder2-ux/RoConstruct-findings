// roc 2009-12 006764b0  unit: RBX::UnifiedWidget  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006764b0
//
// 006764b0  8d4424e4             lea eax, [esp - 0x1c]
// 006764b4  83ec1c               sub esp, 0x1c
// 006764b7  50                   push eax
// 006764b8  e883ffffff           call 0x676440
// 006764bd  83c404               add esp, 4
// 006764c0  83781810             cmp dword ptr [eax + 0x18], 0x10
// 006764c4  7217                 jb 0x6764dd
// 006764c6  8b4004               mov eax, dword ptr [eax + 4]
// 006764c9  50                   push eax
// 006764ca  ff1514b39800         call dword ptr [0x98b314]
// 006764d0  8d0c24               lea ecx, [esp]
// 006764d3  ff15e4b69800         call dword ptr [0x98b6e4]
// 006764d9  83c41c               add esp, 0x1c
// 006764dc  c3                   ret 
// 006764dd  83c004               add eax, 4
// 006764e0  50                   push eax
// 006764e1  ff1514b39800         call dword ptr [0x98b314]
// 006764e7  8d0c24               lea ecx, [esp]
// 006764ea  ff15e4b69800         call dword ptr [0x98b6e4]
// 006764f0  83c41c               add esp, 0x1c
// 006764f3  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000000_005684d0@@YAXXZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct S {
    unsigned int allocator;
    union {
        char buffer[16];
        char* pointer;
    } storage;
    unsigned int length;
    unsigned int capacity;
};

extern S* __cdecl func_00568460(S*);
extern int (__stdcall *DeleteFileA)(const char*);
extern void (__thiscall *destroy_string)(S*);

void func_005684d0()
{
    S temporary;
    S* result = func_00568460(&temporary);
    DeleteFileA(result->capacity >= 16
        ? result->storage.pointer
        : result->storage.buffer);
    destroy_string(&temporary);
}