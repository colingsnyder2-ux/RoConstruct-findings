// from server: 100% by king_originala
// roc 2008-06 005684d0  unit: boost::thread_resource_error  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005684d0
//
// 005684d0  8d4424e4             lea eax, [esp - 0x1c]
// 005684d4  83ec1c               sub esp, 0x1c
// 005684d7  50                   push eax
// 005684d8  e883ffffff           call 0x568460
// 005684dd  83c404               add esp, 4
// 005684e0  83781810             cmp dword ptr [eax + 0x18], 0x10
// 005684e4  7217                 jb 0x5684fd
// 005684e6  8b4004               mov eax, dword ptr [eax + 4]
// 005684e9  50                   push eax
// 005684ea  ff15fc218000         call dword ptr [0x8021fc]
// 005684f0  8d0c24               lea ecx, [esp]
// 005684f3  ff1568248000         call dword ptr [0x802468]
// 005684f9  83c41c               add esp, 0x1c
// 005684fc  c3                   ret 
// 005684fd  83c004               add eax, 4
// 00568500  50                   push eax
// 00568501  ff15fc218000         call dword ptr [0x8021fc]
// 00568507  8d0c24               lea ecx, [esp]
// 0056850a  ff1568248000         call dword ptr [0x802468]
// 00568510  83c41c               add esp, 0x1c
// 00568513  c3                   ret 

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
