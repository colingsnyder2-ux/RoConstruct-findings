// roc 2010-06 005df330  unit: RBX::UnifiedWidget  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005df330
//
// 005df330  8d4424e4             lea eax, [esp - 0x1c]
// 005df334  83ec1c               sub esp, 0x1c
// 005df337  50                   push eax
// 005df338  e883ffffff           call 0x5df2c0
// 005df33d  83c404               add esp, 4
// 005df340  83781810             cmp dword ptr [eax + 0x18], 0x10
// 005df344  7217                 jb 0x5df35d
// 005df346  8b4004               mov eax, dword ptr [eax + 4]
// 005df349  50                   push eax
// 005df34a  ff1520a39e00         call dword ptr [0x9ea320]
// 005df350  8d0c24               lea ecx, [esp]
// 005df353  ff1500a49e00         call dword ptr [0x9ea400]
// 005df359  83c41c               add esp, 0x1c
// 005df35c  c3                   ret 
// 005df35d  83c004               add eax, 4
// 005df360  50                   push eax
// 005df361  ff1520a39e00         call dword ptr [0x9ea320]
// 005df367  8d0c24               lea ecx, [esp]
// 005df36a  ff1500a49e00         call dword ptr [0x9ea400]
// 005df370  83c41c               add esp, 0x1c
// 005df373  c3                   ret 
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